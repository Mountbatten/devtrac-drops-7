<?php
/**
 * @file
 * devtrac7_solr_search_org_feature.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function devtrac7_solr_search_org_feature_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'organisations_info';
  $template->title = 'Organisations';
  $template->plugin = 'text';
  $template->description = 'Introductory information about Organisations.';
  $template->configuration = '';
  $export['organisations_info'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function devtrac7_solr_search_org_feature_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'organisations_info_und';
  $template->container = 'organisations_info';
  $template->lang = 'und';
  $template->data = array(
    'value' => 'These are the organizations whose activities are documented in the system (DevTrac). The Organizations page includes major details about the organization. These include whether the organization is a funding or implementing organization.',
    'format' => 'filtered_html',
    'title' => '',
  );
  $export['organisations_info_und'] = $template;

  return $export;
}
