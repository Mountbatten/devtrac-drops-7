<?php
/**
 * @file
 * devtrac7_images_feature.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function devtrac7_images_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|image_tags|list_view_mode';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'image_tags';
  $ds_layout->view_mode = 'list_view_mode';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'description',
      ),
    ),
    'fields' => array(
      'description' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|image_tags|list_view_mode'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|vocabulary_8|list_view_mode';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'vocabulary_8';
  $ds_layout->view_mode = 'list_view_mode';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_term_icon',
      ),
    ),
    'fields' => array(
      'field_term_icon' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|vocabulary_8|list_view_mode'] = $ds_layout;

  return $export;
}
