<?php
/**
 * @file
 * devtrac7_solr_search_questions_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function devtrac7_solr_search_questions_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'devtrac_statistics_graphs_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 2;
  $quicktabs->title = '';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'devtrac7_realms_delta_pbHVdNjxfe0qBll3FVL2bDPrWgnHHpgq',
      'hide_title' => 1,
      'title' => 'Answers',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'devtrac7_realms_delta_tc5yRbGqMdjGDswSoVpDejTj01LrylPP',
      'hide_title' => 1,
      'title' => 'Answers',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'devtrac7_realms_delta_cpORxGhbEE3EgBKlb2EF30fhH82rNEvD',
      'hide_title' => 1,
      'title' => 'Districts',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'devtrac7_realms_delta_WpXoeseP1IJefOFyEIeL1Xupj60wa2LZ',
      'hide_title' => 1,
      'title' => 'District',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'devtrac7_realms_delta_PMvqwUciQA8MUFrB8kzvCj1zvvdhtdlz',
      'hide_title' => 1,
      'title' => 'Location',
      'weight' => '-96',
      'type' => 'block',
    ),
    5 => array(
      'bid' => 'devtrac7_realms_delta_oAs81BemOuWacDfLLcRP0iLxllyq1piB',
      'hide_title' => 1,
      'title' => 'Location',
      'weight' => '-95',
      'type' => 'block',
    ),
    6 => array(
      'bid' => 'devtrac7_realms_delta_bi8GwPIyHkgd30qiOlR3t7O4k4B10ing',
      'hide_title' => 1,
      'title' => 'Date Created',
      'weight' => '-94',
      'type' => 'block',
    ),
    7 => array(
      'bid' => 'devtrac7_realms_delta_1ostEK85iZCdcc2ZVIOU0nbHMfrU0KUM',
      'hide_title' => 1,
      'title' => 'Date Created',
      'weight' => '-93',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Answers');
  t('Date Created');
  t('District');
  t('Districts');
  t('Location');
  t('devtrac_statistics_graphs_tabs');

  $export['devtrac_statistics_graphs_tabs'] = $quicktabs;

  return $export;
}
