<?php
/**
 * @file
 * devtrac7_images_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function devtrac7_images_feature_taxonomy_default_vocabularies() {
  return array(
    'image_tags' => array(
      'name' => 'Image tags',
      'machine_name' => 'image_tags',
      'description' => 'Tags for the main subject(s) of an image',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
