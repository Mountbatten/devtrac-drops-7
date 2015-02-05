<?php
/**
 * @file
 * devtrac7_solr_search_activity_feature.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function devtrac7_solr_search_activity_feature_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'activities_info';
  $template->title = 'Activities';
  $template->plugin = 'text';
  $template->description = 'Introductory information about Activities.';
  $template->configuration = '';
  $export['activities_info'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function devtrac7_solr_search_activity_feature_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'activities_info_und';
  $template->container = 'activities_info';
  $template->lang = 'und';
  $template->data = array(
    'value' => 'These are the projects that are carried out by the organizations that are in the system. Information includes the status of the project (On-going, complete, etc.), the date of commencement and date of completion.',
    'format' => 'filtered_html',
    'title' => '',
  );
  $export['activities_info_und'] = $template;

  return $export;
}
