<?php
/**
 * @file
 * questionnaire_user_solr.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function questionnaire_user_solr_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'users_answers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_user_answers';
  $view->human_name = 'Users answers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Users answers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed User: User ID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'search_api_index_user_answers';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: Answers: Answer All (indexed) */
  $handler->display->display_options['fields']['questionnaire_answers_answer']['id'] = 'questionnaire_answers_answer';
  $handler->display->display_options['fields']['questionnaire_answers_answer']['table'] = 'search_api_index_user_answers';
  $handler->display->display_options['fields']['questionnaire_answers_answer']['field'] = 'questionnaire_answers_answer';
  $handler->display->display_options['fields']['questionnaire_answers_answer']['link_to_entity'] = 0;
  /* Field: Answers » Question: Title (indexed) */
  $handler->display->display_options['fields']['questionnaire_answers_question_title']['id'] = 'questionnaire_answers_question_title';
  $handler->display->display_options['fields']['questionnaire_answers_question_title']['table'] = 'search_api_index_user_answers';
  $handler->display->display_options['fields']['questionnaire_answers_question_title']['field'] = 'questionnaire_answers_question_title';
  $handler->display->display_options['fields']['questionnaire_answers_question_title']['link_to_entity'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'users-answers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Users\' answers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['users_answers'] = $view;

  return $export;
}
