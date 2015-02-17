<?php
/**
 * @file
 * devtrac7_solr_search_image_feature.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function devtrac7_solr_search_image_feature_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'images_info';
  $template->title = 'Images';
  $template->plugin = 'text';
  $template->description = 'A brief description of images used in devtrac.';
  $template->configuration = '';
  $export['images_info'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function devtrac7_solr_search_image_feature_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'images_info_und';
  $template->container = 'images_info';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<p>These are images that have been added to site reports to shed more light on the activities carried out and discoveries made while reporting.</p>',
    'format' => 'filtered_html',
    'title' => '',
  );
  $export['images_info_und'] = $template;

  return $export;
}
