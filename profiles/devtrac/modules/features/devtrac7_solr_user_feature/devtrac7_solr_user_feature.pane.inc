<?php
/**
 * @file
 * devtrac7_solr_user_feature.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function devtrac7_solr_user_feature_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'user_info';
  $template->title = 'User';
  $template->plugin = 'text';
  $template->description = 'Introductory information about users';
  $template->configuration = '';
  $export['user_info'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function devtrac7_solr_user_feature_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'user_info_und';
  $template->container = 'user_info';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<p>These are users that have accounts in DevTrac. The user is required to submit a profile about them detailing names, Supervisor (Manager), the Sectors they are involved in, and a brief description about the person</p>

<p>The Users page contains a list of all users that can be filtered by the Zonal Office of operation, Supervisor, Department, etc.</p>
',
    'format' => 'filtered_html',
    'title' => '',
  );
  $export['user_info_und'] = $template;

  return $export;
}
