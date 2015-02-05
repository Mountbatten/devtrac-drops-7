<?php
/**
 * @file
 * devtrac7_users2.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function devtrac7_users2_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_4' => array(
      'name' => 'Department',
      'machine_name' => 'vocabulary_4',
      'description' => 'The department and organisation that Users can work in.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_5' => array(
      'name' => 'Function',
      'machine_name' => 'vocabulary_5',
      'description' => 'The Function someone is occupying within the organisation',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
