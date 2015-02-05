<?php
/**
 * @file
 * devtrac7_solr_search_fieldtrip_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function devtrac7_solr_search_fieldtrip_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'devtrac_fieldtrips_graphs_status';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 2;
  $quicktabs->title = '';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'devtrac7_realms_delta_40GF0FtAEL12iyvcx6YhbDzrsmTW1gM6',
      'hide_title' => 1,
      'title' => 'Pie',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'devtrac7_realms_delta_fMdI4U0bMn0W5QIAc74pfAseFJFRSMKS',
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
  t('devtrac_fieldtrips_graphs_status_tabs');

  $export['devtrac_fieldtrips_graphs_status'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'devtrac_fieldtrips_graphs_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 2;
  $quicktabs->title = '';
  $quicktabs->tabs = array(
    0 => array(
      'machine_name' => 'devtrac_fieldtrips_graphs_status',
      'title' => 'Status',
      'weight' => '-100',
      'type' => 'qtabs',
    ),
    1 => array(
      'bid' => 'devtrac7_realms_delta_QAZ8yCAfqInWVRu8K46kmwkrbtNqdIsb',
      'hide_title' => 1,
      'title' => 'Purpose',
      'weight' => '-98',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'devtrac7_realms_delta_HXj5U2jfevVIT1oX00lp0hlBhJxTsPTp',
      'hide_title' => 1,
      'title' => 'Date Created',
      'weight' => '-96',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'devtrac7_realms_delta_GcmCZiYVQB1Q4TCRLXB5y6iUlrDdJP2Q',
      'hide_title' => 1,
      'title' => 'Districts',
      'weight' => '-94',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'devtrac7_realms_delta_TAgRtI6WUcpBA2FXVimbO6oPxdEPAnGs',
      'hide_title' => 1,
      'title' => 'Users',
      'weight' => '-92',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Date Created');
  t('Districts');
  t('Purpose');
  t('Status');
  t('Users');
  t('devtrac_fieldtrips_graphs_tabs');

  $export['devtrac_fieldtrips_graphs_tabs'] = $quicktabs;

  return $export;
}
