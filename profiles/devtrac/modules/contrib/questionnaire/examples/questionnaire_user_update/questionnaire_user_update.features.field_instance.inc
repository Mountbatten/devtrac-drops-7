<?php
/**
 * @file
 * questionnaire_user_update.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function questionnaire_user_update_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_favourite_colour'
  $field_instances['user-user-field_favourite_colour'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_favourite_colour',
    'label' => 'Favourite colour',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Favourite colour');

  return $field_instances;
}
