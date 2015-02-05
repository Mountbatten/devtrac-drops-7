<?php
/**
 * @file
 * devtrac7_node_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function devtrac7_node_types_taxonomy_default_vocabularies() {
  return array(
    'action_item_tags' => array(
      'name' => 'Action Item Tags',
      'machine_name' => 'action_item_tags',
      'description' => 'Free tagging on action items',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'fieldtrip_tags' => array(
      'name' => 'FieldTrip Tags',
      'machine_name' => 'fieldtrip_tags',
      'description' => 'Free tagging on the fieldtrip',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_1' => array(
      'name' => 'Location Type',
      'machine_name' => 'vocabulary_1',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_7' => array(
      'name' => 'Site Report Type',
      'machine_name' => 'vocabulary_7',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_9' => array(
      'name' => 'Purpose',
      'machine_name' => 'vocabulary_9',
      'description' => 'Purpose(s) of the Fieldtrip',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
