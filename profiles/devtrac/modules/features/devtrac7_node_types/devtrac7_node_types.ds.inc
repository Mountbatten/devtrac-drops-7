<?php
/**
 * @file
 * devtrac7_node_types.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function devtrac7_node_types_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|actionitem|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'actionitem';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|actionitem|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|fieldtrip|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'fieldtrip';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|fieldtrip|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ftritem|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ftritem';
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
  $export['node|ftritem|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ftritem|map_popup_view_mode';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ftritem';
  $ds_fieldsetting->view_mode = 'map_popup_view_mode';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read full report',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|ftritem|map_popup_view_mode'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|place|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'place';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|place|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|place|map_popup_view_mode';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'place';
  $ds_fieldsetting->view_mode = 'map_popup_view_mode';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|place|map_popup_view_mode'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function devtrac7_node_types_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|actionitem|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'actionitem';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_fieldtrip_button',
        1 => 'field_actionitem_status',
        2 => 'field_actionitem_severity',
        3 => 'field_actionitem_due_date',
        4 => 'taxonomy_vocabulary_8',
        5 => 'field_actionitem_resp_place',
        6 => 'field_actionitem_ftreportitem',
        7 => 'field_action_items_tags',
      ),
    ),
    'fields' => array(
      'field_fieldtrip_button' => 'ds_content',
      'field_actionitem_status' => 'ds_content',
      'field_actionitem_severity' => 'ds_content',
      'field_actionitem_due_date' => 'ds_content',
      'taxonomy_vocabulary_8' => 'ds_content',
      'field_actionitem_resp_place' => 'ds_content',
      'field_actionitem_ftreportitem' => 'ds_content',
      'field_action_items_tags' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|actionitem|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|fieldtrip|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'fieldtrip';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_fieldtrip_button',
        1 => 'field_fieldtrip_status',
        2 => 'field_fieldtrip_start_end_date',
        3 => 'field_fieldtrip_internal_id',
        4 => 'field_fieldtrip_user',
        5 => 'taxonomy_vocabulary_6',
        6 => 'field_fieldtrip_approved_by',
        7 => 'field_fieldtrip_approval_date',
      ),
    ),
    'fields' => array(
      'field_fieldtrip_button' => 'ds_content',
      'field_fieldtrip_status' => 'ds_content',
      'field_fieldtrip_start_end_date' => 'ds_content',
      'field_fieldtrip_internal_id' => 'ds_content',
      'field_fieldtrip_user' => 'ds_content',
      'taxonomy_vocabulary_6' => 'ds_content',
      'field_fieldtrip_approved_by' => 'ds_content',
      'field_fieldtrip_approval_date' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|fieldtrip|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ftritem|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ftritem';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_fieldtrip_button',
        1 => 'taxonomy_vocabulary_7',
        2 => 'field_ftritem_place',
        3 => 'taxonomy_vocabulary_1',
        4 => 'field_ftritem_status',
        5 => 'field_ftritem_date_visited',
        6 => 'field_ftritem_field_trip',
        7 => 'taxonomy_vocabulary_8',
      ),
    ),
    'fields' => array(
      'field_fieldtrip_button' => 'ds_content',
      'taxonomy_vocabulary_7' => 'ds_content',
      'field_ftritem_place' => 'ds_content',
      'taxonomy_vocabulary_1' => 'ds_content',
      'field_ftritem_status' => 'ds_content',
      'field_ftritem_date_visited' => 'ds_content',
      'field_ftritem_field_trip' => 'ds_content',
      'taxonomy_vocabulary_8' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|ftritem|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ftritem|map_popup_view_mode';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ftritem';
  $ds_layout->view_mode = 'map_popup_view_mode';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ftritem_images',
        1 => 'field_ftritem_date_visited',
        2 => 'field_ftritem_public_summary',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_ftritem_images' => 'ds_content',
      'field_ftritem_date_visited' => 'ds_content',
      'field_ftritem_public_summary' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'limit' => array(
      'field_ftritem_images' => '1',
    ),
    'classes' => array(),
  );
  $export['node|ftritem|map_popup_view_mode'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|place|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'place';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_fieldtrip_button',
        1 => 'taxonomy_vocabulary_1',
        2 => 'taxonomy_vocabulary_6',
        3 => 'field_place_responsible_person',
        4 => 'field_place_phone',
        5 => 'field_place_email',
        6 => 'field_place_website',
      ),
    ),
    'fields' => array(
      'field_fieldtrip_button' => 'ds_content',
      'taxonomy_vocabulary_1' => 'ds_content',
      'taxonomy_vocabulary_6' => 'ds_content',
      'field_place_responsible_person' => 'ds_content',
      'field_place_phone' => 'ds_content',
      'field_place_email' => 'ds_content',
      'field_place_website' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|place|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|place|map_popup_view_mode';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'place';
  $ds_layout->view_mode = 'map_popup_view_mode';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_fieldtrip_button',
        1 => 'taxonomy_vocabulary_1',
        2 => 'taxonomy_vocabulary_6',
        3 => 'field_place_responsible_person',
        4 => 'field_place_website',
        5 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_fieldtrip_button' => 'ds_content',
      'taxonomy_vocabulary_1' => 'ds_content',
      'taxonomy_vocabulary_6' => 'ds_content',
      'field_place_responsible_person' => 'ds_content',
      'field_place_website' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|place|map_popup_view_mode'] = $ds_layout;

  return $export;
}
