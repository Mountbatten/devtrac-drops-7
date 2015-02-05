<?php
/**
 * @file
 * iati_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function iati_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|iati_activity|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'iati_activity';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'active_districts' => array(
      'weight' => '5',
      'label' => 'inline',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => 'report',
      ),
    ),
  );
  $export['node|iati_activity|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|iati_organisation|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'iati_organisation';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => 'report',
      ),
    ),
  );
  $export['node|iati_organisation|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function iati_feature_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'active_districts';
  $ds_field->label = 'Active Admin Units';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'block' => 'views|devtrac_activities-block_1',
    'block_render' => '3',
  );
  $export['active_districts'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function iati_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|iati_activity|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'iati_activity';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_fieldtrip_button',
        2 => 'field_field_iati_activity_logo',
        3 => 'field_activity_name',
        4 => 'field_iati_activity_website',
        5 => 'active_districts',
        6 => 'taxonomy_vocabulary_8',
        7 => 'field_iati_activity_planned_date',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_fieldtrip_button' => 'ds_content',
      'field_field_iati_activity_logo' => 'ds_content',
      'field_activity_name' => 'ds_content',
      'field_iati_activity_website' => 'ds_content',
      'active_districts' => 'ds_content',
      'taxonomy_vocabulary_8' => 'ds_content',
      'field_iati_activity_planned_date' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|iati_activity|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|iati_organisation|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'iati_organisation';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_fieldtrip_button',
        2 => 'field_org_logo',
        3 => 'field_organisation_name',
        4 => 'field_iati_org_url',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_fieldtrip_button' => 'ds_content',
      'field_org_logo' => 'ds_content',
      'field_organisation_name' => 'ds_content',
      'field_iati_org_url' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|iati_organisation|full'] = $ds_layout;

  return $export;
}
