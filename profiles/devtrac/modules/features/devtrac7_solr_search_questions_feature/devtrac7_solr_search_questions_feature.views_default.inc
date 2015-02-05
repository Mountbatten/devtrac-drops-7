<?php
/**
 * @file
 * devtrac7_solr_search_questions_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_solr_search_questions_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'devtrac_solr_view_questions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_questions';
  $view->human_name = 'devtrac_solr_view_questions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'taxonomy_vocabulary_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'taxonomy_vocabulary_8',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'noresult text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Your search did not return any results. Making your search less specific give you a higher chance of finding what you are looking for.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Field: Indexed Node: UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'search_api_index_questions';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_questions';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Question';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'questions/answers?f[0]=question:[nid]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: The type of question. */
  $handler->display->display_options['fields']['questionnaire_question_type']['id'] = 'questionnaire_question_type';
  $handler->display->display_options['fields']['questionnaire_question_type']['table'] = 'search_api_index_questions';
  $handler->display->display_options['fields']['questionnaire_question_type']['field'] = 'questionnaire_question_type';
  $handler->display->display_options['fields']['questionnaire_question_type']['label'] = 'Type of Question';
  $handler->display->display_options['fields']['questionnaire_question_type']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Options */
  $handler->display->display_options['fields']['questionnaire_question_options']['id'] = 'questionnaire_question_options';
  $handler->display->display_options['fields']['questionnaire_question_options']['table'] = 'search_api_index_questions';
  $handler->display->display_options['fields']['questionnaire_question_options']['field'] = 'questionnaire_question_options';
  $handler->display->display_options['fields']['questionnaire_question_options']['delta_offset'] = '0';
  /* Field: Indexed Node: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'search_api_index_questions';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = 'Questions on';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'search_api_index_questions';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['view_mode'] = 'full';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['bypass_access'] = 0;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_questions';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Global: Site information */
  $handler->display->display_options['fields']['site_info']['id'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['table'] = 'views';
  $handler->display->display_options['fields']['site_info']['field'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['label'] = 'URL';
  $handler->display->display_options['fields']['site_info']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['site_info']['alter']['text'] = '[site_info] /statistics/answers?f[0]=questionnaire_answer_question%3A[nid]';
  $handler->display->display_options['fields']['site_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['site_info']['site_info'] = 'base_url';

  /* Display: List of Questions */
  $handler = $view->new_display('page', 'List of Questions', 'stats');
  $handler->display->display_options['display_description'] = 'Default view for questions on the main menu';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'search_api_index_questions';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['text'] = '<h2>[taxonomy_vocabulary_1] </h2>';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['bypass_access'] = 0;
  /* Field: Indexed Node: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'search_api_index_questions';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['list']['separator'] = ' ';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['display'] = 'view';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['view_mode'] = 'sector_code_icon';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['bypass_access'] = 0;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_questions';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_questions';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'statistics/answers?f[0]=question:[nid]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'statistics';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Statistics';
  $handler->display->display_options['menu']['description'] = 'Statistics';
  $handler->display->display_options['menu']['weight'] = '20';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Devtrac Questions CSV Export */
  $handler = $view->new_display('views_data_export', 'Devtrac Questions CSV Export', 'questions_csv_export');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'CSV Export';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%display.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['feed_in_links'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'statistics/questions/csv';
  $export['devtrac_solr_view_questions'] = $view;

  return $export;
}
