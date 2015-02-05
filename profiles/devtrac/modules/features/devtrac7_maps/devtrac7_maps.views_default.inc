<?php
/**
 * @file
 * devtrac7_maps.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_maps_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'devtrac_zoom_distict_edit_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'devtrac_zoom_distict_edit_pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Add Location District Zoom Map';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Field: Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'field_data_field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_district_geo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_district_geo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_district_geo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_district_geo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_district_geo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_district_geo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_district_geo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_district_geo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_district_geo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_district_geo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_district_geo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_district_geo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_district_geo']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_district_geo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_district_geo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_district_geo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_district_geo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'bounding',
  );
  $handler->display->display_options['fields']['field_district_geo']['field_api_classes'] = 0;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_6' => 'vocabulary_6',
  );

  /* Display: Zoom to District on Add Location page */
  $handler = $view->new_display('openlayers', 'Zoom to District on Add location page', 'openlayers_1');
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $export['devtrac_zoom_distict_edit_pages'] = $view;

  $view = new view;
  $view->name = 'site_reports';
  $view->description = 'All Maps with Site Reports on them';
  $view->tag = 'Site Report, Map';
  $view->base_table = 'node';
  $view->human_name = 'Site Report Maps';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Site Reports';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'title',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'body',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ftritem_place_target_id']['id'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['relationships']['field_ftritem_place_target_id']['table'] = 'field_data_field_ftritem_place';
  $handler->display->display_options['relationships']['field_ftritem_place_target_id']['field'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['relationships']['field_ftritem_place_target_id']['required'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Sort criterion: Content: Date Visited (field_ftritem_date_visited) */
  $handler->display->display_options['sorts']['field_ftritem_date_visited_value']['id'] = 'field_ftritem_date_visited_value';
  $handler->display->display_options['sorts']['field_ftritem_date_visited_value']['table'] = 'field_data_field_ftritem_date_visited';
  $handler->display->display_options['sorts']['field_ftritem_date_visited_value']['field'] = 'field_ftritem_date_visited_value';
  $handler->display->display_options['sorts']['field_ftritem_date_visited_value']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['relationship'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'vocabulary_1' => 'vocabulary_1',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['relationship'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ftritem' => 'ftritem',
  );
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';

  /* Display: Recent Site Reports Map */
  $handler = $view->new_display('page', 'Recent Site Reports Map', 'recent_site_reports_map');
  $handler->display->display_options['display_description'] = 'Most recent Site Reports on a map';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'site_reports';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'homepage';

  /* Display: Recent Site Reports Data */
  $handler = $view->new_display('openlayers', 'Recent Site Reports Data', 'recent_site_reports_data');
  $handler->display->display_options['display_description'] = 'Most recent Site Reports Data';
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
    'name_field' => 'title_1',
    'description_field' => 'field_ftritem_public_summary',
  );
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
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date Visited */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'field_data_field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field_api_classes'] = 0;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['relationship'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'Icon';
  $handler->display->display_options['fields']['term_node_tid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['term_node_tid']['alter']['text'] = '/profiles/devtrac/themes/devtrac7_theme/icons/[term_node_tid-name]_c.png';
  $handler->display->display_options['fields']['term_node_tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['term_node_tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['term_node_tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['term_node_tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['term_node_tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = 1;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'vocabulary_1' => 'vocabulary_1',
    'vocabulary_4' => 0,
    'vocabulary_6' => 0,
    'vocabulary_5' => 0,
    'vocabulary_2' => 0,
    'vocabulary_8' => 0,
    'vocabulary_9' => 0,
    'vocabulary_7' => 0,
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_ftritem_images']['id'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['table'] = 'field_data_field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ftritem_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ftritem_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ftritem_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ftritem_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ftritem_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ftritem_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ftritem_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ftritem_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ftritem_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ftritem_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ftritem_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ftritem_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ftritem_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ftritem_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ftritem_images']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ftritem_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ftritem_images']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ftritem_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ftritem_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ftritem_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ftritem_images']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Location';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Field: Content: Lat-Long */
  $handler->display->display_options['fields']['field_place_lat_long']['id'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['table'] = 'field_data_field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['field'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['relationship'] = 'field_ftritem_place_target_id';
  $handler->display->display_options['fields']['field_place_lat_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_place_lat_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_place_lat_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_place_lat_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_place_lat_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_place_lat_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_place_lat_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_place_lat_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_place_lat_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_place_lat_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_place_lat_long']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_place_lat_long']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_place_lat_long']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_place_lat_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_place_lat_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_place_lat_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_place_lat_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_place_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_place_lat_long']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_place_lat_long']['field_api_classes'] = 0;
  /* Field: Content: Public Summary */
  $handler->display->display_options['fields']['field_ftritem_public_summary']['id'] = 'field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['table'] = 'field_data_field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['field'] = 'field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['label'] = 'Summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_ftritem_public_summary']['alter']['text'] = '[field_ftritem_images]
<p>[title] ([field_ftritem_date_visited])<br />[field_ftritem_public_summary]</p>';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ftritem_public_summary']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ftritem_public_summary']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ftritem_public_summary']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ftritem_public_summary']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ftritem_public_summary']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ftritem_public_summary']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ftritem_public_summary']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ftritem_public_summary']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ftritem_public_summary']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ftritem_public_summary']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ftritem_public_summary']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ftritem_public_summary']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ftritem_public_summary']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ftritem_public_summary']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ftritem_public_summary']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_ftritem_public_summary']['field_api_classes'] = 0;
  $export['site_reports'] = $view;

  return $export;
}
