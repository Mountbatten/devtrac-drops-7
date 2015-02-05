<?php

/**
 * @file
 * Questionnaire page.
 */

/**
 * Shows the questions that belong to this questionnaire or context.
 * 
 * @param array $node
 *    The current node being viewed by the user.
 * 
 * @return array $table
 *    The table of questions to display. 
 */
function questionnaire_question_questions($node) {
  
  if (questionnaire_question_isquestionnaire($node->type)) {
    $message = t('This Questionnaire does not have any Questions yet.');
  }
  else {
    $message = t('This Questionnaire is disabled.');
  }
  global $user;
  $recipient = array(
    'entity_type' => 'user',
    'entity' => $user,
    'medium' => 'node page',
  );
  
  // If the node is of type questionnaire, then it is the context.
  if ($node->type == 'questionnaire') {
    $context = array('node' => array($node));
  }
  // Otherwise, fetch the context
  else {
    $context = questionnaire_question_getcontext('node', $node, $recipient); 
  }
  $questions = questionnaire_question_getquestions($context, $recipient, 0, $node);

  $table = array();
  $table['header'] = array();
  $table['rows'] = array();
  $table['caption'] = t('Questions');
  $table['attributes'] = array();
  $table['colgroups'] = array();
  $table['sticky'] = FALSE;
  $table['empty'] = $message;

  $table['header'][] = array(
      'data' => t('Question'),
  );

  foreach ($questions as $question_array) {
    $question = $question_array['node'];
    $table['rows'][] = array(
        'data' => array(l($question->title, 'node/' . $question->nid)),
    );
  }

  return theme_table($table);
}

/**
 * Shows the submissions that belong to this questionnaire or context.
 * 
 * @param array $node
 *    The current node being viewed by the user.
 * 
 * @return array $table
 *    The table of submissions to display. 
 *
 * @todo Shows a list of submissions. Should be a view?
 */
function questionnaire_question_submissions($node) {  
  $count = db_query("SELECT COUNT(qs.questionnaire_id) FROM {questionnaire_submission} qs WHERE qs.questionnaire_id = :questionnaire AND qs.context_type = 'node'", array(':questionnaire' => $node->nid))->fetchField();
  $count_campaign = db_query("SELECT COUNT(qs.questionnaire_id) FROM {questionnaire_submission} qs WHERE qs.questionnaire_id = :questionnaire AND qs.context_type = 'questionnaire_campaign'", array(':questionnaire' => $node->nid))->fetchField();
  
  // Case for submissions to questionnaires of context_type node
  if ((bool) $count) {
    $query = db_select('questionnaire_submission', 'n')
        ->fields('n', array('sid', 'created', 'recipient_id', 'questionnaire_id', 'context_type', 'context_id', 'changed' ))
        ->condition('questionnaire_id', $node->nid);    
  }
  // Case for submissions to questionnaires of context_type 
  // questionnaire campaign
  else if ((bool) $count_campaign) {
    $query = db_select('questionnaire_submission', 'n')
        ->fields('n', array('sid', 'created', 'recipient_id', 'questionnaire_id', 'context_type', 'context_id', 'changed' ))
        ->condition('questionnaire_id', $node->nid);    
  }
  // Case for submissions belonging to contexts
  else {
    $query = db_select('questionnaire_submission', 'n')
        ->fields('n', array('sid', 'created', 'recipient_id', 'questionnaire_id', 'context_type', 'context_id', 'changed' ))
        ->condition('context_id', $node->nid);
  }
  
  //TODO insert sorting if draggableviews is enabled!!
  $result = $query->execute();

  $table = array();
  $table['header'] = array();
  $table['rows'] = array();
  $table['caption'] = t('Submissions');
  $table['attributes'] = array();
  $table['colgroups'] = array();
  $table['sticky'] = FALSE;
  $table['empty'] = t('This Questionnaire does not have any Submissions yet.');

  $table['header'][]['data'] = t('Submissions');
  $table['header'][]['data'] = t('Created');
  $table['header'][]['data'] = t('Questionnaire');
  $table['header'][]['data'] = t('Context');
  $table['header'][]['data'] = t('Changed');

  foreach ($result as $sub) {

    $qnode = node_load($sub->questionnaire_id);
    $questionnaire = l($qnode->title, 'node/' . $qnode->nid );
    if ($sub->questionnaire_id != $sub->context_id) {
      $context_entity = entity_load($sub->context_type, array($sub->context_id));
      $context_entity = reset($context_entity);
      $context_uri = entity_uri($sub->context_type, $context_entity);
      $context_title = entity_label($sub->context_type, $context_entity);
      // @todo check entity_label callbacks.
      if (empty($entity_title)) {
        $context_title = check_plain($context_entity->title);
      }
      if (empty($context_uri)) {
        $context = l($context_title, 'node/' . $context_uri);
      }
      else {
        $context = $context_title;
      }
    }
    else {
      $context = '';
    }

//    $sublink = ($sub->context_type == 'questionnaire_campaign')?'Submission: ' . $sub->sid . ' to Questionnaire: ' . $qnode->title:l('edit', 'node/' . $node->nid . '/editsubmission/' . $sub->sid);
    $sublink = l('edit', 'node/' . $node->nid . '/editsubmission/' . $sub->sid);

    $table['rows'][] = array(
      'data' => array(
        $sublink,
        format_date($sub->created),
        $questionnaire,
        $context,
        format_date($sub->changed),
      ),
    );
  }

  return theme_table($table);
}

/**
 * Menu callback - edit a questionnaire submission, where the sid is unknown.
 *
 * @todo could be rolled into form callback and access control. Could be
 * avoided generally?
 */
function questionnaire_question_submission_edit_fromcontext($node) {
  global $user;

  $submissions = questionnaire_submission_find(array('user', $user), array('node', $node), 'node page');
  if (count($submissions) == 1) {
    $submission = reset($submissions);
    return drupal_get_form('questionnaire_question_submission_form', $node, $submission);
  }
  else {
    // @todo is this a user facing error?
    return t("Can not find submission with nid " . $nid);
  }
}

/**
 *  Form consructor for the Questionnaire submission form
 *
 *  @param object $node
 *    The questionnaire node, or questionnaire enabled node.
 *  @param Entity $submission
 *    Optional. If editing previous submission.
 * 
 *  @see questionnaire_question_submission_form_validate()
 *  @see questionnaire_question_submission_form_submit()
 */
function questionnaire_question_submission_form($form, &$form_state, $node, $submission = NULL ) {
  global $user;
  $recipient = array(
    'entity_type' => 'user',
    'entity' => $user,
    'medium' => 'node page',
  );
  // This variable stores the node that is the questionnaire
  $questionnaire = $node;
  
  // When this form is called from native questionnaire or a questionnaire
  // created from a node.
  // Use the current node and recipient to get the context of the questionnaire.
  // Then use the context, recipient and the current node to get the questions 
  // attached to the questionnaire.
  // If the node is of type questionnaire, then it is the context.
  if ($node->type == 'questionnaire') {
    $context = array('node' => array($node));
  }
  // Otherwise, fetch the context
  else {
    $context = questionnaire_question_getcontext('node', $questionnaire, $recipient); 
  }
  $questions = questionnaire_question_getquestions($context, $recipient, 0, $questionnaire); 
  
  
  
  
  // When this form is being called from the context
  if (empty($questions) && $submission != NULL) {
    // Use the current node's id and the current submission id to get the 
    // questionnaire id.
    $qid = db_query("SELECT qs.questionnaire_id FROM {questionnaire_submission} qs WHERE qs.context_id = :context AND qs.context_type = 'node' AND qs.sid = :submission", array(':context' => $node->nid, ':submission' => $submission->sid))->fetchField();
    if ((bool) $qid) {
      // If such a questionnaire exists, use that questionnaire and the 
      // recipient to get the context, then use the questionnaire, the context 
      // and the recipient to get the questions attached to the questionnaire. 
      $questionnaire = node_load($qid);
      $context = questionnaire_question_getcontext('node', $questionnaire, $recipient);
      $questions = questionnaire_question_getquestions($context, $recipient, 0, $questionnaire);
    }
  }
  
  // In the case where the user wants to edit answers submitted to questions 
  // that were formerly on the questionnaire but are no longer attached to it.
  if ($submission != NULL) {
    // Fetch all the question ids and corresponding context ids of questions
    // that have ever been answered by this user on this questionnaire using the
    // current submission id.
    $answered_question_results = db_query("SELECT qa.question, qa.context_id FROM {questionnaire_answer} qa WHERE qa.sid = :submission AND qa.recipient_type = 'user' AND qa.recipient_id = :user AND qa.questionnaire_id = :questionnaire", array(':submission' => $submission->sid, ':user' => $user->uid, ':questionnaire' => $questionnaire->nid));
    foreach ($answered_question_results as $result) {
      // For each result, load the question and use it to create the answered 
      // questions array.
      $answered_question = node_load($result->question);
      $answered_questions[$result->question] = array(
                    'node' => $answered_question,
                    'context_type' => 'node',
                    'context_id' => $result->context_id,
                    'questionnaire_id' => $node->nid,
                  );
      // Merge each answered question array to the array of questions that shall
      // be displayed.
      $questions = array_merge($questions, $answered_questions);
    }
  }

  // Set the title of the form.
  drupal_set_title(t('Questionnaire for ' . $questionnaire->title));
  
  // If there are no questions, notify the user and display a cancel button.
  if ($questions == array()) {
    $form['message'] = array(
      '#prefix' => '<div>',
      '#value' => t('There are no questions available for this Questionnaire'),
      '#suffix' => '</div>',
    );
    $form['cancel'] = array(
      '#type' => 'submit',
      '#value' => t('Back to Questionnaire Page'),
    );
    return $form;
  }

  $questiontypes = questionnaire_question_getquestiontypes();
  // select', 'checkboxes', 'radios', 'number', 'time'

  foreach ($questions as $question) {
    $question_node = $question['node'];
    // @todo editing a submission.
    // If a submission exists for this question
    if (! empty($submission->sid)) {
      // Query the database for the answer to this question
      $query = db_select('questionnaire_answer', 'a')
        ->fields('a', array('id', 'sid', 'answer'))
        ->condition('question', $question_node->nid)
        ->condition('sid', $submission->sid);
      $results = $query->execute();
        $answers = array();
        $answer = NULL;
        while ($result = $results->fetchAssoc()) {
          // assign the the query results to an array
          $answers[] = $result['answer'];
        }
        // If the array of answers has values
        if (isset($answers[0])) {
          // Check whether the question's type is checkboxes, in which case the 
          // entire $answers array should be assigned to the $answer variable.
          if ($question_node->questionnaire_question_type[$question_node->language][0]['value'] == 'checkboxes') {
            $answer = $answers;
          }
          else {
            // If the question's type is not checkboxes, assign the first 
            // element of the array to $answer variable.
            $answer = $answers[0];
          }
      }
      
    }
    // If no submission exists for this question, assign an empty string to the 
    // $answer variable
    else {
      $answer = '';
    }
    $form['questions'][$question_node->nid] = questionnaire_question_getquestioncontrol($question_node->nid, $answer);
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );

  $form['cancel'] = array(
    '#type' => 'submit',
    '#value' => t('Cancel'),
  );
  $form['qnid'] = array(
    '#type' => 'value',
    '#value' => $node->nid,
  );
  // Context should be the same for submission, using last question.
  $form['context_id'] = array(
    '#type' => 'value',
    '#value' => $question['context_id'],
  );
  $form['context_type'] = array(
    '#type' => 'value',
    '#value' => $question['context_type'],
  );
   if (! empty($submission->sid)) {
    $form['sid'] = array(
      '#type' => 'value',
      '#value' => $submission->sid,
    );
  }

  return $form;

}

/**
 * Form validation handler for questionnaire_question_submission_form()
 * 
 * @see questionnaire_question_submission_form_submit()
 * @see http://drupal.org/node/1354
 */
function questionnaire_question_submission_form_validate($form, &$form_state) {
  watchdog('questionnaire', 'validate the form');

  foreach ($form_state['values'] as $questionid => $answer) {
    if (is_numeric($questionid) && ! empty($answer)) {
      if ($error = questionnaire_question_validate_answer($questionid, $answer)) {
        form_set_error(check_plain($questionid), check_plain($error));
      }
    }
  }
}

/**
 * Form submission handler for questionnaire_question_submission_form()
 * 
 * @see questionnaire_question_submission_form_validate()
 * @see http://drupal.org/node/1354
 */
function questionnaire_question_submission_form_submit($form, &$form_state) {
  global $user;
  // If a user submits the form
  if (isset($form_state['values']['submit'])) {
    if ($form_state['values']['op'] == $form_state['values']['submit']) { //TODO will this work in a translated environment?
  //  foreach ($tid as $form_state['values'][1]['hierarchical_select']['selects']) {  //TODO check with multi-value taxonomies
  //    watchdog ('questionnaire', 'adding ' . $tid);
  //  }
      $answers = array();
      $answers['recipient_type'] = 'user';
      $answers['recipient_id'] = $user->uid;
      $answers['answers'] = array();
      if (isset($form_state['values']['sid'])) {
        $answers['sid'] = $form_state['values']['sid'];
      }
      $answers['qnid'] = $form_state['values']['qnid'];
      $answers['context_type'] =  $form_state['values']['context_type'];
      $answers['context_id'] = $form_state['values']['context_id'];

      foreach ($form_state['values'] as $question => $answer) {
        if (is_numeric($question)) {
          if (is_array($answer)) {
            foreach ($answer as $checkedoption) {
              if (isset($checkedoption) && ($checkedoption != '0')) {
                $answers['answers'][$checkedoption] = array(
                  'question' => $question,
                  'answer' => $checkedoption,
                );
              }
            }
          }
          else {
            if (isset($answer) && (strlen($answer) > 0)) {
              $answers['answers'][$question] = array(
                'question' => $question,
                'answer' => $answer,
              );
            }
          }
        }
      }
      if ($sid = questionnaire_question_saveanswers($answers)) {
        if (isset($answers['sid'])) {
        drupal_set_message(t("Submission " . check_plain($answers['sid']) . " edited successfully."));
        }
        else{
        drupal_set_message(t("Thank you for your submission"));
        }
        $form_state['sid'] = $sid;
      }
      else {
        drupal_set_message(t("Something went wrong while saving your submission"));
      }
    }
  }
  if (isset($form_state['values']['cancel'])) {
    if ($form_state['values']['op'] == $form_state['values']['cancel']) { //TODO will this work in a translated environment?
      drupal_set_message(t("You cancelled your submission. No answers have been saved."));
    }
  }
  $form_state['redirect'] = 'node/' . $form_state['values']['qnid'];
}


