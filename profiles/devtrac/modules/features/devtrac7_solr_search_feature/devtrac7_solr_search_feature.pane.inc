<?php
/**
 * @file
 * devtrac7_solr_search_feature.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function devtrac7_solr_search_feature_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'front_about_information';
  $template->title = 'Site reports';
  $template->plugin = 'text';
  $template->description = 'This is the about devtrac block on the front page with some info about DevTrac accompanied by a the location type facet';
  $template->configuration = '';
  $export['front_about_information'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function devtrac7_solr_search_feature_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'front_about_information_und';
  $template->container = 'front_about_information';
  $template->lang = 'und';
  $template->data = array(
    'value' => 'These are reports that are filled in at a visited Location. It includes all details about the visit. These include a narrative report, the sector of intervention at the location, the date visited and a descriptive title that can be understood clearly.',
    'format' => 'filtered_html',
    'title' => '',
  );
  $export['front_about_information_und'] = $template;

  return $export;
}
