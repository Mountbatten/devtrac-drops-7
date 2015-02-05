<?php
/**
 * @file
 * devtrac7_solr_search_location_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_solr_search_location_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'devtrac_solr_view_locations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_devtrac_solr_locations_index';
  $view->human_name = 'devtrac_solr_view_locations';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'taxonomy_vocabulary_6' => 'taxonomy_vocabulary_6',
    'field_place_lat_long' => 'field_place_lat_long',
    'taxonomy_vocabulary_1' => 'taxonomy_vocabulary_1',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_6' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_place_lat_long' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
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
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Node: Lat-Long */
  $handler->display->display_options['fields']['field_place_lat_long']['id'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['field_place_lat_long']['field'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_place_lat_long']['settings'] = array(
    'data' => 'centroid',
  );
  /* Field: Indexed Node: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['view_mode'] = 'full';
  /* Contextual filter: Custom: Bounding box */
  $handler->display->display_options['arguments']['bbox_argument']['id'] = 'bbox_argument';
  $handler->display->display_options['arguments']['bbox_argument']['table'] = 'views';
  $handler->display->display_options['arguments']['bbox_argument']['field'] = 'bbox_argument';
  $handler->display->display_options['arguments']['bbox_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['bbox_argument']['default_argument_type'] = 'querystring';
  $handler->display->display_options['arguments']['bbox_argument']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['bbox_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['bbox_argument']['summary_options']['items_per_page'] = '25';

  /* Display: Map */
  $handler = $view->new_display('page', 'Map', 'map');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Locations Main map';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '-1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'devtrac_solr_locations_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'locations';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Locations';
  $handler->display->display_options['menu']['description'] = 'Main link for the locations map (Main)';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: List */
  $handler = $view->new_display('mode', 'List', 'list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'title' => 'title',
    'taxonomy_vocabulary_1' => 'taxonomy_vocabulary_1',
    'taxonomy_vocabulary_6' => 'taxonomy_vocabulary_6',
    'nid' => 'nid',
    'field_place_lat_long' => 'field_place_lat_long',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_6' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_place_lat_long' => array(
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
      'title' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'taxonomy_vocabulary_1' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'taxonomy_vocabulary_6' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'nid' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_place_lat_long' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = 'Location';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['bypass_access'] = 0;
  /* Field: Indexed Node: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = '';
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  $handler->display->display_options['displays'] = array(
    'map' => 'map',
    'json' => 0,
  );
  $handler->display->display_options['mode_id'] = 'list';
  $handler->display->display_options['mode_name'] = 'List';

  /* Display: Graphs */
  $handler = $view->new_display('mode', 'Graphs', 'graphs');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '-1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  $handler->display->display_options['displays'] = array(
    'map' => 'map',
    'json' => 0,
  );
  $handler->display->display_options['mode_id'] = 'graphs';
  $handler->display->display_options['mode_name'] = 'graphs';

  /* Display: Devtrac Solr Locations Data Overlay */
  $handler = $view->new_display('openlayers', 'Devtrac Solr Locations Data Overlay', 'overlay');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Openlayers Data Overlay for the locations map';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '-1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_place_lat_long',
    'other_lon' => 'field_place_lat_long',
    'wkt' => 'field_place_lat_long',
    'other_top' => 'nid',
    'other_right' => 'nid',
    'other_bottom' => 'nid',
    'other_left' => 'nid',
    'name_field' => 'title',
    'description_field' => 'rendered_entity',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Lat-Long */
  $handler->display->display_options['fields']['field_place_lat_long']['id'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['field_place_lat_long']['field'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_place_lat_long']['settings'] = array(
    'data' => 'full',
  );

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
  /* Field: Indexed Node: UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uuid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Node: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['view_mode'] = 'full';
  /* Field: Indexed Node: Lat-Long */
  $handler->display->display_options['fields']['field_place_lat_long']['id'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['field_place_lat_long']['field'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['label'] = 'Lat';
  $handler->display->display_options['fields']['field_place_lat_long']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_place_lat_long']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_place_lat_long']['settings'] = array(
    'data' => 'centroid',
    'format' => 'decimal_degrees',
  );
  /* Field: Indexed Node: Lat-Long */
  $handler->display->display_options['fields']['field_place_lat_long_1']['id'] = 'field_place_lat_long_1';
  $handler->display->display_options['fields']['field_place_lat_long_1']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['field_place_lat_long_1']['field'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long_1']['label'] = 'Lon';
  $handler->display->display_options['fields']['field_place_lat_long_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_place_lat_long_1']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_place_lat_long_1']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_place_lat_long_1']['settings'] = array(
    'data' => 'centroid',
    'format' => 'decimal_degrees',
  );
  $handler->display->display_options['path'] = 'locations/analyse/csv';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'map' => 'map',
    'json' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';

  /* Display: RSS Feed */
  $handler = $view->new_display('feed', 'RSS Feed', 'rss');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'RSS';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
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
        'description' => 'taxonomy_vocabulary_6',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => '',
        'guid' => '',
        'pubDate' => '',
      ),
    ),
    'dc' => array(
      'views_rss_dc' => array(
        'title' => 'title',
        'creator' => 'title',
        'subject' => 'taxonomy_vocabulary_1',
        'description' => 'taxonomy_vocabulary_6',
        'publisher' => '',
        'contributor' => '',
        'date' => '',
        'type' => 'taxonomy_vocabulary_1',
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
        'point' => 'field_place_lat_long',
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Node: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['view_mode'] = 'full';
  /* Field: Indexed Node: Lat-Long */
  $handler->display->display_options['fields']['field_place_lat_long']['id'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['field_place_lat_long']['field'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['label'] = 'Geo Data';
  $handler->display->display_options['fields']['field_place_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_place_lat_long']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_place_lat_long']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  $handler->display->display_options['path'] = 'locations/analyse/rss';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'map' => 'map',
    'json' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: KML */
  $handler = $view->new_display('feed', 'KML', 'kml');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'KML';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'kml_feed';
  $handler->display->display_options['style_options']['fields']['name'] = 'title';
  $handler->display->display_options['style_options']['fields']['description'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['style_options']['fields']['longitude'] = 'field_place_lat_long_1';
  $handler->display->display_options['style_options']['fields']['latitude'] = 'field_place_lat_long';
  $handler->display->display_options['style_options']['feed_in_links'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Node: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['view_mode'] = 'full';
  /* Field: Indexed Node: Lat-Long */
  $handler->display->display_options['fields']['field_place_lat_long']['id'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['field_place_lat_long']['field'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['label'] = 'Latitude';
  $handler->display->display_options['fields']['field_place_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_place_lat_long']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_place_lat_long']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Indexed Node: Lat-Long */
  $handler->display->display_options['fields']['field_place_lat_long_1']['id'] = 'field_place_lat_long_1';
  $handler->display->display_options['fields']['field_place_lat_long_1']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['field_place_lat_long_1']['field'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long_1']['label'] = 'Longtitude';
  $handler->display->display_options['fields']['field_place_lat_long_1']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_place_lat_long_1']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_place_lat_long_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Lat-Long: Well-known text (indexed) */
  $handler->display->display_options['filters']['field_place_lat_long_geom']['id'] = 'field_place_lat_long_geom';
  $handler->display->display_options['filters']['field_place_lat_long_geom']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['filters']['field_place_lat_long_geom']['field'] = 'field_place_lat_long_geom';
  $handler->display->display_options['filters']['field_place_lat_long_geom']['value'] = 'POINT';
  $handler->display->display_options['path'] = 'locations/analyse/kml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'map' => 'map',
    'json' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: JSON Feed */
  $handler = $view->new_display('page', 'JSON Feed', 'json');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_geojson';
  $handler->display->display_options['style_options']['data_source']['value'] = 'wkt';
  $handler->display->display_options['style_options']['data_source']['latitude'] = 'field_place_lat_long_lat';
  $handler->display->display_options['style_options']['data_source']['longitude'] = 'field_place_lat_long_lon';
  $handler->display->display_options['style_options']['data_source']['geofield'] = 'field_place_lat_long';
  $handler->display->display_options['style_options']['data_source']['wkt'] = 'field_place_lat_long_geom';
  $handler->display->display_options['style_options']['data_source']['name_field'] = 'title';
  $handler->display->display_options['style_options']['data_source']['description_field'] = 'rendered_entity';
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Node: Location Type */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Location Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Location Title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Lat-Long: Well-known text (indexed) */
  $handler->display->display_options['fields']['field_place_lat_long_geom']['id'] = 'field_place_lat_long_geom';
  $handler->display->display_options['fields']['field_place_lat_long_geom']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['field_place_lat_long_geom']['field'] = 'field_place_lat_long_geom';
  $handler->display->display_options['fields']['field_place_lat_long_geom']['link_to_entity'] = 0;
  /* Field: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['ui_name'] = 'Location Type';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['bypass_access'] = 0;
  /* Field: Pop up view mode */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['ui_name'] = 'Pop up view mode';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'map_popup_view_mode';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['relationship'] = 'taxonomy_vocabulary_1';
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
  $handler->display->display_options['fields']['field_term_icon_1']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_term_icon_1']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon_1']['relationship'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['field_term_icon_1']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_term_icon_1']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'map_icon_bw',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Lat-Long: Latitude (indexed) */
  $handler->display->display_options['filters']['field_place_lat_long_lat']['id'] = 'field_place_lat_long_lat';
  $handler->display->display_options['filters']['field_place_lat_long_lat']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['filters']['field_place_lat_long_lat']['field'] = 'field_place_lat_long_lat';
  $handler->display->display_options['filters']['field_place_lat_long_lat']['operator'] = 'not empty';
  /* Filter criterion: Lat-Long: Longitude (indexed) */
  $handler->display->display_options['filters']['field_place_lat_long_lon']['id'] = 'field_place_lat_long_lon';
  $handler->display->display_options['filters']['field_place_lat_long_lon']['table'] = 'search_api_index_devtrac_solr_locations_index';
  $handler->display->display_options['filters']['field_place_lat_long_lon']['field'] = 'field_place_lat_long_lon';
  $handler->display->display_options['filters']['field_place_lat_long_lon']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'locations/json';
  $export['devtrac_solr_view_locations'] = $view;

  return $export;
}
