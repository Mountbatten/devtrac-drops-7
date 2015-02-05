<?php
/**
 * @file
 * devtrac7_taxonomy_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_taxonomy_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'district';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'District';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_place_contact_info' => 'field_place_contact_info',
    'field_place_website' => 'field_place_website',
    'field_place_email' => 'field_place_email',
    'field_place_phone' => 'field_place_phone',
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h5';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'field_data_field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'full',
  );
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'vocabulary_6' => 'vocabulary_6',
  );
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_6' => 'vocabulary_6',
  );

  /* Display: District Profile */
  $handler = $view->new_display('page', 'District Profile', 'page_1');
  $handler->display->display_options['display_description'] = 'District Profile default page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'district_profile_view_mode';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h5';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'field_data_field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'centroid',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: District Name */
  $handler = $view->new_display('block', 'District Name', 'block');
  $handler->display->display_options['display_description'] = 'Name of the district that shows up in the highlighted region';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h1';
  $handler->display->display_options['fields']['name']['element_class'] = 'page-title';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
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

  /* Display: District map */
  $handler = $view->new_display('block', 'District map', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'districts_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'field_data_field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['label'] = '';
  $handler->display->display_options['fields']['field_district_geo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo']['type'] = 'geofield_openlayers';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'map_preset' => 'geofield_formatter_map',
    'data' => 'centroid',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Numbers 2010 */
  $handler = $view->new_display('block', 'Numbers 2010', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Numbers 2010';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'District Project status is still under active development';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
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

  /* Display: Latest FieldTrip */
  $handler = $view->new_display('block', 'Latest FieldTrip', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest FieldTrip';
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
    'field_place_contact_info' => 'field_place_contact_info',
    'field_place_website' => 'field_place_website',
    'field_place_email' => 'field_place_email',
    'field_place_phone' => 'field_place_phone',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using Admin Unit */
  $handler->display->display_options['relationships']['reverse_taxonomy_vocabulary_6_node']['id'] = 'reverse_taxonomy_vocabulary_6_node';
  $handler->display->display_options['relationships']['reverse_taxonomy_vocabulary_6_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_taxonomy_vocabulary_6_node']['field'] = 'reverse_taxonomy_vocabulary_6_node';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_taxonomy_vocabulary_6_node';
  $handler->display->display_options['fields']['title']['label'] = 'FieldTrip';
  /* Field: Content: Public Summary */
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['id'] = 'field_fieldtrip_public_summary';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['table'] = 'field_data_field_fieldtrip_public_summary';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['field'] = 'field_fieldtrip_public_summary';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['relationship'] = 'reverse_taxonomy_vocabulary_6_node';
  /* Field: Content: Locations */
  $handler->display->display_options['fields']['field_fieldtrip_places']['id'] = 'field_fieldtrip_places';
  $handler->display->display_options['fields']['field_fieldtrip_places']['table'] = 'field_data_field_fieldtrip_places';
  $handler->display->display_options['fields']['field_fieldtrip_places']['field'] = 'field_fieldtrip_places';
  $handler->display->display_options['fields']['field_fieldtrip_places']['relationship'] = 'reverse_taxonomy_vocabulary_6_node';
  $handler->display->display_options['fields']['field_fieldtrip_places']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_fieldtrip_places']['delta_offset'] = '0';
  /* Field: Content: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['id'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['table'] = 'field_data_field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['relationship'] = 'reverse_taxonomy_vocabulary_6_node';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'reverse_taxonomy_vocabulary_6_node';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_6' => 'vocabulary_6',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_taxonomy_vocabulary_6_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fieldtrip' => 'fieldtrip',
  );

  /* Display: Latest ActionItem */
  $handler = $view->new_display('block', 'Latest ActionItem', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest ActionItem';
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
    'field_actionitem_status' => 'field_actionitem_status',
    'field_actionitem_due_date' => 'field_actionitem_due_date',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No ActionItems with this district yet
';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using Admin Unit */
  $handler->display->display_options['relationships']['reverse_taxonomy_vocabulary_6_node']['id'] = 'reverse_taxonomy_vocabulary_6_node';
  $handler->display->display_options['relationships']['reverse_taxonomy_vocabulary_6_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_taxonomy_vocabulary_6_node']['field'] = 'reverse_taxonomy_vocabulary_6_node';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_taxonomy_vocabulary_6_node';
  $handler->display->display_options['fields']['title']['label'] = 'ActionItem';
  /* Field: Content: Follow-up Task */
  $handler->display->display_options['fields']['field_actionitem_followuptask']['id'] = 'field_actionitem_followuptask';
  $handler->display->display_options['fields']['field_actionitem_followuptask']['table'] = 'field_data_field_actionitem_followuptask';
  $handler->display->display_options['fields']['field_actionitem_followuptask']['field'] = 'field_actionitem_followuptask';
  $handler->display->display_options['fields']['field_actionitem_followuptask']['relationship'] = 'reverse_taxonomy_vocabulary_6_node';
  $handler->display->display_options['fields']['field_actionitem_followuptask']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_actionitem_followuptask']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_actionitem_followuptask']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_actionitem_followuptask']['alter']['trim'] = TRUE;
  /* Field: Field: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['relationship'] = 'reverse_taxonomy_vocabulary_6_node';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['delta_offset'] = '0';
  /* Field: Field: Status */
  $handler->display->display_options['fields']['field_actionitem_status']['id'] = 'field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['table'] = 'field_data_field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['field'] = 'field_actionitem_status';
  $handler->display->display_options['fields']['field_actionitem_status']['relationship'] = 'reverse_taxonomy_vocabulary_6_node';
  /* Field: Content: Due Date */
  $handler->display->display_options['fields']['field_actionitem_due_date']['id'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['table'] = 'field_data_field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['field'] = 'field_actionitem_due_date';
  $handler->display->display_options['fields']['field_actionitem_due_date']['relationship'] = 'reverse_taxonomy_vocabulary_6_node';
  $handler->display->display_options['fields']['field_actionitem_due_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'reverse_taxonomy_vocabulary_6_node';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_6' => 'vocabulary_6',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_taxonomy_vocabulary_6_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'actionitem' => 'actionitem',
  );

  /* Display: Child terms */
  $handler = $view->new_display('block', 'Child terms', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Districts';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = ' ,  ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
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

  /* Display: District outline */
  $handler = $view->new_display('openlayers', 'District outline', 'openlayers_1');
  $handler->display->display_options['display_description'] = 'District outline on District page';
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
    'description_field' => 'description',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_place_contact_info' => 'field_place_contact_info',
    'field_place_website' => 'field_place_website',
    'field_place_email' => 'field_place_email',
    'field_place_phone' => 'field_place_phone',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h5';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'field_data_field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $export['district'] = $view;

  return $export;
}
