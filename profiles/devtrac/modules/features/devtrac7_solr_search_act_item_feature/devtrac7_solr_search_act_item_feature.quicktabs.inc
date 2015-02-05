<?php
/**
 * @file
 * devtrac7_solr_search_act_item_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function devtrac7_solr_search_act_item_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'devtrac_actionitems_graph_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 2;
  $quicktabs->title = '';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'devtrac7_realms_delta_Hz14SpuxMbk8JbMw8Qi4osfEADIS3300',
      'hide_title' => 1,
      'title' => 'Status',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'devtrac7_realms_delta_NBevmRlyTBNWCewkfoxkznAkIUzs3CLk',
      'hide_title' => 1,
      'title' => 'Priority',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'devtrac7_realms_delta_5Csz93iO16ADnoA8FloxJrpJyd4oeuXM',
      'hide_title' => 1,
      'title' => 'Sectors',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'devtrac7_realms_delta_LZ4aHJyUi8VeRVu2bc0BPbZI0ZF8kf0J',
      'hide_title' => 1,
      'title' => 'Districts',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'devtrac7_realms_delta_MURqcSyaHl0eljTJ16aWTPlPEXIcAW63',
      'hide_title' => 1,
      'title' => 'Users',
      'weight' => '-96',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Districts');
  t('Priority');
  t('Sectors');
  t('Status');
  t('Users');

  $export['devtrac_actionitems_graph_tabs'] = $quicktabs;

  return $export;
}
