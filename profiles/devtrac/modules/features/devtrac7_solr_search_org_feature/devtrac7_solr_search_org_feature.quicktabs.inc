<?php
/**
 * @file
 * devtrac7_solr_search_org_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function devtrac7_solr_search_org_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'devtrac_organisations_graphs_tab';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Devtrac Organisations Graphs Tabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'devtrac7_realms_delta_s0rC4J5UdHRDbXtPJjF5in2urrD6PxAi',
      'hide_title' => 1,
      'title' => 'Sectors',
      'weight' => '-100',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Devtrac Organisations Graphs Tabs');
  t('Sectors');

  $export['devtrac_organisations_graphs_tab'] = $quicktabs;

  return $export;
}
