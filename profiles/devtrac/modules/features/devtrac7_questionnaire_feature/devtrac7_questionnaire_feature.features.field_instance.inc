<?php
/**
 * @file
 * devtrac7_questionnaire_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function devtrac7_questionnaire_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-questionnaire_question-taxonomy_vocabulary_1'
  $field_instances['node-questionnaire_question-taxonomy_vocabulary_1'] = array(
    'bundle' => 'questionnaire_question',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the appropriate Location Type.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'ds',
        'settings' => array(),
        'type' => 'taxonomy_location_type_icon',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'ds',
        'settings' => array(),
        'type' => 'taxonomy_location_type_icon',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_1',
    'label' => 'Location Type',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'shs',
      'settings' => array(
        'apply_chosen' => 0,
        'content_taxonomy_opt_groups' => FALSE,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'shs' => array(
          'create_new_levels' => 0,
          'create_new_terms' => 0,
          'force_deepest' => 0,
          'node_count' => 0,
          'use_chosen' => 'chosen',
        ),
      ),
      'type' => 'taxonomy_shs',
      'weight' => -1.25,
    ),
  );

  // Exported field_instance: 'node-questionnaire_question-taxonomy_vocabulary_8'
  $field_instances['node-questionnaire_question-taxonomy_vocabulary_8'] = array(
    'bundle' => 'questionnaire_question',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide the correct sector. You may select more than one sector. You can read more about the codes we use on the <a href="http://www.devtrac.org/node/51">OECD Sector Codes</a> page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'ds',
        'settings' => array(),
        'type' => 'taxonomy_sector_code_icon',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_8',
    'label' => 'Sector',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 1,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_select',
      'weight' => -1.5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Choose the type of the Question. This is going to determine how this Question will look like.');
  t('Location Type');
  t('Options');
  t('Provide the correct sector. You may select more than one sector. You can read more about the codes we use on the <a href="http://www.devtrac.org/node/51">OECD Sector Codes</a> page.');
  t('Sector');
  t('Select the appropriate Location Type.');
  t('The different Options of the Question (Note; Mind about the type of Question you selected).');
  t('The type of question.');

  return $field_instances;
}
