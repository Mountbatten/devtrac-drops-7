<?php
/**
 * @file
 * devtrac7_solr_search_activity_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_solr_search_activity_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'devtrac_solr_view_activity';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_devtrac_solr_activity_index';
  $view->human_name = 'Devtrac Solr View Activity';
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
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'footable';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'noresult text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Your search did not return any results. Making your search less specific give you a higher chance of finding what you are looking for.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Relationship: node (source endpoint): Admin Units (indexed) */
  $handler->display->display_options['relationships']['endpoints_source_node_taxonomy_vocabulary_6']['id'] = 'endpoints_source_node_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['endpoints_source_node_taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['relationships']['endpoints_source_node_taxonomy_vocabulary_6']['field'] = 'endpoints_source_node_taxonomy_vocabulary_6';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'No.';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Source */
  $handler->display->display_options['fields']['endpoints_source_node']['id'] = 'endpoints_source_node';
  $handler->display->display_options['fields']['endpoints_source_node']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node']['field'] = 'endpoints_source_node';
  $handler->display->display_options['fields']['endpoints_source_node']['ui_name'] = 'Source';
  $handler->display->display_options['fields']['endpoints_source_node']['label'] = 'Activity';
  $handler->display->display_options['fields']['endpoints_source_node']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['endpoints_source_node']['view_mode'] = 'full';
  /* Field: Target */
  $handler->display->display_options['fields']['endpoints_target_node']['id'] = 'endpoints_target_node';
  $handler->display->display_options['fields']['endpoints_target_node']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_target_node']['field'] = 'endpoints_target_node';
  $handler->display->display_options['fields']['endpoints_target_node']['ui_name'] = 'Target';
  $handler->display->display_options['fields']['endpoints_target_node']['label'] = 'Organisation';
  $handler->display->display_options['fields']['endpoints_target_node']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['endpoints_target_node']['view_mode'] = 'full';
  /* Field: node (source endpoint) » Planned Date: Start date (indexed) */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['id'] = 'endpoints_source_node_field_iati_activity_planned_date_value';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['field'] = 'endpoints_source_node_field_iati_activity_planned_date_value';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['label'] = 'Start';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['date_format'] = 'custom';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['custom_date_format'] = 'Y/m/d';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['link_to_entity'] = 0;
  /* Field: node (source endpoint) » Planned Date: End date (indexed) */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['id'] = 'endpoints_source_node_field_iati_activity_planned_date_value2';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['field'] = 'endpoints_source_node_field_iati_activity_planned_date_value2';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['label'] = 'End';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['date_format'] = 'custom';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['custom_date_format'] = 'Y/m/d';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['link_to_entity'] = 0;
  /* Field: Indexed Relation: Organisation Role */
  $handler->display->display_options['fields']['field_iati_org_role']['id'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['field_iati_org_role']['field'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['label'] = 'Role';
  $handler->display->display_options['fields']['field_iati_org_role']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_iati_org_role']['view_mode'] = 'full';
  /* Field: node (source endpoint): Admin Units (indexed) */
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['id'] = 'endpoints_source_node_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['field'] = 'endpoints_source_node_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['label'] = 'Number of District';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['list']['mode'] = 'count';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: node (source endpoint): Sector (indexed) */
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['id'] = 'endpoints_source_node_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['field'] = 'endpoints_source_node_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['label'] = 'Sector';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['view_mode'] = 'full';
  /* Field: node (source endpoint): Status (indexed) */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['id'] = 'endpoints_source_node_field_iati_activity_status';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['field'] = 'endpoints_source_node_field_iati_activity_status';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['label'] = 'Status';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['view_mode'] = 'full';
  /* Filter criterion: Indexed Relation: Organisation Role */
  $handler->display->display_options['filters']['field_iati_org_role']['id'] = 'field_iati_org_role';
  $handler->display->display_options['filters']['field_iati_org_role']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['filters']['field_iati_org_role']['field'] = 'field_iati_org_role';
  $handler->display->display_options['filters']['field_iati_org_role']['value'] = array(
    505 => '505',
    506 => '506',
  );

  /* Display: Activities List */
  $handler = $view->new_display('page', 'Activities List', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_iati_org_role_1' => 'field_iati_org_role_1',
    'endpoints_source_node_title' => 'endpoints_source_node_title',
    'endpoints_target_node' => 'endpoints_target_node',
    'endpoints_source_node_field_iati_activity_planned_date_value' => 'endpoints_source_node_field_iati_activity_planned_date_value',
    'endpoints_source_node_field_iati_activity_planned_date_value2' => 'endpoints_source_node_field_iati_activity_planned_date_value2',
    'field_iati_org_role' => 'field_iati_org_role',
    'endpoints_source_node_taxonomy_vocabulary_6' => 'endpoints_source_node_taxonomy_vocabulary_6',
    'endpoints_source_node_taxonomy_vocabulary_8' => 'endpoints_source_node_taxonomy_vocabulary_8',
    'endpoints_source_node_field_iati_activity_status' => 'endpoints_source_node_field_iati_activity_status',
    'endpoints_source_node_taxonomy_vocabulary_6_1' => 'endpoints_source_node_taxonomy_vocabulary_6_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_iati_org_role_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'endpoints_source_node_title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'endpoints_target_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'endpoints_source_node_field_iati_activity_planned_date_value' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'endpoints_source_node_field_iati_activity_planned_date_value2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_iati_org_role' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'endpoints_source_node_taxonomy_vocabulary_6' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'endpoints_source_node_taxonomy_vocabulary_8' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'endpoints_source_node_field_iati_activity_status' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'endpoints_source_node_taxonomy_vocabulary_6_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'expand' => 'field_iati_org_role_1',
    'hide' => array(
      'field_iati_org_role_1' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'endpoints_source_node_title' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'endpoints_target_node' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'endpoints_source_node_field_iati_activity_planned_date_value' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'endpoints_source_node_field_iati_activity_planned_date_value2' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'field_iati_org_role' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'endpoints_source_node_taxonomy_vocabulary_6' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'endpoints_source_node_taxonomy_vocabulary_8' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'endpoints_source_node_field_iati_activity_status' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'endpoints_source_node_taxonomy_vocabulary_6_1' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Relation: Organisation Role */
  $handler->display->display_options['fields']['field_iati_org_role_1']['id'] = 'field_iati_org_role_1';
  $handler->display->display_options['fields']['field_iati_org_role_1']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['field_iati_org_role_1']['field'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iati_org_role_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_iati_org_role_1']['view_mode'] = 'full';
  /* Field: node (source endpoint): Title (indexed) */
  $handler->display->display_options['fields']['endpoints_source_node_title']['id'] = 'endpoints_source_node_title';
  $handler->display->display_options['fields']['endpoints_source_node_title']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_title']['field'] = 'endpoints_source_node_title';
  $handler->display->display_options['fields']['endpoints_source_node_title']['label'] = 'Activity';
  $handler->display->display_options['fields']['endpoints_source_node_title']['link_to_entity'] = 1;
  /* Field: Target */
  $handler->display->display_options['fields']['endpoints_target_node']['id'] = 'endpoints_target_node';
  $handler->display->display_options['fields']['endpoints_target_node']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_target_node']['field'] = 'endpoints_target_node';
  $handler->display->display_options['fields']['endpoints_target_node']['ui_name'] = 'Target';
  $handler->display->display_options['fields']['endpoints_target_node']['label'] = 'Organisation';
  $handler->display->display_options['fields']['endpoints_target_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['endpoints_target_node']['alter']['text'] = '[endpoints_target_node] ([field_iati_org_role_1])';
  $handler->display->display_options['fields']['endpoints_target_node']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['endpoints_target_node']['view_mode'] = 'full';
  /* Field: node (source endpoint) » Planned Date: Start date (indexed) */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['id'] = 'endpoints_source_node_field_iati_activity_planned_date_value';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['field'] = 'endpoints_source_node_field_iati_activity_planned_date_value';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['label'] = 'Start';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['date_format'] = 'date_only';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['custom_date_format'] = 'Y/m/d';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['link_to_entity'] = 0;
  /* Field: node (source endpoint) » Planned Date: End date (indexed) */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['id'] = 'endpoints_source_node_field_iati_activity_planned_date_value2';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['field'] = 'endpoints_source_node_field_iati_activity_planned_date_value2';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['label'] = 'End';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['date_format'] = 'date_only';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['custom_date_format'] = 'Y/m/d';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['link_to_entity'] = 0;
  /* Field: Indexed Relation: Organisation Role */
  $handler->display->display_options['fields']['field_iati_org_role']['id'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['field_iati_org_role']['field'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['label'] = 'Role';
  $handler->display->display_options['fields']['field_iati_org_role']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iati_org_role']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_iati_org_role']['view_mode'] = 'full';
  /* Field: node (source endpoint): Admin Units (indexed) */
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['id'] = 'endpoints_source_node_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['field'] = 'endpoints_source_node_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['label'] = 'Admin Units';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['list']['mode'] = 'count';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: node (source endpoint): Sector (indexed) */
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['id'] = 'endpoints_source_node_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['field'] = 'endpoints_source_node_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['label'] = 'Sector';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['list']['separator'] = ' ';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['display'] = 'view';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['view_mode'] = 'sector_code_icon';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['bypass_access'] = 0;
  /* Field: node (source endpoint): Status (indexed) */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['id'] = 'endpoints_source_node_field_iati_activity_status';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['field'] = 'endpoints_source_node_field_iati_activity_status';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['label'] = 'Status';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['view_mode'] = 'full';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['bypass_access'] = 0;
  /* Field: node (source endpoint): Admin Units (indexed) */
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['id'] = 'endpoints_source_node_taxonomy_vocabulary_6_1';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['field'] = 'endpoints_source_node_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['label'] = 'Districts';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['view_mode'] = 'full';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Relation: Organisation Role */
  $handler->display->display_options['filters']['field_iati_org_role']['id'] = 'field_iati_org_role';
  $handler->display->display_options['filters']['field_iati_org_role']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['filters']['field_iati_org_role']['field'] = 'field_iati_org_role';
  $handler->display->display_options['filters']['field_iati_org_role']['value'] = array(
    505 => '505',
    506 => '506',
  );
  $handler->display->display_options['path'] = 'activities';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Activities';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CSV';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Source :: Activity */
  $handler->display->display_options['fields']['endpoints_source_node']['id'] = 'endpoints_source_node';
  $handler->display->display_options['fields']['endpoints_source_node']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node']['field'] = 'endpoints_source_node';
  $handler->display->display_options['fields']['endpoints_source_node']['ui_name'] = 'Source :: Activity';
  $handler->display->display_options['fields']['endpoints_source_node']['label'] = 'Activity';
  $handler->display->display_options['fields']['endpoints_source_node']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['endpoints_source_node']['view_mode'] = 'full';
  /* Field: Target :: Org */
  $handler->display->display_options['fields']['endpoints_target_node']['id'] = 'endpoints_target_node';
  $handler->display->display_options['fields']['endpoints_target_node']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_target_node']['field'] = 'endpoints_target_node';
  $handler->display->display_options['fields']['endpoints_target_node']['ui_name'] = 'Target :: Org';
  $handler->display->display_options['fields']['endpoints_target_node']['label'] = 'Organisation';
  $handler->display->display_options['fields']['endpoints_target_node']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['endpoints_target_node']['view_mode'] = 'full';
  /* Field: node (source endpoint) » Planned Date: Start date (indexed) */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['id'] = 'endpoints_source_node_field_iati_activity_planned_date_value';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['field'] = 'endpoints_source_node_field_iati_activity_planned_date_value';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['label'] = 'Start';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['date_format'] = 'custom';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['custom_date_format'] = 'Y/m/d';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['link_to_entity'] = 0;
  /* Field: node (source endpoint) » Planned Date: End date (indexed) */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['id'] = 'endpoints_source_node_field_iati_activity_planned_date_value2';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['field'] = 'endpoints_source_node_field_iati_activity_planned_date_value2';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['label'] = 'End';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['date_format'] = 'custom';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['custom_date_format'] = 'Y/m/d';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['link_to_entity'] = 0;
  /* Field: Role* */
  $handler->display->display_options['fields']['field_iati_org_role']['id'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['field_iati_org_role']['field'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['ui_name'] = 'Role*';
  $handler->display->display_options['fields']['field_iati_org_role']['label'] = 'Role';
  $handler->display->display_options['fields']['field_iati_org_role']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_iati_org_role']['view_mode'] = 'full';
  /* Field: Admin Units* */
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['id'] = 'endpoints_source_node_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['field'] = 'endpoints_source_node_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['ui_name'] = 'Admin Units*';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['label'] = 'Number of District';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['list']['mode'] = 'count';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Districts* */
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['id'] = 'endpoints_source_node_taxonomy_vocabulary_6_1';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['field'] = 'endpoints_source_node_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['ui_name'] = 'Districts*';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['label'] = 'Districts';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['view_mode'] = 'full';
  /* Field: Sector */
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['id'] = 'endpoints_source_node_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['field'] = 'endpoints_source_node_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['ui_name'] = 'Sector';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['label'] = 'Sector';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['view_mode'] = 'full';
  /* Field: Status */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['id'] = 'endpoints_source_node_field_iati_activity_status';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['field'] = 'endpoints_source_node_field_iati_activity_status';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['ui_name'] = 'Status';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['label'] = 'Status';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['view_mode'] = 'full';
  /* Field: IATI Identifier */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_identifier']['id'] = 'endpoints_source_node_field_iati_identifier';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_identifier']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_identifier']['field'] = 'endpoints_source_node_field_iati_identifier';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_identifier']['ui_name'] = 'IATI Identifier';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_identifier']['label'] = 'IATI Identifier';
  /* Field: Default Currency */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_default_currency']['id'] = 'endpoints_source_node_field_iati_default_currency';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_default_currency']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_default_currency']['field'] = 'endpoints_source_node_field_iati_default_currency';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_default_currency']['ui_name'] = 'Default Currency';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_default_currency']['label'] = 'Default Currency';
  /* Field: Website */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_website_url']['id'] = 'endpoints_source_node_field_iati_activity_website_url';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_website_url']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_website_url']['field'] = 'endpoints_source_node_field_iati_activity_website_url';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_website_url']['ui_name'] = 'Website';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_website_url']['label'] = 'Website';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_website_url']['link_to_entity'] = 0;
  /* Field: Collaboration Type */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_collabo_type']['id'] = 'endpoints_source_node_field_iati_activity_collabo_type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_collabo_type']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_collabo_type']['field'] = 'endpoints_source_node_field_iati_activity_collabo_type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_collabo_type']['ui_name'] = 'Collaboration Type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_collabo_type']['label'] = 'Collaboration Type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_collabo_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_collabo_type']['view_mode'] = 'full';
  /* Field: Aid Type */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_aid_type']['id'] = 'endpoints_source_node_field_iati_activity_aid_type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_aid_type']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_aid_type']['field'] = 'endpoints_source_node_field_iati_activity_aid_type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_aid_type']['ui_name'] = 'Aid Type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_aid_type']['label'] = 'Aid Type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_aid_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_aid_type']['view_mode'] = 'full';
  /* Field: Finance Type */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_finance_type']['id'] = 'endpoints_source_node_field_iati_activity_finance_type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_finance_type']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_finance_type']['field'] = 'endpoints_source_node_field_iati_activity_finance_type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_finance_type']['ui_name'] = 'Finance Type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_finance_type']['label'] = 'Finance Type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_finance_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_finance_type']['view_mode'] = 'full';
  /* Field: Flow Type */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_flow_type']['id'] = 'endpoints_source_node_field_iati_activity_flow_type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_flow_type']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_flow_type']['field'] = 'endpoints_source_node_field_iati_activity_flow_type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_flow_type']['ui_name'] = 'Flow Type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_flow_type']['label'] = 'Flow Type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_flow_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_flow_type']['view_mode'] = 'full';
  /* Field: Owner Referance */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_ref']['id'] = 'endpoints_source_node_field_iati_owner_ref';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_ref']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_ref']['field'] = 'endpoints_source_node_field_iati_owner_ref';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_ref']['ui_name'] = 'Owner Referance';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_ref']['label'] = 'Owner Referance';
  /* Field: Owner Name */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_name']['id'] = 'endpoints_source_node_field_iati_owner_name';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_name']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_name']['field'] = 'endpoints_source_node_field_iati_owner_name';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_name']['ui_name'] = 'Owner Name';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_name']['label'] = 'Owner Name';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Relation: Organisation Role */
  $handler->display->display_options['filters']['field_iati_org_role']['id'] = 'field_iati_org_role';
  $handler->display->display_options['filters']['field_iati_org_role']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['filters']['field_iati_org_role']['field'] = 'field_iati_org_role';
  $handler->display->display_options['filters']['field_iati_org_role']['value'] = array(
    505 => '505',
  );
  $handler->display->display_options['path'] = 'activities/analyse/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: KML */
  $handler = $view->new_display('feed', 'KML', 'feed_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'KML';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'kml_feed';
  $handler->display->display_options['style_options']['fields']['name'] = 'endpoints_source_node';
  $handler->display->display_options['style_options']['fields']['description'] = 'endpoints_source_node_field_iati_activity_description';
  $handler->display->display_options['style_options']['fields']['longitude'] = 'field_district_geo_lon';
  $handler->display->display_options['style_options']['fields']['latitude'] = 'field_district_geo_lat';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Source */
  $handler->display->display_options['fields']['endpoints_source_node']['id'] = 'endpoints_source_node';
  $handler->display->display_options['fields']['endpoints_source_node']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node']['field'] = 'endpoints_source_node';
  $handler->display->display_options['fields']['endpoints_source_node']['ui_name'] = 'Source';
  $handler->display->display_options['fields']['endpoints_source_node']['label'] = 'Activity';
  $handler->display->display_options['fields']['endpoints_source_node']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['endpoints_source_node']['view_mode'] = 'full';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_description']['id'] = 'endpoints_source_node_field_iati_activity_description';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_description']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_description']['field'] = 'endpoints_source_node_field_iati_activity_description';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_description']['ui_name'] = 'Description';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_description']['label'] = 'Description';
  /* Field: Taxonomy term: Geo » Latitude */
  $handler->display->display_options['fields']['field_district_geo_lat']['id'] = 'field_district_geo_lat';
  $handler->display->display_options['fields']['field_district_geo_lat']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_district_geo_lat']['field'] = 'field_district_geo_lat';
  $handler->display->display_options['fields']['field_district_geo_lat']['relationship'] = 'endpoints_source_node_taxonomy_vocabulary_6';
  /* Field: Taxonomy term: Geo » Longitude */
  $handler->display->display_options['fields']['field_district_geo_lon']['id'] = 'field_district_geo_lon';
  $handler->display->display_options['fields']['field_district_geo_lon']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_district_geo_lon']['field'] = 'field_district_geo_lon';
  $handler->display->display_options['fields']['field_district_geo_lon']['relationship'] = 'endpoints_source_node_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['field_district_geo_lon']['precision'] = '0';
  $handler->display->display_options['fields']['field_district_geo_lon']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'activities/analyse/kml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: RSS Feed */
  $handler = $view->new_display('feed', 'RSS Feed', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'RSS Feed';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => '',
        'language' => '',
        'category' => '',
        'image' => '',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'endpoints_source_node',
        'link' => 'endpoints_source_node_1',
        'description' => 'endpoints_source_node_field_iati_activity_description',
        'author' => '',
        'category' => 'endpoints_source_node_taxonomy_vocabulary_8',
        'comments' => '',
        'enclosure' => '',
        'guid' => '',
        'pubDate' => '',
      ),
    ),
    'dc' => array(
      'views_rss_dc' => array(
        'title' => 'endpoints_source_node',
        'creator' => 'endpoints_target_node',
        'subject' => 'endpoints_source_node_taxonomy_vocabulary_8',
        'description' => 'endpoints_source_node_field_iati_activity_description',
        'publisher' => 'endpoints_source_node_1',
        'contributor' => 'endpoints_source_node_field_iati_activity_website_url',
        'date' => 'endpoints_source_node_field_iati_activity_planned_date_value',
        'type' => 'endpoints_source_node_field_iati_activity_collabo_type',
        'format' => '',
        'identifier' => 'endpoints_source_node_field_iati_identifier',
        'source' => 'field_wikipedia',
        'language' => '',
        'relation' => '',
        'coverage' => '',
        'rights' => '',
      ),
    ),
    'georss' => array(
      'views_rss_georss' => array(
        'point' => '',
        'line' => '',
        'polygon' => 'field_district_geo_wkt',
        'box' => '',
        'circle' => '',
        'featureName' => 'endpoints_source_node_taxonomy_vocabulary_6_1',
        'featureTypeTag' => 'endpoints_source_node',
        'relationshipTag' => '',
        'elev' => '',
        'floor' => '',
        'radius' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Source */
  $handler->display->display_options['fields']['endpoints_source_node']['id'] = 'endpoints_source_node';
  $handler->display->display_options['fields']['endpoints_source_node']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node']['field'] = 'endpoints_source_node';
  $handler->display->display_options['fields']['endpoints_source_node']['ui_name'] = 'Source';
  $handler->display->display_options['fields']['endpoints_source_node']['label'] = 'Activity';
  $handler->display->display_options['fields']['endpoints_source_node']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['endpoints_source_node']['view_mode'] = 'full';
  /* Field: Target */
  $handler->display->display_options['fields']['endpoints_target_node']['id'] = 'endpoints_target_node';
  $handler->display->display_options['fields']['endpoints_target_node']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_target_node']['field'] = 'endpoints_target_node';
  $handler->display->display_options['fields']['endpoints_target_node']['ui_name'] = 'Target';
  $handler->display->display_options['fields']['endpoints_target_node']['label'] = 'Organisation';
  $handler->display->display_options['fields']['endpoints_target_node']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['endpoints_target_node']['view_mode'] = 'full';
  /* Field: Start */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['id'] = 'endpoints_source_node_field_iati_activity_planned_date_value';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['field'] = 'endpoints_source_node_field_iati_activity_planned_date_value';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['ui_name'] = 'Start';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['label'] = 'Start';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['date_format'] = 'custom';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['custom_date_format'] = 'Y/m/d';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value']['link_to_entity'] = 0;
  /* Field: End */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['id'] = 'endpoints_source_node_field_iati_activity_planned_date_value2';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['field'] = 'endpoints_source_node_field_iati_activity_planned_date_value2';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['ui_name'] = 'End';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['label'] = 'End';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['date_format'] = 'custom';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['custom_date_format'] = 'Y/m/d';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_planned_date_value2']['link_to_entity'] = 0;
  /* Field: Role */
  $handler->display->display_options['fields']['field_iati_org_role']['id'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['field_iati_org_role']['field'] = 'field_iati_org_role';
  $handler->display->display_options['fields']['field_iati_org_role']['ui_name'] = 'Role';
  $handler->display->display_options['fields']['field_iati_org_role']['label'] = 'Role';
  $handler->display->display_options['fields']['field_iati_org_role']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_iati_org_role']['view_mode'] = 'full';
  /* Field: Number of District */
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['id'] = 'endpoints_source_node_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['field'] = 'endpoints_source_node_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['ui_name'] = 'Number of District';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['label'] = 'Number of District';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['list']['mode'] = 'count';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Sector */
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['id'] = 'endpoints_source_node_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['field'] = 'endpoints_source_node_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['ui_name'] = 'Sector';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['label'] = 'Sector';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_8']['view_mode'] = 'full';
  /* Field: Status */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['id'] = 'endpoints_source_node_field_iati_activity_status';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['field'] = 'endpoints_source_node_field_iati_activity_status';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['ui_name'] = 'Status';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['label'] = 'Status';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status']['view_mode'] = 'full';
  /* Field: Website */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_website_url']['id'] = 'endpoints_source_node_field_iati_activity_website_url';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_website_url']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_website_url']['field'] = 'endpoints_source_node_field_iati_activity_website_url';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_website_url']['ui_name'] = 'Website';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_website_url']['label'] = 'Website';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_website_url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_website_url']['link_to_entity'] = 0;
  /* Field: IATI Identifier */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_identifier']['id'] = 'endpoints_source_node_field_iati_identifier';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_identifier']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_identifier']['field'] = 'endpoints_source_node_field_iati_identifier';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_identifier']['ui_name'] = 'IATI Identifier';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_identifier']['label'] = 'IATI Identifier';
  /* Field: Status */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status_1']['id'] = 'endpoints_source_node_field_iati_activity_status_1';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status_1']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status_1']['field'] = 'endpoints_source_node_field_iati_activity_status';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status_1']['ui_name'] = 'Status';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status_1']['label'] = 'Status';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_status_1']['view_mode'] = 'full';
  /* Field: Collaboration Type */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_collabo_type']['id'] = 'endpoints_source_node_field_iati_activity_collabo_type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_collabo_type']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_collabo_type']['field'] = 'endpoints_source_node_field_iati_activity_collabo_type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_collabo_type']['ui_name'] = 'Collaboration Type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_collabo_type']['label'] = 'Collaboration Type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_collabo_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_collabo_type']['view_mode'] = 'full';
  /* Field: Aid Type */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_aid_type']['id'] = 'endpoints_source_node_field_iati_activity_aid_type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_aid_type']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_aid_type']['field'] = 'endpoints_source_node_field_iati_activity_aid_type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_aid_type']['ui_name'] = 'Aid Type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_aid_type']['label'] = 'Aid Type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_aid_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_aid_type']['view_mode'] = 'full';
  /* Field: Finance Type */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_finance_type']['id'] = 'endpoints_source_node_field_iati_activity_finance_type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_finance_type']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_finance_type']['field'] = 'endpoints_source_node_field_iati_activity_finance_type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_finance_type']['ui_name'] = 'Finance Type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_finance_type']['label'] = 'Finance Type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_finance_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_finance_type']['view_mode'] = 'full';
  /* Field: Flow Type */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_flow_type']['id'] = 'endpoints_source_node_field_iati_activity_flow_type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_flow_type']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_flow_type']['field'] = 'endpoints_source_node_field_iati_activity_flow_type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_flow_type']['ui_name'] = 'Flow Type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_flow_type']['label'] = 'Flow Type';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_flow_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_flow_type']['view_mode'] = 'full';
  /* Field: Owner Referance */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_ref']['id'] = 'endpoints_source_node_field_iati_owner_ref';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_ref']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_ref']['field'] = 'endpoints_source_node_field_iati_owner_ref';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_ref']['ui_name'] = 'Owner Referance';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_ref']['label'] = 'Owner Referance';
  /* Field: Owner Name */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_name']['id'] = 'endpoints_source_node_field_iati_owner_name';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_name']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_name']['field'] = 'endpoints_source_node_field_iati_owner_name';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_name']['ui_name'] = 'Owner Name';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_owner_name']['label'] = 'Owner Name';
  /* Field: Indexed Relation: node (source endpoint) */
  $handler->display->display_options['fields']['endpoints_source_node_1']['id'] = 'endpoints_source_node_1';
  $handler->display->display_options['fields']['endpoints_source_node_1']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_1']['field'] = 'endpoints_source_node';
  $handler->display->display_options['fields']['endpoints_source_node_1']['label'] = 'URL';
  $handler->display->display_options['fields']['endpoints_source_node_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['endpoints_source_node_1']['alter']['text'] = 'node/[endpoints_source_node_1]';
  $handler->display->display_options['fields']['endpoints_source_node_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['endpoints_source_node_1']['display'] = 'id';
  $handler->display->display_options['fields']['endpoints_source_node_1']['view_mode'] = 'full';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_description']['id'] = 'endpoints_source_node_field_iati_activity_description';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_description']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_description']['field'] = 'endpoints_source_node_field_iati_activity_description';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_description']['ui_name'] = 'Description';
  $handler->display->display_options['fields']['endpoints_source_node_field_iati_activity_description']['label'] = 'Description';
  /* Field: Taxonomy term: Wikipedia */
  $handler->display->display_options['fields']['field_wikipedia']['id'] = 'field_wikipedia';
  $handler->display->display_options['fields']['field_wikipedia']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_wikipedia']['field'] = 'field_wikipedia';
  $handler->display->display_options['fields']['field_wikipedia']['relationship'] = 'endpoints_source_node_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['field_wikipedia']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_wikipedia']['type'] = 'link_plain';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_district_geo_wkt']['id'] = 'field_district_geo_wkt';
  $handler->display->display_options['fields']['field_district_geo_wkt']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_district_geo_wkt']['field'] = 'field_district_geo_wkt';
  $handler->display->display_options['fields']['field_district_geo_wkt']['relationship'] = 'endpoints_source_node_taxonomy_vocabulary_6';
  /* Field: node (source endpoint): Admin Units (indexed) */
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['id'] = 'endpoints_source_node_taxonomy_vocabulary_6_1';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['field'] = 'endpoints_source_node_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['label'] = 'District';
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['endpoints_source_node_taxonomy_vocabulary_6_1']['view_mode'] = 'full';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Relation: Organisation Role */
  $handler->display->display_options['filters']['field_iati_org_role']['id'] = 'field_iati_org_role';
  $handler->display->display_options['filters']['field_iati_org_role']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['filters']['field_iati_org_role']['field'] = 'field_iati_org_role';
  $handler->display->display_options['filters']['field_iati_org_role']['value'] = array(
    505 => '505',
  );
  $handler->display->display_options['path'] = 'activities/analyse/feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Activities Graphs */
  $handler = $view->new_display('mode', 'Activities Graphs', 'mode_1');
  $handler->display->display_options['display_description'] = 'Empty view as placeholder for graphs';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '-1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'endpoints_source_node' => 'endpoints_source_node',
    'endpoints_target_node' => 'endpoints_target_node',
    'endpoints_source_node_field_iati_activity_planned_date_value' => 'endpoints_source_node_field_iati_activity_planned_date_value',
    'endpoints_source_node_field_iati_activity_planned_date_value2' => 'endpoints_source_node_field_iati_activity_planned_date_value2',
    'field_iati_org_role' => 'field_iati_org_role',
    'endpoints_source_node_taxonomy_vocabulary_6' => 'endpoints_source_node_taxonomy_vocabulary_6',
    'endpoints_source_node_taxonomy_vocabulary_8' => 'endpoints_source_node_taxonomy_vocabulary_8',
    'endpoints_source_node_field_iati_activity_status' => 'endpoints_source_node_field_iati_activity_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'endpoints_source_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'endpoints_target_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'endpoints_source_node_field_iati_activity_planned_date_value' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'endpoints_source_node_field_iati_activity_planned_date_value2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_iati_org_role' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'endpoints_source_node_taxonomy_vocabulary_6' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'endpoints_source_node_taxonomy_vocabulary_8' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'endpoints_source_node_field_iati_activity_status' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'expand' => 'counter',
    'hide' => array(
      'counter' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'endpoints_source_node' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'endpoints_target_node' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'endpoints_source_node_field_iati_activity_planned_date_value' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'endpoints_source_node_field_iati_activity_planned_date_value2' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_iati_org_role' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'endpoints_source_node_taxonomy_vocabulary_6' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'endpoints_source_node_taxonomy_vocabulary_8' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'endpoints_source_node_field_iati_activity_status' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Relation: Relation ID */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'search_api_index_devtrac_solr_activity_index';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['link_to_entity'] = 0;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['mode_id'] = 'graphs';
  $handler->display->display_options['mode_name'] = 'graphs';
  $export['devtrac_solr_view_activity'] = $view;

  return $export;
}
