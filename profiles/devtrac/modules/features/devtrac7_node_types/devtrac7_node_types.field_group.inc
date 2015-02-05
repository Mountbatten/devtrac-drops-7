<?php
/**
 * @file
 * devtrac7_node_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function devtrac7_node_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_details|node|place|form';
  $field_group->group_name = 'group_contact_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'place';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Details',
    'weight' => '4',
    'children' => array(
      0 => 'field_place_email',
      1 => 'field_place_phone',
      2 => 'field_place_responsible_person',
      3 => 'field_place_website',
      4 => 'group_place_contact_items',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contact-details field-group-fieldset',
        'description' => 'Please fill in the contact details of the organisation.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_contact_details|node|place|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_place_contact_items|node|place|form';
  $field_group->group_name = 'group_place_contact_items';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'place';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact_details';
  $field_group->data = array(
    'label' => 'Contact Items',
    'weight' => '9',
    'children' => array(
      0 => 'field_place_contact_info',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Items',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Please fill in the contact details of the organisation. You can add different contact persons (eg. the head teacher) below.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_place_contact_items|node|place|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_place_id|node|place|default';
  $field_group->group_name = 'group_place_id';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'place';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ID',
    'weight' => '9',
    'children' => array(
      0 => 'field_place_sourcelayer',
      1 => 'field_place_sourceuri',
      2 => 'field_place_unique_id',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-place-id field-group-hidden',
      ),
    ),
  );
  $export['group_place_id|node|place|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_place_id|node|place|form';
  $field_group->group_name = 'group_place_id';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'place';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ID',
    'weight' => '5',
    'children' => array(
      0 => 'field_place_sourcelayer',
      1 => 'field_place_sourceuri',
      2 => 'field_place_unique_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'ID',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_place_id|node|place|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_place_id|node|place|teaser';
  $field_group->group_name = 'group_place_id';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'place';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ID',
    'weight' => '7',
    'children' => array(
      0 => 'field_place_sourcelayer',
      1 => 'field_place_sourceuri',
      2 => 'field_place_unique_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-place-id field-group-fieldset',
      ),
    ),
  );
  $export['group_place_id|node|place|teaser'] = $field_group;

  return $export;
}
