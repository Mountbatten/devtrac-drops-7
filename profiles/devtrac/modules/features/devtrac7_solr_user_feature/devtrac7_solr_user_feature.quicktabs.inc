<?php
/**
 * @file
 * devtrac7_solr_user_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function devtrac7_solr_user_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'devtrac_users_graphs_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Devtrac Users Graphs Tabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'devtrac7_realms_delta_30Ur1dU8jQ3fzc5gHepH4fAOkfifRFSA',
      'hide_title' => 1,
      'title' => 'Sectors',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'devtrac7_realms_delta_9uWLzh7AevuAQcAji8VuFmft6mg1m82R',
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
  t('Devtrac Users Graphs Tabs');
  t('Sectors');

  $export['devtrac_users_graphs_tabs'] = $quicktabs;

  return $export;
}
