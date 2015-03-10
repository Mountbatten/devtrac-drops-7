<?php
/**
 * @file
 * devtrac7_theme_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function devtrac7_theme_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'districts';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'District';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_770d171f467746fab45c021e3894bac7',
      'hide_title' => 1,
      'title' => 'Partner Organisations Overview',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_dvtrc_locations-block_3',
      'hide_title' => 1,
      'title' => 'Recent ...',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('District');
  t('Partner Organisations Overview');
  t('Recent ...');

  $export['districts'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'fieldtrip_content_first';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'FieldTrip';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_dvtrc_field_trip-block_5',
      'hide_title' => 1,
      'title' => 'Progress',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_dvtrc_field_trip-block_6',
      'hide_title' => 1,
      'title' => 'Notes',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_dvtrc_action_items-block_3',
      'hide_title' => 1,
      'title' => 'Action Items',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_dvtrc_site_visits-block_11',
      'hide_title' => 1,
      'title' => 'Site Reports',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'commentblock_delta_commentblock',
      'hide_title' => 1,
      'title' => 'Comments',
      'weight' => '-96',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Action Items');
  t('Comments');
  t('FieldTrip');
  t('Notes');
  t('Progress');
  t('Site Reports');

  $export['fieldtrip_content_first'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'location_quicktabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 1;
  $quicktabs->title = 'Details of this Location ';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_dvtrc_locations-location_description',
      'hide_title' => 1,
      'title' => 'Description',
      'weight' => '-99',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_dvtrc_site_visits-block_6',
      'hide_title' => 1,
      'title' => 'SiteVisits',
      'weight' => '-98',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_dvtrc_action_items-block_6',
      'hide_title' => 1,
      'title' => 'Contact Information',
      'weight' => '-97',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_dvtrc_locations-block_5',
      'hide_title' => 1,
      'title' => 'Action Items',
      'weight' => '-96',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Action Items');
  t('Contact Information');
  t('Description');
  t('Details of this Location ');
  t('SiteVisits');

  $export['location_quicktabs'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'sector';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Sector';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_dvtrc_site_visits-block_16',
      'hide_title' => 1,
      'title' => 'SiteVisits',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_dvtrc_action_items-block_11',
      'hide_title' => 1,
      'title' => 'Action Items',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_api_questions-block_1',
      'hide_title' => 1,
      'title' => 'Statistics',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Action Items');
  t('Sector');
  t('SiteVisits');
  t('Statistics');

  $export['sector'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'site_visit_quicktabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Devtrac Site Report Node Page Tabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_dvtrc_site_visits-block_7',
      'hide_title' => 1,
      'title' => 'Progress',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_dvtrc_site_visits-block_3',
      'hide_title' => 1,
      'title' => 'Report',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_dvtrc_site_visits-block_8',
      'hide_title' => 1,
      'title' => 'Notes',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_cdfeff0bd1e4604398b1031273f8f09a',
      'hide_title' => 1,
      'title' => 'Questionnaire',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'views_delta_dvtrc_action_items-block_4',
      'hide_title' => 1,
      'title' => 'Action Items',
      'weight' => '-96',
      'type' => 'block',
    ),
    5 => array(
      'bid' => 'commentblock_delta_commentblock',
      'hide_title' => 0,
      'title' => 'Comments',
      'weight' => '-95',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Action Items');
  t('Comments');
  t('Devtrac Site Report Node Page Tabs');
  t('Notes');
  t('Progress');
  t('Questionnaire');
  t('Report');

  $export['site_visit_quicktabs'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'user_profile';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'User Profile';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_dvtrc_action_items-block_12',
      'hide_title' => 1,
      'title' => 'Inbox',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_dvtrc_field_trip-block_8',
      'hide_title' => 1,
      'title' => 'Open FieldTrips',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_dvtrc_action_items-block_8',
      'hide_title' => 1,
      'title' => 'Open Action Items',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_dvtrc_user-block_6',
      'hide_title' => 1,
      'title' => 'Team Members',
      'weight' => '-97',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Inbox');
  t('Open Action Items');
  t('Open FieldTrips');
  t('Team Members');
  t('User Profile');

  $export['user_profile'] = $quicktabs;

  return $export;
}
