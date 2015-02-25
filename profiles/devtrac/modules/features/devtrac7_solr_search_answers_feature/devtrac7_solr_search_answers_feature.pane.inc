<?php
/**
 * @file
 * devtrac7_solr_search_answers_feature.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function devtrac7_solr_search_answers_feature_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'answers_info';
  $template->title = 'Answers';
  $template->plugin = 'text';
  $template->description = 'Introductory information about answers to questionnaires in Devtrac.';
  $template->configuration = '';
  $export['answers_info'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function devtrac7_solr_search_answers_feature_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'answers_info_und';
  $template->container = 'answers_info';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<p>The answers page is where tabular and graphical representations of responses to questionnaires filled out during field reporting can be viewed. Try out different filter options to analyse the data graphically or download it for offline analysis.</p>',
    'format' => 'filtered_html',
    'title' => '',
  );
  $export['answers_info_und'] = $template;

  return $export;
}
