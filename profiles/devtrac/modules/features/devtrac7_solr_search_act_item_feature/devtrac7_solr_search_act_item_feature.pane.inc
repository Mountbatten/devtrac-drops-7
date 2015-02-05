<?php
/**
 * @file
 * devtrac7_solr_search_act_item_feature.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function devtrac7_solr_search_act_item_feature_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'action_items_info';
  $template->title = 'Action Items';
  $template->plugin = 'text';
  $template->description = 'Introductory information about Action Items.';
  $template->configuration = '';
  $export['action_items_info'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function devtrac7_solr_search_act_item_feature_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'action_items_info_und';
  $template->container = 'action_items_info';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<p>An Action item is a task that a user can assign to another user within the system. They contain a comments section where progress on the action item can be tracked. Only when the action item has been satisfactorily worked can it be closed by the person responsible.</p>
',
    'format' => 'filtered_html',
    'title' => '',
  );
  $export['action_items_info_und'] = $template;

  return $export;
}
