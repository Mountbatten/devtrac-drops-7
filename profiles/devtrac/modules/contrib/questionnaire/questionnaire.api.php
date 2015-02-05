<?php

/**
 * @file
 * Describes hooks provided by the Questionnaire module.
 */

/**
 * @mainpage Questionnaire API Manual
 * 
 * Welcome to the Questionnaire module's documentation. This documentation 
 * describes the classes and functions described in the Questionnaire module.
 * 
 * A few useful definitions:
 * -A questionnaire is a dynamic collection of structured questions.
 * -A context is the entity to which questions apply.
 * -A submission is a group of answered questions submitted at the same time by 
 *  a user.
 * -An answer is an answered question.
 * 
 * Topics:
 * -@link questionnaire_hooks Questionnaire hooks @endlink
 */

/**
 * @defgroup questionnaire_hooks Questionnaire hooks
 * @{
 * Hooks that can be implemented by other modules in order to implement the
 * Questionnaire API
 * 
 * @}
 */

/**
 * Returns the context of a given questionnaire.
 * 
 * @param string $entity_type
 *  The entity type of the questionnaire.
 * @param object $entity
 *  The questionnaire entity for which a context is to be retrieved.
 * @param array $recipient
 *  An array describing the entity accessing the questionnaire. This array has 
 *  the following structure;
 *  $recipient = array(
 *   'entity_type' => the entity type of the recipient 
 *                    e.g 'user',
 *   'entity' => the recipient entity e.g a user entity,
 *   'medium' => an arbitary string describing the medium in which the
 *               question is to asked to the recipient e.g 'node page',
 *  );
 * 
 * @return array
 *  An associative array with the following structure;
 *  array(key => array($entity))
 *  where the key is the machine name of the entity type of the context entity
 *  and $entity is the entity that is the context.
 * 
 * @ingroup questionnaire_hooks
 */
function hook_questionnaire_getcontext($entity_type, $entity, $recipient) {
  // Example from questionnaire_question_getcontext().
  if ($entity_type == 'node' && $entity->type == 'questionnaire'){
    return array('node' => array($entity));
  }
  
}

/**
 * Returns questions attached a questionnaire.
 * 
 * @param array $contexts
 *  An associative array with the following structure;
 *  $contexts = array(key => array($entity))
 *  where the key is the machine name of the entity type of the context entity
 *  and $entity is the entity that is the context.
 * @param array $recepient
 *  An array describing the entity accessing the questionnaire.
 *  @see hook_questionnaire_getcontext() for structure of this array.
 * @param object $questionnaire
 *  The questionnaire entity for which questions are to be retrieved
 * 
 * @return array $questions
 *  An associative array with the following structure;
 *  $questions[$item['value']] = array(
 *          'node' => The question entity,
 *          'weight' => $delta,
 *          'context_type' => The entity type of the context,
 *          'context_id' => The id of the context,
 *          'questionnaire_id' => The id of the questionnaire,
 *        );
 * 
 * @ingroup questionnaire_hooks
 */
function hook_questionnaire_getquestions($contexts, $recipient, $questionnaire = NULL) {
  // Example from questionnaire_questionnaire_getquestions
  $questions = array();
  if (isset($contexts['node'])) {
    foreach ($contexts['node'] as $node) {
      // Case for native questionnaires
      if ($node->type == 'questionnaire') {
        $question_references = field_get_items('node', $node, 'field_questionnaire_questions');
        foreach($question_references as $delta => $item) {
          $collection = field_collection_item_load($item['value']);
          $question_id = $collection->field_questionnaire_qq['und'][0]['target_id'];
          $questions[$item['value']] = array(
            'node' => node_load($question_id),
            'weight' => $delta,
            'context_type' => 'node',
            'context_id' => $node->nid,
            'questionnaire_id' => $node->nid,
          );
        }
      }
    }
  }
  return $questions;  
}

/**
 * Saves a submission to the database.
 * 
 * @param object $submission
 *  The submission entity to save to the database.
 *  
 * @return int SAVED_NEW|SAVED_UPDATED
 *  An integer indicating whether the submission entity that has been saved was
 *  new or an updated version of the old one. 
 *
 * @ingroup questionnaire_hooks
 */
function hook_questionnaire_submission_save(QuestionnaireSubmission $submission) {
  // Example implementation  
  $result = $submission->save();
  return $result;
}