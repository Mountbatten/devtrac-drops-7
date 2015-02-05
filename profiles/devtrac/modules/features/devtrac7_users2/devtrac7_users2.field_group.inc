<?php
/**
 * @file
 * devtrac7_users2.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function devtrac7_users2_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_filters|user|user|form';
  $field_group->group_name = 'group_user_filters';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Filters',
    'weight' => '6',
    'children' => array(
      0 => 'taxonomy_vocabulary_6',
      1 => 'taxonomy_vocabulary_8',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Filters',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-user-filters field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_filters|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_my_profile|user|user|form';
  $field_group->group_name = 'group_user_my_profile';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'My Profile',
    'weight' => '3',
    'children' => array(
      0 => 'field_user_aboutme',
      1 => 'field_user_firstname',
      2 => 'field_user_surname',
      3 => 'picture',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'My Profile',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-user-my-profile field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_my_profile|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_work_information|user|user|form';
  $field_group->group_name = 'group_user_work_information';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Work Information',
    'weight' => '2',
    'children' => array(
      0 => 'taxonomy_vocabulary_4',
      1 => 'taxonomy_vocabulary_5',
      2 => 'field_user_degree',
      3 => 'field_user_title',
      4 => 'field_user_superior',
      5 => 'field_organisation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Work Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-user-work-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_work_information|user|user|form'] = $field_group;

  return $export;
}
