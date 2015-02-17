<?php
/**
 * @file
 * devtrac7_solr_search_image_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_solr_search_image_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'devtrac_solr_view_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_devtrac_solr_image_index';
  $view->human_name = 'Devtrac Solr View Images';
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
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: File: Rendered File */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_file';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = 'Image';
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'image_export';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Indexed File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = 'Title';
  /* Field: Indexed File: Districts */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6_1']['id'] = 'taxonomy_vocabulary_6_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6_1']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6_1']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6_1']['bypass_access'] = 0;
  /* Field: Indexed File: Sectors */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['empty'] = 'empty';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['list']['separator'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['display'] = 'view';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['view_mode'] = 'list_view_mode';
  /* Field: Indexed File: Date Visited */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed File: Owner */
  $handler->display->display_options['fields']['owner']['id'] = 'owner';
  $handler->display->display_options['fields']['owner']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['owner']['field'] = 'owner';
  $handler->display->display_options['fields']['owner']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['owner']['view_mode'] = 'full';
  /* Field: Lat-Long: Well-known text (indexed) */
  $handler->display->display_options['fields']['field_ftritem_lat_long_geom']['id'] = 'field_ftritem_lat_long_geom';
  $handler->display->display_options['fields']['field_ftritem_lat_long_geom']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long_geom']['field'] = 'field_ftritem_lat_long_geom';
  /* Sort criterion: Indexed File: Date Visited */
  $handler->display->display_options['sorts']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['sorts']['field_ftritem_date_visited']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['sorts']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['sorts']['field_ftritem_date_visited']['order'] = 'DESC';

  /* Display: Images Map */
  $handler = $view->new_display('page', 'Images Map', 'page_1');
  $handler->display->display_options['display_description'] = 'Map of Images';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '36';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'devtrac_solr_images_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: Rendered File */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_file';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'preview';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Indexed File: Sectors */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['list']['separator'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['view_mode'] = 'full';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['path'] = 'images';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Images';
  $handler->display->display_options['menu']['weight'] = '-45';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: List */
  $handler = $view->new_display('mode', 'List', 'list');
  $handler->display->display_options['display_description'] = 'List mode';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'rendered_entity' => 'rendered_entity',
    'field_file_image_title_text' => 'field_file_image_title_text',
    'taxonomy_vocabulary_6_1' => 'taxonomy_vocabulary_6_1',
    'taxonomy_vocabulary_8' => 'taxonomy_vocabulary_8',
    'field_ftritem_date_visited' => 'field_ftritem_date_visited',
    'owner' => 'owner',
  );
  $handler->display->display_options['style_options']['default'] = 'field_ftritem_date_visited';
  $handler->display->display_options['style_options']['info'] = array(
    'rendered_entity' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_file_image_title_text' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_6_1' => array(
      'align' => '',
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
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'owner' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'expand' => 'rendered_entity',
    'hide' => array(
      'rendered_entity' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_file_image_title_text' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'taxonomy_vocabulary_6_1' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'taxonomy_vocabulary_8' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_ftritem_date_visited' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'owner' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: Rendered File */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_file';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = 'Image';
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  /* Field: Indexed File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = 'Title';
  /* Field: Indexed File: Districts */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6_1']['id'] = 'taxonomy_vocabulary_6_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6_1']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6_1']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6_1']['bypass_access'] = 0;
  /* Field: Indexed File: Sectors */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['empty'] = 'empty';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['list']['separator'] = ' ';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['display'] = 'view';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['view_mode'] = 'sector_code_icon';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['bypass_access'] = 0;
  /* Field: Indexed File: Date Visited */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed File: Owner */
  $handler->display->display_options['fields']['owner']['id'] = 'owner';
  $handler->display->display_options['fields']['owner']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['owner']['field'] = 'owner';
  $handler->display->display_options['fields']['owner']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['owner']['view_mode'] = 'full';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
  );
  $handler->display->display_options['mode_id'] = 'list';
  $handler->display->display_options['mode_name'] = 'list';

  /* Display: Graphs */
  $handler = $view->new_display('mode', 'Graphs', 'graphs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Graphs mode';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'page_2' => 'page_2',
    'json' => 0,
  );
  $handler->display->display_options['mode_id'] = 'graphs';
  $handler->display->display_options['mode_name'] = 'graphs';

  /* Display: Grid */
  $handler = $view->new_display('mode', 'Grid', 'grid');
  $handler->display->display_options['display_description'] = 'Grid mode';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '36';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '5';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = FALSE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="views-masonry-format-row-wrapper">';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: File: Rendered File */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_file';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Field: Indexed File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed File: Date Visited */
  $handler->display->display_options['sorts']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['sorts']['field_ftritem_date_visited']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['sorts']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['sorts']['field_ftritem_date_visited']['order'] = 'DESC';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'page_2' => 0,
    'json' => 0,
  );
  $handler->display->display_options['mode_id'] = 'grid';
  $handler->display->display_options['mode_name'] = 'Grid';

  /* Display: KML */
  $handler = $view->new_display('feed', 'KML', 'feed_klm');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'KML';
  $handler->display->display_options['display_description'] = 'KML feed';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'kml_feed';
  $handler->display->display_options['style_options']['fields']['name'] = 'field_file_image_title_text';
  $handler->display->display_options['style_options']['fields']['description'] = 'rendered_entity';
  $handler->display->display_options['style_options']['fields']['longitude'] = 'field_ftritem_lat_long_lon';
  $handler->display->display_options['style_options']['fields']['latitude'] = 'field_ftritem_lat_long_lat';
  $handler->display->display_options['style_options']['filename'] = 'Images';
  $handler->display->display_options['style_options']['feed_in_links'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: Rendered File */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_file';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = 'Image';
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Indexed File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = 'Title';
  /* Field: Indexed File: File name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'http://devtrac-2.ifrik.org/sites/default/files/styles/medium/public/media/images/330/ajax/[name]';
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  /* Field: Lat-Long: Latitude (indexed) */
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['id'] = 'field_ftritem_lat_long_lat';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['field'] = 'field_ftritem_lat_long_lat';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['label'] = 'Lat-Long » Latitude';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['precision'] = '0';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['separator'] = '';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['link_to_entity'] = 0;
  /* Field: Lat-Long: Longitude (indexed) */
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['id'] = 'field_ftritem_lat_long_lon';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['field'] = 'field_ftritem_lat_long_lon';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['label'] = 'Lat-Long » Longitude';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['precision'] = '0';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['separator'] = '';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Lat-Long: Well-known text (indexed) */
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['id'] = 'field_ftritem_lat_long_geom';
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['field'] = 'field_ftritem_lat_long_geom';
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['value'] = 'POINT';
  $handler->display->display_options['path'] = 'images/analyse/kml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'list' => 'list',
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: RSS Feed */
  $handler = $view->new_display('feed', 'RSS Feed', 'feed_rss');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'RSS Feed';
  $handler->display->display_options['display_description'] = 'RSS feed';
  $handler->display->display_options['pager']['type'] = 'some';
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
        'title' => 'field_file_image_title_text',
        'link' => 'field_file_image_title_text',
        'description' => 'rendered_entity',
        'author' => 'owner',
        'category' => '',
        'comments' => '',
        'enclosure' => '',
        'guid' => '',
        'pubDate' => 'field_ftritem_date_visited',
      ),
    ),
    'dc' => array(
      'views_rss_dc' => array(
        'title' => 'field_file_image_title_text',
        'creator' => 'owner',
        'subject' => '',
        'description' => 'rendered_entity',
        'publisher' => '',
        'contributor' => 'owner',
        'date' => 'field_ftritem_date_visited',
        'type' => '',
        'format' => '',
        'identifier' => '',
        'source' => '',
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
        'polygon' => '',
        'box' => '',
        'circle' => '',
        'featureName' => '',
        'featureTypeTag' => '',
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
  $handler->display->display_options['path'] = 'images/analyse/rss';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'list' => 'list',
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'views_data_export_csv');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CSV';
  $handler->display->display_options['display_description'] = 'CSV Data export';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['feed_in_links'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed File: File name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  /* Field: Indexed File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = 'Title';
  /* Field: Indexed File: Districts */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6_1']['id'] = 'taxonomy_vocabulary_6_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6_1']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6_1']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6_1']['bypass_access'] = 0;
  /* Field: Indexed File: Sectors */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['empty'] = 'empty';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['view_mode'] = 'full';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['bypass_access'] = 0;
  /* Field: Indexed File: Date Visited */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'export_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed File: Owner */
  $handler->display->display_options['fields']['owner']['id'] = 'owner';
  $handler->display->display_options['fields']['owner']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['owner']['field'] = 'owner';
  $handler->display->display_options['fields']['owner']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['owner']['view_mode'] = 'full';
  /* Field: Indexed File: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'images/analyse/csv';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'list' => 'list',
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Grid page */
  $handler = $view->new_display('page', 'Grid page', 'page_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Grid page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '36';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: Rendered File */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_file';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  $handler->display->display_options['path'] = 'images/grid';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Images';
  $handler->display->display_options['menu']['weight'] = '-45';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Images Dummy Data Overlay */
  $handler = $view->new_display('openlayers', 'Images Dummy Data Overlay', 'dummy');
  $handler->display->display_options['display_description'] = 'Dummy layer to make sure the facets get rendered on the map';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '-1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'rendered_entity',
    'other_lon' => 'rendered_entity',
    'wkt' => 'field_ftritem_lat_long_geom',
    'other_top' => 'rendered_entity',
    'other_right' => 'rendered_entity',
    'other_bottom' => 'rendered_entity',
    'other_left' => 'rendered_entity',
    'name_field' => 'field_file_image_title_text',
    'description_field' => 'rendered_entity',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Images GeoJSON */
  $handler = $view->new_display('page', 'Images GeoJSON', 'json');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_geojson';
  $handler->display->display_options['style_options']['data_source']['value'] = 'latlon';
  $handler->display->display_options['style_options']['data_source']['latitude'] = 'field_ftritem_lat_long_lat';
  $handler->display->display_options['style_options']['data_source']['longitude'] = 'field_ftritem_lat_long_lon';
  $handler->display->display_options['style_options']['data_source']['wkt'] = 'rendered_entity';
  $handler->display->display_options['style_options']['data_source']['name_field'] = 'field_file_image_title_text';
  $handler->display->display_options['style_options']['data_source']['description_field'] = 'rendered_entity';
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_title_text']['hide_empty'] = TRUE;
  /* Field: Indexed File: File name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  /* Field: Lat-Long: Latitude (indexed) */
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['id'] = 'field_ftritem_lat_long_lat';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['field'] = 'field_ftritem_lat_long_lat';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['precision'] = '0';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['separator'] = '';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['link_to_entity'] = 0;
  /* Field: Lat-Long: Longitude (indexed) */
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['id'] = 'field_ftritem_lat_long_lon';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['field'] = 'field_ftritem_lat_long_lon';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['precision'] = '0';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['separator'] = '';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['link_to_entity'] = 0;
  /* Field: File: Rendered File */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_file';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = 'Image';
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'image_export';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Lat-Long: Well-known text (indexed) */
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['id'] = 'field_ftritem_lat_long_geom';
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['table'] = 'search_api_index_devtrac_solr_image_index';
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['field'] = 'field_ftritem_lat_long_geom';
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['value'] = 'POINT';
  $handler->display->display_options['path'] = 'images/json';
  $export['devtrac_solr_view_images'] = $view;

  return $export;
}
