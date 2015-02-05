<?php
// $Id: questionnaire_views.views.inc,v 1.1.2.1 2010/12/21 07:38:27 batje Exp $
/**
 * @file
 * File that defines the Answers table and its relationships and the
 * Access plugin for views that controls wether we see views
 * based on if there are anwsers or not.
 */

/**
 * Implementation of hook_views_data().
 */
function questionnaire_views_views_data() {

  watchdog("questionnaire_views", "reading the views_data");

  $data['questionnaire_answer']['table']['group']  = t('Questionnaire');

  // Advertise this table as a possible base table
  $data['questionnaire_answer']['table']['base'] = array(
    'field' => 'id',
    'title' => t('Answer'),
    'help' => t('Answers are answers to Questions.'),
    'weight' => -11,
  );
  $data['questionnaire_answer']['table']['join']['node'] = array(
    // this explains how the 'node' table (named in the line above)
    // links toward the node_revisions table. //    'questionnaire_views' => array( //      'handler' => 'views_join', // this is actually optional
    'left_table' => 'node', // Because this is a direct link it could be left out.
    'left_field' => 'nid',
    'field' => 'question',
    'type' => 'INNER',
    // also supported: //       'type' => 'INNER', //       'extra' => array(array('field' => 'fieldname', 'value' => 'value', 'operator' => '='))
    //   Unfortunately, you can't specify other tables here, but you can construct
    //   alternative joins in the handlers that can do that. //       'table' => 'node', //     ),
  );


//  $data['questionnaire_answer']['table']['join'] = array(
  // this explains how the 'node' table (named in the line above)
  // links toward the node_revisions table.
//    'context' => array(
//     'handler' => 'views_join', // this is actually optional
//      'left_table' => 'node', // Because this is a direct link it could be left out.
//      'left_field' => 'nid',
//      'field' => 'context',
  // also supported:
//       'type' => 'INNER',
//       'extra' => array(array('field' => 'fieldname', 'value' => 'value', 'operator' => '='))
//   Unfortunately, you can't specify other tables here, but you can construct
//   alternative joins in the handlers that can do that.
//      'table' => 'node',
//     ),
//  );



  $data['questionnaire_answer']['id'] = array(
    'title' => t('Answer Id'),
    'help' => t('The Anwser Id.'), // The help that appears on the UI,
    // Information for displaying the nid
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => FALSE,
    ),
  );

  $data['questionnaire_answer']['answer'] = array(
    'title' => t('Answer'),
    'help' => t('The Anwser.'), // The help that appears on the UI,
    // Information for displaying the nid
    'field' => array(
      'handler' => 'views_handler_field_node',
      'click sortable' => TRUE,
    ),
    // Information for accepting a nid as an argument
    'argument' => array(
      'handler' => 'views_handler_argument_string',
      'parent' => 'views_handler_argument_text', // make sure parent is included
      'name field' => 'answer', // the field to display in the summary.
      'numeric' => FALSE,
    ),
    // Information for sorting on a nid.
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // Question
  $data['questionnaire_answer']['question'] = array(
    'group' => t('Questionnaire'),
    'title' => "Question",
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'help' => t('Question Nid as an argument.'),
      'handler' => 'views_handler_argument_node_nid',
      'parent' => 'views_handler_argument_numeric', // make sure parent is included
      'name field' => 'question', // the field to display in the summary.
      'numeric' => TRUE,
    ),
    'relationship' => array(
      'help' => t('Link in the Question to the Answer.'),
      'title' => t('Link in the Question to the Answer'),
      'label' => t('Link in the Question to the Answer'),
      'base' => 'node',
      'base field' => 'nid',
      'relationship field' => 'question',
    ),
  );

  // questionnaire This is the container that held the original question upon submission
  $data['questionnaire_answer']['uid'] = array(
    'group' => t('Questionnaire'),
    'title' => "User",
    'argument' => array(
      'help' => t('User who submitted the answers.'),
      'handler' => 'views_handler_argument_user_uid',
      'parent' => 'views_handler_argument_numeric', // make sure parent is included
      'name field' => 'uid', // the field to display in the summary.
      'numeric' => TRUE,
    ),
    'relationship' => array(
      'help' => t('Link in the Answering User.'),
      'label' => t('Link in the Answering User'),
      'base' => 'users',
      'base field' => 'uid',
      'relationship field' => 'uid',
    ),
  );

  // questionnaire This is the container that held the original question upon submission
  $data['questionnaire_answer']['sid'] = array(
    'group' => t('Questionnaire'),
    'title' => "Submission",
    'argument' => array(
      'help' => t('Submission Sid as an argument. .'),
      'handler' => 'views_handler_argument_numeric',
      //      'parent' => 'views_handler_argument_numeric', // make sure parent is included
      'name field' => 'sid', // the field to display in the summary.
      'numeric' => TRUE,
    ),
    'relationship' => array(
      'help' => t('Link in the Submission of the Answer.'),
      'label' => t('Link in the Submission of the Answer.'),
      'base' => 'questionnaire_submission',
      'base field' => 'sid',
      'relationship field' => 'sid',
    ),
  );

  // questionnaire This is the container that held the original question upon submission
  $data['questionnaire_answer']['qnid'] = array(
    'group' => t('Questionnaire'),
    'title' => "questionnaire",
    'argument' => array(
      'help' => t('Questionnaire Nid as an argument. This may be a questionnaire content type, but does not have to.'),
      'handler' => 'views_handler_argument_node_nid',
      'parent' => 'views_handler_argument_numeric', // make sure parent is included
      'name field' => 'qnid', // the field to display in the summary.
      'numeric' => TRUE,
    ),
    'relationship' => array(
      'help' => t('Link in the questionnaire of the Answer.'),
      'label' => t('Link in the questionnaire of the Answer'),
      'base' => 'node',
      'base field' => 'nid',
      'relationship field' => 'qnid',
    ),
  );

  // Context
  $data['questionnaire_answer']['context'] = array(
    'group' => t('Questionnaire'),
    'title' => "Context",
    'argument' => array(
      'help' => t('Context Nid as an argument.'),
      'handler' => 'views_handler_argument_node_nid',
      'parent' => 'views_handler_argument_numeric', // make sure parent is included
      'name field' => 'context', // the field to display in the summary.
      'numeric' => TRUE,
    ),
    'relationship' => array(
      'help' => t('Link in the Context of the Answer.'),
      'label' => t('Link in the Context of the Answer'),
      'base' => 'node',
      'base field' => 'nid',
      'relationship field' => 'context',
    ),
  );

  // created field
  $data['questionnaire_answer']['created'] = array(
    'title' => t('Post date'), // The item it appears as on the UI,
    'help' => t('The date the node was posted.'), // The help that appears on the UI,
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  $data['questionnaire_submission']['table']['group']  = t('Questionnaire');

  // Advertise this table as a possible base table
  $data['questionnaire_submission']['table']['base'] = array(
    'field' => 'sid',
    'title' => t('Submissions'),
    'help' => t("Submissions are a group of answers submitted at the same time."),
    'weight' => -10,
  );

  $data['questionnaire_submission']['table']['join']['node'] = array(
    // this explains how the 'node' table (named in the line above)
    // links toward the node_revisions table. //    'questionnaire_views' => array( //      'handler' => 'views_join', // this is actually optional
    'left_table' => 'questionnaire_answer', // Because this is a direct link it could be left out.
    'left_field' => 'sid',
    'field' => 'sid',
    'type' => 'INNER',
    // also supported: //       'type' => 'INNER', //       'extra' => array(array('field' => 'fieldname', 'value' => 'value', 'operator' => '='))
    //   Unfortunately, you can't specify other tables here, but you can construct
    //   alternative joins in the handlers that can do that. //       'table' => 'node', //     ),
  );

  $data['questionnaire_submission']['sid'] = array(
    'title' => t('Submission Id'),
    'help' => t('The Submission Id.'), // The help that appears on the UI,
    // Information for displaying the nid
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => FALSE,
    ),
    'argument' => array(
      'help' => t('Submission as an argument.'),
      'handler' => 'views_handler_argument_numeric',
      //      'parent' => 'views_handler_argument_numeric', // make sure parent is included
      'name field' => 'sid', // the field to display in the summary.
      'numeric' => TRUE,
    ),
  );

  // questionnaire This is the container that held the original question upon submission
  $data['questionnaire_submission']['uid'] = array(
    'group' => t('Questionnaire'),
    'title' => "User",
    'argument' => array(
      'help' => t('User who made the submission.'),
      'handler' => 'views_handler_argument_user_uid',
      'parent' => 'views_handler_argument_numeric', // make sure parent is included
      'name field' => 'uid', // the field to display in the summary.
      'numeric' => TRUE,
    ),
    'relationship' => array(
      'help' => t('Link in the Submitting User.'),
      'label' => t('Link in the Submitting User'),
      'base' => 'users',
      'base field' => 'uid',
      'relationship field' => 'uid',
    ),
  );

  // questionnaire This is the container that held the original question upon submission
  $data['questionnaire_submission']['qnid'] = array(
    'group' => t('Questionnaire'),
    'title' => "questionnaire",
    'argument' => array(
      'help' => t('Questionnaire Nid as an argument. This may be a questionnaire content type, but does not have to.'),
      'handler' => 'views_handler_argument_node_nid',
      'parent' => 'views_handler_argument_numeric', // make sure parent is included
      'name field' => 'qnid', // the field to display in the summary.
      'numeric' => TRUE,
    ),
    'relationship' => array(
      'help' => t('Link in the questionnaire of the Submission.'),
      'label' => t('Link in the questionnaire of the Submission'),
      'base' => 'node',
      'base field' => 'nid',
      'relationship field' => 'qnid',
    ),
  );

  // Context
  $data['questionnaire_submission']['context'] = array(
    'group' => t('Questionnaire'),
    'title' => "Context",
    'argument' => array(
      'help' => t('Context Nid as an argument.'),
      'handler' => 'views_handler_argument_node_nid',
      'parent' => 'views_handler_argument_numeric', // make sure parent is included
      'name field' => 'context', // the field to display in the summary.
      'numeric' => TRUE,
    ),
    'relationship' => array(
      'help' => t('Link in the Context of the Submission.'),
      'label' => t('Link in the Context of the Submission'),
      'base' => 'node',
      'base field' => 'nid',
      'relationship field' => 'context',
    ),
  );

  // created field
  $data['questionnaire_submission']['created'] = array(
    'title' => t('Post date'), // The item it appears as on the UI,
    'help' => t('The date the node was posted.'), // The help that appears on the UI,
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );


  return $data;
}
