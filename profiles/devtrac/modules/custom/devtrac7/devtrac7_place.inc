<?php

/*
 *   Creates a new locations and returns the nid
*/

function devtrac7_place_createnew($name, $id, $layer, $placetype, $district, $params, $geometry) {
  global $user;
  //  first, let's check if this location already exists
  $uri = "http://www.devtrac.ug/places";

  $query = db_select('node', 'n');
  $query->join('field_data_field_place_unique_id', 'u', 'n.nid = u.entity_id');
  $query->join('field_data_field_place_sourcelayer', 'l', 'n.nid = l.entity_id');
  $query->join('field_data_field_place_sourceuri', 's', 'n.nid = s.entity_id');
  $query->fields('n', array('nid'));
  $query->condition('n.type', 'place');
  $query->condition('u.field_place_unique_id_value', $id);
  $query->condition('l.field_place_sourcelayer_value', $layer);
  $query->condition('s.field_place_sourceuri_value', $uri);

  if ( $placenid = $query->execute()->fetchField()) {
    $message .= "The location was already known\n";
    return $placenid;
  }
  else {
    // Going to Create Location
    // First, let's make sure the locationtype taxonomy term exists.
/*
    $placetypeterm = devtrac7_get_term_by_name_vid($placetype, 1);
    if (!isset($placetypeterm->tid)) {
      $term = array(
        'name' => $placetype,
        'description' => t(''),
        'vid' => 1,
        'weight' => 0,
        'vocabulary_machine_name' => 'vocabulary_1',
      );
      $term = (object) $edit;
      taxonomy_term_save($term);
      $message .= "Created new Placetype '" . $placetype . "'";
      $placetypeterm = devtrac7_get_term_by_name_vid($placetype, 1);
      watchdog("devtrac7", "New locationtype created '". $placetype . "'");
    }
 */
    // First, let's check if the locationtype exists in our devtrac7 taxonomy
    $placetypeterm = devtrac7_get_term_by_name_vid($placetype, 1);
    if (!isset($placetypeterm->tid)) {
      // watchdog('devtrac7 create location', 'Unknown Locationtype: '. $placetype);
      // drupal_set_message('Aborting! Unknown Locationtype: '. $placetype, $warning);
      // Bail out
      return FALSE;
    }

    // $districtterm = devtrac7_get_term_by_name_vid($district, 6);
    // Now, let's check if the district exists in our devtrac7 taxonomy
    $districtterm = devtrac7_get_term_by_name_vid($district, 6);
    if (!isset($districtterm->tid)) {
      // watchdog('devtrac7 create location', 'Unknown District: '. $district);
      // drupal_set_message('Aborting! Unknown District: '. $district, $warning);
      // Bail out
      return FALSE;
    }

    $body = "";
    foreach ($params as $key => $value) {
      if (($key != 'q') && ($key != 'v')) {
        $body .= $key . " = " . $value . '<br/>\n';
      }
    }
    $node = new stdClass();
    $node->title = $name;
    $node->type = 'place';
    $node->body[LANGUAGE_NONE][0]['value'] = $body;
    $node->field_place_unique_id[LANGUAGE_NONE][0]['value'] = $id;
    $node->field_place_sourcelayer[LANGUAGE_NONE][0]['value'] = $layer;
    $node->field_place_sourceuri[LANGUAGE_NONE][0]['value'] = $uri;
    $node->uid = $user->uid;
    $node->field_place_lat_long[LANGUAGE_NONE][0]['geom'] = str_replace(',', ' ', $geometry);
    $node->taxonomy_vocabulary_6[LANGUAGE_NONE][0]['tid'] = $districtterm->tid;
    $node->taxonomy_vocabulary_1[LANGUAGE_NONE][0]['tid'] = $placetypeterm->tid;
    $node->language = LANGUAGE_NONE;
    $node->comment = 0;
    node_save($node);
    return $node->nid;
  }
}

/**
 * This function checks if the Lat-Lon on the Location is set.
 * It returns TRUE if it does.
 * It returns FALSE if it doesn't.
 */
function devtrac7_place_latlonset($node) {
  if (!empty($node->field_ftritem_lat_long) && isset($node->field_ftritem_lat_long[$node->language])) {
    return (count($node->field_ftritem_lat_long[$node->language]) > 0);
  }
  return FALSE;
}

/**
 * This function checks if the location can be added to the fieltrip.
 * It returns FALSE if it can.
 * It returns TRUE if it can't.
 */
function devtrac7_place_addtofieldtrip($node) {
  // Always return FALSE. When you reached this far
  // you are looking to add a location to one of your
  // own fieldrips and you are allowed to do so.
  return FALSE;
}

/**
 * This function copies the District from the referenced location
 * to the ftritem for performance reasons
 */
function devtrac7_place_updatedistrict($node) {
  // Only copy Admin Unit from Location when the Admin Unit on the Location was
  // changed from "Undefined Area" to something else by mapit and the District
  // on the Site Report is "Undefined Area".
  if (isset($node->original->taxonomy_vocabulary_6[$node->language]) && (count($node->original->taxonomy_vocabulary_6[$node->language]) > 0)) {
    // There was a District
    $oldterm = taxonomy_term_load($node->original->taxonomy_vocabulary_6[$node->language][0]['tid']);
    if ($oldterm->name != "Undefined Area") {
      // The Admin Unit was not updated by mapit.
      // Do nothing.
    }
    else {
      if (isset($node->taxonomy_vocabulary_6[$node->language]) && (count($node->taxonomy_vocabulary_6[$node->language]) > 0)) {
        $newterm = taxonomy_term_load($node->taxonomy_vocabulary_6[$node->language][0]['tid']);
        if ($newterm->name == "Undefined Area") {
          // Nothing changed. Do nothing.
        }
        else {
          // The Admin Unit was (most probably) updated by mapit.
          // Propagate the change to all Site Reports that reference this
          // Location and have their Admin Unit set to "Undefined Area".
          if (module_exists('mapit')) {
            $mapit_vocabulary = variable_get('mapit_vocabulary',"0");
            $undefined_area_tid = mapit_get_undefined_area_tid($mapit_vocabulary, $node->language);
            $site_reports = db_select('field_data_taxonomy_vocabulary_6', 'fdtv6')
              ->fields('fdtv6', array('entity_id'))
              ->condition('entity_type', 'node')
              ->condition('bundle', 'ftritem')
              ->condition('taxonomy_vocabulary_6_tid', $undefined_area_tid, '!=')
              ->execute();
          }
          else {
            $terms = taxonomy_get_term_by_name('Undefined Area', 'vocabulary_6');
            $term = array_shift($terms);
            $site_reports = db_select('field_data_taxonomy_vocabulary_6', 'fdtv6')
              ->fields('fdtv6', array('entity_id'))
              ->condition('entity_type', 'node')
              ->condition('bundle', 'ftritem')
              ->condition('taxonomy_vocabulary_6_tid', $term->tid)
              ->execute();

          }
          while ($site_report = $site_reports->fetchAssoc()) {
            $report = node_load($site_report['entity_id']);
            if (isset($report->field_ftritem_place[$report->language][0]['target_id']) && ($report->field_ftritem_place[$report->language][0]['target_id'] == $node->nid)) {
              $report->taxonomy_vocabulary_6[$report->language][0]['tid'] = $newterm->tid;
              node_save($report);
            }
          }
        }
      }
    }
  }
}

/**
 * Define all progress checks provided by the module.
 *
 * @return array
 *   An associative array keyed by unique name of the field. Each check is an
 *   associative array containing:
 *   - name: The internal name of the progress check.
 *   - label: The human readable name of the progress check.
 *   - description: The description of the progress check.
 *   - url: An associative array that describes when and how a link should be
 *     rendered to allow the user to correct the check.
 *   - success_text: The text to display when the check succeeds.
 *   - fail_text: The text to display when the check fails.
 *   - function: The function that actually performs the progress check.
 *   - file_name: The file where that function is implemented.
 *   - required: Boolean determining whether the progress check is required
 *     or not. Is overridden by required_function.
 *   - required_function: Function determining whether the progress check is
 *     required or not. Overrides required.
 */
function devtrac7_place_devtrac7_progress_field_checks_info() {
  $httpreferer = $_SERVER['HTTP_REFERER'];
  $referer = explode('?', $httpreferer);
  $fullpath = $referer[0];
  $path = explode('/', $fullpath);
  $count = count($path);
  if (($count < 5) || ($path[$count - 5] != 'node') || ($path[$count - 4] != 'add') || ($path[$count - 3] != 'place') || !is_numeric($path[$count - 2]) || !is_numeric($path[$count - 1])) {
    return array();
  }
  $fieldtrip = node_load($path[$count - 2]);
  if ($fieldtrip->type == 'fieldtrip') {
    $fieldtripnid = $path[$count - 2];
  }
  $term = taxonomy_term_load($path[$count - 1]);
  if ($term->vid == 7) { // Vocabulary for report types = 7
    $reporttype = $path[$count - 1];
  }
  $progress_checks['devtrac7_place_addfofieldtrip'] = array(
    'name' => t('devtrac7_place_addfofieldtrip'),
    'label' => t('devtrac7_place_addfofieldtrip'),
    'description' => 'Add this location to the Fieldtrip',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Add to Fieldtrip'),
      'path' => 'addplacetofieldtrip/%/' . $fieldtripnid . '/' . $reporttype,
      'attributes' => array(),
      'query' => array(
        'destination' => 'node/' . $fieldtripnid,
      ),
      'fragment' => '',
      'contextual' => TRUE,
      'override' => TRUE,
      'override_function' => '',
    ),
    'success_text' => 'Successfully added location to the fieldtrip.',
    'fail_text' => 'Failed to add the location to the fieldtrip.',
    'function' => 'devtrac7_place_addtofieldtrip',
    'filename' => 'devtrac7_place.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  return $progress_checks;
}
