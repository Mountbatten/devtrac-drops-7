<?php
/**
 * @file
 * devtrac7_questionnaire_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac7_questionnaire_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_questionnaire_question';
  $strongarm->value = 0;
  $export['comment_anonymous_questionnaire_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_questionnaire_question';
  $strongarm->value = 1;
  $export['comment_default_mode_questionnaire_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_questionnaire_question';
  $strongarm->value = '50';
  $export['comment_default_per_page_questionnaire_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_questionnaire_question';
  $strongarm->value = 1;
  $export['comment_form_location_questionnaire_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_questionnaire_question';
  $strongarm->value = '1';
  $export['comment_preview_questionnaire_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_questionnaire_question';
  $strongarm->value = '1';
  $export['comment_questionnaire_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_questionnaire_question';
  $strongarm->value = 1;
  $export['comment_subject_field_questionnaire_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_questionnaire_question';
  $strongarm->value = array();
  $export['menu_options_questionnaire_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_questionnaire_question';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_questionnaire_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_questionnaire_question';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_questionnaire_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_questionnaire_question';
  $strongarm->value = '0';
  $export['node_preview_questionnaire_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_questionnaire_question';
  $strongarm->value = 0;
  $export['node_submitted_questionnaire_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'questionnaire_question_context_ftritem';
  $strongarm->value = 'field_ftritem_place';
  $export['questionnaire_question_context_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'questionnaire_question_copy_termfields_from_context_ftritem';
  $strongarm->value = 1;
  $export['questionnaire_question_copy_termfields_from_context_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'questionnaire_question_isquestionnaire_ftritem';
  $strongarm->value = 1;
  $export['questionnaire_question_isquestionnaire_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'questionnaire_question_vocabulary_ftritem';
  $strongarm->value = 'vocabulary_1';
  $export['questionnaire_question_vocabulary_ftritem'] = $strongarm;

  return $export;
}
