<?php
/**
 * @file
 * devtrac7_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function devtrac7_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_action-items:actionitems
  $menu_links['main-menu_action-items:actionitems'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'actionitems',
    'router_path' => 'actionitems',
    'link_title' => 'Action Items',
    'options' => array(
      'attributes' => array(
        'title' => 'Shows action items of Devtrac reporters from the field',
        'class' => array(
          0 => 'purl_search_api_noreset',
        ),
      ),
      'identifier' => 'main-menu_action-items:actionitems',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_admin-units:adminunits
  $menu_links['main-menu_admin-units:adminunits'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'adminunits',
    'router_path' => 'adminunits',
    'link_title' => 'Admin Units',
    'options' => array(
      'identifier' => 'main-menu_admin-units:adminunits',
      'attributes' => array(
        'class' => array(
          0 => 'purl_search_api_noreset',
        ),
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_field-trips:fieldtrips
  $menu_links['main-menu_field-trips:fieldtrips'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'fieldtrips',
    'router_path' => 'fieldtrips',
    'link_title' => 'Field trips',
    'options' => array(
      'attributes' => array(
        'title' => 'Shows Field Trips of Devtrac reporters from the field',
        'class' => array(
          0 => 'purl_search_api_noreset',
        ),
      ),
      'identifier' => 'main-menu_field-trips:fieldtrips',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_locations:locations
  $menu_links['main-menu_locations:locations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'locations',
    'router_path' => 'locations',
    'link_title' => 'Locations',
    'options' => array(
      'attributes' => array(
        'title' => 'Main link for the locations map (Main)',
        'class' => array(
          0 => 'purl_search_api_noreset',
        ),
      ),
      'identifier' => 'main-menu_locations:locations',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_site-reports:sitereports
  $menu_links['main-menu_site-reports:sitereports'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sitereports',
    'router_path' => 'sitereports',
    'link_title' => 'Site Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'Shows reports of Devtrac reporters from the field',
        'class' => array(
          0 => 'purl_search_api_noreset',
        ),
      ),
      'identifier' => 'main-menu_site-reports:sitereports',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_statistics:statistics
  $menu_links['main-menu_statistics:statistics'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'statistics',
    'router_path' => 'statistics',
    'link_title' => 'Statistics',
    'options' => array(
      'attributes' => array(
        'title' => 'Statistics',
        'class' => array(
          0 => 'purl_search_api_noreset',
        ),
      ),
      'identifier' => 'main-menu_statistics:statistics',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_users:users
  $menu_links['main-menu_users:users'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'users',
    'router_path' => 'users',
    'link_title' => 'Users',
    'options' => array(
      'attributes' => array(
        'title' => 'List of users of Devtrac',
        'class' => array(
          0 => 'purl_search_api_noreset',
        ),
      ),
      'identifier' => 'main-menu_users:users',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Action Items');
  t('Contact');
  t('Contact Us');
  t('Districts');
  t('Field trips');
  t('Locations');
  t('Site Reports');
  t('Statistics');
  t('Users');

  return $menu_links;
}
