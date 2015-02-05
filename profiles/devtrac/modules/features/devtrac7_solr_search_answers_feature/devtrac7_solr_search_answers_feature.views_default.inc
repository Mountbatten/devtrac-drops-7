<?php
/**
 * @file
 * devtrac7_solr_search_answers_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_solr_search_answers_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'devtrac_solr_view_answers';
  $view->description = '';
  $view->tag = 'solr';
  $view->base_table = 'search_api_index_answers';
  $view->human_name = 'devtrac_solr_view_answers';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Answer: Answer ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Indexed Answer: Answer All */
  $handler->display->display_options['fields']['answer']['id'] = 'answer';
  $handler->display->display_options['fields']['answer']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['answer']['field'] = 'answer';
  /* Field: Indexed Answer: Question */
  $handler->display->display_options['fields']['question']['id'] = 'question';
  $handler->display->display_options['fields']['question']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['question']['field'] = 'question';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'entity_node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'questionnaire_answer_context';
  $handler->display->display_options['fields']['title']['label'] = 'Location';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;

  /* Display: List Mode */
  $handler = $view->new_display('mode', 'List Mode', 'list');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'answer' => 'answer',
    'question' => 'question',
    'title' => 'title',
    'title_1' => 'title_1',
    'name' => 'name',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'answer' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'question' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View (Views field view) */
  $handler->display->display_options['header']['view_field']['id'] = 'view_field';
  $handler->display->display_options['header']['view_field']['table'] = 'views';
  $handler->display->display_options['header']['view_field']['field'] = 'view_field';
  $handler->display->display_options['header']['view_field']['label'] = '';
  $handler->display->display_options['header']['view_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['header']['view_field']['view'] = 'devtrac_solr_view_answers';
  $handler->display->display_options['header']['view_field']['display'] = 'block_1';
  $handler->display->display_options['header']['view_field']['arguments'] = '[!question]';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Answer: Questionnaire */
  $handler->display->display_options['relationships']['questionnaire_id']['id'] = 'questionnaire_id';
  $handler->display->display_options['relationships']['questionnaire_id']['table'] = 'search_api_index_answers';
  $handler->display->display_options['relationships']['questionnaire_id']['field'] = 'questionnaire_id';
  /* Relationship: Node: Location */
  $handler->display->display_options['relationships']['field_ftritem_place']['id'] = 'field_ftritem_place';
  $handler->display->display_options['relationships']['field_ftritem_place']['table'] = 'entity_node';
  $handler->display->display_options['relationships']['field_ftritem_place']['field'] = 'field_ftritem_place';
  $handler->display->display_options['relationships']['field_ftritem_place']['relationship'] = 'questionnaire_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Answer: Answer All */
  $handler->display->display_options['fields']['answer']['id'] = 'answer';
  $handler->display->display_options['fields']['answer']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['answer']['field'] = 'answer';
  $handler->display->display_options['fields']['answer']['label'] = 'Answer';
  $handler->display->display_options['fields']['answer']['link_to_entity'] = 0;
  /* Field: Node: Location */
  $handler->display->display_options['fields']['field_ftritem_place']['id'] = 'field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_ftritem_place']['field'] = 'field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['relationship'] = 'questionnaire_id';
  $handler->display->display_options['fields']['field_ftritem_place']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_ftritem_place']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_ftritem_place']['bypass_access'] = 0;
  /* Field: Indexed Answer: Questionnaire */
  $handler->display->display_options['fields']['questionnaire_id']['id'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['questionnaire_id']['field'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id']['label'] = 'Site Visit';
  $handler->display->display_options['fields']['questionnaire_id']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['questionnaire_id']['view_mode'] = 'full';
  $handler->display->display_options['fields']['questionnaire_id']['bypass_access'] = 0;
  /* Field: Indexed Answer: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  /* Field: Indexed Answer: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Answer: Question */
  $handler->display->display_options['fields']['question']['id'] = 'question';
  $handler->display->display_options['fields']['question']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['question']['field'] = 'question';
  $handler->display->display_options['fields']['question']['label'] = 'Question ID';
  $handler->display->display_options['fields']['question']['exclude'] = TRUE;
  $handler->display->display_options['fields']['question']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['question']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Answer: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_answers';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['displays'] = array(
    'graphs' => 'graphs',
  );
  $handler->display->display_options['mode_id'] = 'list';
  $handler->display->display_options['mode_name'] = 'List';

  /* Display: Answer Graphs */
  $handler = $view->new_display('page', 'Answer Graphs', 'graphs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Shows the Question on the Answer Graphs page';
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Answer: Question */
  $handler->display->display_options['fields']['question']['id'] = 'question';
  $handler->display->display_options['fields']['question']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['question']['field'] = 'question';
  $handler->display->display_options['fields']['question']['label'] = '';
  $handler->display->display_options['fields']['question']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['question']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['question']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['question']['view_mode'] = 'full';
  $handler->display->display_options['fields']['question']['bypass_access'] = 0;
  $handler->display->display_options['path'] = 'statistics/answers';

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
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Answer: Answer ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Indexed Answer: Answer All */
  $handler->display->display_options['fields']['answer']['id'] = 'answer';
  $handler->display->display_options['fields']['answer']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['answer']['field'] = 'answer';
  $handler->display->display_options['fields']['answer']['label'] = 'Answer';
  $handler->display->display_options['fields']['answer']['link_to_entity'] = 0;
  /* Field: Indexed Answer: Questionnaire */
  $handler->display->display_options['fields']['questionnaire_id']['id'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['questionnaire_id']['field'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id']['label'] = 'Site report';
  $handler->display->display_options['fields']['questionnaire_id']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['questionnaire_id']['view_mode'] = 'full';
  $handler->display->display_options['fields']['questionnaire_id']['bypass_access'] = 0;
  /* Field: Indexed Answer: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = 'Location Placetype';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['bypass_access'] = 0;
  /* Field: Indexed Answer: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Answer: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'date_only';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Answer: Question */
  $handler->display->display_options['fields']['question']['id'] = 'question';
  $handler->display->display_options['fields']['question']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['question']['field'] = 'question';
  $handler->display->display_options['fields']['question']['exclude'] = TRUE;
  $handler->display->display_options['fields']['question']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'statistics/analyse/csv';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'graphs' => 'graphs',
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['segment_size'] = '100';

  /* Display: KML */
  $handler = $view->new_display('feed', 'KML', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'KML';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'kml_feed';
  $handler->display->display_options['style_options']['fields']['name'] = 'answer';
  $handler->display->display_options['style_options']['fields']['description'] = 'title';
  $handler->display->display_options['style_options']['fields']['longitude'] = 'field_place_lat_long_lon';
  $handler->display->display_options['style_options']['fields']['latitude'] = 'field_place_lat_long_lat';
  $handler->display->display_options['style_options']['feed_in_links'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Answer: Answer ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Indexed Answer: Answer All */
  $handler->display->display_options['fields']['answer']['id'] = 'answer';
  $handler->display->display_options['fields']['answer']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['answer']['field'] = 'answer';
  /* Field: Indexed Answer: Question */
  $handler->display->display_options['fields']['question']['id'] = 'question';
  $handler->display->display_options['fields']['question']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['question']['field'] = 'question';
  $handler->display->display_options['path'] = 'statistics/analyse/kml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'graphs' => 'graphs',
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: RSS Feed */
  $handler = $view->new_display('feed', 'RSS Feed', 'feed_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'RSS';
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
        'title' => 'answer',
        'link' => '',
        'description' => 'question',
        'author' => '',
        'category' => 'taxonomy_vocabulary_1',
        'comments' => '',
        'enclosure' => '',
        'guid' => '',
        'pubDate' => 'created',
      ),
    ),
    'dc' => array(
      'views_rss_dc' => array(
        'title' => 'answer',
        'creator' => '',
        'subject' => 'taxonomy_vocabulary_1',
        'description' => 'question',
        'publisher' => '',
        'contributor' => '',
        'date' => 'created',
        'type' => 'taxonomy_vocabulary_1',
        'format' => '',
        'identifier' => 'id',
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
        'featureName' => 'questionnaire_answer_context',
        'featureTypeTag' => '',
        'relationshipTag' => 'taxonomy_vocabulary_1',
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Answer: Questionnaire */
  $handler->display->display_options['relationships']['questionnaire_id']['id'] = 'questionnaire_id';
  $handler->display->display_options['relationships']['questionnaire_id']['table'] = 'search_api_index_answers';
  $handler->display->display_options['relationships']['questionnaire_id']['field'] = 'questionnaire_id';
  /* Relationship: Node: Location */
  $handler->display->display_options['relationships']['field_ftritem_place']['id'] = 'field_ftritem_place';
  $handler->display->display_options['relationships']['field_ftritem_place']['table'] = 'entity_node';
  $handler->display->display_options['relationships']['field_ftritem_place']['field'] = 'field_ftritem_place';
  $handler->display->display_options['relationships']['field_ftritem_place']['relationship'] = 'questionnaire_id';
  $handler->display->display_options['relationships']['field_ftritem_place']['label'] = 'Locations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Answer: Answer ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Indexed Answer: Answer All */
  $handler->display->display_options['fields']['answer']['id'] = 'answer';
  $handler->display->display_options['fields']['answer']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['answer']['field'] = 'answer';
  $handler->display->display_options['fields']['answer']['link_to_entity'] = 1;
  /* Field: Indexed Answer: Question */
  $handler->display->display_options['fields']['question']['id'] = 'question';
  $handler->display->display_options['fields']['question']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['question']['field'] = 'question';
  /* Field: Node: Location */
  $handler->display->display_options['fields']['field_ftritem_place']['id'] = 'field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_ftritem_place']['field'] = 'field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['relationship'] = 'questionnaire_id';
  $handler->display->display_options['fields']['field_ftritem_place']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_ftritem_place']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_ftritem_place']['bypass_access'] = 0;
  /* Field: Indexed Answer: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['bypass_access'] = 0;
  /* Field: Indexed Answer: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'date_only';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Node: Lat-Long */
  $handler->display->display_options['fields']['field_place_lat_long']['id'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_place_lat_long']['field'] = 'field_place_lat_long';
  $handler->display->display_options['fields']['field_place_lat_long']['relationship'] = 'questionnaire_id';
  $handler->display->display_options['fields']['field_place_lat_long']['label'] = 'Lat-lon';
  $handler->display->display_options['fields']['field_place_lat_long']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_place_lat_long']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_place_lat_long']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  /* Field: Indexed Answer: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = 'Location Placetype';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['bypass_access'] = 0;
  $handler->display->display_options['path'] = 'statistics/analyse/rss';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'graphs' => 'graphs',
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Question listview */
  $handler = $view->new_display('block', 'Question listview', 'block_1');
  $handler->display->display_options['display_description'] = 'This is the actual question that shows on the statistics list page.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Answer: Question */
  $handler->display->display_options['fields']['question_1']['id'] = 'question_1';
  $handler->display->display_options['fields']['question_1']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['question_1']['field'] = 'question';
  $handler->display->display_options['fields']['question_1']['label'] = '';
  $handler->display->display_options['fields']['question_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['question_1']['element_class'] = 'views-field views-field-questionnaire-answer-question';
  $handler->display->display_options['fields']['question_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['question_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['question_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['question_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['question_1']['bypass_access'] = 0;
  /* Field: Indexed Answer: Question */
  $handler->display->display_options['fields']['question']['id'] = 'question';
  $handler->display->display_options['fields']['question']['table'] = 'search_api_index_answers';
  $handler->display->display_options['fields']['question']['field'] = 'question';
  $handler->display->display_options['fields']['question']['label'] = 'Question ID';
  $handler->display->display_options['fields']['question']['exclude'] = TRUE;
  $handler->display->display_options['fields']['question']['link_to_entity'] = 0;
  $export['devtrac_solr_view_answers'] = $view;

  return $export;
}
