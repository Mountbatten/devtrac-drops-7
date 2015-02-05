<?php
/**
 * @file
 * devtrac7_taxonomy_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function devtrac7_taxonomy_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|vocabulary_6|full';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'vocabulary_6';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|vocabulary_6|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|vocabulary_6|map_popup';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'vocabulary_6';
  $ds_fieldsetting->view_mode = 'map_popup';
  $ds_fieldsetting->settings = array(
    'districts_thumbnail' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'more_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|vocabulary_6|map_popup'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|vocabulary_6|map_popup_view_mode';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'vocabulary_6';
  $ds_fieldsetting->view_mode = 'map_popup_view_mode';
  $ds_fieldsetting->settings = array(
    'more_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|vocabulary_6|map_popup_view_mode'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function devtrac7_taxonomy_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|vocabulary_8|sector_code_icon';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'vocabulary_8';
  $ds_layout->view_mode = 'sector_code_icon';
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
  $export['node|vocabulary_8|sector_code_icon'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|vocabulary_1|location_type_icon';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'vocabulary_1';
  $ds_layout->view_mode = 'location_type_icon';
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
    'wrappers' => array(),
    'layout_wrapper' => 'div',
  );
  $export['taxonomy_term|vocabulary_1|location_type_icon'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|vocabulary_6|district_profile_view_mode';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'vocabulary_6';
  $ds_layout->view_mode = 'district_profile_view_mode';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'description',
        1 => 'field_district_category',
        2 => 'field_wikipedia',
      ),
    ),
    'fields' => array(
      'description' => 'ds_content',
      'field_district_category' => 'ds_content',
      'field_wikipedia' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|vocabulary_6|district_profile_view_mode'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|vocabulary_6|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'vocabulary_6';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'description',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'description' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|vocabulary_6|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|vocabulary_6|map_popup_view_mode';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'vocabulary_6';
  $ds_layout->view_mode = 'map_popup_view_mode';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'description',
        1 => 'field_wikipedia',
        2 => 'more_link',
      ),
    ),
    'fields' => array(
      'description' => 'ds_content',
      'field_wikipedia' => 'ds_content',
      'more_link' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|vocabulary_6|map_popup_view_mode'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|vocabulary_8|sector_code_icon';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'vocabulary_8';
  $ds_layout->view_mode = 'sector_code_icon';
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
  $export['taxonomy_term|vocabulary_8|sector_code_icon'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|vocabulary_8|sector_code_icon';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'vocabulary_8';
  $ds_layout->view_mode = 'sector_code_icon';
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
  $export['user|vocabulary_8|sector_code_icon'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function devtrac7_taxonomy_feature_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'district_profile_view_mode';
  $ds_view_mode->label = 'District Profile View mode';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['district_profile_view_mode'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'location_type_icon';
  $ds_view_mode->label = 'Location Type Icon';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['location_type_icon'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'map_popup_view_mode';
  $ds_view_mode->label = 'Map popup';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['map_popup_view_mode'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sector_code_icon';
  $ds_view_mode->label = 'Sector Code Icon';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
    'user' => 'user',
  );
  $export['sector_code_icon'] = $ds_view_mode;

  return $export;
}
