<?php
/**
 * @file
 * devtrac7_solr_search_image_feature.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function devtrac7_solr_search_image_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'file|image|preview';
  $ds_layout->entity_type = 'file';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'file',
      ),
    ),
    'fields' => array(
      'file' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
  );
  $export['file|image|preview'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function devtrac7_solr_search_image_feature_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'image_export';
  $ds_view_mode->label = 'Image export';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['image_export'] = $ds_view_mode;

  return $export;
}
