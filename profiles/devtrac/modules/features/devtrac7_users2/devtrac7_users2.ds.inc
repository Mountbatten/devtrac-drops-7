<?php
/**
 * @file
 * devtrac7_users2.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function devtrac7_users2_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|full';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'ds_user_picture' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
  );
  $export['user|user|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function devtrac7_users2_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|full';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_fieldtrip_button',
        1 => 'ds_user_picture',
        2 => 'field_user_firstname',
        3 => 'field_user_surname',
        4 => 'field_user_title',
        5 => 'field_user_degree',
        6 => 'taxonomy_vocabulary_4',
        7 => 'taxonomy_vocabulary_5',
        8 => 'field_user_superior',
        9 => 'field_organisation',
        10 => 'taxonomy_vocabulary_8',
      ),
    ),
    'fields' => array(
      'field_fieldtrip_button' => 'ds_content',
      'ds_user_picture' => 'ds_content',
      'field_user_firstname' => 'ds_content',
      'field_user_surname' => 'ds_content',
      'field_user_title' => 'ds_content',
      'field_user_degree' => 'ds_content',
      'taxonomy_vocabulary_4' => 'ds_content',
      'taxonomy_vocabulary_5' => 'ds_content',
      'field_user_superior' => 'ds_content',
      'field_organisation' => 'ds_content',
      'taxonomy_vocabulary_8' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['user|user|full'] = $ds_layout;

  return $export;
}
