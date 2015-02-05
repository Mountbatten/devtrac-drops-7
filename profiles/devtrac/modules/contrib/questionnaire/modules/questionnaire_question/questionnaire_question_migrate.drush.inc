<?php

/**
 * @file
 * Add a custom command to drush that migrates content_profile fields to core user entity fields.
 */

/**
 * Implements hook_drush_command().
 */
function questionnaire_question_migrate_drush_command() {
  $items = array();

  $items['questionnaire-question-migrate-questions'] = array(
    'aliases' => array('qqmq'),
    'description' => 'Migrate Questions to Drupal 7.',
  );
  $items['questionnaire-question-migrate-answers'] = array(
    'aliases' => array('qqma'),
    'description' => 'Migrate Answers to Drupal 7.',
  );
  return $items;
}

/**
 * Implements the command defined in hook_drush_command().
 * Migrates questions to drupal 7
 */
function drush_questionnaire_question_migrate_questions() {
  module_load_install('questionnaire_question');
  questionnaire_question_update_7013();
}


/**
 * Implements the command defined in hook_drush_command().
 * Migrates D7 shit (delete views, fix data etc etc)
 */
function drush_questionnaire_question_migrate_answers() {
  print questionnaire_question_submission_upgrade();
}



/**
 * Implements the command defined in hook_drush_command().
 * Add sectorcodes to actionitems.
 */
/*
function drush_devtrac7_migrate_add_actionitems_sectorcodes() {
  print devtrac7_migrate_add_oecd_to_actionitems();
}
*/
/**
 * Implements the command defined in hook_drush_command().
 * Add sectorcodes to ftritems.
 */
/*
function drush_devtrac7_migrate_add_ftritems_sectorcodes() {
  print devtrac7_migrate_add_oecd_to_sitevisits();
}
*/
