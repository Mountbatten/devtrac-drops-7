<?php
/**
 * @file
 * devtrac7_solr_search_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function devtrac7_solr_search_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'devtrac_sitereports_graphs_place';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = '';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'devtrac7_realms_delta_rhZy9CW7fhVYaSBGR5ipjaWCfbE3kn2E',
      'hide_title' => 1,
      'title' => 'Pie',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'devtrac7_realms_delta_861L2Ty5TEkoFDdWgJgToD51WyYsJx1X',
      'hide_title' => 1,
      'title' => 'Bar',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Bar');
  t('Pie');
  t('devtrac_sitereports_graphs_placetype_tabs');

  $export['devtrac_sitereports_graphs_place'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'devtrac_sitereports_graphs_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = '';
  $quicktabs->tabs = array(
    0 => array(
      'machine_name' => 'devtrac_sitereports_graphs_place',
      'title' => 'Location Type',
      'weight' => '-100',
      'type' => 'qtabs',
    ),
    1 => array(
      'bid' => 'devtrac7_realms_delta_ACF9o0r5NpyZKMFVMk8ITpcuabG1Ut00',
      'hide_title' => 1,
      'title' => 'Sectors',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'devtrac7_realms_delta_WOfzI8OQw0iPFym0VEeRGgzWRYJQN1cj',
      'hide_title' => 1,
      'title' => 'Districts',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'devtrac7_realms_delta_MygyuLMl121HEafMqkAjDoydFR6RYZXo',
      'hide_title' => 1,
      'title' => 'User',
      'weight' => '-97',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Districts');
  t('Location Type');
  t('Sectors');
  t('User');
  t('devtrac_sitereports_graphs_tabs');

  $export['devtrac_sitereports_graphs_tabs'] = $quicktabs;

  return $export;
}
