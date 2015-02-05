<?php
/**
 * @file
 * devtrac7_solr_search_image_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function devtrac7_solr_search_image_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'devtrac_images_graphs_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Devtrac Images Graphs Tabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'devtrac7_realms_delta_I4PhucQLYxVl4oh5FRUDtWs9SIGFK1ot',
      'hide_title' => 0,
      'title' => 'Districts',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'devtrac7_realms_delta_Ug0flUKzq1dnYYAedNRN2egCc0DYkR8C',
      'hide_title' => 1,
      'title' => 'Sectors',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Devtrac Images Graphs Tabs');
  t('Districts');
  t('Sectors');

  $export['devtrac_images_graphs_tabs'] = $quicktabs;

  return $export;
}
