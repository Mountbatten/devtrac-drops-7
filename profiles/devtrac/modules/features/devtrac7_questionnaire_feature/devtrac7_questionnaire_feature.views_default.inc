<?php
/**
 * @file
 * devtrac7_questionnaire_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_questionnaire_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'devtrac_answers_barcharts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'questionnaire_answer';
  $view->human_name = 'Devtrac Answers Barcharts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Devtrac Answers Area Charts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'noresult text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Your search did not return any results. Making your search less specific give you a higher chance of finding what you are looking for.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Relationship: Answer: Question */
  $handler->display->display_options['relationships']['question']['id'] = 'question';
  $handler->display->display_options['relationships']['question']['table'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['question']['field'] = 'question';
  $handler->display->display_options['relationships']['question']['label'] = 'Question';
  $handler->display->display_options['relationships']['question']['required'] = TRUE;
  /* Field: Answer: Answer Text */
  $handler->display->display_options['fields']['answertext_2']['id'] = 'answertext_2';
  $handler->display->display_options['fields']['answertext_2']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answertext_2']['field'] = 'answertext';
  /* Field: Answer: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  /* Field: Answer: Answer Text */
  $handler->display->display_options['fields']['answertext_1']['id'] = 'answertext_1';
  $handler->display->display_options['fields']['answertext_1']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answertext_1']['field'] = 'answertext';
  $handler->display->display_options['fields']['answertext_1']['label'] = '';
  $handler->display->display_options['fields']['answertext_1']['element_label_colon'] = FALSE;
  /* Field: Answer: Answer Number */
  $handler->display->display_options['fields']['answernumber']['id'] = 'answernumber';
  $handler->display->display_options['fields']['answernumber']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answernumber']['field'] = 'answernumber';
  $handler->display->display_options['fields']['answernumber']['precision'] = '0';
  /* Contextual filter: Answer: Question */
  $handler->display->display_options['arguments']['question']['id'] = 'question';
  $handler->display->display_options['arguments']['question']['table'] = 'questionnaire_answer';
  $handler->display->display_options['arguments']['question']['field'] = 'question';
  $handler->display->display_options['arguments']['question']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['question']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['question']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['question']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['question']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Answer: Context_id */
  $handler->display->display_options['arguments']['context_id']['id'] = 'context_id';
  $handler->display->display_options['arguments']['context_id']['table'] = 'questionnaire_answer';
  $handler->display->display_options['arguments']['context_id']['field'] = 'context_id';
  $handler->display->display_options['arguments']['context_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['context_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['context_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['context_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['context_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: The type of question. (questionnaire_question_type) */
  $handler->display->display_options['filters']['questionnaire_question_type_value']['id'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['table'] = 'field_data_questionnaire_question_type';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['field'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['relationship'] = 'question';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['value'] = array(
    'number' => 'number',
  );
  $handler->display->display_options['filters']['questionnaire_question_type_value']['expose']['operator_id'] = 'questionnaire_question_type_value_op';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['expose']['label'] = 'The type of question. (questionnaire_question_type)';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['expose']['operator'] = 'questionnaire_question_type_value_op';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['expose']['identifier'] = 'questionnaire_question_type_value';

  /* Display: Answer Barchart by Context */
  $handler = $view->new_display('block', 'Answer Barchart by Context', 'block');
  $handler->display->display_options['display_description'] = 'Provided with question nid and contextnid renders a Barchart';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'charts';
  $handler->display->display_options['style_options']['width'] = '100%';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['type'] = array(
    'bluff' => 'line',
    'flot' => 'area',
  );
  $handler->display->display_options['style_options']['showlegend'] = 0;
  $handler->display->display_options['style_options']['zoom'] = 0;
  $handler->display->display_options['style_options']['views_charts_series_fields'] = array(
    'answernumber' => 'answernumber',
  );
  $handler->display->display_options['style_options']['views_charts_x_labels'] = 'created';
  $handler->display->display_options['style_options']['engine'] = 'flot';
  $handler->display->display_options['style_options']['y_min'] = '';
  $handler->display->display_options['style_options']['y_max'] = '';
  $handler->display->display_options['style_options']['y_step'] = '';
  $handler->display->display_options['style_options']['y_legend'] = '';
  $handler->display->display_options['style_options']['background_colour'] = '';
  $handler->display->display_options['style_options']['series_colours'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Answer: Answer Text */
  $handler->display->display_options['fields']['answertext_2']['id'] = 'answertext_2';
  $handler->display->display_options['fields']['answertext_2']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answertext_2']['field'] = 'answertext';
  $handler->display->display_options['fields']['answertext_2']['label'] = 'Answer';
  /* Field: Answer: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  /* Field: Answer: Answer Text */
  $handler->display->display_options['fields']['answertext_1']['id'] = 'answertext_1';
  $handler->display->display_options['fields']['answertext_1']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answertext_1']['field'] = 'answertext';
  $handler->display->display_options['fields']['answertext_1']['label'] = '';
  $handler->display->display_options['fields']['answertext_1']['element_label_colon'] = FALSE;
  /* Field: Answer: Answer Number */
  $handler->display->display_options['fields']['answernumber']['id'] = 'answernumber';
  $handler->display->display_options['fields']['answernumber']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answernumber']['field'] = 'answernumber';
  $handler->display->display_options['fields']['answernumber']['precision'] = '0';
  $handler->display->display_options['fields']['answernumber']['separator'] = '';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'answer_barchart_page');
  $handler->display->display_options['path'] = 'question/%/%/barchart';
  $export['devtrac_answers_barcharts'] = $view;

  $view = new view();
  $view->name = 'devtrac_answers_piecharts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'questionnaire_answer';
  $view->human_name = 'Devtrac Answers Piecharts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sample Statistics';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'charts';
  $handler->display->display_options['style_options']['width'] = '100%';
  $handler->display->display_options['style_options']['height'] = '200';
  $handler->display->display_options['style_options']['type'] = array(
    'bluff' => 'line',
    'flot' => 'pie',
  );
  $handler->display->display_options['style_options']['showlegend'] = 1;
  $handler->display->display_options['style_options']['zoom'] = 0;
  $handler->display->display_options['style_options']['views_charts_series_fields'] = array(
    'answertext' => 'answertext',
  );
  $handler->display->display_options['style_options']['views_charts_x_labels'] = 'answertext_1';
  $handler->display->display_options['style_options']['engine'] = 'flot';
  $handler->display->display_options['style_options']['y_min'] = '';
  $handler->display->display_options['style_options']['y_max'] = '';
  $handler->display->display_options['style_options']['y_step'] = '';
  $handler->display->display_options['style_options']['y_legend'] = '';
  $handler->display->display_options['style_options']['background_colour'] = '';
  $handler->display->display_options['style_options']['series_colours'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Answer: Question */
  $handler->display->display_options['relationships']['question']['id'] = 'question';
  $handler->display->display_options['relationships']['question']['table'] = 'questionnaire_answer';
  $handler->display->display_options['relationships']['question']['field'] = 'question';
  $handler->display->display_options['relationships']['question']['label'] = 'Question';
  $handler->display->display_options['relationships']['question']['required'] = TRUE;
  /* Field: COUNT(Answer (Count)) */
  $handler->display->display_options['fields']['answertext']['id'] = 'answertext';
  $handler->display->display_options['fields']['answertext']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answertext']['field'] = 'answertext';
  $handler->display->display_options['fields']['answertext']['group_type'] = 'count';
  $handler->display->display_options['fields']['answertext']['ui_name'] = 'Answer (Count)';
  $handler->display->display_options['fields']['answertext']['label'] = '';
  $handler->display->display_options['fields']['answertext']['element_label_colon'] = FALSE;
  /* Field: Answer: Answer Text */
  $handler->display->display_options['fields']['answertext_1']['id'] = 'answertext_1';
  $handler->display->display_options['fields']['answertext_1']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answertext_1']['field'] = 'answertext';
  $handler->display->display_options['fields']['answertext_1']['label'] = '';
  $handler->display->display_options['fields']['answertext_1']['element_label_colon'] = FALSE;
  /* Contextual filter: Answer: Question */
  $handler->display->display_options['arguments']['question']['id'] = 'question';
  $handler->display->display_options['arguments']['question']['table'] = 'questionnaire_answer';
  $handler->display->display_options['arguments']['question']['field'] = 'question';
  $handler->display->display_options['arguments']['question']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['question']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['question']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['question']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['question']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Answer: Context_id */
  $handler->display->display_options['arguments']['context_id']['id'] = 'context_id';
  $handler->display->display_options['arguments']['context_id']['table'] = 'questionnaire_answer';
  $handler->display->display_options['arguments']['context_id']['field'] = 'context_id';
  $handler->display->display_options['arguments']['context_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['context_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['context_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['context_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['context_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: The type of question. (questionnaire_question_type) */
  $handler->display->display_options['filters']['questionnaire_question_type_value']['id'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['table'] = 'field_data_questionnaire_question_type';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['field'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['relationship'] = 'question';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['value'] = array(
    'select' => 'select',
    'checkboxes' => 'checkboxes',
  );

  /* Display: Answer Piechart by Context */
  $handler = $view->new_display('block', 'Answer Piechart by Context', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Pie Chart';
  $handler->display->display_options['display_description'] = 'Provided with question nid and contextnid renders a piechart';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: The type of question. (questionnaire_question_type) */
  $handler->display->display_options['filters']['questionnaire_question_type_value']['id'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['table'] = 'field_data_questionnaire_question_type';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['field'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['relationship'] = 'question';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['value'] = array(
    'select' => 'select',
    'checkboxes' => 'checkboxes',
  );

  /* Display: Answer Piechart by District */
  $handler = $view->new_display('block', 'Answer Piechart by District', 'district');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Provided with question nid and contextnid renders a piechart';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Answer (Count)) */
  $handler->display->display_options['fields']['answertext']['id'] = 'answertext';
  $handler->display->display_options['fields']['answertext']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answertext']['field'] = 'answertext';
  $handler->display->display_options['fields']['answertext']['group_type'] = 'count';
  $handler->display->display_options['fields']['answertext']['ui_name'] = 'Answer (Count)';
  $handler->display->display_options['fields']['answertext']['label'] = '';
  $handler->display->display_options['fields']['answertext']['element_label_colon'] = FALSE;
  /* Field: Answer: Answer Text */
  $handler->display->display_options['fields']['answertext_1']['id'] = 'answertext_1';
  $handler->display->display_options['fields']['answertext_1']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answertext_1']['field'] = 'answertext';
  $handler->display->display_options['fields']['answertext_1']['label'] = '';
  $handler->display->display_options['fields']['answertext_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'questionnaire_answer_question_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'questionnaire_answer_question_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: The type of question. (questionnaire_question_type) */
  $handler->display->display_options['filters']['questionnaire_question_type_value']['id'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['table'] = 'field_data_questionnaire_question_type';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['field'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['relationship'] = 'questionnaire_answer_question_target_id';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['value'] = array(
    'radios' => 'radios',
  );
  /* Filter criterion: Answer: Answer Text */
  $handler->display->display_options['filters']['answertext']['id'] = 'answertext';
  $handler->display->display_options['filters']['answertext']['table'] = 'questionnaire_answer';
  $handler->display->display_options['filters']['answertext']['field'] = 'answertext';
  $handler->display->display_options['filters']['answertext']['operator'] = 'word';
  $handler->display->display_options['filters']['answertext']['value'] = 'Yes No';
  $handler->display->display_options['block_description'] = 'Answers Pie District';

  /* Display: Answer District Pie Question */
  $handler = $view->new_display('block', 'Answer District Pie Question', 'sample');
  $handler->display->display_options['display_description'] = 'Only shows the question that belongs to the district pie';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'questionnaire_answer_question_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'questionnaire_answer_question_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: The type of question. (questionnaire_question_type) */
  $handler->display->display_options['filters']['questionnaire_question_type_value']['id'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['table'] = 'field_data_questionnaire_question_type';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['field'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['relationship'] = 'questionnaire_answer_question_target_id';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['value'] = array(
    'radios' => 'radios',
  );
  /* Filter criterion: Answer: Answer Text */
  $handler->display->display_options['filters']['answertext']['id'] = 'answertext';
  $handler->display->display_options['filters']['answertext']['table'] = 'questionnaire_answer';
  $handler->display->display_options['filters']['answertext']['field'] = 'answertext';
  $handler->display->display_options['filters']['answertext']['operator'] = 'word';
  $handler->display->display_options['filters']['answertext']['value'] = 'Yes No';
  $handler->display->display_options['block_description'] = 'Answers Pie District Question';

  /* Display: Table for practise */
  $handler = $view->new_display('block', 'Table for practise', 'block_1');
  $handler->display->display_options['display_description'] = 'Provided with question nid and contextnid renders a piechart';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'answertext' => 'answertext',
    'answertext_1' => 'answertext_1',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'answertext' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'answertext_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Answer (Count)) */
  $handler->display->display_options['fields']['answertext']['id'] = 'answertext';
  $handler->display->display_options['fields']['answertext']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answertext']['field'] = 'answertext';
  $handler->display->display_options['fields']['answertext']['group_type'] = 'count';
  $handler->display->display_options['fields']['answertext']['ui_name'] = 'Answer (Count)';
  $handler->display->display_options['fields']['answertext']['label'] = '';
  $handler->display->display_options['fields']['answertext']['element_label_colon'] = FALSE;
  /* Field: Answer: Answer Text */
  $handler->display->display_options['fields']['answertext_1']['id'] = 'answertext_1';
  $handler->display->display_options['fields']['answertext_1']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answertext_1']['field'] = 'answertext';
  $handler->display->display_options['fields']['answertext_1']['label'] = '';
  $handler->display->display_options['fields']['answertext_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'questionnaire_answer_question_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'questionnaire_answer_question_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: The type of question. (questionnaire_question_type) */
  $handler->display->display_options['filters']['questionnaire_question_type_value']['id'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['table'] = 'field_data_questionnaire_question_type';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['field'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['relationship'] = 'questionnaire_answer_question_target_id';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['value'] = array(
    'radios' => 'radios',
  );
  /* Filter criterion: Answer: Answer Text */
  $handler->display->display_options['filters']['answertext']['id'] = 'answertext';
  $handler->display->display_options['filters']['answertext']['table'] = 'questionnaire_answer';
  $handler->display->display_options['filters']['answertext']['field'] = 'answertext';
  $handler->display->display_options['filters']['answertext']['operator'] = 'word';
  $handler->display->display_options['filters']['answertext']['value'] = 'Yes No';
  $handler->display->display_options['block_description'] = 'Answers Pie District Sample Table';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'charts';
  $handler->display->display_options['style_options']['type'] = array(
    'bluff' => 'line',
    'flot' => 'pie',
  );
  $handler->display->display_options['style_options']['showlegend'] = 0;
  $handler->display->display_options['style_options']['zoom'] = 0;
  $handler->display->display_options['style_options']['views_charts_series_fields'] = array(
    'answertext' => 'answertext',
  );
  $handler->display->display_options['style_options']['views_charts_x_labels'] = 'answertext_1';
  $handler->display->display_options['style_options']['engine'] = 'flot';
  $handler->display->display_options['style_options']['y_min'] = '';
  $handler->display->display_options['style_options']['y_legend'] = '';
  $handler->display->display_options['style_options']['series_colours'] = '#123456,#6654321,#1177ff';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'answersbycontext/%/%';
  $export['devtrac_answers_piecharts'] = $view;

  $view = new view();
  $view->name = 'devtrac_sitevisit_answer_subjects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Devtrac Sitevisit Answer Sector';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Devtrac Sitevisit Answer Sector';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'quicktabs';
  $handler->display->display_options['style_options']['tab_style'] = 'nostyle';
  $handler->display->display_options['style_options']['tab_title_field'] = 'name';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '734';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['view'] = 'devtrac_sitevisit_answers';
  $handler->display->display_options['fields']['view']['display'] = 'block';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_8' => 'vocabulary_8',
  );

  /* Display: Siteviisit Answer Sector Block */
  $handler = $view->new_display('block', 'Siteviisit Answer Sector Block', 'block');
  $handler->display->display_options['display_comment'] = 'This block just groups the different sector of questions. The real rendering of the answers is done by the Devtrac Sitevisit Answer view';
  $handler->display->display_options['display_description'] = 'Shows answers to questions, grouped by sector. ';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<h3>[name] </h3>';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Pie Chart */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['ui_name'] = 'Pie Chart';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'devtrac_sitevisit_answers';
  $handler->display->display_options['fields']['view_1']['display'] = 'block_1';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!tid]';
  /* Field: Extended View (Radio &amp; Select) */
  $handler->display->display_options['fields']['view_5']['id'] = 'view_5';
  $handler->display->display_options['fields']['view_5']['table'] = 'views';
  $handler->display->display_options['fields']['view_5']['field'] = 'view';
  $handler->display->display_options['fields']['view_5']['ui_name'] = 'Extended View (Radio & Select)';
  $handler->display->display_options['fields']['view_5']['label'] = '';
  $handler->display->display_options['fields']['view_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_5']['view'] = 'devtrac_sitevisit_answers';
  $handler->display->display_options['fields']['view_5']['display'] = 'block';
  $handler->display->display_options['fields']['view_5']['arguments'] = '[!tid]';
  /* Field: Numeric Barcharts */
  $handler->display->display_options['fields']['view_2']['id'] = 'view_2';
  $handler->display->display_options['fields']['view_2']['table'] = 'views';
  $handler->display->display_options['fields']['view_2']['field'] = 'view';
  $handler->display->display_options['fields']['view_2']['ui_name'] = 'Numeric Barcharts';
  $handler->display->display_options['fields']['view_2']['label'] = '';
  $handler->display->display_options['fields']['view_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_2']['view'] = 'devtrac_sitevisit_answers';
  $handler->display->display_options['fields']['view_2']['display'] = 'block_4';
  $handler->display->display_options['fields']['view_2']['arguments'] = '[!tid]';
  /* Field: Sidebar (Numbers) */
  $handler->display->display_options['fields']['view_3']['id'] = 'view_3';
  $handler->display->display_options['fields']['view_3']['table'] = 'views';
  $handler->display->display_options['fields']['view_3']['field'] = 'view';
  $handler->display->display_options['fields']['view_3']['ui_name'] = 'Sidebar (Numbers)';
  $handler->display->display_options['fields']['view_3']['label'] = '';
  $handler->display->display_options['fields']['view_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_3']['view'] = 'devtrac_sitevisit_answers';
  $handler->display->display_options['fields']['view_3']['display'] = 'sidebar';
  $handler->display->display_options['fields']['view_3']['arguments'] = '[!tid]';
  /* Field: Points */
  $handler->display->display_options['fields']['view_4']['id'] = 'view_4';
  $handler->display->display_options['fields']['view_4']['table'] = 'views';
  $handler->display->display_options['fields']['view_4']['field'] = 'view';
  $handler->display->display_options['fields']['view_4']['ui_name'] = 'Points';
  $handler->display->display_options['fields']['view_4']['label'] = '';
  $handler->display->display_options['fields']['view_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_4']['view'] = 'devtrac_sitevisit_answers';
  $handler->display->display_options['fields']['view_4']['display'] = 'block_3';
  $handler->display->display_options['fields']['view_4']['arguments'] = '[!tid]';
  $export['devtrac_sitevisit_answer_subjects'] = $view;

  $view = new view();
  $view->name = 'devtrac_sitevisit_answers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'questionnaire_answer';
  $view->human_name = 'Devtrac Sitevisit Answers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Devtrac Sitevisit Answers';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'questionnaire_question_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'answertext' => 'answertext',
    'title' => 'title',
    'questionnaire_question_type' => 'questionnaire_question_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'answertext' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'questionnaire_question_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
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
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Answer: Answer Text */
  $handler->display->display_options['fields']['answertext']['id'] = 'answertext';
  $handler->display->display_options['fields']['answertext']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answertext']['field'] = 'answertext';
  $handler->display->display_options['fields']['answertext']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['answertext']['label'] = 'Answertext';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'questionnaire_answer_question_target_id';
  /* Field: Answer: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  /* Contextual filter: Answer: Context_id */
  $handler->display->display_options['arguments']['context_id']['id'] = 'context_id';
  $handler->display->display_options['arguments']['context_id']['table'] = 'questionnaire_answer';
  $handler->display->display_options['arguments']['context_id']['field'] = 'context_id';
  $handler->display->display_options['arguments']['context_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['context_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['context_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['context_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['context_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: The type of question. (questionnaire_question_type) */
  $handler->display->display_options['filters']['questionnaire_question_type_value']['id'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['table'] = 'field_data_questionnaire_question_type';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['field'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['relationship'] = 'question';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['value'] = array(
    'number' => 'number',
  );

  /* Display: Siteviisit Answer Pie Block */
  $handler = $view->new_display('block', 'Siteviisit Answer Pie Block', 'block_1');
  $handler->display->display_options['display_comment'] = 'This view is *always* called as a field on the Devtrac Sitevisit Answer Sector';
  $handler->display->display_options['display_description'] = 'Shows answers for a siteviisit in a Pie, filtered by Sector tag.';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Answer: Context_id */
  $handler->display->display_options['fields']['context_id']['id'] = 'context_id';
  $handler->display->display_options['fields']['context_id']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['context_id']['field'] = 'context_id';
  $handler->display->display_options['fields']['context_id']['exclude'] = TRUE;
  /* Field: Answer: Question */
  $handler->display->display_options['fields']['question']['id'] = 'question';
  $handler->display->display_options['fields']['question']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['question']['field'] = 'question';
  $handler->display->display_options['fields']['question']['exclude'] = TRUE;
  $handler->display->display_options['fields']['question']['separator'] = '';
  /* Field: The Pie Chart */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'The Pie Chart';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'devtrac_answers_piecharts';
  $handler->display->display_options['fields']['view']['display'] = 'block';
  $handler->display->display_options['fields']['view']['arguments'] = '[!question]/[!context_id]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'question';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'question';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title_1']['label'] = 'Question';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: The type of question. (questionnaire_question_type) */
  $handler->display->display_options['filters']['questionnaire_question_type_value']['id'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['table'] = 'field_data_questionnaire_question_type';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['field'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['relationship'] = 'question';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['value'] = array(
    'select' => 'select',
    'checkboxes' => 'checkboxes',
  );

  /* Display: Siteviisit Answer Table Block (Select & Checkbox) */
  $handler = $view->new_display('block', 'Siteviisit Answer Table Block (Select & Checkbox)', 'block');
  $handler->display->display_options['display_comment'] = 'This view is *always* called as a field on the Devtrac Sitevisit Answer Sector view';
  $handler->display->display_options['display_description'] = 'Shows answers for a siteviisit in a table, filtered by Sector tag.';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Question Count for Grouping */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'questionnaire_answer_question_target_id';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Question Count for Grouping';
  $handler->display->display_options['fields']['title']['label'] = 'Question';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Answer: Question */
  $handler->display->display_options['fields']['question']['id'] = 'question';
  $handler->display->display_options['fields']['question']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['question']['field'] = 'question';
  $handler->display->display_options['fields']['question']['label'] = '';
  $handler->display->display_options['fields']['question']['exclude'] = TRUE;
  $handler->display->display_options['fields']['question']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['question']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'questionnaire_answer_question_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Question';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = 'statistics/answers?f[0]=questionnaire_answer_question:[question]';
  $handler->display->display_options['fields']['title_1']['alter']['alt'] = 'See results for this question on national level';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Answer: Answer Text */
  $handler->display->display_options['fields']['answertext_1']['id'] = 'answertext_1';
  $handler->display->display_options['fields']['answertext_1']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answertext_1']['field'] = 'answertext';
  $handler->display->display_options['fields']['answertext_1']['label'] = 'Answer';
  /* Field: Answer: Answer Text */
  $handler->display->display_options['fields']['answertext']['id'] = 'answertext';
  $handler->display->display_options['fields']['answertext']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answertext']['field'] = 'answertext';
  $handler->display->display_options['fields']['answertext']['group_type'] = 'count';
  $handler->display->display_options['fields']['answertext']['label'] = 'Number';
  $handler->display->display_options['fields']['answertext']['separator'] = '';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: The type of question. (questionnaire_question_type) */
  $handler->display->display_options['filters']['questionnaire_question_type_value']['id'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['table'] = 'field_data_questionnaire_question_type';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['field'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['relationship'] = 'question';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['value'] = array(
    'select' => 'select',
    'checkboxes' => 'checkboxes',
  );

  /* Display: Siteviisit Answer Select and Radio Table Block */
  $handler = $view->new_display('block', 'Siteviisit Answer Select and Radio Table Block', 'block_2');
  $handler->display->display_options['display_comment'] = 'This view is *always* called as a field on the Devtrac Sitevisit Answer Sector view';
  $handler->display->display_options['display_description'] = 'Shows answers for a siteviisit in a table for Select and Radio fields, filtered by Sector tag.';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'answertext' => 'answertext',
    'answertext_1' => 'answertext_1',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'answertext' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'answertext_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Answer: Answer Text */
  $handler->display->display_options['fields']['answertext']['id'] = 'answertext';
  $handler->display->display_options['fields']['answertext']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answertext']['field'] = 'answertext';
  $handler->display->display_options['fields']['answertext']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['answertext']['label'] = 'Answertext';
  /* Field: Answer: Answer Text */
  $handler->display->display_options['fields']['answertext_1']['id'] = 'answertext_1';
  $handler->display->display_options['fields']['answertext_1']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answertext_1']['field'] = 'answertext';
  $handler->display->display_options['fields']['answertext_1']['label'] = 'Answer';
  $handler->display->display_options['fields']['answertext_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'questionnaire_answer_question_target_id';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: The type of question. (questionnaire_question_type) */
  $handler->display->display_options['filters']['questionnaire_question_type_value']['id'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['table'] = 'field_data_questionnaire_question_type';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['field'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['relationship'] = 'question';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['value'] = array(
    'select' => 'select',
    'checkboxes' => 'checkboxes',
  );

  /* Display: Sitevisit Answer Bar Block */
  $handler = $view->new_display('block', 'Sitevisit Answer Bar Block', 'block_4');
  $handler->display->display_options['display_comment'] = 'This view is *always* called as a field on the Devtrac Sitevisit Answer Sector view';
  $handler->display->display_options['display_description'] = 'Shows answers for a siteviisit in a Bar for Number questions, filtered by Sector tag.';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Answer: Context_id */
  $handler->display->display_options['fields']['context_id']['id'] = 'context_id';
  $handler->display->display_options['fields']['context_id']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['context_id']['field'] = 'context_id';
  $handler->display->display_options['fields']['context_id']['exclude'] = TRUE;
  /* Field: Answer: Question */
  $handler->display->display_options['fields']['question']['id'] = 'question';
  $handler->display->display_options['fields']['question']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['question']['field'] = 'question';
  $handler->display->display_options['fields']['question']['exclude'] = TRUE;
  $handler->display->display_options['fields']['question']['separator'] = '';
  /* Field: The Bar Chart */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'The Bar Chart';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'devtrac_answers_barcharts';
  $handler->display->display_options['fields']['view']['display'] = 'block';
  $handler->display->display_options['fields']['view']['arguments'] = '[!question]/[!context_id] ';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'question';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'statistics/answers?f[0]=questionnaire_answer_question:[question]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'questionnaire_answer_question_target_id';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['separator'] = '';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: The type of question. (questionnaire_question_type) */
  $handler->display->display_options['filters']['questionnaire_question_type_value']['id'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['table'] = 'field_data_questionnaire_question_type';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['field'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['relationship'] = 'question';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['value'] = array(
    'number' => 'number',
  );
  /* Filter criterion: Answer: Answer ID */
  $handler->display->display_options['filters']['id']['id'] = 'id';
  $handler->display->display_options['filters']['id']['table'] = 'questionnaire_answer';
  $handler->display->display_options['filters']['id']['field'] = 'id';
  $handler->display->display_options['filters']['id']['group_type'] = 'count';
  $handler->display->display_options['filters']['id']['operator'] = '>';
  $handler->display->display_options['filters']['id']['value']['value'] = '1';

  /* Display: Siteviisit Answer Points Block */
  $handler = $view->new_display('block', 'Siteviisit Answer Points Block', 'block_3');
  $handler->display->display_options['display_comment'] = 'This view is *always* called as a field on the Devtrac Sitevisit Answer Sector view';
  $handler->display->display_options['display_description'] = 'Shows answers for a siteviisit in a Point Graph, filtered by Sector tag.';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'created' => 'created',
    'title' => 'title',
    'answer' => 'answer',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
  );
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Answer: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  /* Field: Answer: Question */
  $handler->display->display_options['fields']['question']['id'] = 'question';
  $handler->display->display_options['fields']['question']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['question']['field'] = 'question';
  $handler->display->display_options['fields']['question']['label'] = '';
  $handler->display->display_options['fields']['question']['exclude'] = TRUE;
  $handler->display->display_options['fields']['question']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['question']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'questionnaire_answer_question_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Question';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'statistics/answers?f[0]=questionnaire_answer_question:[question]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Answer: Answer All */
  $handler->display->display_options['fields']['answer']['id'] = 'answer';
  $handler->display->display_options['fields']['answer']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answer']['field'] = 'answer';
  $handler->display->display_options['fields']['answer']['label'] = 'Answer';
  $handler->display->display_options['fields']['answer']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['answer']['alter']['text'] = '<span class="[answer]">[answer]</span>';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: The type of question. (questionnaire_question_type) */
  $handler->display->display_options['filters']['questionnaire_question_type_value']['id'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['table'] = 'field_data_questionnaire_question_type';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['field'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['relationship'] = 'question';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['value'] = array(
    'select' => 'select',
    'radios' => 'radios',
  );

  /* Display: Siteviisit Answer Sidebar Block */
  $handler = $view->new_display('block', 'Siteviisit Answer Sidebar Block', 'sidebar');
  $handler->display->display_options['display_comment'] = 'This view is *always* called as a field on the Devtrac Sitevisit Answer Sector view';
  $handler->display->display_options['display_description'] = 'Shows answers for a siteviisit in a Sidebar, filtered by Sector tag. (for numbers)';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'charts';
  $handler->display->display_options['style_options']['width'] = '100%';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['type'] = array(
    'bluff' => 'line',
    'flot' => 'sidebar',
  );
  $handler->display->display_options['style_options']['showlegend'] = 0;
  $handler->display->display_options['style_options']['zoom'] = 0;
  $handler->display->display_options['style_options']['views_charts_series_fields'] = array(
    'answer' => 'answer',
  );
  $handler->display->display_options['style_options']['views_charts_x_labels'] = 'title';
  $handler->display->display_options['style_options']['engine'] = 'flot';
  $handler->display->display_options['style_options']['y_min'] = '';
  $handler->display->display_options['style_options']['y_max'] = '';
  $handler->display->display_options['style_options']['y_step'] = '';
  $handler->display->display_options['style_options']['y_legend'] = '';
  $handler->display->display_options['style_options']['background_colour'] = '';
  $handler->display->display_options['style_options']['series_colours'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Answer: Answer All */
  $handler->display->display_options['fields']['answer']['id'] = 'answer';
  $handler->display->display_options['fields']['answer']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answer']['field'] = 'answer';
  $handler->display->display_options['fields']['answer']['group_type'] = 'avg';
  $handler->display->display_options['fields']['answer']['label'] = '';
  $handler->display->display_options['fields']['answer']['element_label_colon'] = FALSE;
  /* Field: Answer: Question */
  $handler->display->display_options['fields']['question']['id'] = 'question';
  $handler->display->display_options['fields']['question']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['question']['field'] = 'question';
  $handler->display->display_options['fields']['question']['label'] = '';
  $handler->display->display_options['fields']['question']['exclude'] = TRUE;
  $handler->display->display_options['fields']['question']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['question']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'question';
  $handler->display->display_options['fields']['title']['label'] = 'Question';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'statistics/answers?f[0]=questionnaire_answer_question:[question]';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: The type of question. (questionnaire_question_type) */
  $handler->display->display_options['filters']['questionnaire_question_type_value']['id'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['table'] = 'field_data_questionnaire_question_type';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['field'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['relationship'] = 'question';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['value'] = array(
    'number' => 'number',
  );

  /* Display: Sitevisit Questions */
  $handler = $view->new_display('block', 'Sitevisit Questions', 'block_5');
  $handler->display->display_options['display_comment'] = 'This view is *always* called as a field on the Devtrac Sitevisit Answer Sector view';
  $handler->display->display_options['display_description'] = 'Shows questions answered on a given sitevisit';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'questionnaire_answer_qnnaire' => 'questionnaire_answer_qnnaire',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'questionnaire_answer_qnnaire' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'questionnaire_answer_question_target_id';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'questionnaire_answer_question_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Question';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'statistics/answers?f[0]=questionnaire_answer_question%3A[nid]&display=default';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Answer: Answer All */
  $handler->display->display_options['fields']['answer']['id'] = 'answer';
  $handler->display->display_options['fields']['answer']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answer']['field'] = 'answer';
  $handler->display->display_options['fields']['answer']['label'] = 'Answer';
  /* Field: Answer: Questionnaire */
  $handler->display->display_options['fields']['questionnaire_id']['id'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id']['table'] = 'views_entity_questionnaire_answer';
  $handler->display->display_options['fields']['questionnaire_id']['field'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['questionnaire_id']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['questionnaire_id']['view_mode'] = 'full';
  $handler->display->display_options['fields']['questionnaire_id']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Answer: Questionnaire */
  $handler->display->display_options['arguments']['questionnaire_id']['id'] = 'questionnaire_id';
  $handler->display->display_options['arguments']['questionnaire_id']['table'] = 'questionnaire_answer';
  $handler->display->display_options['arguments']['questionnaire_id']['field'] = 'questionnaire_id';
  $handler->display->display_options['arguments']['questionnaire_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['questionnaire_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['questionnaire_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['questionnaire_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['questionnaire_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'question';
  $handler->display->display_options['filters']['title']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'answers/%/%';

  /* Display: Siteviisit Answer Sidebar Table Block */
  $handler = $view->new_display('block', 'Siteviisit Answer Sidebar Table Block', 'block_6');
  $handler->display->display_options['display_comment'] = 'This view is *always* called as a field on the Devtrac Sitevisit Answer Sector view';
  $handler->display->display_options['display_description'] = 'Shows answers for a siteviisit in a Sidebar, filtered by Sector tag. (for numbers)';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'answer' => 'answer',
    'question' => 'question',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'answer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'question' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Answer: Answer All */
  $handler->display->display_options['fields']['answer']['id'] = 'answer';
  $handler->display->display_options['fields']['answer']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answer']['field'] = 'answer';
  $handler->display->display_options['fields']['answer']['group_type'] = 'avg';
  $handler->display->display_options['fields']['answer']['label'] = '';
  $handler->display->display_options['fields']['answer']['element_label_colon'] = FALSE;
  /* Field: Answer: Question */
  $handler->display->display_options['fields']['question']['id'] = 'question';
  $handler->display->display_options['fields']['question']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['question']['field'] = 'question';
  $handler->display->display_options['fields']['question']['label'] = '';
  $handler->display->display_options['fields']['question']['exclude'] = TRUE;
  $handler->display->display_options['fields']['question']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['question']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'question';
  $handler->display->display_options['fields']['title']['label'] = 'Question';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'statistics/answers?f[0]=questionnaire_answer_question:[question]';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: The type of question. (questionnaire_question_type) */
  $handler->display->display_options['filters']['questionnaire_question_type_value']['id'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['table'] = 'field_data_questionnaire_question_type';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['field'] = 'questionnaire_question_type_value';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['relationship'] = 'question';
  $handler->display->display_options['filters']['questionnaire_question_type_value']['value'] = array(
    'number' => 'number',
  );
  $export['devtrac_sitevisit_answers'] = $view;

  $view = new view();
  $view->name = 'edit_questions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Edit Questions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Edit Questions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'taxonomy_vocabulary_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'taxonomy_vocabulary_1' => 'taxonomy_vocabulary_1',
    'title' => 'title',
    'draggableviews' => 'draggableviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'taxonomy_vocabulary_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Field: Location Type (taxonomy_vocabulary_1) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['label'] = 'Location Type';
  /* Field: Field: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Question';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  $handler->display->display_options['fields']['status']['type'] = 'enabled-disabled';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Publish link */
  $handler->display->display_options['fields']['publishcontent']['id'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['table'] = 'node';
  $handler->display->display_options['fields']['publishcontent']['field'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['label'] = '';
  $handler->display->display_options['fields']['publishcontent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['publishcontent']['unpublish'] = 'Unpublish';
  $handler->display->display_options['fields']['publishcontent']['publish'] = 'Publish';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['relationship'] = 'taxonomy_vocabulary_1_tid';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'questionnaire_question' => 'questionnaire_question',
  );
  /* Filter criterion: Field: Location Type (taxonomy_vocabulary_1) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_1_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['label'] = 'Location Type';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['operator'] = 'taxonomy_vocabulary_1_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['identifier'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['vocabulary'] = 'vocabulary_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['hierarchy'] = 1;

  /* Display: Edit Questions Page */
  $handler = $view->new_display('page', 'Edit Questions Page', 'edit_questions_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Edit Questions';
  $handler->display->display_options['path'] = 'admin/devtrac7/questions/edit';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Edit Questions';
  $handler->display->display_options['menu']['description'] = 'Allows you to edit, add, order and (un)publish questions';
  $handler->display->display_options['menu']['weight'] = '-100';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['edit_questions'] = $view;

  return $export;
}
