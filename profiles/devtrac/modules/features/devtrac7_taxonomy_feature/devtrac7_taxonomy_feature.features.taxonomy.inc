<?php
/**
 * @file
 * devtrac7_taxonomy_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function devtrac7_taxonomy_feature_taxonomy_default_vocabularies() {
  return array(
    'district_category' => array(
      'name' => 'Tags',
      'machine_name' => 'district_category',
      'description' => 'This vocabulary is used on the district terms to differentiate or categorize districts esp focal and non-focus districts',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_6' => array(
      'name' => 'District',
      'machine_name' => 'vocabulary_6',
      'description' => 'The admin units. initially for districts only',
      'hierarchy' => 2,
      'module' => 'features_adminboundaries',
      'weight' => 0,
    ),
    'vocabulary_8' => array(
      'name' => 'OECD Sector Code',
      'machine_name' => 'vocabulary_8',
      'description' => '',
      'hierarchy' => 2,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
