<?php
/**
 * @file
 * devtrac7_admin_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_admin_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_taxonomy_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->base_field = 'tid';
  $view->human_name = 'Admin Taxonomy View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Admin Taxonomy View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;

  /* Display: Edit Sector Codes */
  $handler = $view->new_display('page', 'Edit Sector Codes', 'page_sector_codes');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sector Codes';
  $handler->display->display_options['display_description'] = 'A view that will display all the oecd codes (sectors) with their respective icons';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['empty'] = 'Missing Description';
  /* Field: Taxonomy term: Code */
  $handler->display->display_options['fields']['field_oecd_code']['id'] = 'field_oecd_code';
  $handler->display->display_options['fields']['field_oecd_code']['table'] = 'field_data_field_oecd_code';
  $handler->display->display_options['fields']['field_oecd_code']['field'] = 'field_oecd_code';
  $handler->display->display_options['fields']['field_oecd_code']['label'] = 'OECD Code';
  $handler->display->display_options['fields']['field_oecd_code']['empty'] = 'Missing OECD Code';
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon']['empty'] = 'Missing Icon';
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['label'] = '';
  $handler->display->display_options['fields']['edit_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_term']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Term Icon (field_term_icon:fid) */
  $handler->display->display_options['sorts']['field_term_icon_fid']['id'] = 'field_term_icon_fid';
  $handler->display->display_options['sorts']['field_term_icon_fid']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['sorts']['field_term_icon_fid']['field'] = 'field_term_icon_fid';
  $handler->display->display_options['sorts']['field_term_icon_fid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_8' => 'vocabulary_8',
  );
  $handler->display->display_options['path'] = 'admin/devtrac7/taxonomy/edit';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Edit Lists';
  $handler->display->display_options['menu']['description'] = 'Overviews that help you manage your lists';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Lists';
  $handler->display->display_options['tab_options']['description'] = 'Manage your Lists';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Edit Location Types */
  $handler = $view->new_display('page', 'Edit Location Types', 'page_location_types');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Location Types';
  $handler->display->display_options['display_description'] = 'A view that will display all the Location Types with their respective icons';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'Description';
  $handler->display->display_options['fields']['description']['empty'] = 'Missing Description';
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon']['empty'] = 'Missing Icon';
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'image_style' => 'devtrac_oecd_icons_color',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['label'] = '';
  $handler->display->display_options['fields']['edit_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_term']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Term Icon (field_term_icon:fid) */
  $handler->display->display_options['sorts']['field_term_icon_fid']['id'] = 'field_term_icon_fid';
  $handler->display->display_options['sorts']['field_term_icon_fid']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['sorts']['field_term_icon_fid']['field'] = 'field_term_icon_fid';
  $handler->display->display_options['sorts']['field_term_icon_fid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['path'] = 'admin/devtrac7/taxonomy/edit/locationtypes';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Edit Location Types';
  $handler->display->display_options['menu']['description'] = 'Shows the Location Types with their respective Icons';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Edit Admin Units */
  $handler = $view->new_display('page', 'Edit Admin Units', 'page_admin_units');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Units';
  $handler->display->display_options['display_description'] = 'A view that will help editors to easily find and edit Admin Units esp add categories';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'No.';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'District';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Tags */
  $handler->display->display_options['fields']['field_district_category']['id'] = 'field_district_category';
  $handler->display->display_options['fields']['field_district_category']['table'] = 'field_data_field_district_category';
  $handler->display->display_options['fields']['field_district_category']['field'] = 'field_district_category';
  /* Field: Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'field_data_field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['empty'] = 'Missing Geographical Information';
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_district_geo']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'centroid',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  /* Field: Taxonomy term: Long Name */
  $handler->display->display_options['fields']['field_long_name']['id'] = 'field_long_name';
  $handler->display->display_options['fields']['field_long_name']['table'] = 'field_data_field_long_name';
  $handler->display->display_options['fields']['field_long_name']['field'] = 'field_long_name';
  $handler->display->display_options['fields']['field_long_name']['empty'] = 'Missing Long Name';
  /* Field: Taxonomy term: Wikipedia */
  $handler->display->display_options['fields']['field_wikipedia']['id'] = 'field_wikipedia';
  $handler->display->display_options['fields']['field_wikipedia']['table'] = 'field_data_field_wikipedia';
  $handler->display->display_options['fields']['field_wikipedia']['field'] = 'field_wikipedia';
  $handler->display->display_options['fields']['field_wikipedia']['empty'] = 'Missing Wikipedia Link';
  $handler->display->display_options['fields']['field_wikipedia']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_wikipedia']['type'] = 'link_url';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Term Icon (field_term_icon:fid) */
  $handler->display->display_options['sorts']['field_term_icon_fid']['id'] = 'field_term_icon_fid';
  $handler->display->display_options['sorts']['field_term_icon_fid']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['sorts']['field_term_icon_fid']['field'] = 'field_term_icon_fid';
  $handler->display->display_options['sorts']['field_term_icon_fid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_6' => 'vocabulary_6',
  );
  /* Filter criterion: Taxonomy term: Tags (field_district_category) */
  $handler->display->display_options['filters']['field_district_category_tid']['id'] = 'field_district_category_tid';
  $handler->display->display_options['filters']['field_district_category_tid']['table'] = 'field_data_field_district_category';
  $handler->display->display_options['filters']['field_district_category_tid']['field'] = 'field_district_category_tid';
  $handler->display->display_options['filters']['field_district_category_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_district_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_district_category_tid']['expose']['operator_id'] = 'field_district_category_tid_op';
  $handler->display->display_options['filters']['field_district_category_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_district_category_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_district_category_tid']['expose']['operator'] = 'field_district_category_tid_op';
  $handler->display->display_options['filters']['field_district_category_tid']['expose']['identifier'] = 'field_district_category_tid';
  $handler->display->display_options['filters']['field_district_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_district_category_tid']['vocabulary'] = 'district_category';
  $handler->display->display_options['path'] = 'admin/devtrac7/taxonomy/edit/edit-districts';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Edit Admin Units';
  $handler->display->display_options['menu']['description'] = 'This view helps Editors to easily locate and edit Admin Units';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['admin_taxonomy_view'] = $view;

  $view = new view();
  $view->name = 'admin_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'admin View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Empty Locations not referred to';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'noresult text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Results';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'title';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Locations';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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

  /* Display: Locations not referred */
  $handler = $view->new_display('page', 'Locations not referred', 'orphans');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ftritem_place_node']['id'] = 'reverse_field_ftritem_place_node';
  $handler->display->display_options['relationships']['reverse_field_ftritem_place_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ftritem_place_node']['field'] = 'reverse_field_ftritem_place_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Number';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Locations that dnt have reports referring to them';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
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
  /* Filter criterion: Content: Location (field_ftritem_place) */
  $handler->display->display_options['filters']['field_ftritem_place_target_id']['id'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['filters']['field_ftritem_place_target_id']['table'] = 'field_data_field_ftritem_place';
  $handler->display->display_options['filters']['field_ftritem_place_target_id']['field'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['filters']['field_ftritem_place_target_id']['relationship'] = 'reverse_field_ftritem_place_node';
  $handler->display->display_options['filters']['field_ftritem_place_target_id']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'admin/devtrac7/quality/reports';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Reports';
  $handler->display->display_options['menu']['description'] = 'Several Reports that report on the quality of the database';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Diff in lat/lon SiteReport */
  $handler = $view->new_display('page', 'Diff in lat/lon SiteReport', 'latlon');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Site Reports and their respective attached place';
  $handler->display->display_options['display_description'] = 'Difference in the lat/lon Location vs Site Report';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_fieldtrip_places_node']['id'] = 'reverse_field_fieldtrip_places_node';
  $handler->display->display_options['relationships']['reverse_field_fieldtrip_places_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_fieldtrip_places_node']['field'] = 'reverse_field_fieldtrip_places_node';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ftritem_place_node']['id'] = 'reverse_field_ftritem_place_node';
  $handler->display->display_options['relationships']['reverse_field_ftritem_place_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ftritem_place_node']['field'] = 'reverse_field_ftritem_place_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_ftritem_place_node';
  /* Field: Field: Lat-Long */
  $handler->display->display_options['fields']['field_ftritem_lat_long']['id'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['table'] = 'field_data_field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['field'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['relationship'] = 'reverse_field_ftritem_place_node';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['label'] = 'Lat-Long SiteVisit';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Locations';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Lat-Long */
  $handler->display->display_options['fields']['field_place_lat_long']['id'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['table'] = 'field_data_field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['field'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['label'] = 'Lat-Long-place';
  $handler->display->display_options['fields']['field_place_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_place_lat_long']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_place_lat_long']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  $handler->display->display_options['path'] = 'admin/devtrac7/quality/reports/lat-lon';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Mismatching lat+lon';
  $handler->display->display_options['menu']['description'] = 'Compares Lat+Lon of Locations and Site Reports';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Monthly reports */
  $handler = $view->new_display('page', 'Monthly reports', 'monthly_report');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Monthly Content Status';
  $handler->display->display_options['display_description'] = 'Month and the content created according to content type';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset Filter';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_ftritem_place_node';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_ftritem_status']['id'] = 'field_ftritem_status';
  $handler->display->display_options['fields']['field_ftritem_status']['table'] = 'field_data_field_ftritem_status';
  $handler->display->display_options['fields']['field_ftritem_status']['field'] = 'field_ftritem_status';
  $handler->display->display_options['fields']['field_ftritem_status']['label'] = 'Status of a Site Report';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_fieldtrip_status']['id'] = 'field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['table'] = 'field_data_field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['field'] = 'field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['label'] = 'Status of a field Trip';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Content Type';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Created year + month */
  $handler->display->display_options['arguments']['created_year_month']['id'] = 'created_year_month';
  $handler->display->display_options['arguments']['created_year_month']['table'] = 'node';
  $handler->display->display_options['arguments']['created_year_month']['field'] = 'created_year_month';
  $handler->display->display_options['arguments']['created_year_month']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['created_year_month']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['created_year_month']['summary']['sort_order'] = 'desc';
  $handler->display->display_options['arguments']['created_year_month']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['created_year_month']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_year_month']['summary_options']['items_per_page'] = '25';
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
    'iati_activity' => 'iati_activity',
    'iati_organisation' => 'iati_organisation',
    'place' => 'place',
    'questionnaire_question' => 'questionnaire_question',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type of content';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  /* Filter criterion: Field: Admin Unit (taxonomy_vocabulary_6) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['id'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['field'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_6_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['expose']['label'] = 'Admin Unit';
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['expose']['operator'] = 'taxonomy_vocabulary_6_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['expose']['identifier'] = 'taxonomy_vocabulary_6_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_6_tid']['vocabulary'] = 'vocabulary_6';
  $handler->display->display_options['path'] = 'admin/devtrac7/statistics/reports/monthly';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Monthly Reports';
  $handler->display->display_options['menu']['description'] = 'Overview of items per month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Without Location Type */
  $handler = $view->new_display('page', 'Without Location Type', 'location_no_type');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Locations without Location Type';
  $handler->display->display_options['display_description'] = 'Locations without a Location Type';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'noresult text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Results';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'No.';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Places or Locations missing a location type';
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  /* Field: Field: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node ID';
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
  /* Filter criterion: Field: Location Type (taxonomy_vocabulary_1) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['operator'] = 'empty';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['vocabulary'] = 'vocabulary_1';
  $handler->display->display_options['path'] = 'admin/devtrac7/quality/reports/noplacetype';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Places without Placetype';
  $handler->display->display_options['menu']['description'] = 'All places or locations that are missing placetypes';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Unpublished Site Reports */
  $handler = $view->new_display('page', 'Unpublished Site Reports', 'unpub_sitereports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Unpublished Site Reports ';
  $handler->display->display_options['display_comment'] = 'We exclude Roadside Observations as these will never have a location';
  $handler->display->display_options['display_description'] = 'Site Reports that are not yet published';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Counter';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Action';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  /* Field: Content: Publish link */
  $handler->display->display_options['fields']['publishcontent']['id'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['table'] = 'node';
  $handler->display->display_options['fields']['publishcontent']['field'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['label'] = '';
  $handler->display->display_options['fields']['publishcontent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['publishcontent']['unpublish'] = 'Unpublish';
  $handler->display->display_options['fields']['publishcontent']['publish'] = 'Publish';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ftritem' => 'ftritem',
  );
  /* Filter criterion: Content: Site Report Type (taxonomy_vocabulary_7) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['id'] = 'taxonomy_vocabulary_7_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['table'] = 'field_data_taxonomy_vocabulary_7';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['field'] = 'taxonomy_vocabulary_7_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['vocabulary'] = 'vocabulary_7';
  $handler->display->display_options['path'] = 'admin/devtrac7/quality/reports/unpublished-sitevisits';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Unpublished Site Reports';
  $handler->display->display_options['menu']['description'] = 'Site Reports that are not yet refered to';
  $handler->display->display_options['menu']['weight'] = '7';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: AI without OECD */
  $handler = $view->new_display('page', 'AI without OECD', 'action_no_sector');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Action Items without Sector';
  $handler->display->display_options['display_description'] = 'Action Items without OECD codes';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'noresult text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Results';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'No.';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Action Items missing OECD codes';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node ID';
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Field: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['type'] = 'taxonomy_sector_code_icon';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['delta_offset'] = '0';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['separator'] = ' ';
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
  /* Filter criterion: Field: Sector (taxonomy_vocabulary_8) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['id'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['field'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['operator'] = 'empty';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['vocabulary'] = 'vocabulary_8';
  $handler->display->display_options['path'] = 'admin/devtrac7/quality/reports/ai-no-oecd-codes';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'ActionItems without Sector';
  $handler->display->display_options['menu']['description'] = 'ActionItems that are missing OECD Sector codes';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Site Reports without Sector */
  $handler = $view->new_display('page', 'Site Reports without Sector', 'fieldtrip_nosector');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Site Reports without Sector';
  $handler->display->display_options['display_description'] = 'Site Reports without Sector';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'noresult text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Results';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'No.';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Field Trip Report Items missing OECD codes';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node ID';
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Action';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
  /* Filter criterion: Field: Sector (taxonomy_vocabulary_8) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['id'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['field'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['operator'] = 'empty';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['vocabulary'] = 'vocabulary_8';
  $handler->display->display_options['path'] = 'admin/devtrac7/quality/reports/ftr-no-oecd-codes';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Site Reports without Sector';
  $handler->display->display_options['menu']['description'] = 'Site Report with no OECD Sector code';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Site Reports without locations */
  $handler = $view->new_display('page', 'Site Reports without locations', 'sitereports_nolocation');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Site Reports with no Locations';
  $handler->display->display_options['display_description'] = 'Site Reports that dont have a location';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Counter';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Action';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = '';
  $handler->display->display_options['fields']['virtual_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ftritem' => 'ftritem',
  );
  /* Filter criterion: Content: Location (field_ftritem_place) */
  $handler->display->display_options['filters']['field_ftritem_place_target_id']['id'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['filters']['field_ftritem_place_target_id']['table'] = 'field_data_field_ftritem_place';
  $handler->display->display_options['filters']['field_ftritem_place_target_id']['field'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['filters']['field_ftritem_place_target_id']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'admin/devtrac7/quality/reports/sitereports-no-locations';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Site Reports without Locations';
  $handler->display->display_options['menu']['description'] = 'Site Reports with no Locations attached';
  $handler->display->display_options['menu']['weight'] = '8';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Quality Checks';
  $handler->display->display_options['tab_options']['description'] = 'Views that can help you inspect the consistency of your database';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['admin_view'] = $view;

  $view = new view();
  $view->name = 'devtrac_admin_taxonomy';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->base_field = 'tid';
  $view->human_name = 'devtrac_admin_taxonomy';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Location Type Analysis';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_term_icon' => 'field_term_icon',
    'name' => 'name',
    'nid' => 'nid',
    'edit_term' => 'edit_term',
    'tid' => 'tid',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_term_icon' => array(
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
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_term' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'tid' => array(
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
  );
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_term_icon']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_term_icon']['alter']['text'] = '<img src="/profiles/devtrac/themes/devtrack_theme/icons/[name_1]_c.png" title="[name_1]" />';
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_term_icon']['group_column'] = 'entity_id';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Term Name';
  $handler->display->display_options['fields']['name']['alter']['path'] = 'place_type/[tid]';
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = 'Node count for term';
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['label'] = '';
  $handler->display->display_options['fields']['edit_term']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
    'vocabulary_8' => 'vocabulary_8',
  );
  $handler->display->display_options['filters']['machine_name']['expose']['operator_id'] = 'machine_name_op';
  $handler->display->display_options['filters']['machine_name']['expose']['label'] = 'Machine name';
  $handler->display->display_options['filters']['machine_name']['expose']['operator'] = 'machine_name_op';
  $handler->display->display_options['filters']['machine_name']['expose']['identifier'] = 'machine_name';

  /* Display: Location Type Analysis */
  $handler = $view->new_display('page', 'Location Type Analysis', 'page_location_types');
  $handler->display->display_options['display_description'] = 'Shows a list of locationtypes and the number of nodes its been tagged on to.';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['path'] = 'admin/devtrac7/statistics/reports';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Statistics';
  $handler->display->display_options['menu']['description'] = 'Reports with statistics about the Devtrac database';
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Term Counts */
  $handler = $view->new_display('page', 'Term Counts', 'term_counts');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Term Counts';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_term_icon']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_term_icon']['alter']['text'] = '<img src="/profiles/devtrac/themes/devtrack_theme/icons/[name_1]_c.png" title="[name_1]" />';
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_term_icon']['group_column'] = 'entity_id';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Term Name';
  $handler->display->display_options['fields']['name']['alter']['path'] = 'place_type/[tid]';
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = 'Node count for term';
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['label'] = '';
  $handler->display->display_options['fields']['edit_term']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'nid';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_4' => 'vocabulary_4',
    'vocabulary_6' => 'vocabulary_6',
    'vocabulary_5' => 'vocabulary_5',
    'vocabulary_2' => 'vocabulary_2',
    'iati_roles' => 'iati_roles',
    'vocabulary_8' => 'vocabulary_8',
    'vocabulary_9' => 'vocabulary_9',
    'vocabulary_7' => 'vocabulary_7',
  );
  $handler->display->display_options['filters']['machine_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['machine_name']['expose']['operator_id'] = 'machine_name_op';
  $handler->display->display_options['filters']['machine_name']['expose']['label'] = 'Vocabulary';
  $handler->display->display_options['filters']['machine_name']['expose']['operator'] = 'machine_name_op';
  $handler->display->display_options['filters']['machine_name']['expose']['identifier'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '>';
  $handler->display->display_options['filters']['nid']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'admin/devtrac7/statistics/reports/termcounts';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Term Counts';
  $handler->display->display_options['menu']['description'] = 'Shows the usage of terms across the database';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Statistics';
  $handler->display->display_options['tab_options']['description'] = 'Statistics of what is in the Devtrac database';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['devtrac_admin_taxonomy'] = $view;

  $view = new view();
  $view->name = 'district_check';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->base_field = 'tid';
  $view->human_name = 'District Check';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'District Check';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'field_data_field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'centroid',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_6' => 'vocabulary_6',
  );
  /* Filter criterion: Taxonomy term: Geo (field_district_geo:lat) */
  $handler->display->display_options['filters']['field_district_geo_lat']['id'] = 'field_district_geo_lat';
  $handler->display->display_options['filters']['field_district_geo_lat']['table'] = 'field_data_field_district_geo';
  $handler->display->display_options['filters']['field_district_geo_lat']['field'] = 'field_district_geo_lat';
  $handler->display->display_options['filters']['field_district_geo_lat']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_district_geo_lat']['expose']['operator_id'] = 'field_district_geo_lat_op';
  $handler->display->display_options['filters']['field_district_geo_lat']['expose']['label'] = 'Geo (field_district_geo:lat)';
  $handler->display->display_options['filters']['field_district_geo_lat']['expose']['operator'] = 'field_district_geo_lat_op';
  $handler->display->display_options['filters']['field_district_geo_lat']['expose']['identifier'] = 'field_district_geo_lat';

  /* Display: District Check */
  $handler = $view->new_display('page', 'District Check', 'page');
  $handler->display->display_options['display_description'] = 'Shows if districts have lat+lon';
  $handler->display->display_options['path'] = 'admin/devtrac7/district-check';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Check District';
  $handler->display->display_options['menu']['description'] = 'Checks if districts have a valid Geo field';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['district_check'] = $view;

  return $export;
}
