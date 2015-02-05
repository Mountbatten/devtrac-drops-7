<?php
/**
 * @file
 * devtrac7_solr_search_activity_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function devtrac7_solr_search_activity_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'devtrac_activities_graphs_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Devtrac Activities Graphs Tabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'devtrac7_realms_delta_D1SIFi77m2jl0WaXU9ViZXm16LN4ET37',
      'hide_title' => 1,
      'title' => 'Sectors',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'devtrac7_realms_delta_9qNgcKoD28bDkogCMyDl5eJXm1i5YBQ2',
      'hide_title' => 1,
      'title' => 'Status',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Devtrac Activities Graphs Tabs');
  t('Sectors');
  t('Status');

  $export['devtrac_activities_graphs_tabs'] = $quicktabs;

  return $export;
}
