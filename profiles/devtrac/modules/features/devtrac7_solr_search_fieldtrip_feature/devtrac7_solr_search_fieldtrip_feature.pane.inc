<?php
/**
 * @file
 * devtrac7_solr_search_fieldtrip_feature.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function devtrac7_solr_search_fieldtrip_feature_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'field_trips_info';
  $template->title = 'Field Trips';
  $template->plugin = 'text';
  $template->description = 'Introductory information about  Field Trips.';
  $template->configuration = '';
  $export['field_trips_info'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function devtrac7_solr_search_fieldtrip_feature_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'field_trips_info_und';
  $template->container = 'field_trips_info';
  $template->lang = 'und';
  $template->data = array(
    'value' => 'A field trip is a detail of a trip by a Field worker to the field. It details the purpose of the field trip, the start and end date, the internal ID and any tags the user may be interested in labeling the Field trip with. The field trip page contains a dynamic list that can be filtered on many types of fields e.g Status, Date, etc.',
    'format' => 'filtered_html',
    'title' => '',
  );
  $export['field_trips_info_und'] = $template;

  return $export;
}
