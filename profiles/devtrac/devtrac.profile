<?php
/**
 * @file
 * Enables modules and site configuration for the devtrac installation profile.
 */

/**
 * Implements hook_form_alter().
 *
 * Allows the profile to alter the site configuration form
 */
function devtrac_form_install_configure_form_alter(&$form, $form_state, $form_id){
  if($form_id == 'install_configure_form'){
    //set default for site name field
    $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];

    // Alter country install_settings_form.
  // $form['server_settings']['site_default_country']['#required'] = TRUE;
   $form['#submit'][] = 'devtrac_install_configure_form_submit_country';
  }
}

/**
 * Form submit handler to add taxonomy term to districts.
 * @param type $form
 * @param type $form_state
 */
function devtrac_install_configure_form_submit_country(&$form, $form_state) {
  $countries = country_get_list();
  $country_code = $form_state['values']['site_default_country'];
  if(empty($countries[$country_code])) {
    drupal_set_message("Country code provided in default country can not be identified.", 'error');
     return;
   
  }

  if(!module_exists("mapit")) {
    return;
  }
  // Create Undefined Area and Unknown Area terms in the mapit_vocabulary.
  $vocabulary_name = variable_get('mapit_vocabulary', 'vocabulary_6');
  $vocabulary = taxonomy_vocabulary_machine_name_load($vocabulary_name);

  $undefined_area = new stdClass();
  $undefined_area->name = 'Undefined Area';
  $undefined_area->description = "Waiting for a value from the Mapit widget.";
  $undefined_area->vid = $vocabulary->vid;
  taxonomy_term_save($undefined_area);

  $unknown_area = new stdClass();
  $unknown_area->name = 'Unknown Area';
  $unknown_area->description = "No matching areas found for coordinates supplied.";
  $unknown_area->vid = $vocabulary->vid;
  taxonomy_term_save($unknown_area);

  // Set the mapit generation to use for Uganda to 4.
  // It shows a better/clearer hierarchy.
  // For all other countries the default (last) version will be used.
  if ($country_code == 'UG') {
    variable_set('mapit_generation', 4);
  }

  $lcode = 'en';
  $data = devtrac_country_point_data($country_code ,$lcode);
  $term = mapit_point_taxonomy_term($data['lat'], $data['lon']);
  if(empty($term)) {
    drupal_set_message("Can not create default country taxonomy", 'error');
  }
}

/**
 * Gets the center point of a country
 * @param type $code
 * @param type $langcode
 * @return array
 */
function devtrac_country_point_data($code, $langcode = "en") {

  $data = array();

  $url = drupal_get_path('profile', 'devtrac'). '/data/countrycenter.xml';

  $xml = simplexml_load_file($url);
  //$country = new SimpleXMLElement();
  $country = $xml->xpath("/osm/node/tag[@k='country_code_iso3166_1_alpha_2' and @v='". $code . "']/..");
  $data['id'] = (string) $country[0]['id'];
  $data['lat'] = (string) $country[0]['lat'];
  $data['lon'] = (string) $country[0]['lon'];
  // $data[''] = (string) $country[0]['lon'];
  $long_name = $country[0]->xpath("tag[@k='official_name']");
  if(!empty($long_name)) {
    $data['long_name'] = (string) $long_name[0]['v'];
  }

  $wikipedia = $country[0]->xpath("tag[@k='wikipedia']");
  if(!empty($wikipedia)) {
    $data['wikipedia'] = (string) $wikipedia[0]['v'];
  }

  $name = $country[0]->xpath("tag[@k='name:" . $langcode . "']");
  if(!empty($name)) {
    $data['name'] = (string) $name[0]['v'];
  }

  return $data;
}

/**
 * Implements hook_init().
 *
 * Rebuild the menu to make sure the menu items defined in views displays are
 * created in the menu router table. Also enable the devtrac7_profile_menu
 * module to populate the menu links table and set the default taxonomy access
 * settings by running devtrac_initialize_taxonomy_access().
 * Only do this when the marker set during install is set. Delete the marker
 * from the database afterwards.
 */
function devtrac_init() {
  if (variable_get('devtrac_menu_rebuild_needed', FALSE)) {
    menu_rebuild();
    module_enable(array('devtrac7_profile_menu'));
    devtrac_initialize_taxonomy_access();
    // Rename the layers so they look nice in the layer switcher.
    devtrac7_resave_geolayer_attributes();
    variable_del('devtrac_menu_rebuild_needed');
  }
}

/**
 * Initialize taxonomy access settings.
 */
function devtrac_initialize_taxonomy_access() {
  // Initialize some default settings.
  $deny = array(
    'view' => 0,
    'update' => 0,
    'delete' => 0,
    'create' => 0,
    'list' => 0,
  );
  $list = array(
    'view' => 0,
    'update' => 0,
    'delete' => 0,
    'create' => 0,
    'list' => 1,
  );
  $view_and_list = array(
    'view' => 1,
    'update' => 0,
    'delete' => 0,
    'create' => 0,
    'list' => 1,
  );
  $create_and_list = array(
    'view' => 0,
    'update' => 0,
    'delete' => 0,
    'create' => 1,
    'list' => 1,
  );

  // Get the array of all role names, indexed by rid.
  $roles = _taxonomy_access_user_roles();
  // Get the array of all vocabulary objects, indexed by vid.
  $vocabularies = taxonomy_get_vocabularies();

  // Initialize global settings for different roles.
  foreach ($roles as $rid => $role_name) {
    switch ($role_name) {
      case 'anonymous user':
        $anonymous_global_defaults[0] = _taxonomy_access_format_grant_record(0, $rid, $view_and_list, TRUE);
        break;
      case 'authenticated user':
        $authenticated_global_defaults[0] = _taxonomy_access_format_grant_record(0, $rid, $view_and_list, TRUE);
        break;
      case 'devtrac admin':
        $admin_global_defaults[0] = _taxonomy_access_format_grant_record(0, $rid, $list, TRUE);
        break;
      case 'editor':
        $editor_global_defaults[0] = _taxonomy_access_format_grant_record(0, $rid, $list, TRUE);
        break;
      case 'field worker':
        $worker_global_defaults[0] = _taxonomy_access_format_grant_record(0, $rid, $list, TRUE);
        break;
      default:
    }
  }

  // Initialize vocabulary settings for different roles.
  foreach ($roles as $rid => $role_name) {
    foreach ($vocabularies as $vid => $vocabulary) {
      switch ($role_name) {
        case 'anonymous user':
          $anonymous_vocabulary_defaults[$vid] = _taxonomy_access_format_grant_record($vid, $rid, $list, TRUE);
          break;
        case 'authenticated user':
          $authenticated_vocabulary_defaults[$vid] = _taxonomy_access_format_grant_record($vid, $rid, $deny, TRUE);
          break;
        case 'devtrac admin':
          $admin_vocabulary_defaults[$vid] = _taxonomy_access_format_grant_record($vid, $rid, $create_and_list, TRUE);
          break;
        case 'editor':
          $editor_vocabulary_defaults[$vid] = _taxonomy_access_format_grant_record($vid, $rid, $create_and_list, TRUE);
          break;
        case 'field worker':
          $worker_vocabulary_defaults[$vid] = _taxonomy_access_format_grant_record($vid, $rid, $create_and_list, TRUE);
          break;
        default:
      }
    }
  }

  // Initialize term settings for different roles.
  foreach ($roles as $rid => $role_name) {
    // Deny Anonymous User access to term Undefined Area.
    if ($rid == 1) {
      foreach ($vocabularies as $vid => $vocabulary) {
        if ($vocabulary->machine_name == 'vocabulary_6') {
          $terms = taxonomy_get_term_by_name('Undefined Area', $vocabulary->machine_name);
          $term = array_shift($terms);
          $anonymous_term_defaults[$term->tid] = _taxonomy_access_format_grant_record($term->tid, $rid, $deny);
        }
      }
    }
    foreach ($vocabularies as $vid => $vocabulary) {
      if ($vocabulary->machine_name == 'vocabulary_6') {
        continue;
      }
      $terms = taxonomy_get_tree($vid, 0, NULL, TRUE);
      foreach ($terms as $term) {
        switch ($role_name) {
          case 'devtrac admin':
            $children = taxonomy_get_children($term->tid);
            if (!empty($children)) {
              $admin_term_defaults[$term->tid] = _taxonomy_access_format_grant_record($term->tid, $rid, $list);
            }
            break;
          case 'editor':
            $children = taxonomy_get_children($term->tid);
            if (!empty($children)) {
              $editor_term_defaults[$term->tid] = _taxonomy_access_format_grant_record($term->tid, $rid, $list);
            }
            break;
          case 'field worker':
            $children = taxonomy_get_children($term->tid);
            if (!empty($children)) {
              $worker_term_defaults[$term->tid] = _taxonomy_access_format_grant_record($term->tid, $rid, $list);
            }
            break;
          default:
        }
      }
    }
  }

  // Process global default grants.
  if (!empty($anonymous_global_defaults)) {
    taxonomy_access_set_default_grants($anonymous_global_defaults);
  }
  if (!empty($authenticated_global_defaults)) {
    taxonomy_access_set_default_grants($authenticated_global_defaults);
  }
  if (!empty($admin_global_defaults)) {
    taxonomy_access_set_default_grants($admin_global_defaults);
  }
  if (!empty($editor_global_defaults)) {
    taxonomy_access_set_default_grants($editor_global_defaults);
  }
  if (!empty($worker_global_defaults)) {
    taxonomy_access_set_default_grants($worker_global_defaults);
  }

  // Process vocabulary default grants.
  if (!empty($anonymous_vocabulary_defaults)) {
    taxonomy_access_set_default_grants($anonymous_vocabulary_defaults);
  }
  if (!empty($authenticated_vocabulary_defaults)) {
    taxonomy_access_set_default_grants($authenticated_vocabulary_defaults);
  }
  if (!empty($admin_vocabulary_defaults)) {
    taxonomy_access_set_default_grants($admin_vocabulary_defaults);
  }
  if (!empty($editor_vocabulary_defaults)) {
    taxonomy_access_set_default_grants($editor_vocabulary_defaults);
  }
  if (!empty($worker_vocabulary_defaults)) {
    taxonomy_access_set_default_grants($worker_vocabulary_defaults);
  }

  // Process term grants.
  if (!empty($anonymous_term_defaults)) {
    taxonomy_access_set_term_grants($anonymous_term_defaults);
  }
  if (!empty($admin_term_defaults)) {
    taxonomy_access_set_term_grants($admin_term_defaults);
  }
  if (!empty($editor_term_defaults)) {
    taxonomy_access_set_term_grants($editor_term_defaults);
  }
  if (!empty($worker_term_defaults)) {
    taxonomy_access_set_term_grants($worker_term_defaults);
  }
}

/**
 * Implements hook_appstore_stores_info
 */
function devtrac_apps_servers_info() {
 $info =  drupal_parse_info_file(dirname(__file__) . '/devtrac.info');
 return array(
   'devtrac' => array(
     'title' => 'Devtrac',
     'description' => "Apps for Devtrac",
     'manifest' => 'http://www.devtrac.org/app/query/Devtrac',
     'profile' => 'devtrac',
     'profile_version' => isset($info['version']) ? $info['version'] : '7.x-1.x',
     'server_name' => isset($_SERVER['SERVER_NAME']) ? $_SERVER['SERVER_NAME'] : 'localhost',
     'server_ip' => isset($_SERVER['SERVER_ADDR'])? $_SERVER['SERVER_ADDR'] : '127.0.0.1',
   ),
 );
}
