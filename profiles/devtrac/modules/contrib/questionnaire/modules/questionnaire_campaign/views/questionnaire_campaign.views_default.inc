<?php

/**
 * Views for the list of campaigns.
 */

/**
 * Implements hook_views_default_views().
 */
function questionnaire_campaign_views_default_views() {
  $views = array();

  $view = new view();
  $view->name = 'questionnaire_campaigns';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'questionnaire_campaign';
  $view->human_name = 'Questionnaire campaigns';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Questionnaire campaigns';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created' => 'created',
    'enabled' => 'enabled',
    'lastrun' => 'lastrun',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'enabled' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'lastrun' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Questionnaire campaign: Nid */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'questionnaire_campaign';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Field: Questionnaire campaign: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'questionnaire_campaign';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Questionnaire campaign: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'questionnaire_campaign';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Field: Questionnaire campaign: Lastrun */
  $handler->display->display_options['fields']['lastrun']['id'] = 'lastrun';
  $handler->display->display_options['fields']['lastrun']['table'] = 'questionnaire_campaign';
  $handler->display->display_options['fields']['lastrun']['field'] = 'lastrun';
  $handler->display->display_options['fields']['lastrun']['date_format'] = 'medium';
  /* Field: Questionnaire campaign: Enabled */
  $handler->display->display_options['fields']['enabled']['id'] = 'enabled';
  $handler->display->display_options['fields']['enabled']['table'] = 'questionnaire_campaign';
  $handler->display->display_options['fields']['enabled']['field'] = 'enabled';
  $handler->display->display_options['fields']['enabled']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['enabled']['not'] = 0;
  /* Field: Questionnaire campaign: Edit link */
  $handler->display->display_options['fields']['edit']['id'] = 'edit';
  $handler->display->display_options['fields']['edit']['table'] = 'questionnaire_campaign';
  $handler->display->display_options['fields']['edit']['field'] = 'edit';
  $handler->display->display_options['fields']['edit']['label'] = '';
  $handler->display->display_options['fields']['edit']['element_label_colon'] = FALSE;
  /* Field: Questionnaire campaign: Disable link */
  $handler->display->display_options['fields']['toggle']['id'] = 'toggle';
  $handler->display->display_options['fields']['toggle']['table'] = 'questionnaire_campaign';
  $handler->display->display_options['fields']['toggle']['field'] = 'toggle';
  $handler->display->display_options['fields']['toggle']['label'] = '';
  $handler->display->display_options['fields']['toggle']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '%1 campaigns';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  $views[$view->name] = $view;

  $view = new view();
  $view->name = 'all_campaigns';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'questionnaire_campaign';
  $view->human_name = 'All Campaigns';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Campaigns';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Questionnaire campaign: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'questionnaire_campaign';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Questionnaire campaign: Lastrun */
  $handler->display->display_options['fields']['lastrun']['id'] = 'lastrun';
  $handler->display->display_options['fields']['lastrun']['table'] = 'questionnaire_campaign';
  $handler->display->display_options['fields']['lastrun']['field'] = 'lastrun';
  $handler->display->display_options['fields']['lastrun']['date_format'] = 'medium';
  $handler->display->display_options['fields']['lastrun']['second_date_format'] = 'long';
  /* Field: Questionnaire campaign: Enabled */
  $handler->display->display_options['fields']['enabled']['id'] = 'enabled';
  $handler->display->display_options['fields']['enabled']['table'] = 'questionnaire_campaign';
  $handler->display->display_options['fields']['enabled']['field'] = 'enabled';
  $handler->display->display_options['fields']['enabled']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['enabled']['not'] = 0;
  /* Field: Questionnaire campaign: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'questionnaire_campaign';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Questionnaire campaign: Edit link */
  $handler->display->display_options['fields']['edit']['id'] = 'edit';
  $handler->display->display_options['fields']['edit']['table'] = 'questionnaire_campaign';
  $handler->display->display_options['fields']['edit']['field'] = 'edit';
  $handler->display->display_options['fields']['edit']['label'] = '';
  $handler->display->display_options['fields']['edit']['element_label_colon'] = FALSE;
  /* Field: Questionnaire campaign: Disable link */
  $handler->display->display_options['fields']['toggle']['id'] = 'toggle';
  $handler->display->display_options['fields']['toggle']['table'] = 'questionnaire_campaign';
  $handler->display->display_options['fields']['toggle']['field'] = 'toggle';
  $handler->display->display_options['fields']['toggle']['label'] = '';
  $handler->display->display_options['fields']['toggle']['element_label_colon'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'questionnaire/all-campaigns';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'All Campaigns';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  $views[$view->name] = $view;

  return $views;
}
