<?php
/**
 * @file
 * devtrac7_solr_search_questions_feature.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function devtrac7_solr_search_questions_feature_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'statistics_info';
  $template->title = 'Statistics';
  $template->plugin = 'text';
  $template->description = 'Introductory information about Statistics.';
  $template->configuration = '';
  $export['statistics_info'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function devtrac7_solr_search_questions_feature_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'statistics_info_und';
  $template->container = 'statistics_info';
  $template->lang = 'und';
  $template->data = array(
    'value' => 'The statistics page is where summaries and graphical representation of the data in the system can be viewed. Try out different filter options to analyse the data graphically.',
    'format' => 'filtered_html',
    'title' => '',
  );
  $export['statistics_info_und'] = $template;

  return $export;
}
