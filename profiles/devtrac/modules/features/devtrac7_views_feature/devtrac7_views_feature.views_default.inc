<?php
/**
 * @file
 * devtrac7_views_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_views_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'devtrac_media_browser_extensions';
  $view->description = 'View that implements extra media browser tabs.';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Devtrac Media Browser Extensions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_tags'] = array(
    0 => 'media_browser',
  );
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;

  /* Display: Attached files */
  $handler = $view->new_display('media_browser', 'Attached files', 'attached_files');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Attached files';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'media_browser';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No images attached. Any images you have uploaded on the content you are creating or editing will become visible as soon as you save that content.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: File: Content using Images */
  $handler->display->display_options['relationships']['reverse_field_ftritem_images_node']['id'] = 'reverse_field_ftritem_images_node';
  $handler->display->display_options['relationships']['reverse_field_ftritem_images_node']['table'] = 'file_managed';
  $handler->display->display_options['relationships']['reverse_field_ftritem_images_node']['field'] = 'reverse_field_ftritem_images_node';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: File: Upload date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['sorts']['timestamp']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['timestamp']['expose']['label'] = 'Upload date';
  /* Sort criterion: File Usage: Use count */
  $handler->display->display_options['sorts']['count']['id'] = 'count';
  $handler->display->display_options['sorts']['count']['table'] = 'file_usage';
  $handler->display->display_options['sorts']['count']['field'] = 'count';
  $handler->display->display_options['sorts']['count']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['count']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['count']['expose']['label'] = 'Use count';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_ftritem_images_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['filename']['exposed'] = TRUE;
  $handler->display->display_options['filters']['filename']['expose']['operator_id'] = 'filename_op';
  $handler->display->display_options['filters']['filename']['expose']['label'] = 'File name';
  $handler->display->display_options['filters']['filename']['expose']['operator'] = 'filename_op';
  $handler->display->display_options['filters']['filename']['expose']['identifier'] = 'filename';
  $handler->display->display_options['filters']['filename']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $export['devtrac_media_browser_extensions'] = $view;

  $view = new view();
  $view->name = 'dvtrc_action_items';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Action Items';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Action Items';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'created' => 'created',
    'edit_comment' => 'edit_comment',
    'replyto_comment' => 'replyto_comment',
    'delete_comment' => 'delete_comment',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'action-items';

  /* Display: ActionItems P-FIRST */
  $handler = $view->new_display('block', 'ActionItems P-FIRST', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'The first block on the action items detail pages';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_actionitem_resp_place_target_id']['id'] = 'field_actionitem_resp_place_target_id';
  $handler->display->display_options['relationships']['field_actionitem_resp_place_target_id']['table'] = 'field_data_field_actionitem_resp_place';
  $handler->display->display_options['relationships']['field_actionitem_resp_place_target_id']['field'] = 'field_actionitem_resp_place_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_actionitem_ftreportitem_target_id']['id'] = 'field_actionitem_ftreportitem_target_id';
  $handler->display->display_options['relationships']['field_actionitem_ftreportitem_target_id']['table'] = 'field_data_field_actionitem_ftreportitem';
  $handler->display->display_options['relationships']['field_actionitem_ftreportitem_target_id']['field'] = 'field_actionitem_ftreportitem_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'actionitem' => 'actionitem',
  );

  /* Display: Actionitems P-SECOND */
  $handler = $view->new_display('block', 'Actionitems P-SECOND', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Follow Up Task';
  $handler->display->display_options['display_description'] = 'The second block on the action items details page (Larger block) Shows the details of an Action Item';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* Field: Content: Responsible */
  $handler->display->display_options['fields']['field_actionitem_responsible']['id'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['table'] = 'field_data_field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['field'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['label'] = 'Responsible Person';
  $handler->display->display_options['fields']['field_actionitem_responsible']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_actionitem_responsible']['delta_offset'] = '0';
  /* Field: Content: Follow-up Task */
  $handler->display->display_options['fields']['field_actionitem_followuptask']['id'] = 'field_actionitem_followuptask';
  $handler->display->display_options['fields']['field_actionitem_followuptask']['table'] = 'field_data_field_actionitem_followuptask';
  $handler->display->display_options['fields']['field_actionitem_followuptask']['field'] = 'field_actionitem_followuptask';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: ActionItems List-FieldTrip */
  $handler = $view->new_display('block', 'ActionItems List-FieldTrip', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'List of action items on the fieldtrip page. Shows in the quick tabs';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_actionitem_status' => 'field_actionitem_status',
    'field_actionitem_due_date' => 'field_actionitem_due_date',
    'field_actionitem_resp_place' => 'field_actionitem_resp_place',
    'field_actionitem_responsible' => 'field_actionitem_responsible',
    'view' => 'view',
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
    'field_actionitem_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_actionitem_due_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_actionitem_resp_place' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_actionitem_responsible' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'expand' => 'nid',
    'icon' => '',
    'icon_size' => '',
    'hide' => array(
      'nid' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'title' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_actionitem_status' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_actionitem_due_date' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'field_actionitem_resp_place' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'field_actionitem_responsible' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'view' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ftritem_field_trip_node']['id'] = 'reverse_field_ftritem_field_trip_node';
  $handler->display->display_options['relationships']['reverse_field_ftritem_field_trip_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ftritem_field_trip_node']['field'] = 'reverse_field_ftritem_field_trip_node';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_actionitem_ftreportitem_node']['id'] = 'reverse_field_actionitem_ftreportitem_node';
  $handler->display->display_options['relationships']['reverse_field_actionitem_ftreportitem_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_actionitem_ftreportitem_node']['field'] = 'reverse_field_actionitem_ftreportitem_node';
  $handler->display->display_options['relationships']['reverse_field_actionitem_ftreportitem_node']['relationship'] = 'reverse_field_ftritem_field_trip_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_actionitem_ftreportitem_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_actionitem_ftreportitem_node';
  $handler->display->display_options['fields']['title']['label'] = 'Task';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Status */
  $handler->display->display_options['fields']['field_actionitem_status']['id'] = 'field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['table'] = 'field_data_field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['field'] = 'field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['relationship'] = 'reverse_field_actionitem_ftreportitem_node';
  $handler->display->display_options['fields']['field_actionitem_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_actionitem_status']['element_wrapper_class'] = '[field_actionitem_status-value]';
  /* Field: Content: Due Date */
  $handler->display->display_options['fields']['field_actionitem_due_date']['id'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['table'] = 'field_data_field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['field'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['relationship'] = 'reverse_field_actionitem_ftreportitem_node';
  $handler->display->display_options['fields']['field_actionitem_due_date']['type'] = 'date_default_with_duration';
  $handler->display->display_options['fields']['field_actionitem_due_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'duration' => TRUE,
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_actionitem_resp_place']['id'] = 'field_actionitem_resp_place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['table'] = 'field_data_field_actionitem_resp_place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['field'] = 'field_actionitem_resp_place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['relationship'] = 'reverse_field_actionitem_ftreportitem_node';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Responsible */
  $handler->display->display_options['fields']['field_actionitem_responsible']['id'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['table'] = 'field_data_field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['field'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['relationship'] = 'reverse_field_actionitem_ftreportitem_node';
  $handler->display->display_options['fields']['field_actionitem_responsible']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_actionitem_responsible']['delta_offset'] = '0';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Actions';
  $handler->display->display_options['fields']['view']['view'] = 'dvtrc_action_items';
  $handler->display->display_options['fields']['view']['display'] = 'block_14';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Status (field_actionitem_status) */
  $handler->display->display_options['sorts']['field_actionitem_status_value']['id'] = 'field_actionitem_status_value';
  $handler->display->display_options['sorts']['field_actionitem_status_value']['table'] = 'field_data_field_actionitem_status';
  $handler->display->display_options['sorts']['field_actionitem_status_value']['field'] = 'field_actionitem_status_value';
  $handler->display->display_options['sorts']['field_actionitem_status_value']['relationship'] = 'reverse_field_actionitem_ftreportitem_node';
  $handler->display->display_options['sorts']['field_actionitem_status_value']['order'] = 'DESC';
  /* Sort criterion: Content: Due Date (field_actionitem_due_date) */
  $handler->display->display_options['sorts']['field_actionitem_due_date_value']['id'] = 'field_actionitem_due_date_value';
  $handler->display->display_options['sorts']['field_actionitem_due_date_value']['table'] = 'field_data_field_actionitem_due_date';
  $handler->display->display_options['sorts']['field_actionitem_due_date_value']['field'] = 'field_actionitem_due_date_value';
  $handler->display->display_options['sorts']['field_actionitem_due_date_value']['relationship'] = 'reverse_field_actionitem_ftreportitem_node';
  $handler->display->display_options['sorts']['field_actionitem_due_date_value']['expose']['label'] = 'Due Date';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_actionitem_ftreportitem_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'actionitem' => 'actionitem',
  );

  /* Display: ActionItems List-sitevisit */
  $handler = $view->new_display('block', 'ActionItems List-sitevisit', 'block_4');
  $handler->display->display_options['display_description'] = 'List of action items on the sitevisit page.';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_actionitem_due_date' => 'field_actionitem_due_date',
    'field_actionitem_status' => 'field_actionitem_status',
    'field_actionitem_responsible' => 'field_actionitem_responsible',
  );
  $handler->display->display_options['style_options']['default'] = 'field_actionitem_status';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_actionitem_due_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_actionitem_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_actionitem_responsible' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_actionitem_ftreportitem_target_id']['id'] = 'field_actionitem_ftreportitem_target_id';
  $handler->display->display_options['relationships']['field_actionitem_ftreportitem_target_id']['table'] = 'field_data_field_actionitem_ftreportitem';
  $handler->display->display_options['relationships']['field_actionitem_ftreportitem_target_id']['field'] = 'field_actionitem_ftreportitem_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Task';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['empty'] = 'There is currently no Action Items on this SiteVisit';
  /* Field: Content: Due Date */
  $handler->display->display_options['fields']['field_actionitem_due_date']['id'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['table'] = 'field_data_field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['field'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Status */
  $handler->display->display_options['fields']['field_actionitem_status']['id'] = 'field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['table'] = 'field_data_field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['field'] = 'field_actionitem_status';
  /* Field: Content: Responsible */
  $handler->display->display_options['fields']['field_actionitem_responsible']['id'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['table'] = 'field_data_field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['field'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_actionitem_responsible']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Report (field_actionitem_ftreportitem) */
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['id'] = 'field_actionitem_ftreportitem_target_id';
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['table'] = 'field_data_field_actionitem_ftreportitem';
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['field'] = 'field_actionitem_ftreportitem_target_id';
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['validate_options']['types'] = array(
    'ftritem' => 'ftritem',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'actionitem' => 'actionitem',
  );

  /* Display: ActionItems Map */
  $handler = $view->new_display('block', 'ActionItems Map', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Map with the location of this Action Item';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'action_item_dvtrc7';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Multi-Contact Info */
  $handler = $view->new_display('block', 'Multi-Contact Info', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '111';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Contact Persons */
  $handler->display->display_options['fields']['field_place_contact_info']['id'] = 'field_place_contact_info';
  $handler->display->display_options['fields']['field_place_contact_info']['table'] = 'field_data_field_place_contact_info';
  $handler->display->display_options['fields']['field_place_contact_info']['field'] = 'field_place_contact_info';
  $handler->display->display_options['fields']['field_place_contact_info']['label'] = '';
  $handler->display->display_options['fields']['field_place_contact_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_place_contact_info']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_place_contact_info']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_place_contact_info']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'place' => 'place',
  );
  /* Filter criterion: Content: Contact Persons (field_place_contact_info:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_place_contact_info';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';

  /* Display: Open Actionitems */
  $handler = $view->new_display('block', 'Open Actionitems', 'block_8');
  $handler->display->display_options['display_description'] = 'Open Actionitems for a particular user';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_actionitem_due_date' => 'field_actionitem_due_date',
    'field_actionitem_responsible' => 'field_actionitem_responsible',
    'field_actionitem_resp_place' => 'field_actionitem_resp_place',
    'virtual_field' => 'virtual_field',
  );
  $handler->display->display_options['style_options']['default'] = 'field_actionitem_due_date';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_actionitem_due_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_actionitem_responsible' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_actionitem_resp_place' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'virtual_field' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['id'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['table'] = 'field_data_field_actionitem_responsible';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['field'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['label'] = 'Responsible users';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Due Date */
  $handler->display->display_options['fields']['field_actionitem_due_date']['id'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['table'] = 'field_data_field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['field'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Responsible */
  $handler->display->display_options['fields']['field_actionitem_responsible']['id'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['table'] = 'field_data_field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['field'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_actionitem_responsible']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_actionitem_resp_place']['id'] = 'field_actionitem_resp_place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['table'] = 'field_data_field_actionitem_resp_place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['field'] = 'field_actionitem_resp_place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['settings'] = array(
    'link' => 1,
  );
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = 'Actions';
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'actionitem' => 'actionitem',
  );
  /* Filter criterion: Field: Status (field_actionitem_status) */
  $handler->display->display_options['filters']['field_actionitem_status_value']['id'] = 'field_actionitem_status_value';
  $handler->display->display_options['filters']['field_actionitem_status_value']['table'] = 'field_data_field_actionitem_status';
  $handler->display->display_options['filters']['field_actionitem_status_value']['field'] = 'field_actionitem_status_value';
  $handler->display->display_options['filters']['field_actionitem_status_value']['value'] = array(
    1 => '1',
  );

  /* Display: My Actionitems */
  $handler = $view->new_display('block', 'My Actionitems', 'block_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Action Items';
  $handler->display->display_options['display_description'] = 'Open Actionitems for me';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_actionitem_due_date' => 'field_actionitem_due_date',
    'field_actionitem_responsible' => 'field_actionitem_responsible',
    'field_actionitem_resp_place' => 'field_actionitem_resp_place',
    'virtual_field' => 'virtual_field',
    'virtual_field_1' => 'virtual_field_1',
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
    'field_actionitem_due_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_actionitem_responsible' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_actionitem_resp_place' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'virtual_field' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'virtual_field_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['id'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['table'] = 'field_data_field_actionitem_responsible';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['field'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['label'] = 'Responsible users';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Due Date */
  $handler->display->display_options['fields']['field_actionitem_due_date']['id'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['table'] = 'field_data_field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['field'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Responsible */
  $handler->display->display_options['fields']['field_actionitem_responsible']['id'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['table'] = 'field_data_field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['field'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_actionitem_responsible']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_actionitem_responsible']['separator'] = ' | ';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_actionitem_resp_place']['id'] = 'field_actionitem_resp_place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['table'] = 'field_data_field_actionitem_resp_place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['field'] = 'field_actionitem_resp_place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Status */
  $handler->display->display_options['fields']['field_actionitem_status']['id'] = 'field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['table'] = 'field_data_field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['field'] = 'field_actionitem_status';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = 'Actions';
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field_1']['id'] = 'virtual_field_1';
  $handler->display->display_options['fields']['virtual_field_1']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['label'] = 'Progress';
  $handler->display->display_options['fields']['virtual_field_1']['virtual_field'] = 'field_progress_bar';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: My Team Actionitems */
  $handler = $view->new_display('block', 'My Team Actionitems', 'block_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Team Action Items';
  $handler->display->display_options['display_description'] = 'Actionitems for my team';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_actionitem_due_date' => 'field_actionitem_due_date',
    'field_actionitem_responsible' => 'field_actionitem_responsible',
    'field_actionitem_resp_place' => 'field_actionitem_resp_place',
    'virtual_field' => 'virtual_field',
    'virtual_field_1' => 'virtual_field_1',
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
    'field_actionitem_due_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_actionitem_responsible' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_actionitem_resp_place' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'virtual_field' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'virtual_field_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['id'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['table'] = 'field_data_field_actionitem_responsible';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['field'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['label'] = 'Responsible users';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_superior_target_id']['id'] = 'field_user_superior_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['table'] = 'field_data_field_user_superior';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['field'] = 'field_user_superior_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['relationship'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['label'] = 'Manager';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Due Date */
  $handler->display->display_options['fields']['field_actionitem_due_date']['id'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['table'] = 'field_data_field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['field'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Responsible */
  $handler->display->display_options['fields']['field_actionitem_responsible']['id'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['table'] = 'field_data_field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['field'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_actionitem_responsible']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_actionitem_responsible']['separator'] = ' | ';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_actionitem_resp_place']['id'] = 'field_actionitem_resp_place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['table'] = 'field_data_field_actionitem_resp_place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['field'] = 'field_actionitem_resp_place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Status */
  $handler->display->display_options['fields']['field_actionitem_status']['id'] = 'field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['table'] = 'field_data_field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['field'] = 'field_actionitem_status';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = 'Actions';
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field_1']['id'] = 'virtual_field_1';
  $handler->display->display_options['fields']['virtual_field_1']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['label'] = 'Progress';
  $handler->display->display_options['fields']['virtual_field_1']['virtual_field'] = 'field_progress_bar';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_user_superior_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: OECD Actionitems */
  $handler = $view->new_display('block', 'OECD Actionitems', 'block_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'OECD sector code ActionItems';
  $handler->display->display_options['display_description'] = 'List of Actionitems basing on a given Sector';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_actionitem_due_date' => 'field_actionitem_due_date',
    'field_actionitem_responsible' => 'field_actionitem_responsible',
    'field_actionitem_resp_place' => 'field_actionitem_resp_place',
    'virtual_field' => 'virtual_field',
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
    'field_actionitem_due_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_actionitem_responsible' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_actionitem_resp_place' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'virtual_field' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['id'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['table'] = 'field_data_field_actionitem_responsible';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['field'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['label'] = 'Responsible users';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Action Item';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Due Date */
  $handler->display->display_options['fields']['field_actionitem_due_date']['id'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['table'] = 'field_data_field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['field'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Responsible */
  $handler->display->display_options['fields']['field_actionitem_responsible']['id'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['table'] = 'field_data_field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['field'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_actionitem_responsible']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_actionitem_responsible']['separator'] = ' | ';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_actionitem_resp_place']['id'] = 'field_actionitem_resp_place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['table'] = 'field_data_field_actionitem_resp_place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['field'] = 'field_actionitem_resp_place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Status */
  $handler->display->display_options['fields']['field_actionitem_status']['id'] = 'field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['table'] = 'field_data_field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['field'] = 'field_actionitem_status';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = 'Actions';
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy Depth [3] */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['ui_name'] = 'Taxonomy Depth [3]';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'vocabulary_8' => 'vocabulary_8',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'actionitem' => 'actionitem',
  );

  /* Display: Inbox */
  $handler = $view->new_display('block', 'Inbox', 'block_12');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['link_url'] = 'sitereports?f[0]=author%3A!1';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'comment_count' => 'comment_count',
    'new_comments' => 'new_comments',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'last_comment_name' => 'last_comment_name',
    'virtual_field' => 'virtual_field',
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
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'new_comments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'last_comment_timestamp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'last_comment_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'virtual_field' => array(
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'expand' => 'title',
    'hide' => array(
      'nid' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'title' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'type' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'comment_count' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'new_comments' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'last_comment_timestamp' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'last_comment_name' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'virtual_field' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'You do not have items in your inbox';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['id'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['table'] = 'field_data_field_actionitem_responsible';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['field'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['label'] = 'Responsible';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* Field: Content: New comments */
  $handler->display->display_options['fields']['new_comments']['id'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['table'] = 'node';
  $handler->display->display_options['fields']['new_comments']['field'] = 'new_comments';
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'short';
  /* Field: Content: Last comment author */
  $handler->display->display_options['fields']['last_comment_name']['id'] = 'last_comment_name';
  $handler->display->display_options['fields']['last_comment_name']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_name']['field'] = 'last_comment_name';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = 'Actions';
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Updated/commented date */
  $handler->display->display_options['sorts']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_updated']['field'] = 'last_updated';
  /* Sort criterion: Content: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
    4 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'actionitem' => 'actionitem',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['relationship'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = 'blue_smurf';
  $handler->display->display_options['filters']['uid_raw']['group'] = 1;
  /* Filter criterion: Field: Status (field_actionitem_status) */
  $handler->display->display_options['filters']['field_actionitem_status_value_1']['id'] = 'field_actionitem_status_value_1';
  $handler->display->display_options['filters']['field_actionitem_status_value_1']['table'] = 'field_data_field_actionitem_status';
  $handler->display->display_options['filters']['field_actionitem_status_value_1']['field'] = 'field_actionitem_status_value';
  $handler->display->display_options['filters']['field_actionitem_status_value_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_actionitem_status_value_1']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_actionitem_status_value_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'actionitem' => 'actionitem',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw_3']['id'] = 'uid_raw_3';
  $handler->display->display_options['filters']['uid_raw_3']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_3']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_3']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_raw_3']['value']['value'] = 'blue_smurf';
  $handler->display->display_options['filters']['uid_raw_3']['group'] = 2;
  /* Filter criterion: Field: Status (field_actionitem_status) */
  $handler->display->display_options['filters']['field_actionitem_status_value']['id'] = 'field_actionitem_status_value';
  $handler->display->display_options['filters']['field_actionitem_status_value']['table'] = 'field_data_field_actionitem_status';
  $handler->display->display_options['filters']['field_actionitem_status_value']['field'] = 'field_actionitem_status_value';
  $handler->display->display_options['filters']['field_actionitem_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_actionitem_status_value']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_actionitem_status_value']['group'] = 2;
  /* Filter criterion: Content: Has new content */
  $handler->display->display_options['filters']['timestamp_1']['id'] = 'timestamp_1';
  $handler->display->display_options['filters']['timestamp_1']['table'] = 'history';
  $handler->display->display_options['filters']['timestamp_1']['field'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp_1']['group'] = 2;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw_1']['id'] = 'uid_raw_1';
  $handler->display->display_options['filters']['uid_raw_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_1']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_raw_1']['value']['value'] = 'blue_smurf';
  $handler->display->display_options['filters']['uid_raw_1']['group'] = 3;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_3']['id'] = 'type_3';
  $handler->display->display_options['filters']['type_3']['table'] = 'node';
  $handler->display->display_options['filters']['type_3']['field'] = 'type';
  $handler->display->display_options['filters']['type_3']['value'] = array(
    'fieldtrip' => 'fieldtrip',
  );
  $handler->display->display_options['filters']['type_3']['group'] = 3;
  /* Filter criterion: Content: Status (field_fieldtrip_status) */
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['id'] = 'field_fieldtrip_status_value';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['table'] = 'field_data_field_fieldtrip_status';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['field'] = 'field_fieldtrip_status_value';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['value'] = array(
    'In Progress' => 'In Progress',
  );
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['group'] = 3;
  /* Filter criterion: Content: Has new content */
  $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['table'] = 'history';
  $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['group'] = 3;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'node';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['value'] = array(
    'fieldtrip' => 'fieldtrip',
  );
  $handler->display->display_options['filters']['type_2']['group'] = 4;
  /* Filter criterion: User: Manager (field_user_superior) */
  $handler->display->display_options['filters']['field_user_superior_target_id']['id'] = 'field_user_superior_target_id';
  $handler->display->display_options['filters']['field_user_superior_target_id']['table'] = 'field_data_field_user_superior';
  $handler->display->display_options['filters']['field_user_superior_target_id']['field'] = 'field_user_superior_target_id';
  $handler->display->display_options['filters']['field_user_superior_target_id']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_user_superior_target_id']['value']['value'] = 'blue_smurf';
  $handler->display->display_options['filters']['field_user_superior_target_id']['group'] = 4;
  /* Filter criterion: Content: Status (field_fieldtrip_status) */
  $handler->display->display_options['filters']['field_fieldtrip_status_value_1']['id'] = 'field_fieldtrip_status_value_1';
  $handler->display->display_options['filters']['field_fieldtrip_status_value_1']['table'] = 'field_data_field_fieldtrip_status';
  $handler->display->display_options['filters']['field_fieldtrip_status_value_1']['field'] = 'field_fieldtrip_status_value';
  $handler->display->display_options['filters']['field_fieldtrip_status_value_1']['value'] = array(
    'Submitted' => 'Submitted',
  );
  $handler->display->display_options['filters']['field_fieldtrip_status_value_1']['group'] = 4;

  /* Display: Action Items morelink */
  $handler = $view->new_display('attachment', 'Action Items morelink', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'The link the takes one to the main site reports page filtered on a give sector';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '5';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Sector (taxonomy_vocabulary_8) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['id'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['field'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['label'] = 'Sector';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="dv-seeall">See all Action Items</div>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'actionitems?f[0]=taxonomy_vocabulary_8%3A[tid]&display=default';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Sector (taxonomy_vocabulary_8) */
  $handler->display->display_options['arguments']['taxonomy_vocabulary_8_tid']['id'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_8_tid']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_8_tid']['field'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_8_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_8_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_8_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_8_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_8_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['displays'] = array(
    'block_11' => 'block_11',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_6' => 0,
    'block_8' => 0,
    'block_9' => 0,
    'block_10' => 0,
    'block_12' => 0,
  );

  /* Display: Inbox1 */
  $handler = $view->new_display('block', 'Inbox1', 'block_7');
  $handler->display->display_options['link_url'] = 'sitereports?f[0]=author%3A!1';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'comment_count' => 'comment_count',
    'new_comments' => 'new_comments',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'last_comment_name' => 'last_comment_name',
  );
  $handler->display->display_options['style_options']['default'] = 'last_comment_timestamp';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
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
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'new_comments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_comment_timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_comment_name' => array(
      'sortable' => 1,
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'You do not have items in your inbox';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['id'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['table'] = 'field_data_field_actionitem_responsible';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['field'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['label'] = 'Responsible';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* Field: Content: New comments */
  $handler->display->display_options['fields']['new_comments']['id'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['table'] = 'node';
  $handler->display->display_options['fields']['new_comments']['field'] = 'new_comments';
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'short';
  /* Field: Content: Last comment author */
  $handler->display->display_options['fields']['last_comment_name']['id'] = 'last_comment_name';
  $handler->display->display_options['fields']['last_comment_name']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_name']['field'] = 'last_comment_name';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Updated/commented date */
  $handler->display->display_options['sorts']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'actionitem' => 'actionitem',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: ActionItems */
  $handler->display->display_options['filters']['field_actionitem_status_value']['id'] = 'field_actionitem_status_value';
  $handler->display->display_options['filters']['field_actionitem_status_value']['table'] = 'field_data_field_actionitem_status';
  $handler->display->display_options['filters']['field_actionitem_status_value']['field'] = 'field_actionitem_status_value';
  $handler->display->display_options['filters']['field_actionitem_status_value']['ui_name'] = 'ActionItems';
  $handler->display->display_options['filters']['field_actionitem_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_actionitem_status_value']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_actionitem_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_actionitem_status_value']['expose']['operator_id'] = 'field_actionitem_status_value_op';
  $handler->display->display_options['filters']['field_actionitem_status_value']['expose']['label'] = 'ActionItems Status';
  $handler->display->display_options['filters']['field_actionitem_status_value']['expose']['operator'] = 'field_actionitem_status_value_op';
  $handler->display->display_options['filters']['field_actionitem_status_value']['expose']['identifier'] = 'field_actionitem_status_value';
  $handler->display->display_options['filters']['field_actionitem_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_actionitem_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_actionitem_status_value']['group_info']['label'] = 'Status (field_actionitem_status)';
  $handler->display->display_options['filters']['field_actionitem_status_value']['group_info']['identifier'] = 'field_actionitem_status_value';
  $handler->display->display_options['filters']['field_actionitem_status_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_actionitem_status_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['relationship'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = 'blue_smurf';
  $handler->display->display_options['filters']['uid_raw']['group'] = 1;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'actionitem' => 'actionitem',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Field: Status (field_actionitem_status) */
  $handler->display->display_options['filters']['field_actionitem_status_value_1']['id'] = 'field_actionitem_status_value_1';
  $handler->display->display_options['filters']['field_actionitem_status_value_1']['table'] = 'field_data_field_actionitem_status';
  $handler->display->display_options['filters']['field_actionitem_status_value_1']['field'] = 'field_actionitem_status_value';
  $handler->display->display_options['filters']['field_actionitem_status_value_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_actionitem_status_value_1']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_actionitem_status_value_1']['group'] = 2;

  /* Display: Progress Bar */
  $handler = $view->new_display('block', 'Progress Bar', 'block_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'The progress bar that shows under the Action Items tab on the Field Trip detail page';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = '';
  $handler->display->display_options['fields']['virtual_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_progress_bar';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Progress Button */
  $handler = $view->new_display('block', 'Progress Button', 'block_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'The progress button that shows under the Action Items tab on the Field Trip detail page';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = '';
  $handler->display->display_options['fields']['virtual_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: My Team Actionitems Number */
  $handler = $view->new_display('block', 'My Team Actionitems Number', 'block_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Team Action Items';
  $handler->display->display_options['display_description'] = 'Actionitems for my team';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['id'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['table'] = 'field_data_field_actionitem_responsible';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['field'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['label'] = 'Responsible users';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_superior_target_id']['id'] = 'field_user_superior_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['table'] = 'field_data_field_user_superior';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['field'] = 'field_user_superior_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['relationship'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['label'] = 'Manager';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_user_superior_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $export['dvtrc_action_items'] = $view;

  $view = new view();
  $view->name = 'dvtrc_field_trip';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Field Trip';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'fieldtrip' => 'fieldtrip',
  );
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
    'fieldtrip' => 'fieldtrip',
  );

  /* Display: FieldTrip P-1st */
  $handler = $view->new_display('block', 'FieldTrip P-1st', 'block_1');
  $handler->display->display_options['display_description'] = 'Field Trip PREFACE FIRST';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = '<div class="field-label">This is a [type]</div>';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'fieldtrip' => 'fieldtrip',
  );

  /* Display: FieldTripMap P-2nd */
  $handler = $view->new_display('block', 'FieldTripMap P-2nd', 'block_2');
  $handler->display->display_options['display_description'] = 'Block with the map on the field trip page PREFACE SECOND';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'field_trip';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_ftritem_images']['id'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images']['settings'] = array(
    'image_style' => 'gallery',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Field Trip (field_ftritem_field_trip) */
  $handler->display->display_options['arguments']['field_ftritem_field_trip_target_id']['id'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['arguments']['field_ftritem_field_trip_target_id']['table'] = 'field_data_field_ftritem_field_trip';
  $handler->display->display_options['arguments']['field_ftritem_field_trip_target_id']['field'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['arguments']['field_ftritem_field_trip_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ftritem_field_trip_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ftritem_field_trip_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ftritem_field_trip_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ftritem_field_trip_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ftritem' => 'ftritem',
  );

  /* Display: Field Trip P-3rd */
  $handler = $view->new_display('block', 'Field Trip P-3rd', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['display_description'] = 'Contains the progress of the FieldTrip in the last preface on the right';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = 'Progress';
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_progress_bar';
  /* Field: Content: Purpose(s) of the Fieldtrip */
  $handler->display->display_options['fields']['field_fieldtrip_fc_purpose']['id'] = 'field_fieldtrip_fc_purpose';
  $handler->display->display_options['fields']['field_fieldtrip_fc_purpose']['table'] = 'field_data_field_fieldtrip_fc_purpose';
  $handler->display->display_options['fields']['field_fieldtrip_fc_purpose']['field'] = 'field_fieldtrip_fc_purpose';
  $handler->display->display_options['fields']['field_fieldtrip_fc_purpose']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_fieldtrip_fc_purpose']['alter']['preserve_tags'] = '<table> <thead> <tbody> <tr> <th> <td>';
  $handler->display->display_options['fields']['field_fieldtrip_fc_purpose']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fieldtrip_fc_purpose']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fieldtrip_fc_purpose']['type'] = 'field_collection_table_view';
  $handler->display->display_options['fields']['field_fieldtrip_fc_purpose']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
    'empty' => 1,
  );
  $handler->display->display_options['fields']['field_fieldtrip_fc_purpose']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_fieldtrip_fc_purpose']['field_api_classes'] = TRUE;

  /* Display: Fieldtrip Slideshow */
  $handler = $view->new_display('block', 'Fieldtrip Slideshow', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'This slideshow shows on the fieldtrip page with images from all the sitevisits referenced';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ftritem_field_trip_target_id']['id'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['relationships']['field_ftritem_field_trip_target_id']['table'] = 'field_data_field_ftritem_field_trip';
  $handler->display->display_options['relationships']['field_ftritem_field_trip_target_id']['field'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['relationships']['field_ftritem_field_trip_target_id']['label'] = 'field_ftritem_field_trip';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Gallery Image */
  $handler->display->display_options['fields']['field_ftritem_images']['id'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['ui_name'] = 'Gallery Image';
  $handler->display->display_options['fields']['field_ftritem_images']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ftritem_images']['settings'] = array(
    'colorbox_node_style' => 'gallery',
    'colorbox_image_style' => 'gallery_popup_images',
    'colorbox_gallery' => 'field_page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ftritem_images']['separator'] = ' ';
  /* Field: Download Link */
  $handler->display->display_options['fields']['field_ftritem_images_3']['id'] = 'field_ftritem_images_3';
  $handler->display->display_options['fields']['field_ftritem_images_3']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_3']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_3']['ui_name'] = 'Download Link';
  $handler->display->display_options['fields']['field_ftritem_images_3']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images_3']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_ftritem_images_3']['settings'] = array(
    'text' => 'Download',
  );
  $handler->display->display_options['fields']['field_ftritem_images_3']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_3']['delta_offset'] = '0';
  /* Field: Image Title */
  $handler->display->display_options['fields']['field_ftritem_images_2']['id'] = 'field_ftritem_images_2';
  $handler->display->display_options['fields']['field_ftritem_images_2']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_2']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_2']['ui_name'] = 'Image Title';
  $handler->display->display_options['fields']['field_ftritem_images_2']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_2']['alter']['text'] = '[field_ftritem_images_2-title]';
  $handler->display->display_options['fields']['field_ftritem_images_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images_2']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_2']['delta_offset'] = '0';
  /* Field: Thumbnail */
  $handler->display->display_options['fields']['field_ftritem_images_1']['id'] = 'field_ftritem_images_1';
  $handler->display->display_options['fields']['field_ftritem_images_1']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_1']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_1']['ui_name'] = 'Thumbnail';
  $handler->display->display_options['fields']['field_ftritem_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images_1']['settings'] = array(
    'image_style' => 'user_comment_img',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['delta_limit'] = '6';
  $handler->display->display_options['fields']['field_ftritem_images_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ftritem_images_1']['separator'] = ' ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ftritem' => 'ftritem',
  );
  /* Filter criterion: Content: Images (field_ftritem_images:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';

  /* Display: Progress */
  $handler = $view->new_display('block', 'Progress', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Quicktab block with the progress of the fieldTrip';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = '';
  $handler->display->display_options['fields']['virtual_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['virtual_field']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_progress_links';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'fieldtrip' => 'fieldtrip',
  );
  /* Filter criterion: Content: Status (field_fieldtrip_status) */
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['id'] = 'field_fieldtrip_status_value';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['table'] = 'field_data_field_fieldtrip_status';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['field'] = 'field_fieldtrip_status_value';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['value'] = array(
    'Approved' => 'Approved',
  );

  /* Display: Field trip Description */
  $handler = $view->new_display('block', 'Field trip Description', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Description of the Fieldtrip';
  $handler->display->display_options['display_description'] = 'Description of the field trip on the FieldTrip main page. Contains Public and narrative summary';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Public Summary */
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['id'] = 'field_fieldtrip_public_summary';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['table'] = 'field_data_field_fieldtrip_public_summary';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['field'] = 'field_fieldtrip_public_summary';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['element_label_class'] = 'views-label';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['hide_empty'] = TRUE;
  /* Field: Content: Narrative */
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['id'] = 'field_fieldtrip_narrative';
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['table'] = 'field_data_field_fieldtrip_narrative';
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['field'] = 'field_fieldtrip_narrative';
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'fieldtrip' => 'fieldtrip',
  );
  /* Filter criterion: Content: Narrative (field_fieldtrip_narrative) */
  $handler->display->display_options['filters']['field_fieldtrip_narrative_value']['id'] = 'field_fieldtrip_narrative_value';
  $handler->display->display_options['filters']['field_fieldtrip_narrative_value']['table'] = 'field_data_field_fieldtrip_narrative';
  $handler->display->display_options['filters']['field_fieldtrip_narrative_value']['field'] = 'field_fieldtrip_narrative_value';
  $handler->display->display_options['filters']['field_fieldtrip_narrative_value']['operator'] = 'not empty';

  /* Display: Full Report */
  $handler = $view->new_display('page', 'Full Report', 'page_1');
  $handler->display->display_options['display_description'] = 'Fieldtrip Full report PDF version with the respective sitevisits ';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'FIELD TRIP: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['element_label_type'] = 'strong';
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_user_title']['id'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['table'] = 'field_data_field_user_title';
  $handler->display->display_options['fields']['field_user_title']['field'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_title']['element_label_type'] = 'strong';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_fieldtrip_proms_ta_id']['id'] = 'field_fieldtrip_proms_ta_id';
  $handler->display->display_options['fields']['field_fieldtrip_proms_ta_id']['table'] = 'field_data_field_fieldtrip_proms_ta_id';
  $handler->display->display_options['fields']['field_fieldtrip_proms_ta_id']['field'] = 'field_fieldtrip_proms_ta_id';
  $handler->display->display_options['fields']['field_fieldtrip_proms_ta_id']['element_label_type'] = 'strong';
  /* Field: Content: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['id'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['id'] = 'field_fieldtrip_start_end_date_2';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['label'] = 'Duration';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['type'] = 'date_default_with_duration';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'none',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'duration' => 1,
  );
  /* Field: Content: Public Summary */
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['id'] = 'field_fieldtrip_public_summary';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['table'] = 'field_data_field_fieldtrip_public_summary';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['field'] = 'field_fieldtrip_public_summary';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['label'] = '';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Narrative */
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['id'] = 'field_fieldtrip_narrative';
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['table'] = 'field_data_field_fieldtrip_narrative';
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['field'] = 'field_fieldtrip_narrative';
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['element_label_type'] = 'strong';
  $handler->display->display_options['path'] = 'node/%/fullreport';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Full Report';
  $handler->display->display_options['menu']['description'] = 'Provides a full report of the Field Trip for downloading and printing';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;

  /* Display: Attachm't - SiteReports */
  $handler = $view->new_display('attachment', 'Attachm\'t - SiteReports', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Attachment - Site Reports on the FieldTrip full Report';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1 class="map-title">Site Reports</h1>';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There are no Site Reports yet.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ftritem_field_trip_target_id']['id'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['relationships']['field_ftritem_field_trip_target_id']['table'] = 'field_data_field_ftritem_field_trip';
  $handler->display->display_options['relationships']['field_ftritem_field_trip_target_id']['field'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Date Visited */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'field_data_field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_ftritem_place']['id'] = 'field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['table'] = 'field_data_field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['field'] = 'field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_place']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_ftritem_place']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_place']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_ftritem_images']['id'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images']['settings'] = array(
    'image_style' => 'print_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_ftritem_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ftritem_images']['separator'] = '  ';
  /* Field: Content: Public Summary */
  $handler->display->display_options['fields']['field_ftritem_public_summary']['id'] = 'field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['table'] = 'field_data_field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['field'] = 'field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Full Report */
  $handler->display->display_options['fields']['field_ftritem_narrative']['id'] = 'field_ftritem_narrative';
  $handler->display->display_options['fields']['field_ftritem_narrative']['table'] = 'field_data_field_ftritem_narrative';
  $handler->display->display_options['fields']['field_ftritem_narrative']['field'] = 'field_ftritem_narrative';
  $handler->display->display_options['fields']['field_ftritem_narrative']['element_label_type'] = 'strong';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ftritem' => 'ftritem',
  );
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_6' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Pre Trip Report */
  $handler = $view->new_display('page', 'Pre Trip Report', 'page_2');
  $handler->display->display_options['display_description'] = 'Pre Trip Report PDF version with the respective sitevisits ';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'FieldTrip';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h5';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['path'] = 'node/%/pretripreport';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Pre-Trip Report';
  $handler->display->display_options['menu']['description'] = 'Provides a Pre Trip Report of the Field Trip for downloading and printing';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;

  /* Display: Locations */
  $handler = $view->new_display('attachment', 'Locations', 'attachment_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'location-contact-wrapper';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'location-contacts';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1 class="attachment-title">Locations to visit and contact information</h1>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_fieldtrip_places_target_id']['id'] = 'field_fieldtrip_places_target_id';
  $handler->display->display_options['relationships']['field_fieldtrip_places_target_id']['table'] = 'field_data_field_fieldtrip_places';
  $handler->display->display_options['relationships']['field_fieldtrip_places_target_id']['field'] = 'field_fieldtrip_places_target_id';
  $handler->display->display_options['relationships']['field_fieldtrip_places_target_id']['label'] = 'Fieldtrip-places';
  /* Relationship: Field: Location Type (taxonomy_vocabulary_1) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['relationship'] = 'field_fieldtrip_places_target_id';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['label'] = 'Type';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_fieldtrip_places_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Location Detail Information */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Location Detail Information';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Location Detail Information';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'strong';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Contact Person */
  $handler->display->display_options['fields']['field_place_responsible_person']['id'] = 'field_place_responsible_person';
  $handler->display->display_options['fields']['field_place_responsible_person']['table'] = 'field_data_field_place_responsible_person';
  $handler->display->display_options['fields']['field_place_responsible_person']['field'] = 'field_place_responsible_person';
  $handler->display->display_options['fields']['field_place_responsible_person']['relationship'] = 'field_fieldtrip_places_target_id';
  $handler->display->display_options['fields']['field_place_responsible_person']['label'] = '';
  $handler->display->display_options['fields']['field_place_responsible_person']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_place_responsible_person']['alter']['text'] = 'Contact: [field_place_responsible_person]';
  $handler->display->display_options['fields']['field_place_responsible_person']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_place_responsible_person']['hide_empty'] = TRUE;
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_place_email']['id'] = 'field_place_email';
  $handler->display->display_options['fields']['field_place_email']['table'] = 'field_data_field_place_email';
  $handler->display->display_options['fields']['field_place_email']['field'] = 'field_place_email';
  $handler->display->display_options['fields']['field_place_email']['relationship'] = 'field_fieldtrip_places_target_id';
  $handler->display->display_options['fields']['field_place_email']['label'] = '';
  $handler->display->display_options['fields']['field_place_email']['alter']['text'] = ' E-mail: [field_place_email]';
  $handler->display->display_options['fields']['field_place_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_place_email']['empty'] = 'No email address';
  $handler->display->display_options['fields']['field_place_email']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_place_email']['type'] = 'email_plain';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_place_phone']['id'] = 'field_place_phone';
  $handler->display->display_options['fields']['field_place_phone']['table'] = 'field_data_field_place_phone';
  $handler->display->display_options['fields']['field_place_phone']['field'] = 'field_place_phone';
  $handler->display->display_options['fields']['field_place_phone']['relationship'] = 'field_fieldtrip_places_target_id';
  $handler->display->display_options['fields']['field_place_phone']['label'] = '';
  $handler->display->display_options['fields']['field_place_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_place_phone']['empty'] = 'No phone number';
  $handler->display->display_options['fields']['field_place_phone']['hide_alter_empty'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_place_website']['id'] = 'field_place_website';
  $handler->display->display_options['fields']['field_place_website']['table'] = 'field_data_field_place_website';
  $handler->display->display_options['fields']['field_place_website']['field'] = 'field_place_website';
  $handler->display->display_options['fields']['field_place_website']['relationship'] = 'field_fieldtrip_places_target_id';
  $handler->display->display_options['fields']['field_place_website']['label'] = '';
  $handler->display->display_options['fields']['field_place_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_place_website']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_place_website']['click_sort_column'] = 'url';
  /* Field: Contact person detailed Information */
  $handler->display->display_options['fields']['field_place_contact_info']['id'] = 'field_place_contact_info';
  $handler->display->display_options['fields']['field_place_contact_info']['table'] = 'field_data_field_place_contact_info';
  $handler->display->display_options['fields']['field_place_contact_info']['field'] = 'field_place_contact_info';
  $handler->display->display_options['fields']['field_place_contact_info']['ui_name'] = 'Contact person detailed Information';
  $handler->display->display_options['fields']['field_place_contact_info']['label'] = 'Contact person detailed Information';
  $handler->display->display_options['fields']['field_place_contact_info']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_place_contact_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_place_contact_info']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_place_contact_info']['empty'] = 'No information provided yet.';
  $handler->display->display_options['fields']['field_place_contact_info']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_place_contact_info']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_place_contact_info']['multi_type'] = 'ul';
  /* Field: Field: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['relationship'] = 'field_fieldtrip_places_target_id';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['text'] = '[taxonomy_vocabulary_1-tid]';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['empty'] = 'No location type';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_location_type_icon';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_fieldtrip_places_target_id';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Questions */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Questions';
  $handler->display->display_options['fields']['view']['label'] = 'Questions';
  $handler->display->display_options['fields']['view']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'dvtrc_field_trip';
  $handler->display->display_options['fields']['view']['display'] = 'block_13';
  $handler->display->display_options['fields']['view']['arguments'] = '[%nid]';
  /* Field: Questionnaire */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['ui_name'] = 'Questionnaire';
  $handler->display->display_options['fields']['view_1']['label'] = 'Questionnaire';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'dvtrc_field_trip';
  $handler->display->display_options['fields']['view_1']['display'] = 'block_12';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[%taxonomy_vocabulary_1]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'fieldtrip' => 'fieldtrip',
  );
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_6' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Action Items */
  $handler = $view->new_display('attachment', 'Action Items', 'attachment_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1 class="attachment-title">Action Items at this location</h1>';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There are no Action Items yet';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_actionitem_resp_place_target_id']['id'] = 'field_actionitem_resp_place_target_id';
  $handler->display->display_options['relationships']['field_actionitem_resp_place_target_id']['table'] = 'field_data_field_actionitem_resp_place';
  $handler->display->display_options['relationships']['field_actionitem_resp_place_target_id']['field'] = 'field_actionitem_resp_place_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_fieldtrip_places_node']['id'] = 'reverse_field_fieldtrip_places_node';
  $handler->display->display_options['relationships']['reverse_field_fieldtrip_places_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_fieldtrip_places_node']['field'] = 'reverse_field_fieldtrip_places_node';
  $handler->display->display_options['relationships']['reverse_field_fieldtrip_places_node']['relationship'] = 'field_actionitem_resp_place_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Action Item';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Follow-up Task */
  $handler->display->display_options['fields']['field_actionitem_followuptask']['id'] = 'field_actionitem_followuptask';
  $handler->display->display_options['fields']['field_actionitem_followuptask']['table'] = 'field_data_field_actionitem_followuptask';
  $handler->display->display_options['fields']['field_actionitem_followuptask']['field'] = 'field_actionitem_followuptask';
  /* Field: Content: Due Date */
  $handler->display->display_options['fields']['field_actionitem_due_date']['id'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['table'] = 'field_data_field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['field'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Status */
  $handler->display->display_options['fields']['field_actionitem_status']['id'] = 'field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['table'] = 'field_data_field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['field'] = 'field_actionitem_status';
  /* Field: Content: Priority */
  $handler->display->display_options['fields']['field_actionitem_severity']['id'] = 'field_actionitem_severity';
  $handler->display->display_options['fields']['field_actionitem_severity']['table'] = 'field_data_field_actionitem_severity';
  $handler->display->display_options['fields']['field_actionitem_severity']['field'] = 'field_actionitem_severity';
  /* Field: Content: Responsible */
  $handler->display->display_options['fields']['field_actionitem_responsible']['id'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['table'] = 'field_data_field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['field'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_actionitem_responsible']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_actionitem_resp_place']['id'] = 'field_actionitem_resp_place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['table'] = 'field_data_field_actionitem_resp_place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['field'] = 'field_actionitem_resp_place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['label'] = 'Place';
  $handler->display->display_options['fields']['field_actionitem_resp_place']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_fieldtrip_places_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'actionitem' => 'actionitem',
  );
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_6' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: My fieldtrips */
  $handler = $view->new_display('block', 'My fieldtrips', 'block_7');
  $handler->display->display_options['display_description'] = 'Block outputs a list of fieldtrips that belong to a given user';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['id'] = 'field_fieldtrip_user_target_id';
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['table'] = 'field_data_field_fieldtrip_user';
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['field'] = 'field_fieldtrip_user_target_id';
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['label'] = 'field_fieldtrip_user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'FieldTrips';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['id'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['id'] = 'field_fieldtrip_start_end_date_1';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['id'] = 'field_fieldtrip_start_end_date_2';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['label'] = 'Duration';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['type'] = 'date_default_with_duration';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'none',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'duration' => 1,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_fieldtrip_status']['id'] = 'field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['table'] = 'field_data_field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['field'] = 'field_fieldtrip_status';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = 'Actions';
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field_1']['id'] = 'virtual_field_1';
  $handler->display->display_options['fields']['virtual_field_1']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['label'] = 'Progress';
  $handler->display->display_options['fields']['virtual_field_1']['virtual_field'] = 'field_progress_bar';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_fieldtrip_user_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Open Fieldtrips Block */
  $handler = $view->new_display('block', 'Open Fieldtrips Block', 'block_8');
  $handler->display->display_options['display_description'] = 'Block outputs a list of open fieldtrips that belong to a given user';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_fieldtrip_start_end_date' => 'field_fieldtrip_start_end_date',
    'field_fieldtrip_start_end_date_1' => 'field_fieldtrip_start_end_date_1',
    'field_fieldtrip_status' => 'field_fieldtrip_status',
    'virtual_field_1' => 'virtual_field_1',
    'virtual_field' => 'virtual_field',
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
    'field_fieldtrip_start_end_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fieldtrip_start_end_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fieldtrip_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'virtual_field_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'virtual_field' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'expand' => 'title',
    'icon' => '',
    'icon_size' => '',
    'hide' => array(
      'title' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_fieldtrip_start_end_date' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'field_fieldtrip_start_end_date_1' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'field_fieldtrip_status' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'virtual_field_1' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'virtual_field' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['id'] = 'field_fieldtrip_user_target_id';
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['table'] = 'field_data_field_fieldtrip_user';
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['field'] = 'field_fieldtrip_user_target_id';
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['label'] = 'field_fieldtrip_user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['id'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['label'] = 'Dates';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['id'] = 'field_fieldtrip_start_end_date_1';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['label'] = 'Duration';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['type'] = 'date_default_with_duration';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'none',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'duration' => 1,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_fieldtrip_status']['id'] = 'field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['table'] = 'field_data_field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['field'] = 'field_fieldtrip_status';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field_1']['id'] = 'virtual_field_1';
  $handler->display->display_options['fields']['virtual_field_1']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['label'] = 'Progress';
  $handler->display->display_options['fields']['virtual_field_1']['virtual_field'] = 'field_progress_bar';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = 'Actions';
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_fieldtrip_user_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Status (field_fieldtrip_status) */
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['id'] = 'field_fieldtrip_status_value';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['table'] = 'field_data_field_fieldtrip_status';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['field'] = 'field_fieldtrip_status_value';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['value'] = array(
    'Approved' => 'Approved',
  );

  /* Display: MyTeam fieldtrips */
  $handler = $view->new_display('block', 'MyTeam fieldtrips', 'block_9');
  $handler->display->display_options['display_description'] = 'Block outputs a list of fieldtrips that belong to a given team of users';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['id'] = 'field_fieldtrip_user_target_id';
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['table'] = 'field_data_field_fieldtrip_user';
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['field'] = 'field_fieldtrip_user_target_id';
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['label'] = 'field_fieldtrip_user';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_superior_target_id']['id'] = 'field_user_superior_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['table'] = 'field_data_field_user_superior';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['field'] = 'field_user_superior_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['relationship'] = 'field_fieldtrip_user_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['label'] = 'Manager';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'FieldTrips';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['id'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['id'] = 'field_fieldtrip_start_end_date_1';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['id'] = 'field_fieldtrip_start_end_date_2';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['label'] = 'Duration';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['type'] = 'date_default_with_duration';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'none',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'duration' => 1,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_fieldtrip_status']['id'] = 'field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['table'] = 'field_data_field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['field'] = 'field_fieldtrip_status';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = 'Actions';
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field_1']['id'] = 'virtual_field_1';
  $handler->display->display_options['fields']['virtual_field_1']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['label'] = 'Progress';
  $handler->display->display_options['fields']['virtual_field_1']['virtual_field'] = 'field_progress_bar';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_user_superior_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Current FieldTrip */
  $handler = $view->new_display('block', 'Current FieldTrip', 'block_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Current FieldTrip';
  $handler->display->display_options['display_description'] = 'Block outputs the latest current open fieldtrip that belong to a given user';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'virtual_field' => 'virtual_field',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'virtual_field' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['id'] = 'field_fieldtrip_user_target_id';
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['table'] = 'field_data_field_fieldtrip_user';
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['field'] = 'field_fieldtrip_user_target_id';
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['label'] = 'field_fieldtrip_user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Current FieldTrip';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_class'] = 'current-fieldtrip';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = '';
  $handler->display->display_options['fields']['virtual_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Start and End Date -  start date (field_fieldtrip_start_end_date) */
  $handler->display->display_options['sorts']['field_fieldtrip_start_end_date_value']['id'] = 'field_fieldtrip_start_end_date_value';
  $handler->display->display_options['sorts']['field_fieldtrip_start_end_date_value']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['sorts']['field_fieldtrip_start_end_date_value']['field'] = 'field_fieldtrip_start_end_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_fieldtrip_user_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Status (field_fieldtrip_status) */
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['id'] = 'field_fieldtrip_status_value';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['table'] = 'field_data_field_fieldtrip_status';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['field'] = 'field_fieldtrip_status_value';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['value'] = array(
    'In Progress' => 'In Progress',
  );
  /* Filter criterion: Content: Start and End Date -  start date (field_fieldtrip_start_end_date) */
  $handler->display->display_options['filters']['field_fieldtrip_start_end_date_value']['id'] = 'field_fieldtrip_start_end_date_value';
  $handler->display->display_options['filters']['field_fieldtrip_start_end_date_value']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['filters']['field_fieldtrip_start_end_date_value']['field'] = 'field_fieldtrip_start_end_date_value';
  $handler->display->display_options['filters']['field_fieldtrip_start_end_date_value']['operator'] = '<=';
  /* Filter criterion: Content: Start and End Date - end date (field_fieldtrip_start_end_date:value2) */
  $handler->display->display_options['filters']['field_fieldtrip_start_end_date_value2']['id'] = 'field_fieldtrip_start_end_date_value2';
  $handler->display->display_options['filters']['field_fieldtrip_start_end_date_value2']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['filters']['field_fieldtrip_start_end_date_value2']['field'] = 'field_fieldtrip_start_end_date_value2';
  $handler->display->display_options['filters']['field_fieldtrip_start_end_date_value2']['operator'] = '>=';

  /* Display: Current FieldTrip progress */
  $handler = $view->new_display('block', 'Current FieldTrip progress', 'block_11');
  $handler->display->display_options['display_description'] = 'Block outputs the progress of the current open fieldtrip that belong to a given user';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_fieldtrip_status' => 'field_fieldtrip_status',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['id'] = 'field_fieldtrip_user_target_id';
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['table'] = 'field_data_field_fieldtrip_user';
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['field'] = 'field_fieldtrip_user_target_id';
  $handler->display->display_options['relationships']['field_fieldtrip_user_target_id']['label'] = 'field_fieldtrip_user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = '';
  $handler->display->display_options['fields']['virtual_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['virtual_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_progress_bar';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_fieldtrip_status']['id'] = 'field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['table'] = 'field_data_field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['field'] = 'field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['label'] = '';
  $handler->display->display_options['fields']['field_fieldtrip_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fieldtrip_status']['alter']['text'] = '[virtual_field]';
  $handler->display->display_options['fields']['field_fieldtrip_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Start and End Date -  start date (field_fieldtrip_start_end_date) */
  $handler->display->display_options['sorts']['field_fieldtrip_start_end_date_value']['id'] = 'field_fieldtrip_start_end_date_value';
  $handler->display->display_options['sorts']['field_fieldtrip_start_end_date_value']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['sorts']['field_fieldtrip_start_end_date_value']['field'] = 'field_fieldtrip_start_end_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_fieldtrip_user_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Status (field_fieldtrip_status) */
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['id'] = 'field_fieldtrip_status_value';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['table'] = 'field_data_field_fieldtrip_status';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['field'] = 'field_fieldtrip_status_value';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['value'] = array(
    'In Progress' => 'In Progress',
  );
  /* Filter criterion: Content: Start and End Date -  start date (field_fieldtrip_start_end_date) */
  $handler->display->display_options['filters']['field_fieldtrip_start_end_date_value']['id'] = 'field_fieldtrip_start_end_date_value';
  $handler->display->display_options['filters']['field_fieldtrip_start_end_date_value']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['filters']['field_fieldtrip_start_end_date_value']['field'] = 'field_fieldtrip_start_end_date_value';
  $handler->display->display_options['filters']['field_fieldtrip_start_end_date_value']['operator'] = '<=';
  /* Filter criterion: Content: Start and End Date - end date (field_fieldtrip_start_end_date:value2) */
  $handler->display->display_options['filters']['field_fieldtrip_start_end_date_value2']['id'] = 'field_fieldtrip_start_end_date_value2';
  $handler->display->display_options['filters']['field_fieldtrip_start_end_date_value2']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['filters']['field_fieldtrip_start_end_date_value2']['field'] = 'field_fieldtrip_start_end_date_value2';
  $handler->display->display_options['filters']['field_fieldtrip_start_end_date_value2']['operator'] = '>=';

  /* Display: Reports Attachment */
  $handler = $view->new_display('attachment', 'Reports Attachment', 'attachment_4');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1 class="attachment-title">Site Reports conducted</h1>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_fieldtrip_places_target_id']['id'] = 'field_fieldtrip_places_target_id';
  $handler->display->display_options['relationships']['field_fieldtrip_places_target_id']['table'] = 'field_data_field_fieldtrip_places';
  $handler->display->display_options['relationships']['field_fieldtrip_places_target_id']['field'] = 'field_fieldtrip_places_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ftritem_place_node']['id'] = 'reverse_field_ftritem_place_node';
  $handler->display->display_options['relationships']['reverse_field_ftritem_place_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ftritem_place_node']['field'] = 'reverse_field_ftritem_place_node';
  $handler->display->display_options['relationships']['reverse_field_ftritem_place_node']['relationship'] = 'field_fieldtrip_places_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_ftritem_place_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Date Visited */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'field_data_field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['relationship'] = 'reverse_field_ftritem_place_node';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_ftritem_status']['id'] = 'field_ftritem_status';
  $handler->display->display_options['fields']['field_ftritem_status']['table'] = 'field_data_field_ftritem_status';
  $handler->display->display_options['fields']['field_ftritem_status']['field'] = 'field_ftritem_status';
  $handler->display->display_options['fields']['field_ftritem_status']['relationship'] = 'reverse_field_ftritem_place_node';
  $handler->display->display_options['fields']['field_ftritem_status']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_status']['element_label_colon'] = FALSE;
  /* Field: Content: Full Report */
  $handler->display->display_options['fields']['field_ftritem_narrative']['id'] = 'field_ftritem_narrative';
  $handler->display->display_options['fields']['field_ftritem_narrative']['table'] = 'field_data_field_ftritem_narrative';
  $handler->display->display_options['fields']['field_ftritem_narrative']['field'] = 'field_ftritem_narrative';
  $handler->display->display_options['fields']['field_ftritem_narrative']['relationship'] = 'reverse_field_ftritem_place_node';
  $handler->display->display_options['fields']['field_ftritem_narrative']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_narrative']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'fieldtrip' => 'fieldtrip',
  );
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_6' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Full Report Data Overlay */
  $handler = $view->new_display('openlayers', 'Full Report Data Overlay', 'openlayers_1');
  $handler->display->display_options['display_description'] = 'This is the data overlay for the black and white map that will be showing on the full report page';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_ftritem_lat_long',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Site Reports found';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ftritem_field_trip_target_id']['id'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['relationships']['field_ftritem_field_trip_target_id']['table'] = 'field_data_field_ftritem_field_trip';
  $handler->display->display_options['relationships']['field_ftritem_field_trip_target_id']['field'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['relationships']['field_ftritem_field_trip_target_id']['label'] = 'sitereport-fieldtrip';
  /* Relationship: Field: Location Type (taxonomy_vocabulary_1) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Lat-Long */
  $handler->display->display_options['fields']['field_ftritem_lat_long']['id'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['table'] = 'field_data_field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['field'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['settings'] = array(
    'data' => 'centroid',
  );
  /* Field: Field: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['relationship'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['fields']['field_term_icon']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'map_icon',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon_1']['id'] = 'field_term_icon_1';
  $handler->display->display_options['fields']['field_term_icon_1']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon_1']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon_1']['relationship'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['fields']['field_term_icon_1']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_term_icon_1']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'map_icon_bw',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'fieldtrip' => 'fieldtrip',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ftritem' => 'ftritem',
  );

  /* Display: SiteReports Map */
  $handler = $view->new_display('attachment', 'SiteReports Map', 'attachment_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Attachment - Map of Site Reports on the FieldTrip full Report';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'full_tripreports_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1 class="map-title">MAP: Locations visited</h1>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no Site Reports yet therefore we cannot draw the map';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'SiteReport';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_type'] = 'strong';
  /* Field: Field: Date Visited */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'field_data_field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_ftritem_place']['id'] = 'field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['table'] = 'field_data_field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['field'] = 'field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_ftritem_place']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_ftritem_images']['id'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images']['delta_limit'] = '2';
  $handler->display->display_options['fields']['field_ftritem_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ftritem_images']['separator'] = '  ';
  /* Field: Content: Public Summary */
  $handler->display->display_options['fields']['field_ftritem_public_summary']['id'] = 'field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['table'] = 'field_data_field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['field'] = 'field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['element_label_type'] = 'strong';
  /* Field: Content: Full Report */
  $handler->display->display_options['fields']['field_ftritem_narrative']['id'] = 'field_ftritem_narrative';
  $handler->display->display_options['fields']['field_ftritem_narrative']['table'] = 'field_data_field_ftritem_narrative';
  $handler->display->display_options['fields']['field_ftritem_narrative']['field'] = 'field_ftritem_narrative';
  $handler->display->display_options['fields']['field_ftritem_narrative']['element_label_type'] = 'strong';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ftritem' => 'ftritem',
  );
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_6' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Questionnaire */
  $handler = $view->new_display('block', 'Questionnaire', 'block_12');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'taxonomy_vocabulary_1' => 'taxonomy_vocabulary_1',
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
    'taxonomy_vocabulary_1' => array(
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Questionnaire yet';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Location Type (taxonomy_vocabulary_1) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Questions';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_location_type_icon';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Write your answers here';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location Type (taxonomy_vocabulary_1) */
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'questionnaire_question' => 'questionnaire_question',
  );

  /* Display: Questions - Answers */
  $handler = $view->new_display('block', 'Questions - Answers', 'block_13');
  $handler->display->display_options['display_description'] = 'Questions with there answers';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Questions yet';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Location Type (taxonomy_vocabulary_1) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['reverse_questionnaire_answer_question_questionnaire_answer']['id'] = 'reverse_questionnaire_answer_question_questionnaire_answer';
  $handler->display->display_options['relationships']['reverse_questionnaire_answer_question_questionnaire_answer']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_questionnaire_answer_question_questionnaire_answer']['field'] = 'reverse_questionnaire_answer_question_questionnaire_answer';
  $handler->display->display_options['relationships']['reverse_questionnaire_answer_question_questionnaire_answer']['label'] = 'Question';
  $handler->display->display_options['relationships']['reverse_questionnaire_answer_question_questionnaire_answer']['required'] = TRUE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['questionnaire_answer_context_target_id']['id'] = 'questionnaire_answer_context_target_id';
  $handler->display->display_options['relationships']['questionnaire_answer_context_target_id']['table'] = 'field_data_questionnaire_answer_context';
  $handler->display->display_options['relationships']['questionnaire_answer_context_target_id']['field'] = 'questionnaire_answer_context_target_id';
  $handler->display->display_options['relationships']['questionnaire_answer_context_target_id']['relationship'] = 'reverse_questionnaire_answer_question_questionnaire_answer';
  $handler->display->display_options['relationships']['questionnaire_answer_context_target_id']['label'] = 'Context';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['questionnaire_answer_qnnaire_target_id']['id'] = 'questionnaire_answer_qnnaire_target_id';
  $handler->display->display_options['relationships']['questionnaire_answer_qnnaire_target_id']['table'] = 'field_data_questionnaire_answer_qnnaire';
  $handler->display->display_options['relationships']['questionnaire_answer_qnnaire_target_id']['field'] = 'questionnaire_answer_qnnaire_target_id';
  $handler->display->display_options['relationships']['questionnaire_answer_qnnaire_target_id']['relationship'] = 'reverse_questionnaire_answer_question_questionnaire_answer';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Questions';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['questionnaire_answer_context']['id'] = 'questionnaire_answer_context';
  $handler->display->display_options['fields']['questionnaire_answer_context']['table'] = 'field_data_questionnaire_answer_context';
  $handler->display->display_options['fields']['questionnaire_answer_context']['field'] = 'questionnaire_answer_context';
  $handler->display->display_options['fields']['questionnaire_answer_context']['relationship'] = 'reverse_questionnaire_answer_question_questionnaire_answer';
  $handler->display->display_options['fields']['questionnaire_answer_context']['exclude'] = TRUE;
  /* Field: Field: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_location_type_icon';
  /* Field: Answer: Answer All */
  $handler->display->display_options['fields']['answer']['id'] = 'answer';
  $handler->display->display_options['fields']['answer']['table'] = 'questionnaire_answer';
  $handler->display->display_options['fields']['answer']['field'] = 'answer';
  $handler->display->display_options['fields']['answer']['relationship'] = 'reverse_questionnaire_answer_question_questionnaire_answer';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['context']['id'] = 'context';
  $handler->display->display_options['arguments']['context']['table'] = 'questionnaire_answer';
  $handler->display->display_options['arguments']['context']['field'] = 'context';
  $handler->display->display_options['arguments']['context']['relationship'] = 'reverse_questionnaire_answer_question_questionnaire_answer';
  $handler->display->display_options['arguments']['context']['default_action'] = 'default';
  $handler->display->display_options['arguments']['context']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['context']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['context']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['context']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['context']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $export['dvtrc_field_trip'] = $view;

  $view = new view();
  $view->name = 'dvtrc_locations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Locations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
    2 => '2',
    4 => '4',
    5 => '5',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'type' => 'type',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'place' => 'place',
  );

  /* Display: location P-FIRST */
  $handler = $view->new_display('block', 'location P-FIRST', 'block');
  $handler->display->display_options['display_description'] = 'First preface on the locations with the details';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = '<div class="field-label">This is a Location</div>';
  $handler->display->display_options['fields']['type']['element_label_type'] = 'h6';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'place' => 'place',
  );

  /* Display: locationMap P-SECOND */
  $handler = $view->new_display('block', 'locationMap P-SECOND', 'block_2');
  $handler->display->display_options['display_description'] = 'Second preface with the map';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'locations';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Statistics */
  $handler = $view->new_display('block', 'Statistics', 'block_1');
  $handler->display->display_options['display_description'] = 'Block with the statistics ';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'The statistics are still under active development.';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Latest Location Visited */
  $handler = $view->new_display('block', 'Latest Location Visited', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest Location visited';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['label'] = 'Admin Unit';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Recent Site Report';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'dvtrc_site_visits';
  $handler->display->display_options['fields']['view']['display'] = 'block_18';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid_1]';
  /* Field: Recent Location */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Recent Location';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Recent Location';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'views-label';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_location_type_icon';
  /* Field: Content: Contact Persons */
  $handler->display->display_options['fields']['field_place_contact_info']['id'] = 'field_place_contact_info';
  $handler->display->display_options['fields']['field_place_contact_info']['table'] = 'field_data_field_place_contact_info';
  $handler->display->display_options['fields']['field_place_contact_info']['field'] = 'field_place_contact_info';
  $handler->display->display_options['fields']['field_place_contact_info']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_place_contact_info']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_place_contact_info']['delta_offset'] = '0';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_place_email']['id'] = 'field_place_email';
  $handler->display->display_options['fields']['field_place_email']['table'] = 'field_data_field_place_email';
  $handler->display->display_options['fields']['field_place_email']['field'] = 'field_place_email';
  $handler->display->display_options['fields']['field_place_email']['hide_empty'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_place_phone']['id'] = 'field_place_phone';
  $handler->display->display_options['fields']['field_place_phone']['table'] = 'field_data_field_place_phone';
  $handler->display->display_options['fields']['field_place_phone']['field'] = 'field_place_phone';
  $handler->display->display_options['fields']['field_place_phone']['hide_empty'] = TRUE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_place_website']['id'] = 'field_place_website';
  $handler->display->display_options['fields']['field_place_website']['table'] = 'field_data_field_place_website';
  $handler->display->display_options['fields']['field_place_website']['field'] = 'field_place_website';
  $handler->display->display_options['fields']['field_place_website']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_place_website']['click_sort_column'] = 'url';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = 'see';
  $handler->display->display_options['fields']['tid']['alter']['path'] = 'sitereports?f[0]=taxonomy_vocabulary_6%3A[tid]&display=list';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="dv-seeall">See all Site Reports in %1</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'sitereports?f[0]=taxonomy_vocabulary_6%3A[tid]&display=list';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['validate_options']['vocabularies'] = array(
    'vocabulary_6' => 'vocabulary_6',
  );

  /* Display: Contact Persons */
  $handler = $view->new_display('block', 'Contact Persons', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contact Persons';
  $handler->display->display_options['display_description'] = 'Contains the Contact Persons information on the location detail page';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Contact Persons */
  $handler->display->display_options['fields']['field_place_contact_info']['id'] = 'field_place_contact_info';
  $handler->display->display_options['fields']['field_place_contact_info']['table'] = 'field_data_field_place_contact_info';
  $handler->display->display_options['fields']['field_place_contact_info']['field'] = 'field_place_contact_info';
  $handler->display->display_options['fields']['field_place_contact_info']['label'] = '';
  $handler->display->display_options['fields']['field_place_contact_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_place_contact_info']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_place_contact_info']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_place_contact_info']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_place_contact_info']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Location Action Items */
  $handler = $view->new_display('block', 'Location Action Items', 'block_5');
  $handler->display->display_options['display_description'] = 'Action items from a given location';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_actionitem_due_date' => 'field_actionitem_due_date',
    'field_actionitem_responsible' => 'field_actionitem_responsible',
    'field_actionitem_status' => 'field_actionitem_status',
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
    'field_actionitem_due_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_actionitem_responsible' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_actionitem_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_actionitem_resp_place_target_id']['id'] = 'field_actionitem_resp_place_target_id';
  $handler->display->display_options['relationships']['field_actionitem_resp_place_target_id']['table'] = 'field_data_field_actionitem_resp_place';
  $handler->display->display_options['relationships']['field_actionitem_resp_place_target_id']['field'] = 'field_actionitem_resp_place_target_id';
  $handler->display->display_options['relationships']['field_actionitem_resp_place_target_id']['label'] = 'Location';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Task';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Due Date */
  $handler->display->display_options['fields']['field_actionitem_due_date']['id'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['table'] = 'field_data_field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['field'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Status */
  $handler->display->display_options['fields']['field_actionitem_status']['id'] = 'field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['table'] = 'field_data_field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['field'] = 'field_actionitem_status';
  /* Field: Content: Responsible */
  $handler->display->display_options['fields']['field_actionitem_responsible']['id'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['table'] = 'field_data_field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['field'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_actionitem_responsible']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Location (field_actionitem_resp_place) */
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['id'] = 'field_actionitem_resp_place_target_id';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['table'] = 'field_data_field_actionitem_resp_place';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['field'] = 'field_actionitem_resp_place_target_id';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['validate_options']['types'] = array(
    'place' => 'place',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $export['dvtrc_locations'] = $view;

  $view = new view();
  $view->name = 'dvtrc_maps';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'dvtrc maps';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'dvtrc maps';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'reverse_taxonomy_vocabulary_6_node';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Overall Content Page */
  $handler = $view->new_display('page', 'Overall Content Page', 'page');
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Lat-Long */
  $handler->display->display_options['fields']['field_ftritem_lat_long']['id'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['table'] = 'field_data_field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['field'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Field: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['text'] = '/sites/default/themes/devtrack_theme/icons/[taxonomy_vocabulary_1]_c.png';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Lat-Long */
  $handler->display->display_options['fields']['field_place_lat_long']['id'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['table'] = 'field_data_field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['field'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['relationship'] = 'field_fieldtrip_places_target_id';
  $handler->display->display_options['fields']['field_place_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_place_lat_long']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'actionitem' => 'actionitem',
    'fieldtrip' => 'fieldtrip',
    'ftritem' => 'ftritem',
    'place' => 'place',
  );
  $handler->display->display_options['path'] = 'dvtrc-maps';

  /* Display: dvtrc Sitevisit DataOverlay */
  $handler = $view->new_display('openlayers', 'dvtrc Sitevisit DataOverlay', 'openlayers_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'dvtrc maps (Site visit)';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_ftritem_lat_long',
    'other_lon' => 'field_ftritem_lat_long',
    'wkt' => 'field_ftritem_lat_long',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Location Type (taxonomy_vocabulary_1) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Lat-Long */
  $handler->display->display_options['fields']['field_ftritem_lat_long']['id'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['table'] = 'field_data_field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['field'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Field: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['text'] = '/sites/default/themes/devtrack_theme/icons/[taxonomy_vocabulary_1]_c.png';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['relationship'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['fields']['field_term_icon']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'map_icon',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon_1']['id'] = 'field_term_icon_1';
  $handler->display->display_options['fields']['field_term_icon_1']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon_1']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon_1']['relationship'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['fields']['field_term_icon_1']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_term_icon_1']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'map_icon_bw',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ftritem' => 'ftritem',
  );

  /* Display: dvtrc FieldTrip DataOverlay */
  $handler = $view->new_display('openlayers', 'dvtrc FieldTrip DataOverlay', 'openlayers_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'dvtrc maps (Fieldtrip)';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_place_lat_long',
    'other_lon' => 'field_place_lat_long',
    'wkt' => 'field_place_lat_long',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ftritem_field_trip_node']['id'] = 'reverse_field_ftritem_field_trip_node';
  $handler->display->display_options['relationships']['reverse_field_ftritem_field_trip_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ftritem_field_trip_node']['field'] = 'reverse_field_ftritem_field_trip_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ftritem_place_target_id']['id'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['relationships']['field_ftritem_place_target_id']['table'] = 'field_data_field_ftritem_place';
  $handler->display->display_options['relationships']['field_ftritem_place_target_id']['field'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['relationships']['field_ftritem_place_target_id']['relationship'] = 'reverse_field_ftritem_field_trip_node';
  /* Relationship: Field: Location Type (taxonomy_vocabulary_1) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['relationship'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Lat-Long */
  $handler->display->display_options['fields']['field_place_lat_long']['id'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['table'] = 'field_data_field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['field'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['relationship'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['fields']['field_place_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_place_lat_long']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Field: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['relationship'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['text'] = '/sites/default/themes/devtrack_theme/icons/[taxonomy_vocabulary_1]_c.png';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['relationship'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['fields']['field_term_icon']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'map_icon',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon_1']['id'] = 'field_term_icon_1';
  $handler->display->display_options['fields']['field_term_icon_1']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon_1']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon_1']['relationship'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['fields']['field_term_icon_1']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_term_icon_1']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'map_icon_bw',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_ftritem_field_trip_node';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Location Data Overlay */
  $handler = $view->new_display('openlayers', 'Location Data Overlay', 'openlayers_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'dvtrc maps(Location)';
  $handler->display->display_options['display_description'] = 'Data Overlay for Locations/Places';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_place_lat_long',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Location Type (taxonomy_vocabulary_1) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Lat-Long */
  $handler->display->display_options['fields']['field_place_lat_long']['id'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['table'] = 'field_data_field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['field'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_place_lat_long']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Field: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['text'] = '/sites/default/themes/devtrack_theme/icons/[taxonomy_vocabulary_1]_c.png';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['relationship'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['fields']['field_term_icon']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'map_icon',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon_1']['id'] = 'field_term_icon_1';
  $handler->display->display_options['fields']['field_term_icon_1']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon_1']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon_1']['relationship'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['fields']['field_term_icon_1']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_term_icon_1']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'map_icon_bw',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'place' => 'place',
  );

  /* Display: ActionItems Data Overlay */
  $handler = $view->new_display('openlayers', 'ActionItems Data Overlay', 'openlayers_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_place_lat_long',
    'other_lon' => 'title',
    'wkt' => 'field_place_lat_long',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_actionitem_resp_place_target_id']['id'] = 'field_actionitem_resp_place_target_id';
  $handler->display->display_options['relationships']['field_actionitem_resp_place_target_id']['table'] = 'field_data_field_actionitem_resp_place';
  $handler->display->display_options['relationships']['field_actionitem_resp_place_target_id']['field'] = 'field_actionitem_resp_place_target_id';
  /* Relationship: Field: Location Type (taxonomy_vocabulary_1) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['relationship'] = 'field_actionitem_resp_place_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Lat-Long */
  $handler->display->display_options['fields']['field_place_lat_long']['id'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['table'] = 'field_data_field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['field'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['relationship'] = 'field_actionitem_resp_place_target_id';
  $handler->display->display_options['fields']['field_place_lat_long']['label'] = '';
  $handler->display->display_options['fields']['field_place_lat_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_place_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_place_lat_long']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Field: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['text'] = '/sites/default/themes/devtrack_theme/icons/[taxonomy_vocabulary_1]_c.png';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['relationship'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['fields']['field_term_icon']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'map_icon',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon_1']['id'] = 'field_term_icon_1';
  $handler->display->display_options['fields']['field_term_icon_1']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon_1']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon_1']['relationship'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['fields']['field_term_icon_1']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_term_icon_1']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'map_icon_bw',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: dvtrc OECD DataOverlay */
  $handler = $view->new_display('openlayers', 'dvtrc OECD DataOverlay', 'openlayers_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'dvtrc maps (Site visit)';
  $handler->display->display_options['display_description'] = 'Map with site visits that share a given oecod sector code';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_ftritem_lat_long',
    'other_lon' => 'field_ftritem_lat_long',
    'wkt' => 'field_ftritem_lat_long',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Location Type (taxonomy_vocabulary_1) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Lat-Long */
  $handler->display->display_options['fields']['field_ftritem_lat_long']['id'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['table'] = 'field_data_field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['field'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Field: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['text'] = '/sites/default/themes/devtrack_theme/icons/[taxonomy_vocabulary_1]_c.png';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['relationship'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['fields']['field_term_icon']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'map_icon',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon_1']['id'] = 'field_term_icon_1';
  $handler->display->display_options['fields']['field_term_icon_1']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon_1']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon_1']['relationship'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['fields']['field_term_icon_1']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_term_icon_1']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'map_icon_bw',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ftritem' => 'ftritem',
  );

  /* Display: Location-District Data Overlay */
  $handler = $view->new_display('openlayers', 'Location-District Data Overlay', 'openlayers_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'dvtrc maps(Location)';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_place_lat_long',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Location Type (taxonomy_vocabulary_1) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_taxonomy_vocabulary_6_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Lat-Long */
  $handler->display->display_options['fields']['field_place_lat_long']['id'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['table'] = 'field_data_field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['field'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['relationship'] = 'reverse_taxonomy_vocabulary_6_node';
  $handler->display->display_options['fields']['field_place_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_place_lat_long']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Field: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['alter']['text'] = '/sites/default/themes/devtrack_theme/icons/[taxonomy_vocabulary_1]_c.png';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['relationship'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['fields']['field_term_icon']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'map_icon',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon_1']['id'] = 'field_term_icon_1';
  $handler->display->display_options['fields']['field_term_icon_1']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon_1']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon_1']['relationship'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['fields']['field_term_icon_1']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_term_icon_1']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'map_icon_bw',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['relationship'] = 'reverse_taxonomy_vocabulary_6_node';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_taxonomy_vocabulary_6_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'place' => 'place',
  );

  /* Display: Activities DataOverlay */
  $handler = $view->new_display('openlayers', 'Activities DataOverlay', 'openlayers_7');
  $handler->display->display_options['display_description'] = 'DataOverlay for the districts in which given activities operate';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_district_geo',
    'other_lon' => 'field_district_geo',
    'wkt' => 'field_district_geo',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'taxonomy_vocabulary_6',
    'description_field' => '',
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  /* Field: Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'field_data_field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['relationship'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'centroid',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'iati_activity' => 'iati_activity',
  );

  /* Display: Organistation DataOverlay */
  $handler = $view->new_display('openlayers', 'Organistation DataOverlay', 'openlayers_8');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_district_geo',
    'other_lon' => 'field_district_geo',
    'wkt' => 'field_district_geo',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'taxonomy_vocabulary_6',
    'description_field' => '',
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['label'] = 'District';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['id'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['field'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['relationship'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  /* Field: Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'field_data_field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['relationship'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'centroid',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $export['dvtrc_maps'] = $view;

  $view = new view();
  $view->name = 'dvtrc_site_visits';
  $view->description = 'Site visits | Field trip Action item';
  $view->tag = 'content-types';
  $view->base_table = 'node';
  $view->human_name = 'Site Visits';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all SiteVisits';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_title' => 'field_user_title',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'ftritem' => 'ftritem',
  );

  /* Display: Site Reports */
  $handler = $view->new_display('page', 'Site Reports', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Site Reports';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
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
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ftritem_place_target_id']['id'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['relationships']['field_ftritem_place_target_id']['table'] = 'field_data_field_ftritem_place';
  $handler->display->display_options['relationships']['field_ftritem_place_target_id']['field'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Site Report';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Site Report Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['id'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['table'] = 'field_data_taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['field'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['label'] = 'Report Type';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_ftritem_place']['id'] = 'field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['table'] = 'field_data_field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['field'] = 'field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['type'] = 'taxonomy_sector_code_icon';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['delta_offset'] = '0';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['separator'] = ' ';
  /* Field: Field: Date Visited */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'field_data_field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['path'] = 'site-reports';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'REPORTS';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: SiteVisit P-FIRST */
  $handler = $view->new_display('block', 'SiteVisit P-FIRST', 'block_1');
  $handler->display->display_options['display_description'] = 'Site VisitPREFACE FIRST';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'type' => 'type',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ftritem_field_trip_target_id']['id'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['relationships']['field_ftritem_field_trip_target_id']['table'] = 'field_data_field_ftritem_field_trip';
  $handler->display->display_options['relationships']['field_ftritem_field_trip_target_id']['field'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = '<div class="field-label">This is a Site Report</div>';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['relationship'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fieldtrip' => 'fieldtrip',
  );

  /* Display: SiteVisitMap */
  $handler = $view->new_display('block', 'SiteVisitMap', 'block_2');
  $handler->display->display_options['display_description'] = 'In preface second';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'tripreports';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: SiteVisit Summary Block */
  $handler = $view->new_display('block', 'SiteVisit Summary Block', 'block_3');
  $handler->display->display_options['display_description'] = 'Holds only the summary for use in the quicktab on the node page';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Public Summary */
  $handler->display->display_options['fields']['field_ftritem_public_summary']['id'] = 'field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['table'] = 'field_data_field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['field'] = 'field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'ftritem' => 'ftritem',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;

  /* Display: sitevisit-slideshow */
  $handler = $view->new_display('block', 'sitevisit-slideshow', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Gallery on the sitevisits';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Site information */
  $handler->display->display_options['fields']['site_info']['id'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['table'] = 'views';
  $handler->display->display_options['fields']['site_info']['field'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['label'] = '';
  $handler->display->display_options['fields']['site_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['site_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['site_info']['site_info'] = 'base_url';
  /* Field: Gallery Image */
  $handler->display->display_options['fields']['field_ftritem_images']['id'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['ui_name'] = 'Gallery Image';
  $handler->display->display_options['fields']['field_ftritem_images']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ftritem_images']['settings'] = array(
    'colorbox_node_style' => 'gallery',
    'colorbox_image_style' => 'gallery_popup_images',
    'colorbox_gallery' => 'field_post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images']['delta_offset'] = '0';
  /* Field: Download Link */
  $handler->display->display_options['fields']['field_ftritem_images_3']['id'] = 'field_ftritem_images_3';
  $handler->display->display_options['fields']['field_ftritem_images_3']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_3']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_3']['ui_name'] = 'Download Link';
  $handler->display->display_options['fields']['field_ftritem_images_3']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images_3']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_ftritem_images_3']['settings'] = array(
    'text' => 'Download',
  );
  $handler->display->display_options['fields']['field_ftritem_images_3']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_3']['delta_offset'] = '0';
  /* Field: Image Title */
  $handler->display->display_options['fields']['field_ftritem_images_2']['id'] = 'field_ftritem_images_2';
  $handler->display->display_options['fields']['field_ftritem_images_2']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_2']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_2']['ui_name'] = 'Image Title';
  $handler->display->display_options['fields']['field_ftritem_images_2']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_2']['alter']['text'] = '[field_ftritem_images_2-title]';
  $handler->display->display_options['fields']['field_ftritem_images_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images_2']['settings'] = array(
    'image_style' => 'gallery',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_2']['delta_offset'] = '0';
  /* Field: Thumbnails */
  $handler->display->display_options['fields']['field_ftritem_images_1']['id'] = 'field_ftritem_images_1';
  $handler->display->display_options['fields']['field_ftritem_images_1']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_1']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_1']['ui_name'] = 'Thumbnails';
  $handler->display->display_options['fields']['field_ftritem_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images_1']['settings'] = array(
    'image_style' => 'user_comment_img',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['sorts']['random']['expose']['label'] = 'Random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'ftritem' => 'ftritem',
  );
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ftritem' => 'ftritem',
  );
  /* Filter criterion: Content: Images (field_ftritem_images:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';
  $handler->display->display_options['filters']['delta']['expose']['operator_id'] = 'delta_op';
  $handler->display->display_options['filters']['delta']['expose']['label'] = 'Images (field_ftritem_images:delta)';
  $handler->display->display_options['filters']['delta']['expose']['operator'] = 'delta_op';
  $handler->display->display_options['filters']['delta']['expose']['identifier'] = 'delta';

  /* Display: Users-Location */
  $handler = $view->new_display('block', 'Users-Location', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Placeholder';
  $handler->display->display_options['display_description'] = 'Appearing on the location page. Visitors to a given Location';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ftritem_place_node']['id'] = 'reverse_field_ftritem_place_node';
  $handler->display->display_options['relationships']['reverse_field_ftritem_place_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ftritem_place_node']['field'] = 'reverse_field_ftritem_place_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_user_title']['id'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['table'] = 'field_data_field_user_title';
  $handler->display->display_options['fields']['field_user_title']['field'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_title']['exclude'] = TRUE;
  /* Field: User: Function */
  $handler->display->display_options['fields']['taxonomy_vocabulary_5']['id'] = 'taxonomy_vocabulary_5';
  $handler->display->display_options['fields']['taxonomy_vocabulary_5']['table'] = 'field_data_taxonomy_vocabulary_5';
  $handler->display->display_options['fields']['taxonomy_vocabulary_5']['field'] = 'taxonomy_vocabulary_5';
  $handler->display->display_options['fields']['taxonomy_vocabulary_5']['relationship'] = 'uid';
  $handler->display->display_options['fields']['taxonomy_vocabulary_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_5']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Statistics of an given question in a bar graph format. Under active development';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Location (field_ftritem_place) */
  $handler->display->display_options['arguments']['field_ftritem_place_target_id']['id'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['arguments']['field_ftritem_place_target_id']['table'] = 'field_data_field_ftritem_place';
  $handler->display->display_options['arguments']['field_ftritem_place_target_id']['field'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['arguments']['field_ftritem_place_target_id']['relationship'] = 'reverse_field_ftritem_place_node';
  $handler->display->display_options['arguments']['field_ftritem_place_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ftritem_place_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ftritem_place_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ftritem_place_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ftritem_place_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'all' => 'all',
    'actionitem' => 'actionitem',
    'book' => 'book',
    'fieldtrip' => 'fieldtrip',
    'ftritem' => 'ftritem',
    'page' => 'page',
    'place' => 'place',
    'story' => 'story',
    'user_profile' => 'user_profile',
  );

  /* Display: SiteVisits-Location */
  $handler = $view->new_display('block', 'SiteVisits-Location', 'block_6');
  $handler->display->display_options['display_description'] = 'List of site visits on the location\'s page';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'taxonomy_vocabulary_8' => 'taxonomy_vocabulary_8',
    'field_ftritem_date_visited' => 'field_ftritem_date_visited',
    'field_ftritem_place' => 'field_ftritem_place',
    'virtual_field' => 'virtual_field',
    'virtual_field_1' => 'virtual_field_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_ftritem_date_visited';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_8' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ftritem_date_visited' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ftritem_place' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'virtual_field' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'virtual_field_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ftritem_place_target_id']['id'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['relationships']['field_ftritem_place_target_id']['table'] = 'field_data_field_ftritem_place';
  $handler->display->display_options['relationships']['field_ftritem_place_target_id']['field'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Site Reports';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['type'] = 'taxonomy_sector_code_icon';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['delta_offset'] = '0';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['separator'] = ' ';
  /* Field: Field: Date Visited */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'field_data_field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_ftritem_place']['id'] = 'field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['table'] = 'field_data_field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['field'] = 'field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_place']['settings'] = array(
    'link' => 1,
  );
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = 'Progress';
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_progress_bar';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field_1']['id'] = 'virtual_field_1';
  $handler->display->display_options['fields']['virtual_field_1']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['label'] = 'Actions';
  $handler->display->display_options['fields']['virtual_field_1']['element_wrapper_class'] = 'ctools-button-processed';
  $handler->display->display_options['fields']['virtual_field_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['virtual_field_1']['virtual_field'] = 'field_fieldtrip_button';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'place' => 'place',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Progress */
  $handler = $view->new_display('block', 'Progress', 'block_7');
  $handler->display->display_options['display_description'] = 'Progress of the SiteVisit';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = '';
  $handler->display->display_options['fields']['virtual_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['virtual_field']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_progress_links';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ftritem' => 'ftritem',
  );
  /* Filter criterion: Content: Status (field_ftritem_status) */
  $handler->display->display_options['filters']['field_ftritem_status_value']['id'] = 'field_ftritem_status_value';
  $handler->display->display_options['filters']['field_ftritem_status_value']['table'] = 'field_data_field_ftritem_status';
  $handler->display->display_options['filters']['field_ftritem_status_value']['field'] = 'field_ftritem_status_value';
  $handler->display->display_options['filters']['field_ftritem_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_ftritem_status_value']['value'] = array(
    'Submitted' => 'Submitted',
  );

  /* Display: Description */
  $handler = $view->new_display('block', 'Description', 'block_8');
  $handler->display->display_options['display_description'] = 'Description of the site visit';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Full Report */
  $handler->display->display_options['fields']['field_ftritem_narrative']['id'] = 'field_ftritem_narrative';
  $handler->display->display_options['fields']['field_ftritem_narrative']['table'] = 'field_data_field_ftritem_narrative';
  $handler->display->display_options['fields']['field_ftritem_narrative']['field'] = 'field_ftritem_narrative';
  $handler->display->display_options['fields']['field_ftritem_narrative']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_narrative']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ftritem' => 'ftritem',
  );
  /* Filter criterion: Content: Full Report (field_ftritem_narrative) */
  $handler->display->display_options['filters']['field_ftritem_narrative_value']['id'] = 'field_ftritem_narrative_value';
  $handler->display->display_options['filters']['field_ftritem_narrative_value']['table'] = 'field_data_field_ftritem_narrative';
  $handler->display->display_options['filters']['field_ftritem_narrative_value']['field'] = 'field_ftritem_narrative_value';
  $handler->display->display_options['filters']['field_ftritem_narrative_value']['operator'] = 'not empty';

  /* Display: Questions */
  $handler = $view->new_display('block', 'Questions', 'block_9');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'No questions available for this location';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: District-slideshow */
  $handler = $view->new_display('block', 'District-slideshow', 'block_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Gallery on the locations';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Galley Image */
  $handler->display->display_options['fields']['field_ftritem_images']['id'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['ui_name'] = 'Galley Image';
  $handler->display->display_options['fields']['field_ftritem_images']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ftritem_images']['settings'] = array(
    'colorbox_node_style' => 'gallery',
    'colorbox_image_style' => 'gallery_popup_images',
    'colorbox_gallery' => 'field_page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images']['delta_offset'] = '0';
  /* Field: Download Link */
  $handler->display->display_options['fields']['field_ftritem_images_3']['id'] = 'field_ftritem_images_3';
  $handler->display->display_options['fields']['field_ftritem_images_3']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_3']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_3']['ui_name'] = 'Download Link';
  $handler->display->display_options['fields']['field_ftritem_images_3']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images_3']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_ftritem_images_3']['settings'] = array(
    'text' => 'Download',
  );
  $handler->display->display_options['fields']['field_ftritem_images_3']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_3']['delta_offset'] = '0';
  /* Field: Image Title */
  $handler->display->display_options['fields']['field_ftritem_images_2']['id'] = 'field_ftritem_images_2';
  $handler->display->display_options['fields']['field_ftritem_images_2']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_2']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_2']['ui_name'] = 'Image Title';
  $handler->display->display_options['fields']['field_ftritem_images_2']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_2']['alter']['text'] = '[field_ftritem_images_2-title]';
  $handler->display->display_options['fields']['field_ftritem_images_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images_2']['settings'] = array(
    'image_style' => 'user_comment_img',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_2']['delta_offset'] = '0';
  /* Field: Thumbnails */
  $handler->display->display_options['fields']['field_ftritem_images_1']['id'] = 'field_ftritem_images_1';
  $handler->display->display_options['fields']['field_ftritem_images_1']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_1']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_1']['ui_name'] = 'Thumbnails';
  $handler->display->display_options['fields']['field_ftritem_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images_1']['settings'] = array(
    'image_style' => 'user_comment_img',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['delta_offset'] = '0';
  /* Field: Base url */
  $handler->display->display_options['fields']['site_info']['id'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['table'] = 'views';
  $handler->display->display_options['fields']['site_info']['field'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['ui_name'] = 'Base url';
  $handler->display->display_options['fields']['site_info']['label'] = '';
  $handler->display->display_options['fields']['site_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['site_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['site_info']['site_info'] = 'base_url';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ftritem' => 'ftritem',
  );
  /* Filter criterion: Content: Images (field_ftritem_images:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';

  /* Display: Sitevisits-FieldTrip */
  $handler = $view->new_display('block', 'Sitevisits-FieldTrip', 'block_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Site Visits';
  $handler->display->display_options['display_description'] = 'List of site visits under a given fieldtrip on the FieldTrip page';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'status' => 'status',
    'title' => 'title',
    'taxonomy_vocabulary_7' => 'taxonomy_vocabulary_7',
    'taxonomy_vocabulary_6' => 'taxonomy_vocabulary_6',
    'field_ftritem_date_visited' => 'field_ftritem_date_visited',
    'virtual_field_1' => 'virtual_field_1',
    'virtual_field' => 'virtual_field',
  );
  $handler->display->display_options['style_options']['default'] = 'field_ftritem_date_visited';
  $handler->display->display_options['style_options']['info'] = array(
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_7' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_6' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ftritem_date_visited' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'virtual_field_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'virtual_field' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ftritem_field_trip_target_id']['id'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['relationships']['field_ftritem_field_trip_target_id']['table'] = 'field_data_field_ftritem_field_trip';
  $handler->display->display_options['relationships']['field_ftritem_field_trip_target_id']['field'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Site Report';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Site Report Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['id'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['table'] = 'field_data_taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['field'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['label'] = 'Report Type';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['type'] = 'mapit_taxonomy_term_reference_link';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  /* Field: Field: Date Visited */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'field_data_field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field_1']['id'] = 'virtual_field_1';
  $handler->display->display_options['fields']['virtual_field_1']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['label'] = 'Progress';
  $handler->display->display_options['fields']['virtual_field_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['virtual_field_1']['virtual_field'] = 'field_progress_bar';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = 'Actions';
  $handler->display->display_options['fields']['virtual_field']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Published */
  $handler->display->display_options['sorts']['status']['id'] = 'status';
  $handler->display->display_options['sorts']['status']['table'] = 'node';
  $handler->display->display_options['sorts']['status']['field'] = 'status';
  $handler->display->display_options['sorts']['status']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'fieldtrip' => 'fieldtrip',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ftritem' => 'ftritem',
  );

  /* Display: My Sitevisits */
  $handler = $view->new_display('block', 'My Sitevisits', 'block_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Site Visits';
  $handler->display->display_options['display_description'] = 'List of site visits belonging to a given user';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'virtual_field' => 'virtual_field',
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
    'virtual_field' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Site Report Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['id'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['table'] = 'field_data_taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['field'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['label'] = 'Report Type';
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['label'] = 'Location';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  /* Field: Field: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['type'] = 'taxonomy_sector_code_icon';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['delta_offset'] = '0';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['separator'] = ' ';
  /* Field: Field: Date Visited */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'field_data_field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = 'Actions';
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field_1']['id'] = 'virtual_field_1';
  $handler->display->display_options['fields']['virtual_field_1']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['label'] = 'Progress';
  $handler->display->display_options['fields']['virtual_field_1']['virtual_field'] = 'field_progress_bar';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ftritem' => 'ftritem',
  );

  /* Display: Open Sitevisits */
  $handler = $view->new_display('block', 'Open Sitevisits', 'block_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Site Visits';
  $handler->display->display_options['display_description'] = 'List of open site visits belonging to a given user';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'virtual_field' => 'virtual_field',
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
    'virtual_field' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Site Report Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['id'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['table'] = 'field_data_taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['field'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['label'] = 'Report Type';
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['label'] = 'Location';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  /* Field: Field: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['type'] = 'taxonomy_sector_code_icon';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['delta_offset'] = '0';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['separator'] = ' ';
  /* Field: Field: Date Visited */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'field_data_field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = 'Actions';
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field_1']['id'] = 'virtual_field_1';
  $handler->display->display_options['fields']['virtual_field_1']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['label'] = 'Progress';
  $handler->display->display_options['fields']['virtual_field_1']['virtual_field'] = 'field_progress_bar';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ftritem' => 'ftritem',
  );
  /* Filter criterion: Content: Status (field_ftritem_status) */
  $handler->display->display_options['filters']['field_ftritem_status_value']['id'] = 'field_ftritem_status_value';
  $handler->display->display_options['filters']['field_ftritem_status_value']['table'] = 'field_data_field_ftritem_status';
  $handler->display->display_options['filters']['field_ftritem_status_value']['field'] = 'field_ftritem_status_value';
  $handler->display->display_options['filters']['field_ftritem_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_ftritem_status_value']['value'] = array(
    'Submitted' => 'Submitted',
  );

  /* Display: MyTeam Sitevisits */
  $handler = $view->new_display('block', 'MyTeam Sitevisits', 'block_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Site Visits';
  $handler->display->display_options['display_description'] = 'List of  site visits belonging to a given team of users basing on the manager';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'virtual_field' => 'virtual_field',
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
    'virtual_field' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No Site Reports yet';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_superior_target_id']['id'] = 'field_user_superior_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['table'] = 'field_data_field_user_superior';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['field'] = 'field_user_superior_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['label'] = 'Manager';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Site Report Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['id'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['table'] = 'field_data_taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['field'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['label'] = 'Report Type';
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['label'] = 'Location';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  /* Field: Field: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['type'] = 'taxonomy_sector_code_icon';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['delta_offset'] = '0';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['separator'] = ' ';
  /* Field: Field: Date Visited */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'field_data_field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = 'Actions';
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field_1']['id'] = 'virtual_field_1';
  $handler->display->display_options['fields']['virtual_field_1']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['label'] = 'Progress';
  $handler->display->display_options['fields']['virtual_field_1']['virtual_field'] = 'field_progress_bar';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_user_superior_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ftritem' => 'ftritem',
  );

  /* Display: Slideshow-Location */
  $handler = $view->new_display('block', 'Slideshow-Location', 'block_15');
  $handler->display->display_options['display_description'] = 'Slideshow on the location\'s page';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ftritem_place_target_id']['id'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['relationships']['field_ftritem_place_target_id']['table'] = 'field_data_field_ftritem_place';
  $handler->display->display_options['relationships']['field_ftritem_place_target_id']['field'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Gallery Image */
  $handler->display->display_options['fields']['field_ftritem_images']['id'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['ui_name'] = 'Gallery Image';
  $handler->display->display_options['fields']['field_ftritem_images']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ftritem_images']['settings'] = array(
    'colorbox_node_style' => 'gallery',
    'colorbox_image_style' => 'gallery_popup_images',
    'colorbox_gallery' => 'field_page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images']['delta_offset'] = '0';
  /* Field: Download Link */
  $handler->display->display_options['fields']['field_ftritem_images_3']['id'] = 'field_ftritem_images_3';
  $handler->display->display_options['fields']['field_ftritem_images_3']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_3']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_3']['ui_name'] = 'Download Link';
  $handler->display->display_options['fields']['field_ftritem_images_3']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images_3']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_ftritem_images_3']['settings'] = array(
    'text' => 'Download',
  );
  $handler->display->display_options['fields']['field_ftritem_images_3']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_3']['delta_offset'] = '0';
  /* Field: Image Title */
  $handler->display->display_options['fields']['field_ftritem_images_1']['id'] = 'field_ftritem_images_1';
  $handler->display->display_options['fields']['field_ftritem_images_1']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_1']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_1']['ui_name'] = 'Image Title';
  $handler->display->display_options['fields']['field_ftritem_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['alter']['text'] = '[field_ftritem_images_1-title]';
  $handler->display->display_options['fields']['field_ftritem_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images_1']['settings'] = array(
    'image_style' => 'user_profile_img',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['delta_offset'] = '0';
  /* Field: Thumbnail */
  $handler->display->display_options['fields']['field_ftritem_images_2']['id'] = 'field_ftritem_images_2';
  $handler->display->display_options['fields']['field_ftritem_images_2']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_2']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_2']['ui_name'] = 'Thumbnail';
  $handler->display->display_options['fields']['field_ftritem_images_2']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images_2']['settings'] = array(
    'image_style' => 'user_comment_img',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_2']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'place' => 'place',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ftritem' => 'ftritem',
  );
  /* Filter criterion: Content: Images (field_ftritem_images:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';

  /* Display: OECD Sitevisits */
  $handler = $view->new_display('block', 'OECD Sitevisits', 'block_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Site Visits';
  $handler->display->display_options['display_description'] = 'List of site visits with a common OECD code on the OECD main page';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'sitereports?f[0]=taxonomy_vocabulary_8%3A!1&display=default';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'virtual_field' => 'virtual_field',
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
    'virtual_field' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No SiteVisits with this sector yet';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Field: Sector (taxonomy_vocabulary_8) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['id'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['field'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Site Report';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Site Report Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['id'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['table'] = 'field_data_taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['field'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['label'] = 'Report Type';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  /* Field: Field: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['type'] = 'taxonomy_sector_code_icon';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['delta_offset'] = '0';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['separator'] = ' ';
  /* Field: Field: Date Visited */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'field_data_field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field_1']['id'] = 'virtual_field_1';
  $handler->display->display_options['fields']['virtual_field_1']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field_1']['label'] = 'Progress';
  $handler->display->display_options['fields']['virtual_field_1']['virtual_field'] = 'field_progress_bar';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = 'Actions';
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'vocabulary_8' => 'vocabulary_8',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ftritem' => 'ftritem',
  );

  /* Display: OECD-slideshow */
  $handler = $view->new_display('block', 'OECD-slideshow', 'block_17');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Gallery on the sector pages';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Gallery Image */
  $handler->display->display_options['fields']['field_ftritem_images']['id'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['ui_name'] = 'Gallery Image';
  $handler->display->display_options['fields']['field_ftritem_images']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ftritem_images']['settings'] = array(
    'colorbox_node_style' => 'gallery',
    'colorbox_image_style' => 'gallery_popup_images',
    'colorbox_gallery' => 'field_page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images']['delta_offset'] = '0';
  /* Field: Download Link */
  $handler->display->display_options['fields']['field_ftritem_images_3']['id'] = 'field_ftritem_images_3';
  $handler->display->display_options['fields']['field_ftritem_images_3']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_3']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_3']['ui_name'] = 'Download Link';
  $handler->display->display_options['fields']['field_ftritem_images_3']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images_3']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_ftritem_images_3']['settings'] = array(
    'text' => 'Download',
  );
  $handler->display->display_options['fields']['field_ftritem_images_3']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_3']['delta_offset'] = '0';
  /* Field: Image Title */
  $handler->display->display_options['fields']['field_ftritem_images_2']['id'] = 'field_ftritem_images_2';
  $handler->display->display_options['fields']['field_ftritem_images_2']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_2']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_2']['ui_name'] = 'Image Title';
  $handler->display->display_options['fields']['field_ftritem_images_2']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_2']['alter']['text'] = '[field_ftritem_images_2-title]';
  $handler->display->display_options['fields']['field_ftritem_images_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images_2']['settings'] = array(
    'image_style' => 'gallery',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_2']['delta_offset'] = '0';
  /* Field: Thumbnails */
  $handler->display->display_options['fields']['field_ftritem_images_1']['id'] = 'field_ftritem_images_1';
  $handler->display->display_options['fields']['field_ftritem_images_1']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_1']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images_1']['ui_name'] = 'Thumbnails';
  $handler->display->display_options['fields']['field_ftritem_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images_1']['settings'] = array(
    'image_style' => 'user_comment_img',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images_1']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'vocabulary_8' => 'vocabulary_8',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ftritem' => 'ftritem',
  );
  /* Filter criterion: Content: Images (field_ftritem_images:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';

  /* Display: Latest report */
  $handler = $view->new_display('block', 'Latest report', 'block_18');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest report';
  $handler->display->display_options['display_description'] = 'Latest report';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No Site Reports yet';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_ftritem_images']['id'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images']['element_class'] = 'latest-report-image';
  $handler->display->display_options['fields']['field_ftritem_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images']['settings'] = array(
    'image_style' => 'user_profile_img',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ftritem_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Report';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Date Visited */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'field_data_field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['label'] = 'Post Date';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['element_label_class'] = 'field-content.latest-report-post-date';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Public Summary */
  $handler->display->display_options['fields']['field_ftritem_public_summary']['id'] = 'field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['table'] = 'field_data_field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['field'] = 'field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['element_wrapper_class'] = 'field-content.latest-report-public-summary';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="dv-seeall">See all Site Reports</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'sitereports?display=default&f[0]=taxonomy_vocabulary_6%3A243';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'dv-seeall';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'ftritem' => 'ftritem',
  );

  /* Display: oecd icon */
  $handler = $view->new_display('block', 'oecd icon', 'block_19');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'oecd icon';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'testing none';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Sector (taxonomy_vocabulary_8) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['id'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['field'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['type'] = 'taxonomy_sector_code_icon';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['delta_offset'] = '0';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['separator'] = ' ';
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['relationship'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['fields']['field_term_icon']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'image_style' => 'devtrac_oecd_icons_bw',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ftritem' => 'ftritem',
  );
  $handler->display->display_options['block_description'] = 'oecd icon';

  /* Display: sitevisits readmore */
  $handler = $view->new_display('attachment', 'sitevisits readmore', 'attachment_1');
  $handler->display->display_options['display_description'] = 'This is an attachment to the OECD Sitevisits block with the readmore link';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_title' => 'field_user_title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'vocabulary_6' => 'vocabulary_6',
    'vocabulary_8' => 'vocabulary_8',
    'action_item_tags' => 0,
    'activity_aid_type' => 0,
    'activity_collaboration_type' => 0,
    'activity_finance_type' => 0,
    'activity_flowtype' => 0,
    'activity_status' => 0,
    'vocabulary_4' => 0,
    'district_category' => 0,
    'fieldtrip_tags' => 0,
    'vocabulary_5' => 0,
    'vocabulary_2' => 0,
    'iati_roles' => 0,
    'iati_organisation_type' => 0,
    'languages' => 0,
    'vocabulary_1' => 0,
    'vocabulary_9' => 0,
    'question_subject' => 0,
    'vocabulary_7' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="dv-seeall">View all [name] Site reports</div>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'sitereports?f[0]=taxonomy_vocabulary_8%3A[tid]';
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'dv-seeall';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'block_16' => 'block_16',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_6' => 0,
    'block_7' => 0,
    'block_8' => 0,
    'block_9' => 0,
    'block_10' => 0,
    'block_11' => 0,
    'block_13' => 0,
    'block_12' => 0,
    'block_14' => 0,
    'block_15' => 0,
    'block_17' => 0,
    'block_18' => 0,
    'block_19' => 0,
  );

  /* Display: Default Image View */
  $handler = $view->new_display('block', 'Default Image View', 'block_20');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_title' => 'field_user_title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Site information */
  $handler->display->display_options['fields']['site_info']['id'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['table'] = 'views';
  $handler->display->display_options['fields']['site_info']['field'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['label'] = '';
  $handler->display->display_options['fields']['site_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['site_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['site_info']['site_info'] = 'base_url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="image-not-available"><img src="[site_info]/sites/default/files/image-not-available.png"></div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;

  /* Display: Public Summary */
  $handler = $view->new_display('block', 'Public Summary', 'block_21');
  $handler->display->display_options['display_description'] = 'Public Summary on the site report';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Public Summary */
  $handler->display->display_options['fields']['field_ftritem_public_summary']['id'] = 'field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['table'] = 'field_data_field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['field'] = 'field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['dvtrc_site_visits'] = $view;

  $view = new view();
  $view->name = 'dvtrc_user';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'dvtrc_user';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Updates';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create questionnaire_question content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_user_superior_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['path'] = 'dvtrc_users';

  /* Display: Updates */
  $handler = $view->new_display('block', 'Updates', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Overview';
  $handler->display->display_options['display_description'] = 'User updates';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'This is the intended user overview block. User updates Coming soon';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';

  /* Display: Details of Your Current fieldTrip */
  $handler = $view->new_display('block', 'Details of Your Current fieldTrip', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Details of Your Current fieldTrip';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Block in the preface third that shows the Details of Your Current fieldTrip';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_fieldtrip_user_node']['id'] = 'reverse_field_fieldtrip_user_node';
  $handler->display->display_options['relationships']['reverse_field_fieldtrip_user_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_fieldtrip_user_node']['field'] = 'reverse_field_fieldtrip_user_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'uid';
  $handler->display->display_options['fields']['title']['label'] = 'Field Trip';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_fieldtrip_status']['id'] = 'field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['table'] = 'field_data_field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['field'] = 'field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['relationship'] = 'reverse_field_fieldtrip_user_node';
  $handler->display->display_options['fields']['field_fieldtrip_status']['empty'] = 'There is no purpose as of now.';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_fieldtrip_user_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fieldtrip' => 'fieldtrip',
  );
  /* Filter criterion: Content: Status (field_fieldtrip_status) */
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['id'] = 'field_fieldtrip_status_value';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['table'] = 'field_data_field_fieldtrip_status';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['field'] = 'field_fieldtrip_status_value';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['relationship'] = 'reverse_field_fieldtrip_user_node';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['value'] = array(
    'In Progress' => 'In Progress',
  );

  /* Display: User Field Trips */
  $handler = $view->new_display('block', 'User Field Trips', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My FieldTrips';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'title' => 'title',
    'field_fieldtrip_start_end_date' => 'field_fieldtrip_start_end_date',
    'field_fieldtrip_start_end_date_1' => 'field_fieldtrip_start_end_date_1',
    'field_fieldtrip_start_end_date_2' => 'field_fieldtrip_start_end_date_2',
    'field_ftritem_status' => 'field_ftritem_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
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
    'field_fieldtrip_start_end_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fieldtrip_start_end_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fieldtrip_start_end_date_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ftritem_status' => array(
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_fieldtrip_user_node']['id'] = 'reverse_field_fieldtrip_user_node';
  $handler->display->display_options['relationships']['reverse_field_fieldtrip_user_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_fieldtrip_user_node']['field'] = 'reverse_field_fieldtrip_user_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_fieldtrip_user_node';
  $handler->display->display_options['fields']['title']['label'] = 'FieldTrip Title';
  /* Field: Content: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['id'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['relationship'] = 'reverse_field_fieldtrip_user_node';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['type'] = 'date_default_with_duration';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'duration' => 0,
  );
  /* Field: Content: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['id'] = 'field_fieldtrip_start_end_date_1';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['relationship'] = 'reverse_field_fieldtrip_user_node';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['type'] = 'date_default_with_duration';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'duration' => 0,
  );
  /* Field: Content: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['id'] = 'field_fieldtrip_start_end_date_2';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['relationship'] = 'reverse_field_fieldtrip_user_node';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['label'] = 'Duration';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['type'] = 'date_default_with_duration';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_2']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'none',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'duration' => 1,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_fieldtrip_status']['id'] = 'field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['table'] = 'field_data_field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['field'] = 'field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['relationship'] = 'reverse_field_fieldtrip_user_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fieldtrip' => 'fieldtrip',
  );

  /* Display: About Me */
  $handler = $view->new_display('block', 'About Me', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: About Me */
  $handler->display->display_options['fields']['field_user_aboutme']['id'] = 'field_user_aboutme';
  $handler->display->display_options['fields']['field_user_aboutme']['table'] = 'field_data_field_user_aboutme';
  $handler->display->display_options['fields']['field_user_aboutme']['field'] = 'field_user_aboutme';
  $handler->display->display_options['fields']['field_user_aboutme']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_user_aboutme']['element_label_class'] = 'field-label';
  $handler->display->display_options['fields']['field_user_aboutme']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: NumbrFieldTrip */
  $handler = $view->new_display('block', 'NumbrFieldTrip', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Overview';
  $handler->display->display_options['display_description'] = 'Fieldtrips';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'You do not have any FieldTrips yet';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'FieldTrips';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'fieldtrips?f[0]=author%3A[uid]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'uid';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'fieldtrips?f[0]=author%3A[uid]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fieldtrip' => 'fieldtrip',
  );

  /* Display: NumbrSitevisits */
  $handler = $view->new_display('attachment', 'NumbrSitevisits', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Site Reports';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'You do not have any SiteVisits yet';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Site Reports';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'sitereports?f[0]=author%3A[uid]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'uid';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'sitereports?f[0]=author%3A[uid]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ftritem' => 'ftritem',
  );
  $handler->display->display_options['displays'] = array(
    'block_3' => 'block_3',
    'default' => 0,
    'page_1' => 0,
    'block' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'page_5' => 0,
    'page_6' => 0,
    'block_4' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: NumbrActionItems */
  $handler = $view->new_display('attachment', 'NumbrActionItems', 'attachment_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Action Items';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'You do not have any ActionItems yet';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Action Items';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'actionitems?f[0]=field_actionitem_responsible%3A[uid]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'uid';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'actionitems?f[0]=field_actionitem_responsible%3A[uid]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'actionitem' => 'actionitem',
  );
  $handler->display->display_options['displays'] = array(
    'block_3' => 'block_3',
    'default' => 0,
    'page_1' => 0,
    'block' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'page_5' => 0,
    'page_6' => 0,
    'block_4' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: NumbrActionItemsResp */
  $handler = $view->new_display('attachment', 'NumbrActionItemsResp', 'attachment_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Number of action Items Responsible for';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'You do not have any ActionItems you\'re Responsible for.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'uid';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Responsible (field_actionitem_responsible) */
  $handler->display->display_options['arguments']['field_actionitem_responsible_target_id']['id'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['arguments']['field_actionitem_responsible_target_id']['table'] = 'field_data_field_actionitem_responsible';
  $handler->display->display_options['arguments']['field_actionitem_responsible_target_id']['field'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['arguments']['field_actionitem_responsible_target_id']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['field_actionitem_responsible_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_actionitem_responsible_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_actionitem_responsible_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_actionitem_responsible_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_actionitem_responsible_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_actionitem_responsible_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'actionitem' => 'actionitem',
  );
  $handler->display->display_options['displays'] = array(
    'block_3' => 'block_3',
    'default' => 0,
    'page_1' => 0,
    'block' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'page_5' => 0,
    'page_6' => 0,
    'block_4' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: NumbrLocationsVisited */
  $handler = $view->new_display('attachment', 'NumbrLocationsVisited', 'attachment_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Locations Created';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'You have not yet visited any Locations ';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Locations Created';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'locations?display=list&f[0]=author%3A[uid]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'uid';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'locations?display=list&f[0]=author%3A[uid]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid_1']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'place' => 'place',
  );
  $handler->display->display_options['displays'] = array(
    'block_3' => 'block_3',
    'default' => 0,
    'page_1' => 0,
    'block' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'page_5' => 0,
    'page_6' => 0,
    'block_4' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: NumbrAnswers */
  $handler = $view->new_display('attachment', 'NumbrAnswers', 'attachment_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Answers to Questions provided';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Questions Answered */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Questions Answered';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Questions Answered';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'uid';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'questionnaire_question' => 'questionnaire_question',
  );
  $handler->display->display_options['displays'] = array(
    'block_3' => 'block_3',
    'default' => 0,
    'page_1' => 0,
    'block' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'page_5' => 0,
    'page_6' => 0,
    'block_4' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: UserMap Overlay */
  $handler = $view->new_display('openlayers', 'UserMap Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Data overlay for the map on the user page';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '135';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'taxonomy_vocabulary_6',
    'other_lon' => 'taxonomy_vocabulary_6',
    'wkt' => 'field_district_geo',
    'other_top' => 'taxonomy_vocabulary_6',
    'other_right' => 'taxonomy_vocabulary_6',
    'other_bottom' => 'taxonomy_vocabulary_6',
    'other_left' => 'taxonomy_vocabulary_6',
    'name_field' => 'taxonomy_vocabulary_6',
    'description_field' => 'taxonomy_vocabulary_6',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['element_type'] = 'h3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  /* Field: Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'field_data_field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['relationship'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['value'] = '';
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['vocabulary'] = 'vocabulary_6';

  /* Display: UserMap */
  $handler = $view->new_display('block', 'UserMap', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Map on the user page. Shows where a given user is active';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
    4 => '4',
    5 => '5',
    6 => '6',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '135';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'user_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Team Members */
  $handler = $view->new_display('block', 'Team Members', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Team Members';
  $handler->display->display_options['display_description'] = 'Group of users sharing a given manager/superior ';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'picture' => 'picture',
    'taxonomy_vocabulary_6' => 'taxonomy_vocabulary_6',
    'taxonomy_vocabulary_8' => 'taxonomy_vocabulary_8',
    'access' => 'access',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_6' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'taxonomy_vocabulary_8' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'access' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'expand' => 'name',
    'hide' => array(
      'name' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'picture' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'taxonomy_vocabulary_6' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'taxonomy_vocabulary_8' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'access' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_superior_target_id']['id'] = 'field_user_superior_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['table'] = 'field_data_field_user_superior';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['field'] = 'field_user_superior_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'user_comment_img';
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  /* Field: Field: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['type'] = 'taxonomy_sector_code_icon';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['delta_offset'] = '0';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['separator'] = ' ';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'short';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Manager (field_user_superior) */
  $handler->display->display_options['filters']['field_user_superior_target_id']['id'] = 'field_user_superior_target_id';
  $handler->display->display_options['filters']['field_user_superior_target_id']['table'] = 'field_data_field_user_superior';
  $handler->display->display_options['filters']['field_user_superior_target_id']['field'] = 'field_user_superior_target_id';
  $handler->display->display_options['filters']['field_user_superior_target_id']['operator'] = 'not empty';

  /* Display: About the user */
  $handler = $view->new_display('block', 'About the user', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'About this User';
  $handler->display->display_options['display_description'] = 'About me text that shows in the last preface on the user profile page';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: About Me */
  $handler->display->display_options['fields']['field_user_aboutme']['id'] = 'field_user_aboutme';
  $handler->display->display_options['fields']['field_user_aboutme']['table'] = 'field_data_field_user_aboutme';
  $handler->display->display_options['fields']['field_user_aboutme']['field'] = 'field_user_aboutme';
  $handler->display->display_options['fields']['field_user_aboutme']['label'] = '';
  $handler->display->display_options['fields']['field_user_aboutme']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_user_aboutme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_aboutme']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_aboutme']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: NumbrTeamsActionItems */
  $handler = $view->new_display('attachment', 'NumbrTeamsActionItems', 'attachment_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Action Items';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'You do not have any ActionItems yet';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_actionitem_responsible_node']['id'] = 'reverse_field_actionitem_responsible_node';
  $handler->display->display_options['relationships']['reverse_field_actionitem_responsible_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_actionitem_responsible_node']['field'] = 'reverse_field_actionitem_responsible_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['id'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['table'] = 'field_data_field_actionitem_responsible';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['field'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['relationships']['field_actionitem_responsible_target_id']['relationship'] = 'reverse_field_actionitem_responsible_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_superior_target_id']['id'] = 'field_user_superior_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['table'] = 'field_data_field_user_superior';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['field'] = 'field_user_superior_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['label'] = 'Manager';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Manager */
  $handler->display->display_options['fields']['field_user_superior']['id'] = 'field_user_superior';
  $handler->display->display_options['fields']['field_user_superior']['table'] = 'field_data_field_user_superior';
  $handler->display->display_options['fields']['field_user_superior']['field'] = 'field_user_superior';
  $handler->display->display_options['fields']['field_user_superior']['label'] = '';
  $handler->display->display_options['fields']['field_user_superior']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_superior']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_superior']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_user_superior']['settings'] = array(
    'link' => 0,
  );
  /* Field: User: Manager */
  $handler->display->display_options['fields']['field_user_superior_1']['id'] = 'field_user_superior_1';
  $handler->display->display_options['fields']['field_user_superior_1']['table'] = 'field_data_field_user_superior';
  $handler->display->display_options['fields']['field_user_superior_1']['field'] = 'field_user_superior';
  $handler->display->display_options['fields']['field_user_superior_1']['relationship'] = 'field_actionitem_responsible_target_id';
  $handler->display->display_options['fields']['field_user_superior_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_superior_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_superior_1']['alter']['text'] = 'My Team\'s Open Action Items';
  $handler->display->display_options['fields']['field_user_superior_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_user_superior_1']['alter']['path'] = 'actionitems?display=list&f[0]=field_actionitem_responsible%[uid]3Afield_user_superior%3A[field_user_superior_1-target_id]';
  $handler->display->display_options['fields']['field_user_superior_1']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_user_superior_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_superior_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_actionitem_responsible_node';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'actionitems?display=list&f[0]=field_actionitem_responsible%[uid]3Afield_user_superior%3A[field_user_superior_1-target_id]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_user_superior_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Status (field_actionitem_status) */
  $handler->display->display_options['filters']['field_actionitem_status_value']['id'] = 'field_actionitem_status_value';
  $handler->display->display_options['filters']['field_actionitem_status_value']['table'] = 'field_data_field_actionitem_status';
  $handler->display->display_options['filters']['field_actionitem_status_value']['field'] = 'field_actionitem_status_value';
  $handler->display->display_options['filters']['field_actionitem_status_value']['relationship'] = 'reverse_field_actionitem_responsible_node';
  $handler->display->display_options['filters']['field_actionitem_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['displays'] = array(
    'block_3' => 'block_3',
    'default' => 0,
    'page_1' => 0,
    'block' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'page_5' => 0,
    'page_6' => 0,
    'block_4' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['dvtrc_user'] = $view;

  $view = new view();
  $view->name = 'inbox';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Inbox';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Inbox';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'subject' => 'subject',
  );
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Comment: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'comment';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: Comment: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'comment';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Sort criterion: Comment: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;

  /* Display: Inbox */
  $handler = $view->new_display('block', 'Inbox', 'block');
  $handler->display->display_options['display_description'] = 'This display will show comments from a given user in there inbox as well as the managers inbox';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'subject' => 'subject',
    'name' => 'name',
    'uid' => 'uid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'subject' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = 'Title of comment';
  $handler->display->display_options['fields']['subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  /* Field: Content: New comments */
  $handler->display->display_options['fields']['new_comments']['id'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['table'] = 'node';
  $handler->display->display_options['fields']['new_comments']['field'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['relationship'] = 'nid';
  $handler->display->display_options['fields']['new_comments']['separator'] = '';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['relationship'] = 'nid';
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['relationship'] = 'nid';
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'short';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Comment: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'comment';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = '1';
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;
  $export['inbox'] = $view;

  $view = new view();
  $view->name = 'oecd_sector_code';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'OECD Sector Code';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Description';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_oecd_code' => 'field_oecd_code',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_8' => 'vocabulary_8',
  );

  /* Display: OECD Sector Code */
  $handler = $view->new_display('block', 'OECD Sector Code', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Description of the sector';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h5';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Code */
  $handler->display->display_options['fields']['field_oecd_code']['id'] = 'field_oecd_code';
  $handler->display->display_options['fields']['field_oecd_code']['table'] = 'field_data_field_oecd_code';
  $handler->display->display_options['fields']['field_oecd_code']['field'] = 'field_oecd_code';
  $handler->display->display_options['fields']['field_oecd_code']['hide_empty'] = TRUE;
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'image_style' => 'devtrac_oecd_icons_color',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: OECD sector Map */
  $handler = $view->new_display('block', 'OECD sector Map', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Map showing all sitevisits with a given sector';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'oecd_sector_codes';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Description */
  $handler = $view->new_display('block', 'Description', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: oecd codes */
  $handler = $view->new_display('page', 'oecd codes', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sector';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_oecd_code' => 'field_oecd_code',
    'field_term_icon' => 'field_term_icon',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oecd_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_term_icon' => array(
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Sector';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = 'Parent';
  /* Field: Taxonomy term: Code */
  $handler->display->display_options['fields']['field_oecd_code']['id'] = 'field_oecd_code';
  $handler->display->display_options['fields']['field_oecd_code']['table'] = 'field_data_field_oecd_code';
  $handler->display->display_options['fields']['field_oecd_code']['field'] = 'field_oecd_code';
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['path'] = 'oecd-codes';

  /* Display: Child Terms */
  $handler = $view->new_display('block', 'Child Terms', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sub Categories ';
  $handler->display->display_options['display_description'] = 'Child terms of the sector';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'parent';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Legend Block */
  $handler = $view->new_display('block', 'Legend Block', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'OECD Icons Legend';
  $handler->display->display_options['display_description'] = 'Block with the OECD icons and there titles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_oecd_code' => 'field_oecd_code',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'image_style' => 'user_comment_img',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'p';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_8' => 'vocabulary_8',
  );
  /* Filter criterion: Taxonomy term: Term Icon (field_term_icon:fid) */
  $handler->display->display_options['filters']['field_term_icon_fid']['id'] = 'field_term_icon_fid';
  $handler->display->display_options['filters']['field_term_icon_fid']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['filters']['field_term_icon_fid']['field'] = 'field_term_icon_fid';
  $handler->display->display_options['filters']['field_term_icon_fid']['operator'] = 'not empty';

  /* Display: OECD Sector Code Title */
  $handler = $view->new_display('block', 'OECD Sector Code Title', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Title of the sector';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_term_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[field_term_icon] [name]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h1';
  $handler->display->display_options['fields']['name']['element_class'] = 'page-title';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $export['oecd_sector_code'] = $view;

  return $export;
}
