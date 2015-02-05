<?php
/**
 * @file
 * iati_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function iati_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'activities';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Activities';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_devtrac_activities-block_2',
      'hide_title' => 1,
      'title' => 'Description',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_devtrac_activities-block_4',
      'hide_title' => 1,
      'title' => 'Documents',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Activities');
  t('Description');
  t('Documents');

  $export['activities'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'activities_map_list';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Admin Units Where Activity is present';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'devtrac_activities',
      'display' => 'block',
      'args' => '',
      'title' => 'Map',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'devtrac_activities',
      'display' => 'block_8',
      'args' => '',
      'title' => 'List',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin Units Where Activity is present');
  t('List');
  t('Map');

  $export['activities_map_list'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'organisation';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Organisation';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_devtrac_organisation-block_1',
      'hide_title' => 1,
      'title' => 'Description',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_devtrac_activities-block_5',
      'hide_title' => 1,
      'title' => 'Activities',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Activities');
  t('Description');
  t('Organisation');

  $export['organisation'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'organisation_map_list';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Admin Units Where Organization is Working';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'devtrac_organisation',
      'display' => 'block_3',
      'args' => '',
      'title' => 'Map',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'devtrac_organisation',
      'display' => 'block_7',
      'args' => '',
      'title' => 'List',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin Units Where Organization is Working');
  t('List');
  t('Map');

  $export['organisation_map_list'] = $quicktabs;

  return $export;
}
