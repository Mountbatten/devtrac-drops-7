<?php
/**
 * @file
 * devtrac7_users2.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_users2_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_media';
  $view->description = 'Default view for the media browser library tab.';
  $view->tag = 'media, default';
  $view->base_table = 'file_managed';
  $view->human_name = 'User Media';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view files';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_tags'] = array(
    0 => 'media_browser',
  );
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'media_browser';
  /* Field: File: Rendered */
  $handler->display->display_options['fields']['rendered']['id'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['label'] = '';
  $handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered']['file_view_mode'] = 'teaser';
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['filename']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filename']['link_to_file'] = FALSE;
  /* Sort criterion: File: Upload date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['sorts']['timestamp']['expose']['label'] = 'Upload date';
  /* Sort criterion: SUM(File Usage: Use count) */
  $handler->display->display_options['sorts']['count']['id'] = 'count';
  $handler->display->display_options['sorts']['count']['table'] = 'file_usage';
  $handler->display->display_options['sorts']['count']['field'] = 'count';
  $handler->display->display_options['sorts']['count']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['count']['expose']['label'] = 'Use count';
  /* Filter criterion: File: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'file_managed';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: File: Name */
  $handler->display->display_options['filters']['filename']['id'] = 'filename';
  $handler->display->display_options['filters']['filename']['table'] = 'file_managed';
  $handler->display->display_options['filters']['filename']['field'] = 'filename';
  $handler->display->display_options['filters']['filename']['operator'] = 'contains';
  $handler->display->display_options['filters']['filename']['expose']['operator_id'] = 'filename_op';
  $handler->display->display_options['filters']['filename']['expose']['label'] = 'File name';
  $handler->display->display_options['filters']['filename']['expose']['operator'] = 'filename_op';
  $handler->display->display_options['filters']['filename']['expose']['identifier'] = 'filename';
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: My Personal files */
  $handler = $view->new_display('block', 'My Personal files', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: File: User who uploaded */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'file_managed';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: File Usage: Content */
  $handler->display->display_options['relationships']['file_to_node']['id'] = 'file_to_node';
  $handler->display->display_options['relationships']['file_to_node']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['file_to_node']['field'] = 'file_to_node';
  $handler->display->display_options['relationships']['file_to_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename_1']['id'] = 'filename_1';
  $handler->display->display_options['fields']['filename_1']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename_1']['field'] = 'filename';
  $handler->display->display_options['fields']['filename_1']['label'] = '';
  $handler->display->display_options['fields']['filename_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filename_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filename_1']['link_to_file'] = FALSE;
  /* Field: File: Rendered */
  $handler->display->display_options['fields']['rendered']['id'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['label'] = '';
  $handler->display->display_options['fields']['rendered']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['rendered']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['rendered']['alter']['alt'] = '[filename_1]';
  $handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered']['file_view_mode'] = 'teaser';
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['filename']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filename']['link_to_file'] = FALSE;
  /* Field: File: Download link */
  $handler->display->display_options['fields']['download']['id'] = 'download';
  $handler->display->display_options['fields']['download']['table'] = 'file_managed';
  $handler->display->display_options['fields']['download']['field'] = 'download';
  $handler->display->display_options['fields']['download']['label'] = '';
  $handler->display->display_options['fields']['download']['element_class'] = 'views-field-field-ftritem-images-3';
  $handler->display->display_options['fields']['download']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['download']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['download']['text'] = ' ';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $export['user_media'] = $view;

  return $export;
}
