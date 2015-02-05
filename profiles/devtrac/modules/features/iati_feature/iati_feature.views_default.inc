<?php
/**
 * @file
 * iati_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iati_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'devtrac_activities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Devtrac Activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Devtrac Activities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'devtrac_activities_district_map';
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

  /* Display: Activity Map Block */
  $handler = $view->new_display('block', 'Activity Map Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'devtrac_activities_district_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Active Admin Units */
  $handler = $view->new_display('block', 'Active Admin Units', 'block_1');
  $handler->display->display_options['display_description'] = 'Field on the main Full content view mode for the project page';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['group_type'] = 'count';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['separator'] = ', ';
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

  /* Display: Description */
  $handler = $view->new_display('block', 'Description', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activity Description';
  $handler->display->display_options['display_description'] = 'Description on the Activity page.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = '';
  $handler->display->display_options['fields']['virtual_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['virtual_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_iati_activity_description']['id'] = 'field_iati_activity_description';
  $handler->display->display_options['fields']['field_iati_activity_description']['table'] = 'field_data_field_iati_activity_description';
  $handler->display->display_options['fields']['field_iati_activity_description']['field'] = 'field_iati_activity_description';
  $handler->display->display_options['fields']['field_iati_activity_description']['label'] = '';
  $handler->display->display_options['fields']['field_iati_activity_description']['element_label_colon'] = FALSE;
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

  /* Display: Documents */
  $handler = $view->new_display('block', 'Documents', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documents';
  $handler->display->display_options['display_description'] = 'Documents on the Activity page.';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Documents */
  $handler->display->display_options['fields']['field_field_iati_activity_doc']['id'] = 'field_field_iati_activity_doc';
  $handler->display->display_options['fields']['field_field_iati_activity_doc']['table'] = 'field_data_field_field_iati_activity_doc';
  $handler->display->display_options['fields']['field_field_iati_activity_doc']['field'] = 'field_field_iati_activity_doc';
  $handler->display->display_options['fields']['field_field_iati_activity_doc']['label'] = '';
  $handler->display->display_options['fields']['field_field_iati_activity_doc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_iati_activity_doc']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_field_iati_activity_doc']['type'] = 'devtrac7_file_table';
  $handler->display->display_options['fields']['field_field_iati_activity_doc']['delta_offset'] = '0';
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

  /* Display: Activity-Admin Units List */
  $handler = $view->new_display('block', 'Activity-Admin Units List', 'block_3');
  $handler->display->display_options['display_description'] = 'Admin Units where a given activity is operating';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['label'] = 'Vocabulary_6';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  /* Field: Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'field_data_field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['relationship'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['fields']['field_district_geo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'centroid',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'iati_activity' => 'iati_activity',
  );

  /* Display: Activity Data Overlay */
  $handler = $view->new_display('openlayers', 'Activity Data Overlay', 'openlayers_1');
  $handler->display->display_options['display_description'] = 'The data overlay for the districts where a given activity is operating.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'nid',
    'other_lon' => 'nid',
    'wkt' => 'field_district_geo',
    'other_top' => 'nid',
    'other_right' => 'nid',
    'other_bottom' => 'nid',
    'other_left' => 'nid',
    'name_field' => 'name',
    'description_field' => 'name',
    'view_mode' => 'full',
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
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['label'] = 'Vocabulary_6';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'field_data_field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['relationship'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'centroid',
  );

  /* Display: Activity-Organisation */
  $handler = $view->new_display('block', 'Activity-Organisation', 'block_5');
  $handler->display->display_options['display_description'] = 'A list of activities on the organisation pages';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
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
    'title' => 'title',
    'nid' => 'nid',
    'taxonomy_vocabulary_6' => 'taxonomy_vocabulary_6',
    'view' => 'view',
    'view_1' => 'view_1',
  );
  $handler->display->display_options['style_options']['default'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_6' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: IATI Organisation Role (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['id'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['field'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['r_index'] = '-1';
  /* Relationship: Content: Relation: IATI Organisation Role (node → node) */
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['id'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['field'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['r_index'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['label'] = 'Admin Units';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['separator'] = ', ';
  /* Field: Sectors */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Sectors';
  $handler->display->display_options['fields']['view']['label'] = 'Sectors';
  $handler->display->display_options['fields']['view']['view'] = 'devtrac_activities';
  $handler->display->display_options['fields']['view']['display'] = 'block_6';
  $handler->display->display_options['fields']['view']['arguments'] = '[%nid]';
  $handler->display->display_options['fields']['view']['query_aggregation'] = 0;
  /* Field: Partner */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['ui_name'] = 'Partner';
  $handler->display->display_options['fields']['view_1']['label'] = 'Partner';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'devtrac_activities';
  $handler->display->display_options['fields']['view_1']['display'] = 'block_7';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[%nid]';
  $handler->display->display_options['fields']['view_1']['query_aggregation'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['ui_name'] = 'Published';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'iati_activity' => 'iati_activity',
  );
  /* Filter criterion: Role */
  $handler->display->display_options['filters']['field_iati_org_role_tid']['id'] = 'field_iati_org_role_tid';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['table'] = 'field_data_field_iati_org_role';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['field'] = 'field_iati_org_role_tid';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['relationship'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['ui_name'] = 'Role';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['value'] = array(
    506 => '506',
  );
  $handler->display->display_options['filters']['field_iati_org_role_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['vocabulary'] = 'iati_roles';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['hierarchy'] = 1;

  /* Display: Sectors */
  $handler = $view->new_display('block', 'Sectors', 'block_6');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_term_icon' => 'field_term_icon',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: IATI Organisation Role (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['id'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['field'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['r_index'] = '-1';
  /* Relationship: Content: Relation: IATI Organisation Role (node → node) */
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['id'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['field'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['r_index'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'vocabulary_8' => 'vocabulary_8',
    'action_item_tags' => 0,
    'activity_aid_type' => 0,
    'activity_collaboration_type' => 0,
    'activity_finance_type' => 0,
    'activity_flowtype' => 0,
    'activity_status' => 0,
    'vocabulary_4' => 0,
    'vocabulary_6' => 0,
    'district_category' => 0,
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
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_term_icon']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_term_icon']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_term_icon']['alter']['path'] = 'activities?f[0]=endpoints_source_node%253Ataxonomy_vocabulary_8%3A[tid]';
  $handler->display->display_options['fields']['field_term_icon']['alter']['alt'] = '[name]';
  $handler->display->display_options['fields']['field_term_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'image_style' => 'devtrac_oecd_icons_color_small',
    'image_link' => 'content',
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

  /* Display: Partner */
  $handler = $view->new_display('block', 'Partner', 'block_7');
  $handler->display->display_options['display_description'] = 'Partner organisations on the Organisation detail page';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: IATI Organisation Role (node → node) */
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['id'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['field'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['label'] = 'IATI Organisation Role1';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['r_index'] = '-1';
  /* Relationship: Content: Relation: IATI Organisation Role (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['id'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['field'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['r_index'] = '-1';
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
  /* Filter criterion: Relation: Organisation Role (field_iati_org_role) */
  $handler->display->display_options['filters']['field_iati_org_role_tid']['id'] = 'field_iati_org_role_tid';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['table'] = 'field_data_field_iati_org_role';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['field'] = 'field_iati_org_role_tid';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['relationship'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['value'] = array(
    0 => '505',
    1 => '506',
  );
  $handler->display->display_options['filters']['field_iati_org_role_tid']['vocabulary'] = 'iati_roles';

  /* Display: Activity List Block */
  $handler = $view->new_display('block', 'Activity List Block', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  $export['devtrac_activities'] = $view;

  $view = new view();
  $view->name = 'devtrac_organisation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'relation';
  $view->human_name = 'Devtrac Organisation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projects under this Organisation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'rid' => 'rid',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'rid' => array(
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
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['id'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['label'] = 'IATI Source';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['r_index'] = '0';
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['id'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['label'] = 'IATI  Target';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['r_index'] = '1';
  /* Relationship: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['relationship'] = 'relation_base_iati_organisation_role_node';
  /* Field: Relation: Rid */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'relation';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_base_iati_organisation_role_node';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Relation: Relation type */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['value'] = array(
    'iati_organisation_role' => 'iati_organisation_role',
  );

  /* Display: Activities */
  $handler = $view->new_display('block', 'Activities', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activities under this Organisation';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['fields']['title_1']['label'] = 'Activity';
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['group_type'] = 'count';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['label'] = 'Admin Units';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['separator'] = ', ';
  /* Field: Field: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Relation: Relation type */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['value'] = array(
    'iati_organisation_role' => 'iati_organisation_role',
  );
  /* Filter criterion: Field: Sector (taxonomy_vocabulary_8:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';

  /* Display: Description */
  $handler = $view->new_display('block', 'Description', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Description';
  $handler->display->display_options['display_description'] = 'Description of the Organisation';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_iati_org_description']['id'] = 'field_iati_org_description';
  $handler->display->display_options['fields']['field_iati_org_description']['table'] = 'field_data_field_iati_org_description';
  $handler->display->display_options['fields']['field_iati_org_description']['field'] = 'field_iati_org_description';
  $handler->display->display_options['fields']['field_iati_org_description']['relationship'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['fields']['field_iati_org_description']['label'] = '';
  $handler->display->display_options['fields']['field_iati_org_description']['element_label_colon'] = FALSE;

  /* Display: Org at a glance */
  $handler = $view->new_display('block', 'Org at a glance', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
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
    'taxonomy_vocabulary_8' => 'taxonomy_vocabulary_8',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['id'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['label'] = 'IATI Source';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['r_index'] = '0';
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['id'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['label'] = 'IATI  Target';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['r_index'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[title_1] at a glance';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Relation: Relation type */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['value'] = array(
    'iati_organisation_role' => 'iati_organisation_role',
  );
  /* Filter criterion: Relation: Organisation Role (field_iati_org_role) */
  $handler->display->display_options['filters']['field_iati_org_role_tid']['id'] = 'field_iati_org_role_tid';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['table'] = 'field_data_field_iati_org_role';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['field'] = 'field_iati_org_role_tid';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['value'] = '';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['expose']['operator_id'] = 'field_iati_org_role_tid_op';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['expose']['label'] = 'Organisation Role (field_iati_org_role)';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['expose']['operator'] = 'field_iati_org_role_tid_op';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['expose']['identifier'] = 'field_iati_org_role_tid';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['vocabulary'] = 'iati_roles';

  /* Display: Organisations Scope Map */
  $handler = $view->new_display('block', 'Organisations Scope Map', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Units Where Organization is Working';
  $handler->display->display_options['display_description'] = 'Map with the districts in which the activities of a given organisation are operating';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'devtrac7_organisations';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Admin Units */
  $handler = $view->new_display('block', 'Admin Units', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Units';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['id'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['label'] = 'IATI Source';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['r_index'] = '0';
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['id'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['label'] = 'IATI  Target';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['r_index'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['group_type'] = 'count';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['label'] = 'Admin Units';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['group_columns'] = array(
    'bundle' => 'bundle',
  );
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  /* Field: Relation: Organisation Role */
  $handler->display->display_options['fields']['field_iati_org_role']['id'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['table'] = 'field_data_field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['field'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Activity count */
  $handler = $view->new_display('block', 'Activity count', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'A count of the number of activities in a given Organisation';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'taxonomy_vocabulary_8' => 'taxonomy_vocabulary_8',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['id'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['label'] = 'IATI Source';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['r_index'] = '0';
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['id'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['label'] = 'IATI  Target';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['r_index'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = 'activities';
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Current Activities - [title_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Relation: Relation type */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['value'] = array(
    'iati_organisation_role' => 'iati_organisation_role',
  );
  /* Filter criterion: Relation: Organisation Role (field_iati_org_role) */
  $handler->display->display_options['filters']['field_iati_org_role_tid']['id'] = 'field_iati_org_role_tid';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['table'] = 'field_data_field_iati_org_role';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['field'] = 'field_iati_org_role_tid';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['value'] = '';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['expose']['operator_id'] = 'field_iati_org_role_tid_op';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['expose']['label'] = 'Organisation Role (field_iati_org_role)';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['expose']['operator'] = 'field_iati_org_role_tid_op';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['expose']['identifier'] = 'field_iati_org_role_tid';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['vocabulary'] = 'iati_roles';

  /* Display: Activity counter */
  $handler = $view->new_display('block', 'Activity counter', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'A count of the number of activities in a given Organisation showing on the organisation Search page';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'taxonomy_vocabulary_8' => 'taxonomy_vocabulary_8',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['id'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['label'] = 'IATI Source';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['r_index'] = '0';
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['id'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['label'] = 'IATI  Target';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['r_index'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['path'] = 'node/!1';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Relation: Relation type */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['value'] = array(
    'iati_organisation_role' => 'iati_organisation_role',
  );
  /* Filter criterion: Relation: Organisation Role (field_iati_org_role) */
  $handler->display->display_options['filters']['field_iati_org_role_tid']['id'] = 'field_iati_org_role_tid';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['table'] = 'field_data_field_iati_org_role';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['field'] = 'field_iati_org_role_tid';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['value'] = '';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['expose']['operator_id'] = 'field_iati_org_role_tid_op';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['expose']['label'] = 'Organisation Role (field_iati_org_role)';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['expose']['operator'] = 'field_iati_org_role_tid_op';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['expose']['identifier'] = 'field_iati_org_role_tid';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['vocabulary'] = 'iati_roles';

  /* Display: Organisations Scope List */
  $handler = $view->new_display('block', 'Organisations Scope List', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Units Where Organization is Working';
  $handler->display->display_options['display_description'] = 'List with the districts in which the activities of a given organisation are operating';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  $export['devtrac_organisation'] = $view;

  $view = new view();
  $view->name = 'devtrac_organisation_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Devtrac Organisation Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Organisation Map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '300';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  /* Relationship: Content: Relation: IATI Organisation Role (node → node) */
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['id'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['field'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['r_index'] = '-1';
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['group_rows'] = FALSE;
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
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['sorts']['random']['expose']['label'] = 'Random';
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

  /* Display: Org District List */
  $handler = $view->new_display('block', 'Org District List', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Organisation Map';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'taxonomy_vocabulary_6' => 'taxonomy_vocabulary_6',
    'field_district_geo' => 'field_district_geo',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'taxonomy_vocabulary_6' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_district_geo' => array(
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
  /* Relationship: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  /* Relationship: Content: Relation: IATI Organisation Role (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['id'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['field'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['label'] = 'IATI Organisation Role1';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['r_index'] = '-1';
  /* Relationship: Content: Relation: IATI Organisation Role (node → node) */
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['id'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['field'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['label'] = 'IATI Organisation Role2';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['r_index'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  /* Field: Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'field_data_field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['relationship'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['fields']['field_district_geo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'centroid',
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['view'] = 'devtrac_organisation_map';
  $handler->display->display_options['fields']['view']['display'] = 'block_2';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
  $handler->display->display_options['fields']['view']['query_aggregation'] = 0;
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
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_iati_organisation_role_node';
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
  /* Filter criterion: Field: Admin Unit (taxonomy_vocabulary_6:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = '<=';
  $handler->display->display_options['filters']['delta']['value']['value'] = '1';

  /* Display: Org Data Overlay */
  $handler = $view->new_display('openlayers', 'Org Data Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'name',
    'other_lon' => 'name',
    'wkt' => 'field_district_geo',
    'other_top' => 'name',
    'other_right' => 'name',
    'other_bottom' => 'name',
    'other_left' => 'name',
    'name_field' => 'name',
    'description_field' => 'name',
    'view_mode' => 'full',
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
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['required'] = TRUE;
  /* Relationship: Content: Relation: IATI Organisation Role (node → node) */
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['id'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['field'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['r_index'] = '-1';
  /* Relationship: Content: Relation: IATI Organisation Role (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['id'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['field'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['label'] = 'IATI Organisation Role2';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['r_index'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'field_data_field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['relationship'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'centroid',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['relationship'] = 'taxonomy_vocabulary_6_tid';
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
  $handler->display->display_options['fields']['field_term_icon_1']['relationship'] = 'taxonomy_vocabulary_6_tid';
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
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_iati_organisation_role_node';
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

  /* Display: District Count */
  $handler = $view->new_display('block', 'District Count', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Count of Admin Units per Organisation';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
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
  /* Relationship: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  /* Relationship: Content: Relation: IATI Organisation Role (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['id'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['field'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['label'] = 'IATI Organisation Role1';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['r_index'] = '-1';
  /* Relationship: Content: Relation: IATI Organisation Role (node → node) */
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['id'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['field'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['label'] = 'IATI Organisation Role2';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['r_index'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['text'] = 'Admin Units where active: [taxonomy_vocabulary_6]';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['separator'] = ', ';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
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
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_iati_organisation_role_node';
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

  /* Display: Activity count-district */
  $handler = $view->new_display('block', 'Activity count-district', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Number of Activities per given district';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  /* Relationship: Content: Relation: IATI Organisation Role (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['id'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['field'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['label'] = 'IATI Organisation Role1';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['r_index'] = '-1';
  /* Relationship: Content: Relation: IATI Organisation Role (node → node) */
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['id'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['field'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['label'] = 'IATI Organisation Role2';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['r_index'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['text'] = '[taxonomy_vocabulary_6] at a glance';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['element_type'] = 'h3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  /* Field: Current Activity */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Current Activity';
  $handler->display->display_options['fields']['title']['label'] = 'Current Activities';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'activities?f[0]=endpoints_source_node%253Ataxonomy_vocabulary_6%3A[tid]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['separator'] = '';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'devtrac_organisation_map';
  $handler->display->display_options['fields']['view']['display'] = 'block_3';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
  $handler->display->display_options['fields']['view']['query_aggregation'] = 0;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'devtrac_organisation_map';
  $handler->display->display_options['fields']['view_1']['display'] = 'block_4';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!tid]';
  $handler->display->display_options['fields']['view_1']['query_aggregation'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['sorts']['random']['expose']['label'] = 'Random';
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
    'iati_activity' => 'iati_activity',
  );

  /* Display: Projects/sector */
  $handler = $view->new_display('block', 'Projects/sector', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Number of Projects per sector in a given district';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'taxonomy_vocabulary_6' => 'taxonomy_vocabulary_6',
    'field_district_geo' => 'field_district_geo',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'taxonomy_vocabulary_6' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_district_geo' => array(
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
  /* Relationship: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  /* Relationship: Content: Relation: IATI Organisation Role (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['id'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['field'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['label'] = 'IATI Organisation Role1';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['r_index'] = '-1';
  /* Relationship: Content: Relation: IATI Organisation Role (node → node) */
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['id'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['field'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['label'] = 'IATI Organisation Role2';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['r_index'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['delta_offset'] = '0';
  /* Field: Sector TID */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['id'] = 'taxonomy_vocabulary_8_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['ui_name'] = 'Sector TID';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['alter']['text'] = '[taxonomy_vocabulary_8_1-tid]';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'activities?f[0]=endpoints_source_node%253Ataxonomy_vocabulary_6%3A!1&f[1]=endpoints_source_node%253Ataxonomy_vocabulary_8%3A[taxonomy_vocabulary_8_1]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
    'iati_activity' => 'iati_activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Sector (taxonomy_vocabulary_8) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['id'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['field'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['value'] = '';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['vocabulary'] = 'vocabulary_8';

  /* Display: Organisations per district */
  $handler = $view->new_display('block', 'Organisations per district', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Organisations per district and the number of activities';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
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
  /* Relationship: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  /* Relationship: Content: Relation: IATI Organisation Role (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['id'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['field'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['label'] = 'IATI Organisation Role1';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['r_index'] = '-1';
  /* Relationship: Content: Relation: IATI Organisation Role (node → node) */
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['id'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['field'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['label'] = 'IATI Organisation Role2';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['r_index'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title_1']['label'] = 'Active Organisations';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = 'organisations?f[0]=endpoints_source_node%253Ataxonomy_vocabulary_6%3A166&f[1]=relation_iati_organisation_role_node_reverse%253Ataxonomy_vocabulary_6%3A[tid]';
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = TRUE;
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['sorts']['random']['expose']['label'] = 'Random';
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
    'iati_activity' => 'iati_activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Projects/sector Org */
  $handler = $view->new_display('block', 'Projects/sector Org', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activities by Sector';
  $handler->display->display_options['display_description'] = 'Number of Projects per sector in a given Organisation';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'taxonomy_vocabulary_8_2' => 'taxonomy_vocabulary_8_2',
    'taxonomy_vocabulary_8' => 'taxonomy_vocabulary_8',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: IATI Organisation Role (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['id'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['field'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['label'] = 'IATI Organisation Role1';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['r_index'] = '-1';
  /* Relationship: Content: Relation: IATI Organisation Role (node → node) */
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['id'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['field'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['label'] = 'IATI Organisation Role2';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['r_index'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_2']['id'] = 'taxonomy_vocabulary_8_2';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_2']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_2']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_2']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_2']['type'] = 'taxonomy_sector_code_icon';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_2']['delta_offset'] = '0';
  /* Field: Field: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['alter']['text'] = '[taxonomy_vocabulary_8] ';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['delta_offset'] = '0';
  /* Field: Field: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['id'] = 'taxonomy_vocabulary_8_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['label'] = 'TID';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['alter']['text'] = '[taxonomy_vocabulary_8_1-tid]';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8_1']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = 'activities?f[0]=endpoints_source_node%253Ataxonomy_vocabulary_8%3A[taxonomy_vocabulary_8_1]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_iati_organisation_role_node';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Sector (taxonomy_vocabulary_8) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['id'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['field'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['vocabulary'] = 'vocabulary_8';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['hierarchy'] = 1;

  /* Display: sector Icon */
  $handler = $view->new_display('block', 'sector Icon', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Sector Icon per Activity';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'taxonomy_vocabulary_8' => 'taxonomy_vocabulary_8',
    'field_term_icon' => 'field_term_icon',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Sector (taxonomy_vocabulary_8) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['id'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_8_tid']['field'] = 'taxonomy_vocabulary_8_tid';
  /* Relationship: Content: Relation: IATI Organisation Role (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['id'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['field'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['label'] = 'IATI Organisation Role1';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['r_index'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['relationship'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['fields']['field_term_icon']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'image_style' => 'sector_icon_smallest',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: District Count-org */
  $handler = $view->new_display('block', 'District Count-org', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Count of Admin Units per Organisation on the main Organisation search page';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
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
  /* Relationship: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  /* Relationship: Content: Relation: IATI Organisation Role (node → relation) */
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['id'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['field'] = 'relation_base_left_iati_organisation_role';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['label'] = 'IATI Organisation Role1';
  $handler->display->display_options['relationships']['relation_base_left_iati_organisation_role']['r_index'] = '-1';
  /* Relationship: Content: Relation: IATI Organisation Role (node → node) */
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['id'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['field'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['label'] = 'IATI Organisation Role2';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node']['r_index'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['text'] = 'Admin Units where active: [taxonomy_vocabulary_6]';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['path'] = 'node/!1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['separator'] = ', ';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_iati_organisation_role_node';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
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
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_iati_organisation_role_node';
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
  $export['devtrac_organisation_map'] = $view;

  $view = new view();
  $view->name = 'iati_organisations_activities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'relation';
  $view->human_name = 'iati_organisations_activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'IATI Activity\'s Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['id'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['label'] = 'IATI Organisation Role (Source)';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['r_index'] = '0';
  /* Field: Relation: Rid */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'relation';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['fields']['title']['label'] = 'Organisation';
  /* Field: Relation: Organisation Role */
  $handler->display->display_options['fields']['field_iati_org_role']['id'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['table'] = 'field_data_field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['field'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['type'] = 'taxonomy_term_reference_plain';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Relation: Relation type */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['value'] = array(
    'iati_organisation_role' => 'iati_organisation_role',
  );

  /* Display: IATI Activity's Block */
  $handler = $view->new_display('block', 'IATI Activity\'s Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Partners';
  $handler->display->display_options['display_description'] = 'Shows organisations with a given activity. Gets the Activity Nid from the Url';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['id'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['label'] = 'IATI Organisation Role (Source)';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['r_index'] = '0';
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['id'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['label'] = 'IATI Organisation Role (Target)';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['r_index'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Organisation Logo */
  $handler->display->display_options['fields']['field_org_logo']['id'] = 'field_org_logo';
  $handler->display->display_options['fields']['field_org_logo']['table'] = 'field_data_field_org_logo';
  $handler->display->display_options['fields']['field_org_logo']['field'] = 'field_org_logo';
  $handler->display->display_options['fields']['field_org_logo']['relationship'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['fields']['field_org_logo']['label'] = '';
  $handler->display->display_options['fields']['field_org_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_org_logo']['settings'] = array(
    'image_style' => 'activity_organisation_logo',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Relation: Organisation Role */
  $handler->display->display_options['fields']['field_iati_org_role']['id'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['table'] = 'field_data_field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['field'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['label'] = '';
  $handler->display->display_options['fields']['field_iati_org_role']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_iati_org_role']['alter']['text'] = 'Role - [field_iati_org_role]';
  $handler->display->display_options['fields']['field_iati_org_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iati_org_role']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Relation: Relation type */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['value'] = array(
    'iati_organisation_role' => 'iati_organisation_role',
  );
  /* Filter criterion: Relation: Organisation Role (field_iati_org_role) */
  $handler->display->display_options['filters']['field_iati_org_role_tid']['id'] = 'field_iati_org_role_tid';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['table'] = 'field_data_field_iati_org_role';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['field'] = 'field_iati_org_role_tid';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['value'] = array(
    505 => '505',
    506 => '506',
  );
  $handler->display->display_options['filters']['field_iati_org_role_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['vocabulary'] = 'iati_roles';

  /* Display: IATI Organisations Block */
  $handler = $view->new_display('block', 'IATI Organisations Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activity Information';
  $handler->display->display_options['display_description'] = 'Shows the Activities operating in the given organisation. Gets the Organisation NID from the Url';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['id'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['label'] = 'IATI Organisation Role (Source)';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['r_index'] = '0';
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['id'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['label'] = 'IATI Organisation Role (Target)';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['r_index'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Relation: Rid */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'relation';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['fields']['title']['label'] = 'Activity(s) in hand';
  /* Field: Relation: Organisation Role */
  $handler->display->display_options['fields']['field_iati_org_role']['id'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['table'] = 'field_data_field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['field'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Activities per District */
  $handler = $view->new_display('block', 'Activities per District', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Organisation Information';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['id'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['label'] = 'IATI Organisation Role (Source)';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['r_index'] = '0';
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['id'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['label'] = 'IATI Organisation Role (Target)';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['r_index'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Relation: Rid */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'relation';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['fields']['title_1']['label'] = 'Activity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['fields']['title']['label'] = 'Participating Organisation(s)';
  /* Field: Relation: Organisation Role */
  $handler->display->display_options['fields']['field_iati_org_role']['id'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['table'] = 'field_data_field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['field'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary_options']['items_per_page'] = '25';

  /* Display: Organisations per District */
  $handler = $view->new_display('block', 'Organisations per District', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Organisation Information';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['id'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['label'] = 'IATI Organisation Role (Source)';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['r_index'] = '0';
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['id'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['label'] = 'IATI Organisation Role (Target)';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['r_index'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['fields']['title']['label'] = 'Participating Organisation(s)';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['fields']['title_1']['label'] = 'Activity';
  /* Field: Relation: Organisation Role */
  $handler->display->display_options['fields']['field_iati_org_role']['id'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['table'] = 'field_data_field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['field'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary_options']['items_per_page'] = '25';

  /* Display: Orgs in a District */
  $handler = $view->new_display('block', 'Orgs in a District', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Partner Organisations in this district';
  $handler->display->display_options['display_description'] = 'List of Organisations operating in a district with the number of Activities per organisation.';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'tid' => 'tid',
    'nid' => 'nid',
    'title' => 'title',
    'title_1' => 'title_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'tid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
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
    'title_1' => array(
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
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['id'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['label'] = 'IATI Organisation Role (Source)';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node']['r_index'] = '0';
  /* Relationship: Relation: Relation: IATI Organisation Role (relation → node) */
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['id'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['field'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['label'] = 'IATI Organisation Role (Target)';
  $handler->display->display_options['relationships']['relation_base_iati_organisation_role_node_1']['r_index'] = '1';
  /* Relationship: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_6_tid']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_base_iati_organisation_role_node_1';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['fields']['title_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title_1']['label'] = 'Current Activities';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = 'activities?f[0]=endpoints_source_node%253Ataxonomy_vocabulary_6%3A[tid]&f[1]=endpoints_target_node%3A[nid]';
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['relationship'] = 'relation_base_iati_organisation_role_node';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_6_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Relation: Relation type */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['value'] = array(
    'iati_organisation_role' => 'iati_organisation_role',
  );
  /* Filter criterion: Relation: Organisation Role (field_iati_org_role) */
  $handler->display->display_options['filters']['field_iati_org_role_tid']['id'] = 'field_iati_org_role_tid';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['table'] = 'field_data_field_iati_org_role';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['field'] = 'field_iati_org_role_tid';
  $handler->display->display_options['filters']['field_iati_org_role_tid']['value'] = array(
    0 => '505',
    1 => '506',
  );
  $handler->display->display_options['filters']['field_iati_org_role_tid']['vocabulary'] = 'iati_roles';
  $export['iati_organisations_activities'] = $view;

  return $export;
}
