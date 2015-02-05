<?php
/**
 * @file
 * devtrac7_questionnaire_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function devtrac7_questionnaire_feature_taxonomy_default_vocabularies() {
  return array(
    'question_subject' => array(
      'name' => 'Question Sector',
      'machine_name' => 'question_subject',
      'description' => 'Allows for grouping similar questions',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
