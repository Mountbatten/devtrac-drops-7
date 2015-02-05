<?php
/**
 * @file
 * devtrac7_services_api.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_services_api_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'api_fieldtrips';
  $view->description = 'Api view to see Field Trips';
  $view->tag = 'api';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'My Field Trips';
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['comments'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'no fieldtrips for this user';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ftritem' => 'ftritem',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_ftritem_field_trip_nid']['id'] = 'field_ftritem_field_trip_nid';
  $handler->display->display_options['filters']['field_ftritem_field_trip_nid']['table'] = 'field_data_field_ftritem_field_trip';
  $handler->display->display_options['filters']['field_ftritem_field_trip_nid']['field'] = 'field_ftritem_field_trip_nid';
  $handler->display->display_options['filters']['field_ftritem_field_trip_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ftritem_field_trip_nid']['expose']['operator_id'] = 'field_ftritem_field_trip_nid_op';
  $handler->display->display_options['filters']['field_ftritem_field_trip_nid']['expose']['label'] = 'Field Trip (field_ftritem_field_trip)';
  $handler->display->display_options['filters']['field_ftritem_field_trip_nid']['expose']['operator'] = 'field_ftritem_field_trip_nid_op';
  $handler->display->display_options['filters']['field_ftritem_field_trip_nid']['expose']['identifier'] = 'field_ftritem_field_trip_nid';

  /* Display: My Field Trips Page */
  $handler = $view->new_display('page', 'My Field Trips Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trip Reports';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fieldtrip' => 'fieldtrip',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'api/%/fieldtrips';
  $handler->display->display_options['menu']['title'] = 'My Field Trips';
  $handler->display->display_options['menu']['description'] = 'My Field Trips';
  $handler->display->display_options['menu']['weight'] = '5';

  /* Display: Trip Reports (for a Field Trip) */
  $handler = $view->new_display('page', 'Trip Reports (for a Field Trip)', 'sitevisits');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trip Reports';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ftritem' => 'ftritem',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Field Trip (field_ftritem_field_trip) */
  $handler->display->display_options['filters']['field_ftritem_field_trip_target_id']['id'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['filters']['field_ftritem_field_trip_target_id']['table'] = 'field_data_field_ftritem_field_trip';
  $handler->display->display_options['filters']['field_ftritem_field_trip_target_id']['field'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['filters']['field_ftritem_field_trip_target_id']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_ftritem_field_trip_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ftritem_field_trip_target_id']['expose']['operator_id'] = 'field_ftritem_field_trip_target_id_op';
  $handler->display->display_options['filters']['field_ftritem_field_trip_target_id']['expose']['label'] = 'Field Trip (field_ftritem_field_trip)';
  $handler->display->display_options['filters']['field_ftritem_field_trip_target_id']['expose']['operator'] = 'field_ftritem_field_trip_target_id_op';
  $handler->display->display_options['filters']['field_ftritem_field_trip_target_id']['expose']['identifier'] = 'field_ftritem_field_trip_target_id';
  $handler->display->display_options['path'] = 'api/views/tripreports_page';

  /* Display: Current Field trip */
  $handler = $view->new_display('page', 'Current Field trip', 'current_trip');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trip Reports';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'No fieldtrips for this user.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Start and End Date (field_fieldtrip_start_end_date) */
  $handler->display->display_options['sorts']['field_fieldtrip_start_end_date_value']['id'] = 'field_fieldtrip_start_end_date_value';
  $handler->display->display_options['sorts']['field_fieldtrip_start_end_date_value']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['sorts']['field_fieldtrip_start_end_date_value']['field'] = 'field_fieldtrip_start_end_date_value';
  $handler->display->display_options['sorts']['field_fieldtrip_start_end_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
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
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['value'] = array(
    'In Progress' => 'In Progress',
  );
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['expose']['operator_id'] = 'field_fieldtrip_status_value_op';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['expose']['label'] = 'Status (field_fieldtrip_status)';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['expose']['operator'] = 'field_fieldtrip_status_value_op';
  $handler->display->display_options['filters']['field_fieldtrip_status_value']['expose']['identifier'] = 'field_fieldtrip_status_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'api/views/currentfieldtrip';
  $handler->display->display_options['menu']['title'] = 'My Field Trips';
  $handler->display->display_options['menu']['description'] = 'My Field Trips';
  $handler->display->display_options['menu']['weight'] = '5';

  /* Display: Location (for a Trip Report) */
  $handler = $view->new_display('page', 'Location (for a Trip Report)', 'place');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trip Reports';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ftritem_place_node']['id'] = 'reverse_field_ftritem_place_node';
  $handler->display->display_options['relationships']['reverse_field_ftritem_place_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ftritem_place_node']['field'] = 'reverse_field_ftritem_place_node';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'place' => 'place',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_ftritem_place_node';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['path'] = 'api/views/tripreportlocation';

  /* Display: Action Items (for an ftritem) */
  $handler = $view->new_display('page', 'Action Items (for an ftritem)', 'actionitems');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Action Items';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: This argument is removed in code. It contains the nid of the field trip (and is optional) */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['ui_name'] = 'This argument is removed in code. It contains the nid of the field trip (and is optional)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: This value is filled in in code with values from fieldtrip_places */
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['id'] = 'field_actionitem_resp_place_target_id';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['table'] = 'field_data_field_actionitem_resp_place';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['field'] = 'field_actionitem_resp_place_target_id';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['ui_name'] = 'This value is filled in in code with values from fieldtrip_places';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['default_argument_options']['argument'] = '123+123';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_actionitem_resp_place_target_id']['break_phrase'] = TRUE;
  /* Contextual filter: This is replaced in code */
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['id'] = 'field_actionitem_ftreportitem_target_id';
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['table'] = 'field_data_field_actionitem_ftreportitem';
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['field'] = 'field_actionitem_ftreportitem_target_id';
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['ui_name'] = 'This is replaced in code';
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['default_argument_options']['argument'] = '123';
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_actionitem_ftreportitem_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'actionitem' => 'actionitem',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Status (field_actionitem_status) */
  $handler->display->display_options['filters']['field_actionitem_status_value']['id'] = 'field_actionitem_status_value';
  $handler->display->display_options['filters']['field_actionitem_status_value']['table'] = 'field_data_field_actionitem_status';
  $handler->display->display_options['filters']['field_actionitem_status_value']['field'] = 'field_actionitem_status_value';
  $handler->display->display_options['filters']['field_actionitem_status_value']['value'] = array(
    'all' => 'all',
    1 => '1',
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_actionitem_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_actionitem_status_value']['expose']['operator_id'] = 'field_actionitem_status_value_op';
  $handler->display->display_options['filters']['field_actionitem_status_value']['expose']['label'] = 'Status (field_actionitem_status)';
  $handler->display->display_options['filters']['field_actionitem_status_value']['expose']['operator'] = 'field_actionitem_status_value_op';
  $handler->display->display_options['filters']['field_actionitem_status_value']['expose']['identifier'] = 'field_actionitem_status_value';
  $handler->display->display_options['filters']['field_actionitem_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['path'] = 'api/views/actionitems';
  $export['api_fieldtrips'] = $view;

  $view = new view();
  $view->name = 'api_questions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'api_questions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'questionnaire_question' => 'questionnaire_question',
  );
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Changed date (YYYY-MM-DD)';
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';

  /* Display: Questions API Page */
  $handler = $view->new_display('page', 'Questions API Page', 'questions');
  $handler->display->display_options['path'] = 'api/views/questions';

  /* Display: Statistics-OECD */
  $handler = $view->new_display('block', 'Statistics-OECD', 'block_1');
  $handler->display->display_options['display_description'] = 'A block of all the questions filtered on a given subject';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Sector (taxonomy_vocabulary_8) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['id'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['field'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['label'] = 'Subject';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'statistics/answers?f%5B0%5D=questionnaire_answer_question%3A[nid]';
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

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Sector (taxonomy_vocabulary_8) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['id'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['field'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['label'] = 'Subject';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="dv-seeall">See all Statistics</div>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'statistics/answers?f%5B0%5D=questionnaire_answer_question%3A[tid]';
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
    'block_1' => 'block_1',
    'default' => 0,
    'questions' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['api_questions'] = $view;

  $view = new view();
  $view->name = 'api_user';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Api_users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Api_users';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'active';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  /* Filter criterion: User: Created date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'users';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Created date';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';

  /* Display: List of Users */
  $handler = $view->new_display('page', 'List of Users', 'users');
  $handler->display->display_options['path'] = 'api/views/other/users';
  $export['api_user'] = $view;

  $view = new view();
  $view->name = 'api_vocabularies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'api_vocabularies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Placetypes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name_1',
      'rendered' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'name_1' => 'name_1',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name_1' => array(
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
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['required'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['separator'] = '';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = 'Parent Term ID';
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = 'Parent Name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_8' => 'vocabulary_8',
  );
  /* Filter criterion: Taxonomy term: Code (field_oecd_code) */
  $handler->display->display_options['filters']['field_oecd_code_value']['id'] = 'field_oecd_code_value';
  $handler->display->display_options['filters']['field_oecd_code_value']['table'] = 'field_data_field_oecd_code';
  $handler->display->display_options['filters']['field_oecd_code_value']['field'] = 'field_oecd_code_value';
  $handler->display->display_options['filters']['field_oecd_code_value']['relationship'] = 'parent';
  $handler->display->display_options['filters']['field_oecd_code_value']['operator'] = 'empty';

  /* Display: OECD Codes */
  $handler = $view->new_display('page', 'OECD Codes', 'oecd');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'OECD Codes';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_8' => 'vocabulary_8',
  );
  $handler->display->display_options['path'] = 'api/views/vocabulary/oecd';

  /* Display: Place Types */
  $handler = $view->new_display('page', 'Place Types', 'placetypes');
  $handler->display->display_options['display_description'] = 'Shows a list of PlaceTypes';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_1' => 'vocabulary_1',
  );
  $handler->display->display_options['path'] = 'api/views/vocabulary/placetypes';

  /* Display: Report Types */
  $handler = $view->new_display('page', 'Report Types', 'sitereporttypes');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Report Types';
  $handler->display->display_options['display_description'] = 'Displays the list of reports generated';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_7' => 'vocabulary_7',
  );
  $handler->display->display_options['path'] = 'api/views/vocabulary/reporttypes';
  $export['api_vocabularies'] = $view;

  return $export;
}
