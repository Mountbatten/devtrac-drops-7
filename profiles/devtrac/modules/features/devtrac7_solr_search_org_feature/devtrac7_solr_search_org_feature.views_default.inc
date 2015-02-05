<?php
/**
 * @file
 * devtrac7_solr_search_org_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_solr_search_org_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'devtrac_solr_organisations_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_devtrac_solr_organisation_index';
  $view->human_name = 'Devtrac Solr Organisations view';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'view' => 'view',
    'view_1' => 'view_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
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
  /* Relationship: Relation iati_organisation_role (to node reverse): Admin Units (indexed) */
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_6']['id'] = 'relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_6']['field'] = 'relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_6';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'noresult text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Your search did not return any results. Making your search less specific give you a higher chance of finding what you are looking for.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Organization';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Number of Activities */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Number of Activities';
  $handler->display->display_options['fields']['view']['label'] = 'Number of Activities';
  $handler->display->display_options['fields']['view']['view'] = 'devtrac_organisation';
  $handler->display->display_options['fields']['view']['display'] = 'block_6';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['fields']['view']['query_aggregation'] = 0;
  /* Field: Admin Units */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['ui_name'] = 'Admin Units';
  $handler->display->display_options['fields']['view_1']['label'] = 'Admin Units';
  $handler->display->display_options['fields']['view_1']['view'] = 'devtrac_organisation_map';
  $handler->display->display_options['fields']['view_1']['display'] = 'block_6';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
  $handler->display->display_options['fields']['view_1']['query_aggregation'] = 0;
  /* Field: Indexed Node: Admin Units */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['list']['mode'] = 'count';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Relation iati_organisation_role (to node reverse): Admin Units (indexed) */
  $handler->display->display_options['fields']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_6']['id'] = 'relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_6']['field'] = 'relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_6';
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'iati_organisation' => 'iati_organisation',
  );

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'List of Organisations';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Relation iati_organisation_role (to node reverse): Admin Units (indexed) */
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_6']['id'] = 'relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_6';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['relationships']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_6']['field'] = 'relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_6';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Organisation';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Number of Activities */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Number of Activities';
  $handler->display->display_options['fields']['view']['label'] = 'Number of Activities';
  $handler->display->display_options['fields']['view']['view'] = 'devtrac_organisation';
  $handler->display->display_options['fields']['view']['display'] = 'block_6';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['fields']['view']['query_aggregation'] = 0;
  /* Field: Admin Units */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['ui_name'] = 'Admin Units';
  $handler->display->display_options['fields']['view_1']['label'] = 'Admin Units';
  $handler->display->display_options['fields']['view_1']['view'] = 'devtrac_organisation_map';
  $handler->display->display_options['fields']['view_1']['display'] = 'block_6';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
  $handler->display->display_options['fields']['view_1']['query_aggregation'] = 0;
  /* Field: Relation iati_organisation_role (to node reverse): Sector (indexed) */
  $handler->display->display_options['fields']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_8']['id'] = 'relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_8']['field'] = 'relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_8']['label'] = 'Sector';
  $handler->display->display_options['fields']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_8']['list']['separator'] = ' ';
  $handler->display->display_options['fields']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_8']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_8']['display'] = 'view';
  $handler->display->display_options['fields']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_8']['view_mode'] = 'sector_code_icon';
  $handler->display->display_options['fields']['relation_iati_organisation_role_node_reverse_taxonomy_vocabulary_8']['bypass_access'] = 0;
  $handler->display->display_options['path'] = 'organisations';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Organisations';
  $handler->display->display_options['menu']['description'] = 'Organisations';
  $handler->display->display_options['menu']['weight'] = '-8';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Graphs */
  $handler = $view->new_display('mode', 'Graphs', 'graphs');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '-1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  $handler->display->display_options['displays'] = array(
    'list' => 'list',
  );
  $handler->display->display_options['mode_id'] = 'graphs';
  $handler->display->display_options['mode_name'] = 'Graphs';

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
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Organization';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Organisation Name */
  $handler->display->display_options['fields']['field_organisation_name']['id'] = 'field_organisation_name';
  $handler->display->display_options['fields']['field_organisation_name']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['field_organisation_name']['field'] = 'field_organisation_name';
  $handler->display->display_options['fields']['field_organisation_name']['label'] = 'Organisation Full Name';
  /* Field: Number of Activities */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Number of Activities';
  $handler->display->display_options['fields']['view']['label'] = 'Number of Activities';
  $handler->display->display_options['fields']['view']['view'] = 'devtrac_organisation';
  $handler->display->display_options['fields']['view']['display'] = 'block_6';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['fields']['view']['query_aggregation'] = 0;
  /* Field: Admin Units */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['ui_name'] = 'Admin Units';
  $handler->display->display_options['fields']['view_1']['label'] = 'Admin Units';
  $handler->display->display_options['fields']['view_1']['view'] = 'devtrac_organisation_map';
  $handler->display->display_options['fields']['view_1']['display'] = 'block_6';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
  $handler->display->display_options['fields']['view_1']['query_aggregation'] = 0;
  /* Field: Indexed Node: Default Currency */
  $handler->display->display_options['fields']['field_iati_default_currency']['id'] = 'field_iati_default_currency';
  $handler->display->display_options['fields']['field_iati_default_currency']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['field_iati_default_currency']['field'] = 'field_iati_default_currency';
  /* Field: Indexed Node: Default Language */
  $handler->display->display_options['fields']['field_langauge']['id'] = 'field_langauge';
  $handler->display->display_options['fields']['field_langauge']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['field_langauge']['field'] = 'field_langauge';
  $handler->display->display_options['fields']['field_langauge']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_langauge']['view_mode'] = 'full';
  /* Field: Indexed Node: IATI Identifier */
  $handler->display->display_options['fields']['field_iati_identifier']['id'] = 'field_iati_identifier';
  $handler->display->display_options['fields']['field_iati_identifier']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['field_iati_identifier']['field'] = 'field_iati_identifier';
  /* Field: Indexed Node: Website URL */
  $handler->display->display_options['fields']['field_iati_org_url']['id'] = 'field_iati_org_url';
  $handler->display->display_options['fields']['field_iati_org_url']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['field_iati_org_url']['field'] = 'field_iati_org_url';
  $handler->display->display_options['fields']['field_iati_org_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_iati_org_url']['type'] = 'link_title_plain';
  /* Field: Indexed Node: Description */
  $handler->display->display_options['fields']['field_iati_org_description']['id'] = 'field_iati_org_description';
  $handler->display->display_options['fields']['field_iati_org_description']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['field_iati_org_description']['field'] = 'field_iati_org_description';
  /* Field: Indexed Node: Organisation Type */
  $handler->display->display_options['fields']['field_iati_org_type']['id'] = 'field_iati_org_type';
  $handler->display->display_options['fields']['field_iati_org_type']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['field_iati_org_type']['field'] = 'field_iati_org_type';
  $handler->display->display_options['fields']['field_iati_org_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_iati_org_type']['view_mode'] = 'full';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'organisations/analyse/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
  );

  /* Display: RSS Feed */
  $handler = $view->new_display('feed', 'RSS Feed', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Devtrac |  Details of Organisations';
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
        'title' => 'title',
        'link' => 'nid',
        'description' => 'field_iati_org_description',
        'author' => '',
        'category' => 'field_iati_org_type',
        'comments' => '',
        'enclosure' => '',
        'guid' => '',
        'pubDate' => 'created',
      ),
    ),
    'dc' => array(
      'views_rss_dc' => array(
        'title' => 'title',
        'creator' => '',
        'subject' => 'field_iati_org_type',
        'description' => 'field_iati_org_description',
        'publisher' => '',
        'contributor' => '',
        'date' => 'created',
        'type' => 'field_iati_org_type',
        'format' => '',
        'identifier' => 'field_iati_identifier',
        'source' => 'field_iati_org_url',
        'language' => 'field_langauge',
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node URL';
  $handler->display->display_options['fields']['nid']['alter']['path'] = '/node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 1;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Organization';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Number of Activities */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Number of Activities';
  $handler->display->display_options['fields']['view']['label'] = 'Number of Activities';
  $handler->display->display_options['fields']['view']['view'] = 'devtrac_organisation';
  $handler->display->display_options['fields']['view']['display'] = 'block_6';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['fields']['view']['query_aggregation'] = 0;
  /* Field: Admin Units */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['ui_name'] = 'Admin Units';
  $handler->display->display_options['fields']['view_1']['label'] = 'Admin Units';
  $handler->display->display_options['fields']['view_1']['view'] = 'devtrac_organisation_map';
  $handler->display->display_options['fields']['view_1']['display'] = 'block_6';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
  $handler->display->display_options['fields']['view_1']['query_aggregation'] = 0;
  /* Field: Indexed Node: Admin Units */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['list']['mode'] = 'count';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Node: Default Currency */
  $handler->display->display_options['fields']['field_iati_default_currency']['id'] = 'field_iati_default_currency';
  $handler->display->display_options['fields']['field_iati_default_currency']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['field_iati_default_currency']['field'] = 'field_iati_default_currency';
  /* Field: Indexed Node: Default Language */
  $handler->display->display_options['fields']['field_langauge']['id'] = 'field_langauge';
  $handler->display->display_options['fields']['field_langauge']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['field_langauge']['field'] = 'field_langauge';
  $handler->display->display_options['fields']['field_langauge']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_langauge']['view_mode'] = 'full';
  /* Field: Indexed Node: Description */
  $handler->display->display_options['fields']['field_iati_org_description']['id'] = 'field_iati_org_description';
  $handler->display->display_options['fields']['field_iati_org_description']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['field_iati_org_description']['field'] = 'field_iati_org_description';
  /* Field: Indexed Node: IATI Identifier */
  $handler->display->display_options['fields']['field_iati_identifier']['id'] = 'field_iati_identifier';
  $handler->display->display_options['fields']['field_iati_identifier']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['field_iati_identifier']['field'] = 'field_iati_identifier';
  /* Field: Indexed Node: Organisation Logo */
  $handler->display->display_options['fields']['field_org_logo']['id'] = 'field_org_logo';
  $handler->display->display_options['fields']['field_org_logo']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['field_org_logo']['field'] = 'field_org_logo';
  $handler->display->display_options['fields']['field_org_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_org_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Indexed Node: Organisation Name */
  $handler->display->display_options['fields']['field_organisation_name']['id'] = 'field_organisation_name';
  $handler->display->display_options['fields']['field_organisation_name']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['field_organisation_name']['field'] = 'field_organisation_name';
  /* Field: Indexed Node: Organisation Type */
  $handler->display->display_options['fields']['field_iati_org_type']['id'] = 'field_iati_org_type';
  $handler->display->display_options['fields']['field_iati_org_type']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['field_iati_org_type']['field'] = 'field_iati_org_type';
  $handler->display->display_options['fields']['field_iati_org_type']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_iati_org_type']['view_mode'] = 'full';
  /* Field: Indexed Node: Website URL */
  $handler->display->display_options['fields']['field_iati_org_url']['id'] = 'field_iati_org_url';
  $handler->display->display_options['fields']['field_iati_org_url']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['field_iati_org_url']['field'] = 'field_iati_org_url';
  $handler->display->display_options['fields']['field_iati_org_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_iati_org_url']['type'] = 'link_url';
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_devtrac_solr_organisation_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Post Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'organisations/analyse/rss';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $handler->display->display_options['sitename_title'] = 0;
  $export['devtrac_solr_organisations_view'] = $view;

  return $export;
}
