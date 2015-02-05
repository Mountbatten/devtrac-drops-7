<?php
/**
 * @file
 * devtrac7_solr_search_district_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_solr_search_district_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'devtrac_solr_view_districts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_devtrac_solr_district_index';
  $view->human_name = 'devtrac_solr_view_districts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'List of all districts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
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
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'No.';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Indexed Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['link_to_entity'] = 1;
  /* Field: Indexed Taxonomy term: Tags */
  $handler->display->display_options['fields']['field_district_category']['id'] = 'field_district_category';
  $handler->display->display_options['fields']['field_district_category']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['field_district_category']['field'] = 'field_district_category';
  $handler->display->display_options['fields']['field_district_category']['label'] = 'Category';
  $handler->display->display_options['fields']['field_district_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_district_category']['view_mode'] = 'full';
  /* Field: Indexed Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'centroid',
  );
  /* Contextual filter: Custom: Bounding box */
  $handler->display->display_options['arguments']['bbox_argument']['id'] = 'bbox_argument';
  $handler->display->display_options['arguments']['bbox_argument']['table'] = 'views';
  $handler->display->display_options['arguments']['bbox_argument']['field'] = 'bbox_argument';
  $handler->display->display_options['arguments']['bbox_argument']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['bbox_argument']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['bbox_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['bbox_argument']['summary_options']['items_per_page'] = '25';

  /* Display: Map */
  $handler = $view->new_display('page', 'Map', 'map');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'districts_main_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'adminunits';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Districts';
  $handler->display->display_options['menu']['description'] = 'Districts.';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: List */
  $handler = $view->new_display('mode', 'List', 'list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'List of districts';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['link_to_entity'] = 1;
  /* Field: Indexed Taxonomy term: Tags */
  $handler->display->display_options['fields']['field_district_category']['id'] = 'field_district_category';
  $handler->display->display_options['fields']['field_district_category']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['field_district_category']['field'] = 'field_district_category';
  $handler->display->display_options['fields']['field_district_category']['label'] = 'Category';
  $handler->display->display_options['fields']['field_district_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_district_category']['view_mode'] = 'full';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'map' => 'map',
  );
  $handler->display->display_options['mode_id'] = 'list';
  $handler->display->display_options['mode_name'] = 'list';

  /* Display: Graphs */
  $handler = $view->new_display('mode', 'Graphs', 'graphs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '-1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'map' => 'map',
    'json' => 0,
  );
  $handler->display->display_options['mode_id'] = 'graphs';
  $handler->display->display_options['mode_name'] = 'graphs';

  /* Display: Districts MainMap D.Overlay */
  $handler = $view->new_display('openlayers', 'Districts MainMap D.Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Districts MainMap';
  $handler->display->display_options['display_description'] = 'District main Map in the main menu';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '-1';
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
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['link_to_entity'] = 1;
  /* Field: Indexed Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'centroid',
  );

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'views_data_export_1');
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
  /* Field: Indexed Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['link_to_entity'] = 1;
  /* Field: Indexed Taxonomy term: Tags */
  $handler->display->display_options['fields']['field_district_category']['id'] = 'field_district_category';
  $handler->display->display_options['fields']['field_district_category']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['field_district_category']['field'] = 'field_district_category';
  $handler->display->display_options['fields']['field_district_category']['label'] = 'Category';
  $handler->display->display_options['fields']['field_district_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_district_category']['view_mode'] = 'full';
  /* Field: Indexed Taxonomy term: Description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['link_to_entity'] = 0;
  /* Field: Indexed Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['label'] = 'Geo Information';
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'centroid',
  );
  /* Field: Indexed Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo_1']['id'] = 'field_district_geo_1';
  $handler->display->display_options['fields']['field_district_geo_1']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['field_district_geo_1']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo_1']['label'] = 'Latitude';
  $handler->display->display_options['fields']['field_district_geo_1']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo_1']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_district_geo_1']['settings'] = array(
    'data' => 'centroid',
    'format' => 'decimal_degrees',
  );
  /* Field: Indexed Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo_2']['id'] = 'field_district_geo_2';
  $handler->display->display_options['fields']['field_district_geo_2']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['field_district_geo_2']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo_2']['label'] = 'Longtitude';
  $handler->display->display_options['fields']['field_district_geo_2']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo_2']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_district_geo_2']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Indexed Taxonomy term: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'adminunits/analyse/csv';
  $handler->display->display_options['displays'] = array(
    'map' => 'map',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['return_path'] = 'adminunits';
  $handler->display->display_options['segment_size'] = '100';

  /* Display: RSS Feed */
  $handler = $view->new_display('feed', 'RSS Feed', 'feed_2');
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
        'title' => 'name',
        'link' => 'name',
        'description' => 'description',
        'author' => '',
        'category' => 'field_district_category',
        'comments' => '',
        'enclosure' => '',
        'guid' => '',
        'pubDate' => '',
      ),
    ),
    'dc' => array(
      'views_rss_dc' => array(
        'title' => 'name',
        'creator' => '',
        'subject' => 'field_district_category',
        'description' => 'description',
        'publisher' => '',
        'contributor' => '',
        'date' => '',
        'type' => 'field_district_category',
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
        'point' => 'field_district_geo',
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
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'No.';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Indexed Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['link_to_entity'] = 1;
  /* Field: Indexed Taxonomy term: Tags */
  $handler->display->display_options['fields']['field_district_category']['id'] = 'field_district_category';
  $handler->display->display_options['fields']['field_district_category']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['field_district_category']['field'] = 'field_district_category';
  $handler->display->display_options['fields']['field_district_category']['label'] = 'Category';
  $handler->display->display_options['fields']['field_district_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_district_category']['view_mode'] = 'full';
  /* Field: Indexed Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['label'] = 'Geo Data';
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  /* Field: Indexed Taxonomy term: Description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'adminunits/analyse/rss';
  $handler->display->display_options['displays'] = array(
    'map' => 'map',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: KML */
  $handler = $view->new_display('feed', 'KML', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'KML';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'kml_feed';
  $handler->display->display_options['style_options']['fields']['name'] = 'name';
  $handler->display->display_options['style_options']['fields']['description'] = 'field_district_category';
  $handler->display->display_options['style_options']['fields']['longitude'] = 'field_district_geo';
  $handler->display->display_options['style_options']['fields']['latitude'] = 'field_district_geo_1';
  $handler->display->display_options['style_options']['feed_in_links'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'No.';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Indexed Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['link_to_entity'] = 1;
  /* Field: Indexed Taxonomy term: Tags */
  $handler->display->display_options['fields']['field_district_category']['id'] = 'field_district_category';
  $handler->display->display_options['fields']['field_district_category']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['field_district_category']['field'] = 'field_district_category';
  $handler->display->display_options['fields']['field_district_category']['label'] = 'Category';
  $handler->display->display_options['fields']['field_district_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_district_category']['view_mode'] = 'full';
  /* Field: Indexed Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['label'] = 'Lon';
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Indexed Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo_1']['id'] = 'field_district_geo_1';
  $handler->display->display_options['fields']['field_district_geo_1']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['field_district_geo_1']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo_1']['label'] = 'lat';
  $handler->display->display_options['fields']['field_district_geo_1']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_district_geo_1']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_district_geo_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Geo: Well-known text (indexed) */
  $handler->display->display_options['filters']['field_district_geo_geom']['id'] = 'field_district_geo_geom';
  $handler->display->display_options['filters']['field_district_geo_geom']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['filters']['field_district_geo_geom']['field'] = 'field_district_geo_geom';
  $handler->display->display_options['filters']['field_district_geo_geom']['value'] = 'POLYGON';
  $handler->display->display_options['path'] = 'adminunits/analyse/kml';
  $handler->display->display_options['displays'] = array(
    'map' => 'map',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Json Feed */
  $handler = $view->new_display('page', 'Json Feed', 'json');
  $handler->display->display_options['display_description'] = 'On the district search page.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_geojson';
  $handler->display->display_options['style_options']['data_source']['value'] = 'wkt';
  $handler->display->display_options['style_options']['data_source']['latitude'] = 'field_district_geo';
  $handler->display->display_options['style_options']['data_source']['longitude'] = 'field_district_geo_1';
  $handler->display->display_options['style_options']['data_source']['geofield'] = 'field_district_geo';
  $handler->display->display_options['style_options']['data_source']['wkt'] = 'field_district_geo_2';
  $handler->display->display_options['style_options']['data_source']['name_field'] = 'name_1';
  $handler->display->display_options['style_options']['data_source']['description_field'] = 'rendered_entity';
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: District name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['ui_name'] = 'District name';
  $handler->display->display_options['fields']['name']['link_to_entity'] = 1;
  /* Field: Latitude */
  $handler->display->display_options['fields']['field_district_geo']['id'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['field_district_geo']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo']['ui_name'] = 'Latitude';
  $handler->display->display_options['fields']['field_district_geo']['label'] = 'Lat';
  $handler->display->display_options['fields']['field_district_geo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_district_geo']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_district_geo']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_district_geo']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Longitude */
  $handler->display->display_options['fields']['field_district_geo_1']['id'] = 'field_district_geo_1';
  $handler->display->display_options['fields']['field_district_geo_1']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['field_district_geo_1']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo_1']['ui_name'] = 'Longitude';
  $handler->display->display_options['fields']['field_district_geo_1']['label'] = 'Lon';
  $handler->display->display_options['fields']['field_district_geo_1']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_district_geo_1']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_district_geo_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Pop up view mode */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_taxonomy_term';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['ui_name'] = 'Pop up view mode';
  $handler->display->display_options['fields']['rendered_entity']['label'] = 'View Mode';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'map_popup_view_mode';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Indexed Taxonomy term: Geo */
  $handler->display->display_options['fields']['field_district_geo_2']['id'] = 'field_district_geo_2';
  $handler->display->display_options['fields']['field_district_geo_2']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['field_district_geo_2']['field'] = 'field_district_geo';
  $handler->display->display_options['fields']['field_district_geo_2']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_district_geo_2']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Indexed Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Taxonomy term: Term ID */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Geo: Well-known text (indexed) */
  $handler->display->display_options['filters']['field_district_geo_geom']['id'] = 'field_district_geo_geom';
  $handler->display->display_options['filters']['field_district_geo_geom']['table'] = 'search_api_index_devtrac_solr_district_index';
  $handler->display->display_options['filters']['field_district_geo_geom']['field'] = 'field_district_geo_geom';
  $handler->display->display_options['filters']['field_district_geo_geom']['value'] = 'POLYGON';
  $handler->display->display_options['path'] = 'adminunits/json';
  $export['devtrac_solr_view_districts'] = $view;

  return $export;
}
