<?php
/**
 * @file
 * questionnaire_default_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function questionnaire_default_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_answers';
  $view->description = 'View for all answers created.';
  $view->tag = 'default';
  $view->base_table = 'questionnaire_answer';
  $view->human_name = 'All Answers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Answers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view questionnaire answers';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'question' => 'question',
    'answer' => 'answer',
    'questionnaire_id' => 'questionnaire_id',
    'recipient_id' => 'recipient_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'question' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'answer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'questionnaire_id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'recipient_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Answer: Submission */
  $handler->display->display_options['relationships']['sid']['id'] = 'sid';
  $handler->display->display_options['relationships']['sid']['table'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['sid']['field'] = 'sid';
  $handler->display->display_options['relationships']['sid']['required'] = TRUE;
  /* Relationship: Submission: Author recipient_id */
  $handler->display->display_options['relationships']['recipient']['id'] = 'recipient';
  $handler->display->display_options['relationships']['recipient']['table'] = 'questionnaire_submission';
  $handler->display->display_options['relationships']['recipient']['field'] = 'recipient';
  $handler->display->display_options['relationships']['recipient']['relationship'] = 'sid';
  $handler->display->display_options['relationships']['recipient']['required'] = TRUE;
  /* Relationship: Answer: Question */
  $handler->display->display_options['relationships']['question']['id'] = 'question';
  $handler->display->display_options['relationships']['question']['table'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['question']['field'] = 'question';
  $handler->display->display_options['relationships']['question']['label'] = 'Question';
  $handler->display->display_options['relationships']['question']['required'] = TRUE;
  /* Relationship: Answer: Questionnaire */
  $handler->display->display_options['relationships']['questionnaire_id']['id'] = 'questionnaire_id';
  $handler->display->display_options['relationships']['questionnaire_id']['table'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['questionnaire_id']['field'] = 'questionnaire_id';
  $handler->display->display_options['relationships']['questionnaire_id']['label'] = 'Questionnaire';
  $handler->display->display_options['relationships']['questionnaire_id']['required'] = TRUE;
  /* Field: Answer: Answer ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Answer: Questionnaire */
  $handler->display->display_options['fields']['questionnaire_id']['id'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id']['table'] = 'views_entity_questionnaire_answer';
  $handler->display->display_options['fields']['questionnaire_id']['field'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['questionnaire_id']['view_mode'] = 'full';
  $handler->display->display_options['fields']['questionnaire_id']['bypass_access'] = 0;
  /* Field: Answer: Questionnaire */
  $handler->display->display_options['fields']['questionnaire_id_1']['id'] = 'questionnaire_id_1';
  $handler->display->display_options['fields']['questionnaire_id_1']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['questionnaire_id_1']['field'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id_1']['label'] = '';
  $handler->display->display_options['fields']['questionnaire_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['questionnaire_id_1']['element_label_colon'] = FALSE;
  /* Field: Answer: Question */
  $handler->display->display_options['fields']['question']['id'] = 'question';
  $handler->display->display_options['fields']['question']['table'] = 'views_entity_questionnaire_answer';
  $handler->display->display_options['fields']['question']['field'] = 'question';
  $handler->display->display_options['fields']['question']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['question']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['question']['view_mode'] = 'full';
  $handler->display->display_options['fields']['question']['bypass_access'] = 0;
  /* Field: Answer: Answer All */
  $handler->display->display_options['fields']['answer']['id'] = 'answer';
  $handler->display->display_options['fields']['answer']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answer']['field'] = 'answer';
  $handler->display->display_options['fields']['answer']['label'] = 'Answer';
  $handler->display->display_options['fields']['answer']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['answer']['alter']['path'] = 'questionnaire_answer/[id]';
  $handler->display->display_options['fields']['answer']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'recipient';
  $handler->display->display_options['fields']['name']['label'] = 'Submitted By';
  /* Field: Answer: Submission */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'views_entity_questionnaire_answer';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sid']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['sid']['bypass_access'] = 0;
  /* Field: Answer: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = 'node/[questionnaire_id_1]/editsubmission/[sid]';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Sort criterion: Answer: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'questionnaire_answer';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date created';
  /* Sort criterion: Answer: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'questionnaire_answer';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Date changed';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'questionnaire_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Questionnaire';
  $handler->display->display_options['filters']['title_1']['expose']['description'] = 'View answers per questionnaire.';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'question';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Question';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'View answers per question.';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'recipient';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'User';
  $handler->display->display_options['filters']['name']['expose']['description'] = 'View answers per user.';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'questionnaire/all-answers';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'All Answers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['all_answers'] = $view;

  $view = new view();
  $view->name = 'all_questionnaires';
  $view->description = 'A view of all questionnaires created.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Questionnaires';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Questionnaires';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view questionnaire';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Created By';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Updated date';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'questionnaire' => 'questionnaire',
  );
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'User';
  $handler->display->display_options['filters']['name']['expose']['description'] = 'View questionnaires created per user.';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'questionnaire/all-questionnaires';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'All Questionnaires';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Questionnaire';
  $handler->display->display_options['tab_options']['weight'] = '1';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';
  $export['all_questionnaires'] = $view;

  $view = new view();
  $view->name = 'all_questions';
  $view->description = 'A view of all questions created.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Questions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Questions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view questions';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Question';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'genre' => 0,
    'tags' => 0,
  );
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Created By';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Updated date';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'questionnaire_question' => 'questionnaire_question',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'User';
  $handler->display->display_options['filters']['name']['expose']['description'] = 'View questions created per user.';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'questionnaire/all-questions';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'All Questions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['all_questions'] = $view;

  $view = new view();
  $view->name = 'all_submissions';
  $view->description = 'A view of all submissions created.';
  $view->tag = 'default';
  $view->base_table = 'questionnaire_submission';
  $view->human_name = 'All Submissions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Submissions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Submission: Author recipient_id */
  $handler->display->display_options['relationships']['recipient']['id'] = 'recipient';
  $handler->display->display_options['relationships']['recipient']['table'] = 'questionnaire_submission';
  $handler->display->display_options['relationships']['recipient']['field'] = 'recipient';
  /* Relationship: Submission: Answer */
  $handler->display->display_options['relationships']['questionnaire_answer']['id'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['questionnaire_answer']['table'] = 'questionnaire_submission';
  $handler->display->display_options['relationships']['questionnaire_answer']['field'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['questionnaire_answer']['required'] = TRUE;
  /* Relationship: Answer: Question */
  $handler->display->display_options['relationships']['question']['id'] = 'question';
  $handler->display->display_options['relationships']['question']['table'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['question']['field'] = 'question';
  $handler->display->display_options['relationships']['question']['relationship'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['question']['label'] = 'Question';
  $handler->display->display_options['relationships']['question']['required'] = TRUE;
  /* Relationship: Answer: Questionnaire */
  $handler->display->display_options['relationships']['questionnaire_id']['id'] = 'questionnaire_id';
  $handler->display->display_options['relationships']['questionnaire_id']['table'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['questionnaire_id']['field'] = 'questionnaire_id';
  $handler->display->display_options['relationships']['questionnaire_id']['relationship'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['questionnaire_id']['label'] = 'Questionnaire';
  $handler->display->display_options['relationships']['questionnaire_id']['required'] = TRUE;
  /* Field: Submission: Submission ID */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'questionnaire_submission';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Field: Answer: Answer All */
  $handler->display->display_options['fields']['answer']['id'] = 'answer';
  $handler->display->display_options['fields']['answer']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answer']['field'] = 'answer';
  $handler->display->display_options['fields']['answer']['relationship'] = 'questionnaire_answer';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'question';
  $handler->display->display_options['fields']['title']['label'] = 'Question';
  /* Field: Submission: Questionnaire_id */
  $handler->display->display_options['fields']['questionnaire_id']['id'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id']['table'] = 'questionnaire_submission';
  $handler->display->display_options['fields']['questionnaire_id']['field'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id']['label'] = '';
  $handler->display->display_options['fields']['questionnaire_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['questionnaire_id']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'questionnaire_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Questionnaire';
  /* Field: Submission: Context_id */
  $handler->display->display_options['fields']['context_id']['id'] = 'context_id';
  $handler->display->display_options['fields']['context_id']['table'] = 'questionnaire_submission';
  $handler->display->display_options['fields']['context_id']['field'] = 'context_id';
  $handler->display->display_options['fields']['context_id']['label'] = 'Context';
  $handler->display->display_options['fields']['context_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['context_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['context_id']['alter']['path'] = 'node/[context_id]';
  /* Field: Submission: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'questionnaire_submission';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Submission: Date changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'questionnaire_submission';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['path'] = 'node/[questionnaire_id]/editsubmission/[sid]';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'recipient';
  $handler->display->display_options['fields']['name']['label'] = 'Submitted By';
  /* Sort criterion: Submission: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'questionnaire_submission';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Date changed';
  /* Sort criterion: Submission: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'questionnaire_submission';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date created';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'question';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Question';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'View submissions per question.';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'questionnaire_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Questionnaire';
  $handler->display->display_options['filters']['title_1']['expose']['description'] = 'View submissions per questionnaire.';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'recipient';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'User';
  $handler->display->display_options['filters']['name']['expose']['description'] = 'View submissions per user.';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'questionnaire/all-submissions';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'All Submissions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['all_submissions'] = $view;

  $view = new view();
  $view->name = 'my_answers';
  $view->description = 'A view that shows all answers submitted by the current user.';
  $view->tag = 'default';
  $view->base_table = 'questionnaire_answer';
  $view->human_name = 'My Answers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Answers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'submit questions';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Answer: Questionnaire */
  $handler->display->display_options['relationships']['questionnaire_id']['id'] = 'questionnaire_id';
  $handler->display->display_options['relationships']['questionnaire_id']['table'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['questionnaire_id']['field'] = 'questionnaire_id';
  $handler->display->display_options['relationships']['questionnaire_id']['label'] = 'Questionnaire';
  $handler->display->display_options['relationships']['questionnaire_id']['required'] = TRUE;
  /* Relationship: Answer: Question */
  $handler->display->display_options['relationships']['question']['id'] = 'question';
  $handler->display->display_options['relationships']['question']['table'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['question']['field'] = 'question';
  $handler->display->display_options['relationships']['question']['label'] = 'Question';
  $handler->display->display_options['relationships']['question']['required'] = TRUE;
  /* Field: Answer: Answer ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Answer: Questionnaire */
  $handler->display->display_options['fields']['questionnaire_id']['id'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id']['table'] = 'views_entity_questionnaire_answer';
  $handler->display->display_options['fields']['questionnaire_id']['field'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['questionnaire_id']['view_mode'] = 'full';
  $handler->display->display_options['fields']['questionnaire_id']['bypass_access'] = 0;
  /* Field: Answer: Question */
  $handler->display->display_options['fields']['question']['id'] = 'question';
  $handler->display->display_options['fields']['question']['table'] = 'views_entity_questionnaire_answer';
  $handler->display->display_options['fields']['question']['field'] = 'question';
  $handler->display->display_options['fields']['question']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['question']['view_mode'] = 'full';
  $handler->display->display_options['fields']['question']['bypass_access'] = 0;
  /* Field: Answer: Answer All */
  $handler->display->display_options['fields']['answer']['id'] = 'answer';
  $handler->display->display_options['fields']['answer']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answer']['field'] = 'answer';
  $handler->display->display_options['fields']['answer']['label'] = 'Answer';
  $handler->display->display_options['fields']['answer']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['answer']['alter']['path'] = 'questionnaire_answer/[id]';
  $handler->display->display_options['fields']['answer']['element_label_colon'] = FALSE;
  /* Field: Answer: Submission */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'views_entity_questionnaire_answer';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sid']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['sid']['bypass_access'] = 0;
  /* Field: Answer: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = 'node/[questionnaire_id]/editsubmission/[sid]';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Answer: Date changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['path'] = 'node/[questionnaire_id]/editsubmission/[sid]';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Sort criterion: Answer: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'questionnaire_answer';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Date changed';
  /* Sort criterion: Answer: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'questionnaire_answer';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date created';
  /* Contextual filter: Answer: Recipient_id */
  $handler->display->display_options['arguments']['recipient_id']['id'] = 'recipient_id';
  $handler->display->display_options['arguments']['recipient_id']['table'] = 'questionnaire_answer';
  $handler->display->display_options['arguments']['recipient_id']['field'] = 'recipient_id';
  $handler->display->display_options['arguments']['recipient_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['recipient_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['recipient_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['recipient_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['recipient_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['recipient_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'questionnaire_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Questionnaire';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'View answers per questionnaire. ';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'question';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Question';
  $handler->display->display_options['filters']['title_1']['expose']['description'] = 'View answers per question.';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user/%/questionnaire/my-answers';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My Answers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['my_answers'] = $view;

  $view = new view();
  $view->name = 'my_questionnaires';
  $view->description = 'A view of all questionnaires created by the current user.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Questionnaires';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Questionnaires';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer questionnaire';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Updated date';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'questionnaire' => 'questionnaire',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Questionnaire';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'View specific questionnaires.';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user/%/questionnaire/questionnaires';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My Questionnaires';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Questionnaire';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['my_questionnaires'] = $view;

  $view = new view();
  $view->name = 'my_questions';
  $view->description = 'A view of all questions created by the current user.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Questions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Questions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create questionnaire_question';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Question';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'genre' => 0,
    'tags' => 0,
  );
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Updated date';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'questionnaire_question' => 'questionnaire_question',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Question';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'View specific questions.';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user/%/questionnaire/my-questions';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My Questions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['my_questions'] = $view;

  $view = new view();
  $view->name = 'my_submissions';
  $view->description = 'A view of all submissions added by the current user.';
  $view->tag = 'default';
  $view->base_table = 'questionnaire_submission';
  $view->human_name = 'My Submissions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Submissions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'submit questions';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Submission: Answer */
  $handler->display->display_options['relationships']['questionnaire_answer']['id'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['questionnaire_answer']['table'] = 'questionnaire_submission';
  $handler->display->display_options['relationships']['questionnaire_answer']['field'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['questionnaire_answer']['required'] = TRUE;
  /* Relationship: Answer: Questionnaire */
  $handler->display->display_options['relationships']['questionnaire_id']['id'] = 'questionnaire_id';
  $handler->display->display_options['relationships']['questionnaire_id']['table'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['questionnaire_id']['field'] = 'questionnaire_id';
  $handler->display->display_options['relationships']['questionnaire_id']['relationship'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['questionnaire_id']['label'] = 'Answer-Questionnaire';
  $handler->display->display_options['relationships']['questionnaire_id']['required'] = TRUE;
  /* Relationship: Answer: Question */
  $handler->display->display_options['relationships']['question']['id'] = 'question';
  $handler->display->display_options['relationships']['question']['table'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['question']['field'] = 'question';
  $handler->display->display_options['relationships']['question']['relationship'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['question']['label'] = 'Answer-Question';
  $handler->display->display_options['relationships']['question']['required'] = TRUE;
  /* Field: Submission: Questionnaire_id */
  $handler->display->display_options['fields']['questionnaire_id']['id'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id']['table'] = 'questionnaire_submission';
  $handler->display->display_options['fields']['questionnaire_id']['field'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id']['label'] = '';
  $handler->display->display_options['fields']['questionnaire_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['questionnaire_id']['element_label_colon'] = FALSE;
  /* Field: Submission: Submission ID */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'questionnaire_submission';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Field: Answer: Answer All */
  $handler->display->display_options['fields']['answer']['id'] = 'answer';
  $handler->display->display_options['fields']['answer']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answer']['field'] = 'answer';
  $handler->display->display_options['fields']['answer']['relationship'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answer']['label'] = 'Answer';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'question';
  $handler->display->display_options['fields']['title_1']['label'] = 'Question';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'questionnaire_id';
  $handler->display->display_options['fields']['title']['label'] = 'Questionnaire';
  /* Field: Submission: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'questionnaire_submission';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Submission: Date changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'questionnaire_submission';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['path'] = 'node/[questionnaire_id]/editsubmission/[sid]';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Sort criterion: Submission: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'questionnaire_submission';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Date changed';
  /* Sort criterion: Submission: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'questionnaire_submission';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date created';
  /* Contextual filter: Answer: Recipient_id */
  $handler->display->display_options['arguments']['recipient_id']['id'] = 'recipient_id';
  $handler->display->display_options['arguments']['recipient_id']['table'] = 'questionnaire_answer';
  $handler->display->display_options['arguments']['recipient_id']['field'] = 'recipient_id';
  $handler->display->display_options['arguments']['recipient_id']['relationship'] = 'questionnaire_answer';
  $handler->display->display_options['arguments']['recipient_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['recipient_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['recipient_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['recipient_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['recipient_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Answer: Answer All */
  $handler->display->display_options['filters']['answer']['id'] = 'answer';
  $handler->display->display_options['filters']['answer']['table'] = 'questionnaire_answer';
  $handler->display->display_options['filters']['answer']['field'] = 'answer';
  $handler->display->display_options['filters']['answer']['relationship'] = 'questionnaire_answer';
  $handler->display->display_options['filters']['answer']['operator'] = 'contains';
  $handler->display->display_options['filters']['answer']['group'] = 1;
  $handler->display->display_options['filters']['answer']['exposed'] = TRUE;
  $handler->display->display_options['filters']['answer']['expose']['operator_id'] = 'answer_op';
  $handler->display->display_options['filters']['answer']['expose']['label'] = 'Answer';
  $handler->display->display_options['filters']['answer']['expose']['description'] = 'View submissions per answer.';
  $handler->display->display_options['filters']['answer']['expose']['operator'] = 'answer_op';
  $handler->display->display_options['filters']['answer']['expose']['identifier'] = 'answer';
  $handler->display->display_options['filters']['answer']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'question';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Question';
  $handler->display->display_options['filters']['title_1']['expose']['description'] = 'View submissions per question.';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'questionnaire_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Questionnaire';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'View submissions per questionnaire.';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user/%/questionnaire/submissions';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'My Submissions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Questionnaire';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['my_submissions'] = $view;

  return $export;
}
