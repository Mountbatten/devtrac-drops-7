<?php
/**
 * @file
 * devtrac7_solr_search_act_item_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_solr_search_act_item_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'devtrac_solr_view_actionitems';
  $view->description = '';
  $view->tag = 'solr';
  $view->base_table = 'search_api_index_devtrac_solr_action_items_index';
  $view->human_name = 'devtrac_solr_view_actionitems';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'taxonomy_vocabulary_7' => 'taxonomy_vocabulary_7',
    'taxonomy_vocabulary_6' => 'taxonomy_vocabulary_6',
    'taxonomy_vocabulary_8' => 'taxonomy_vocabulary_8',
    'author' => 'author',
    'field_ftritem_date_visited' => 'field_ftritem_date_visited',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_7' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_6' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_8' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'author' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ftritem_date_visited' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'noresult text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Your search did not return any results. Making your search less specific give you a higher chance of finding what you are looking for.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Node: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['view_mode'] = 'full';
  /* Field: Indexed Node: Status */
  $handler->display->display_options['fields']['field_actionitem_status']['id'] = 'field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_actionitem_status']['field'] = 'field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Due Date */
  $handler->display->display_options['fields']['field_actionitem_due_date']['id'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_actionitem_due_date']['field'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_actionitem_due_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Responsible */
  $handler->display->display_options['fields']['field_actionitem_responsible']['id'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_actionitem_responsible']['field'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_actionitem_responsible']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_actionitem_responsible']['view_mode'] = 'full';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = '';
  $handler->display->display_options['fields']['virtual_field']['element_label_colon'] = FALSE;
  /* Sort criterion: Indexed Node: Due Date */
  $handler->display->display_options['sorts']['field_actionitem_due_date']['id'] = 'field_actionitem_due_date';
  $handler->display->display_options['sorts']['field_actionitem_due_date']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['sorts']['field_actionitem_due_date']['field'] = 'field_actionitem_due_date';
  $handler->display->display_options['sorts']['field_actionitem_due_date']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_actionitem_due_date']['expose']['label'] = 'Due Date';
  /* Sort criterion: Indexed Node: Status */
  $handler->display->display_options['sorts']['field_actionitem_status']['id'] = 'field_actionitem_status';
  $handler->display->display_options['sorts']['field_actionitem_status']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['sorts']['field_actionitem_status']['field'] = 'field_actionitem_status';
  $handler->display->display_options['sorts']['field_actionitem_status']['order'] = 'DESC';
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'actionitem' => 'actionitem',
  );

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Default Action Item view';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'taxonomy_vocabulary_6' => 'taxonomy_vocabulary_6',
    'taxonomy_vocabulary_8' => 'taxonomy_vocabulary_8',
    'field_actionitem_status' => 'field_actionitem_status',
    'field_actionitem_due_date' => 'field_actionitem_due_date',
    'field_actionitem_responsible' => 'field_actionitem_responsible',
    'virtual_field' => 'virtual_field',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_6' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_8' => array(
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
    'virtual_field' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'expand' => 'title',
    'hide' => array(
      'title' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'taxonomy_vocabulary_6' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'taxonomy_vocabulary_8' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'field_actionitem_status' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'field_actionitem_due_date' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'field_actionitem_responsible' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'virtual_field' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['bypass_access'] = 0;
  /* Field: Indexed Node: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['list']['separator'] = ' ';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['display'] = 'view';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['view_mode'] = 'sector_code_icon';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['bypass_access'] = 0;
  /* Field: Indexed Node: Status */
  $handler->display->display_options['fields']['field_actionitem_status']['id'] = 'field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_actionitem_status']['field'] = 'field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Due Date */
  $handler->display->display_options['fields']['field_actionitem_due_date']['id'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_actionitem_due_date']['field'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_actionitem_due_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Responsible */
  $handler->display->display_options['fields']['field_actionitem_responsible']['id'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_actionitem_responsible']['field'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_actionitem_responsible']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_actionitem_responsible']['view_mode'] = 'full';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = '';
  $handler->display->display_options['fields']['virtual_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Status */
  $handler->display->display_options['sorts']['field_actionitem_status']['id'] = 'field_actionitem_status';
  $handler->display->display_options['sorts']['field_actionitem_status']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['sorts']['field_actionitem_status']['field'] = 'field_actionitem_status';
  $handler->display->display_options['path'] = 'actionitems';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Action Items';
  $handler->display->display_options['menu']['description'] = 'Shows action items of Devtrac reporters from the field';
  $handler->display->display_options['menu']['weight'] = '-8';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Graphs */
  $handler = $view->new_display('mode', 'Graphs', 'graphs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_comment'] = 'This view is supposed to be empty. With this view being empty, the content-first area is then filled with the tagcloud block from the facetapi.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '-1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  $handler->display->display_options['displays'] = array(
    'list' => 'list',
    'page_1' => 0,
  );
  $handler->display->display_options['mode_id'] = 'graphs';
  $handler->display->display_options['mode_name'] = 'graphs';

  /* Display: Tagcloud */
  $handler = $view->new_display('mode', 'Tagcloud', 'tagcloud');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tag Cloud';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_comment'] = 'This view is supposed to be empty. With this view being empty, the content-first area is then filled with the tagcloud block from the facetapi.';
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  $handler->display->display_options['displays'] = array(
    'list' => 0,
  );
  $handler->display->display_options['mode_id'] = 'tagcloud';
  $handler->display->display_options['mode_name'] = 'Tag Cloud';

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'csv');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CSV';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['feed_in_links'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Node: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['view_mode'] = 'full';
  /* Field: Indexed Node: Status */
  $handler->display->display_options['fields']['field_actionitem_status']['id'] = 'field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_actionitem_status']['field'] = 'field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Due Date */
  $handler->display->display_options['fields']['field_actionitem_due_date']['id'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_actionitem_due_date']['field'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_actionitem_due_date']['settings'] = array(
    'format_type' => 'export_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Responsible */
  $handler->display->display_options['fields']['field_actionitem_responsible']['id'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_actionitem_responsible']['field'] = 'field_actionitem_responsible';
  $handler->display->display_options['fields']['field_actionitem_responsible']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_actionitem_responsible']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_actionitem_responsible']['view_mode'] = 'full';
  /* Field: Follow-up Task: Text (indexed) */
  $handler->display->display_options['fields']['field_actionitem_followuptask_value']['id'] = 'field_actionitem_followuptask_value';
  $handler->display->display_options['fields']['field_actionitem_followuptask_value']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_actionitem_followuptask_value']['field'] = 'field_actionitem_followuptask_value';
  $handler->display->display_options['fields']['field_actionitem_followuptask_value']['label'] = 'Task';
  $handler->display->display_options['fields']['field_actionitem_followuptask_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_actionitem_followuptask_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Tags */
  $handler->display->display_options['fields']['field_action_items_tags']['id'] = 'field_action_items_tags';
  $handler->display->display_options['fields']['field_action_items_tags']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_action_items_tags']['field'] = 'field_action_items_tags';
  $handler->display->display_options['fields']['field_action_items_tags']['label'] = 'Tags (Categories)';
  $handler->display->display_options['fields']['field_action_items_tags']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_action_items_tags']['view_mode'] = 'full';
  /* Field: Indexed Node: UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uuid']['link_to_entity'] = 0;
  /* Field: Location: UUID (indexed) */
  $handler->display->display_options['fields']['field_actionitem_resp_place_uuid']['id'] = 'field_actionitem_resp_place_uuid';
  $handler->display->display_options['fields']['field_actionitem_resp_place_uuid']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_actionitem_resp_place_uuid']['field'] = 'field_actionitem_resp_place_uuid';
  $handler->display->display_options['fields']['field_actionitem_resp_place_uuid']['label'] = 'Location UUID';
  $handler->display->display_options['fields']['field_actionitem_resp_place_uuid']['link_to_entity'] = 0;
  /* Field: Global: Site information */
  $handler->display->display_options['fields']['site_info']['id'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['table'] = 'views';
  $handler->display->display_options['fields']['site_info']['field'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['label'] = 'URL';
  $handler->display->display_options['fields']['site_info']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['site_info']['alter']['text'] = '[site_info]/uuid/node/[uuid]';
  $handler->display->display_options['fields']['site_info']['element_label_colon'] = FALSE;
  /* Field: Report: UUID (indexed) */
  $handler->display->display_options['fields']['field_actionitem_ftreportitem_uuid']['id'] = 'field_actionitem_ftreportitem_uuid';
  $handler->display->display_options['fields']['field_actionitem_ftreportitem_uuid']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_actionitem_ftreportitem_uuid']['field'] = 'field_actionitem_ftreportitem_uuid';
  $handler->display->display_options['fields']['field_actionitem_ftreportitem_uuid']['label'] = 'Sitereport UUID';
  $handler->display->display_options['fields']['field_actionitem_ftreportitem_uuid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_actionitem_ftreportitem_uuid']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Status */
  $handler->display->display_options['sorts']['field_actionitem_status']['id'] = 'field_actionitem_status';
  $handler->display->display_options['sorts']['field_actionitem_status']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['sorts']['field_actionitem_status']['field'] = 'field_actionitem_status';
  $handler->display->display_options['path'] = 'actionitems/analyse/csv';
  $handler->display->display_options['displays'] = array(
    'list' => 'list',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = '0';

  /* Display: KML */
  $handler = $view->new_display('feed', 'KML', 'kml');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'KML';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'kml_feed';
  $handler->display->display_options['style_options']['fields']['name'] = 'title';
  $handler->display->display_options['style_options']['fields']['description'] = 'field_ftritem_public_summary';
  $handler->display->display_options['style_options']['fields']['longitude'] = 'field_ftritem_lat_long_lon';
  $handler->display->display_options['style_options']['fields']['latitude'] = 'field_ftritem_lat_long_lat';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Site Report Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['id'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['field'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['view_mode'] = 'full';
  /* Field: Indexed Node: Public Summary */
  $handler->display->display_options['fields']['field_ftritem_public_summary']['id'] = 'field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['field'] = 'field_ftritem_public_summary';
  /* Field: Indexed Node: Lat-Long » Longitude */
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['id'] = 'field_ftritem_lat_long_lon';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['field'] = 'field_ftritem_lat_long_lon';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['precision'] = '0';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['separator'] = '';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['link_to_entity'] = 0;
  /* Field: Indexed Node: Lat-Long » Latitude */
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['id'] = 'field_ftritem_lat_long_lat';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['field'] = 'field_ftritem_lat_long_lat';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['precision'] = '0';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['separator'] = '';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'actionitems/analyse/kml';
  $handler->display->display_options['displays'] = array(
    'list' => 'list',
    'default' => 0,
  );

  /* Display: RSS Feed */
  $handler = $view->new_display('feed', 'RSS Feed', 'feed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'RSS Feed';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
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
        'title' => 'title',
        'link' => 'nid',
        'description' => 'field_ftritem_public_summary',
        'author' => 'author',
        'category' => 'taxonomy_vocabulary_8',
        'comments' => '',
        'enclosure' => '',
        'guid' => 'nid',
        'pubDate' => 'created',
      ),
    ),
    'dc' => array(
      'views_rss_dc' => array(
        'title' => 'title',
        'creator' => 'author',
        'subject' => 'taxonomy_vocabulary_8',
        'description' => 'field_ftritem_public_summary',
        'publisher' => 'nid',
        'contributor' => '',
        'date' => 'created',
        'type' => '',
        'format' => '',
        'identifier' => 'nid',
        'source' => '',
        'language' => '',
        'relation' => '',
        'coverage' => 'taxonomy_vocabulary_6',
        'rights' => '',
      ),
    ),
    'georss' => array(
      'views_rss_georss' => array(
        'point' => 'field_ftritem_lat_long_lon',
        'line' => '',
        'polygon' => '',
        'box' => '',
        'circle' => '',
        'featureName' => 'title',
        'featureTypeTag' => 'taxonomy_vocabulary_1',
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
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Site Report Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['id'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['field'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['view_mode'] = 'full';
  /* Field: Indexed Node: Public Summary */
  $handler->display->display_options['fields']['field_ftritem_public_summary']['id'] = 'field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['field'] = 'field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['alter']['strip_tags'] = TRUE;
  /* Field: Indexed Node: Lat-Long */
  $handler->display->display_options['fields']['field_ftritem_lat_long']['id'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['field'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['label'] = 'Lat-Long Latitude';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Indexed Node: Lat-Long » Longitude */
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['id'] = 'field_ftritem_lat_long_lon';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['field'] = 'field_ftritem_lat_long_lon';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['label'] = 'Lat + Lon Combined';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['alter']['text'] = '[field_ftritem_lat_long] [field_ftritem_lat_long_lon] ';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['precision'] = '0';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['link_to_entity'] = 0;
  /* Field: Indexed Node: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['view_mode'] = 'full';
  /* Field: Indexed Node: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Node: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['label'] = 'OECD and District';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['alter']['text'] = '[taxonomy_vocabulary_6], [taxonomy_vocabulary_8]';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['view_mode'] = 'full';
  /* Field: Indexed Node: Author */
  $handler->display->display_options['fields']['author']['id'] = 'author';
  $handler->display->display_options['fields']['author']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['author']['field'] = 'author';
  $handler->display->display_options['fields']['author']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['author']['view_mode'] = 'full';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'http://www.devtrac.ug/node/[nid]';
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_devtrac_solr_action_items_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'actionitems/analyse/feed';
  $handler->display->display_options['displays'] = array(
    'list' => 'list',
    'default' => 0,
  );
  $export['devtrac_solr_view_actionitems'] = $view;

  return $export;
}
