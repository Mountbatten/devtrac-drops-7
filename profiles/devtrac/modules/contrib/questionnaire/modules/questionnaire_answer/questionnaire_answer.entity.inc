<?php

/**
 * @file
 * Questionnaire answer and submission entities.
 */

/**
 * Questionnaire answer entity.
 */
class QuestionnaireAnswer extends Entity {

  public function __construct($values = array()) {
    parent::__construct($values, 'questionnaire_answer');
  }

  protected function defaultLabel() {
    return $this->id;
  }

  protected function defaultUri() {
    return array('path' => 'questionnaire_answer/' . $this->id);
  }

}

/**
 * Questionnaire submission entity.
 */
class QuestionnaireSubmission extends Entity {

  protected $taxonomychecked = FALSE;

  public function __construct($values = array()) {
    parent::__construct($values, 'questionnaire_submission');
  }

  protected function defaultLabel() {
    return $this->sid;
  }

  protected function defaultUri() {
    return array('path' => 'questionnaire_submission/' . $this->id);
  }

  public function loadanswers() {
    $query = db_select('questionnaire_answer', 'a')
    ->fields('a', array('id'))
    ->condition('sid', $this->sid);
    $results = $query->execute();
    $answers = array();
    $answer = NULL;
    while ($result = $results->fetchAssoc()) {
      $answer = entity_get_controller('questionnaire_answer')->load(array($result['id']));
      $this->answers[$result['id']] = $answer[$result['id']];
    }
  }

  public function addtaxonomyfields($cid) {
    if ($this->taxonomychecked) {
      return;
    }
    $context = node_load($cid);
    $type = $context->type;
    $entity_type = entity_get_info($type);
    $instances = field_info_instances('node', $type);
    $answerinstances = field_info_instances('questionnaire_answer', 'questionnaire_answer');

    /*
     * Loop through all fieldnames that are in the context but not in the Answers
     * If there is a taxonomy field, add it to answers
     */
    foreach (array_diff( array_keys($instances), array_keys($answerinstances)) as $instance_name) {
      $fieldinfo = field_info_field_by_id($instances[$instance_name]['field_id']);
      if ($fieldinfo['type'] == 'taxonomy_term_reference') {
        $instance = $instances[$instance_name];
        $instance['entity_type'] = 'questionnaire_answer';
        $instance['bundle'] = 'questionnaire_answer';
        field_create_instance($instance);
      }

    }
    $this->taxonomychecked = TRUE;
  }
}

/**
 * Answer entity controller.
 */
class QuestionnaireAnswerController extends EntityAPIController {
  public function __construct($entityType) {
    parent::__construct($entityType);
  }

  /**
   * Create a model - we first set up the values that are specific
   * to our model schema but then also go through the EntityAPIController
   * function.
   *
   * @param $type
   *   The machine-readable type of the model.
   *
   * @return
   *   A model object with all default fields initialized.
   */
  public function create(array $values = array()) {
    // Add values that are specific to our Model
    $values += array(
        'id' => '',
        'is_new' => TRUE,
        'created' => '',
        'changed' => '',
        'answer' => '',
        'answernumber' => '',
        'answertext' => '',
        'question' => '',
        'recipient_type' => '',
        'recipient_id' => '',
        'sid' => '',
        'qnid' => '',
        'context_type' => '',
        'context_id' => '',
        'terms' => Array(),
    );

    $model = parent::create($values);
    return $model;
  }

  /**
   *   Loads an existing answer
   */
/*  public function loadme($answerid, $reset = FALSE) {
    $answer = entity_load('questionnaire_answer', array($answerid), array(), $reset);
    return reset($answer);
  }
*/
  /**
   *   Loads an existing submission
   */
/*  public function loadsubmission() {
    $sid = $this->sid;
    if ($sid) {
      $query = new EntityFieldQuery;

      $result = $query
      ->entityCondition('entity_type', 'questionnaire_answer')
      ->propertyCondition('sid', $sid)
      ->execute();

      if (!empty($result[$entity_type])) {
        $entities = entity_load($entity_type, array_keys($result[$entity_type]));
      }
      $this->answers = $entities;
    }
  }
*/

  /**
   * Overriding the buildContent function to add entity specific fields.
   */
  public function buildContent($entity, $view_mode = 'full', $langcode = NULL, $content = array()) {
    $content = parent::buildContent($entity, $view_mode, $langcode, $content);
    // Loading the necessary entities.
    $question = node_load($entity->question);
    $questionnaire = node_load($entity->questionnaire_id);
    $context = node_load($entity->context_id);
    $recipients = entity_load('user', array($entity->recipient_id));
    $recipient = $recipients[$entity->recipient_id];
    // Adding entity specific fields.
    $content['question'] = array(
      '#theme' => 'field',
      '#weight' => 0,
      '#title' => t('Question'),
      '#access' => TRUE,
      '#label_display' => 'above',
      '#view_mode' => 'full',
      '#language' => $langcode,
      '#field_name' => 'questionnaire_answer_question',
      '#field_type' => 'text',
      '#entity_type' => 'questionnaire_answer',
      '#bundle' => 'questionnaire_answer',
      '#items' => array(array('value' => $question->title)),
      '#formatter' => 'text_default',
      0 => array('#markup' => check_plain($question->title)),
    );
    $content['questionnaire'] = array(
      '#theme' => 'field',
      '#weight' => 1,
      '#title' => t('Questionnaire'),
      '#access' => TRUE,
      '#label_display' => 'above',
      '#view_mode' => 'full',
      '#language' => $langcode,
      '#field_name' => 'questionnaire_answer_questionnaire',
      '#field_type' => 'text',
      '#entity_type' => 'questionnaire_answer',
      '#bundle' => 'questionnaire_answer',
      '#items' => array(array('value' => $questionnaire->title)),
      '#formatter' => 'text_default',
      0 => array('#markup' => check_plain($questionnaire->title)),
    );
    $content['context'] = array(
      '#theme' => 'field',
      '#weight' => 2,
      '#title' => t('Context'),
      '#access' => TRUE,
      '#label_display' => 'above',
      '#view_mode' => 'full',
      '#language' => $langcode,
      '#field_name' => 'questionnaire_answer_context',
      '#field_type' => 'text',
      '#entity_type' => 'questionnaire_answer',
      '#bundle' => 'questionnaire_answer',
      '#items' => array(array('value' => $context->title)),
      '#formatter' => 'text_default',
      0 => array('#markup' => check_plain($context->title)),
    );
    $content['context_type'] = array(
      '#theme' => 'field',
      '#weight' => 3,
      '#title' => t('Context Type'),
      '#access' => TRUE,
      '#label_display' => 'above',
      '#view_mode' => 'full',
      '#language' => $langcode,
      '#field_name' => 'questionnaire_answer_context_type',
      '#field_type' => 'text',
      '#entity_type' => 'questionnaire_answer',
      '#bundle' => 'questionnaire_answer',
      '#items' => array(array('value' => $entity->context_type)),
      '#formatter' => 'text_default',
      0 => array('#markup' => check_plain($entity->context_type)),
    );
    $content['created'] = array(
      '#theme' => 'field',
      '#weight' => 4,
      '#title' => t('Created'),
      '#access' => TRUE,
      '#label_display' => 'above',
      '#view_mode' => 'full',
      '#language' => $langcode,
      '#field_name' => 'questionnaire_answer_created',
      '#field_type' => 'text',
      '#entity_type' => 'questionnaire_answer',
      '#bundle' => 'questionnaire_answer',
      '#items' => array(array('value' => $entity->created)),
      '#formatter' => 'text_default',
      0 => array('#markup' => check_plain(format_date($entity->created))),
    );
    $content['changed'] = array(
      '#theme' => 'field',
      '#weight' => 5,
      '#title' => t('Changed'),
      '#access' => TRUE,
      '#label_display' => 'above',
      '#view_mode' => 'full',
      '#language' => $langcode,
      '#field_name' => 'questionnaire_answer_changed',
      '#field_type' => 'text',
      '#entity_type' => 'questionnaire_answer',
      '#bundle' => 'questionnaire_answer',
      '#items' => array(array('value' => $entity->changed)),
      '#formatter' => 'text_default',
      0 => array('#markup' => check_plain(format_date($entity->changed))),
    );
    $content['recipient'] = array(
      '#theme' => 'field',
      '#weight' => 6,
      '#title' => t('Recipient'),
      '#access' => TRUE,
      '#label_display' => 'above',
      '#view_mode' => 'full',
      '#language' => $langcode,
      '#field_name' => 'field_recipient',
      '#field_type' => 'text',
      '#entity_type' => 'questionnaire_answer',
      '#bundle' => 'questionnaire_answer',
      '#items' => array(array('value' => $recipient->name)),
      '#formatter' => 'text_default',
      0 => array('#markup' => check_plain($recipient->name)),
    );
    if (isset($entity->eid)) {
      $editors = entity_load('user', array($entity->eid));
      $editor = $editors[$entity->eid];
      $content['editor'] = array(
        '#theme' => 'field',
        '#weight' => 7,
        '#title' => t('Editor'),
        '#access' => TRUE,
        '#label_display' => 'above',
        '#view_mode' => 'full',
        '#language' => $langcode,
        '#field_name' => 'questionnaire_answer_editor',
        '#field_type' => 'text',
        '#entity_type' => 'questionnaire_answer',
        '#bundle' => 'questionnaire_answer',
        '#items' => array(array('value' => $editor->name)),
        '#formatter' => 'text_default',
        0 => array('#markup' => check_plain($editor->name)),
      );
    }
    return $content;
  }

}

/**
 * The submission entity controller.
 */
class QuestionnaireSubmissionController extends EntityAPIController {

  public function __construct($entityType) {
    parent::__construct($entityType);
  }

  /**
   * Create a model type - we first set up the values that are specific
   * to our model type schema but then also go through the EntityAPIController
   * function.
   *
   * @param $type
   *   The machine-readable type of the model.
   *
   * @return
   *   A model type object with all default fields initialized.
   */
  public function create(array $values = array()) {
    // Add values that are specific to our Model
    $values += array(
        'sid' => '',
        'is_new' => TRUE,
        'created' => '',
        'changed' => '',
        'recipient_type' => '',
        'recipient_id' => '',
        'qid' => '',
        'context_type' => '',
        'context_id' => '',
        'answers' => array(),
     );
    $model_type = parent::create($values);
    return $model_type;
  }

  public function saveme(QuestionnaireSubmission $submission) {
    $this->addtaxonomyfields($submission->context);
    $answers = $submission->answers;
    unset($submission->answers);
    $submission->save();
    foreach ($submission->answers as $answer) {
      $answer->sid = $submission->sid;
      $answer->save();
    }
  }
}
