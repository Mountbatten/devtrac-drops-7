<?php
/**
 * @file
 * devtrac7_solr_search_location_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function devtrac7_solr_search_location_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'devtrac_locations_graphs_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Devtrac Locations Graphs Tabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'devtrac7_realms_delta_BrgqTz0RI0foaWl6JyRKLThax54wObJl',
      'hide_title' => 1,
      'title' => 'Location',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'devtrac7_realms_delta_ciOJgS1v0yIjcjLThcYPPLPh94WvwEs3',
      'hide_title' => 1,
      'title' => 'Admin Units',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin Units');
  t('Devtrac Locations Graphs Tabs');
  t('Location');

  $export['devtrac_locations_graphs_tabs'] = $quicktabs;

  return $export;
}
