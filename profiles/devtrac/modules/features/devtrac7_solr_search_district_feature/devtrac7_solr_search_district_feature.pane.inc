<?php
/**
 * @file
 * devtrac7_solr_search_district_feature.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function devtrac7_solr_search_district_feature_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'devtrac_solr_map_info';
  $template->title = 'Admin Units';
  $template->plugin = 'text';
  $template->description = 'This panetype is assigned to the i icon on the solr maps for admin units';
  $template->configuration = '';
  $export['devtrac_solr_map_info'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function devtrac7_solr_search_district_feature_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'devtrac_solr_map_info_und';
  $template->container = 'devtrac_solr_map_info';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<p>This is the first level of Admin Units. The district page has a list or map of the districts of Uganda. Click on the icons to have a small overview of the district including the site reports of users that have visited the district and the photos they have taken.</p>
',
    'format' => 'filtered_html',
    'title' => '',
  );
  $export['devtrac_solr_map_info_und'] = $template;

  return $export;
}
