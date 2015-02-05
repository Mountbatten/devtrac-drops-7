<?php
/**
 * @file
 * devtrac7_solr_search_district_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function devtrac7_solr_search_district_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'devtrac_admin_units_graphs_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Devtrac Admin Units Graphs Tabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'devtrac7_realms_delta_2qltDPTjcNFgheoPfmwwYnKPO9uT9XbB',
      'hide_title' => 1,
      'title' => 'Categories',
      'weight' => '-100',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Categories');
  t('Devtrac Admin Units Graphs Tabs');

  $export['devtrac_admin_units_graphs_tabs'] = $quicktabs;

  return $export;
}
