<?php
/**
 * @file
 * devtrac7_solr_search_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_solr_search_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'devtrac_solr_view_sitevisits';
  $view->description = '';
  $view->tag = 'solr';
  $view->base_table = 'search_api_index_devtrac_solr_site_visits_index';
  $view->human_name = 'devtrac_solr_view_sitevisits';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'map';
  $handler->display->display_options['access']['type'] = 'perm';
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
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Site Report Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['id'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['field'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['view_mode'] = 'full';
  /* Field: Indexed Node: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Node: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['view_mode'] = 'full';
  /* Field: Indexed Node: Author */
  $handler->display->display_options['fields']['author']['id'] = 'author';
  $handler->display->display_options['fields']['author']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['author']['field'] = 'author';
  $handler->display->display_options['fields']['author']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['author']['view_mode'] = 'full';
  /* Field: Indexed Node: Visited on */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['link_to_entity'] = 1;
  /* Sort criterion: Indexed Node: Visited on */
  $handler->display->display_options['sorts']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['sorts']['field_ftritem_date_visited']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['sorts']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['sorts']['field_ftritem_date_visited']['order'] = 'DESC';

  /* Display: Map */
  $handler = $view->new_display('page', 'Map', 'map');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '-1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'devtrac_solr_sitevisits_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'sitereports';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Site Reports';
  $handler->display->display_options['menu']['description'] = 'Shows reports of Devtrac reporters from the field';
  $handler->display->display_options['menu']['weight'] = '-10';
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
    'title' => 'title',
    'taxonomy_vocabulary_7' => 'taxonomy_vocabulary_7',
    'taxonomy_vocabulary_8' => 'taxonomy_vocabulary_8',
    'taxonomy_vocabulary_6' => 'taxonomy_vocabulary_6',
    'author' => 'author',
    'field_ftritem_date_visited' => 'field_ftritem_date_visited',
    'virtual_field' => 'virtual_field',
  );
  $handler->display->display_options['style_options']['default'] = 'field_ftritem_date_visited';
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
    'taxonomy_vocabulary_8' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_6' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
      'taxonomy_vocabulary_7' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'taxonomy_vocabulary_8' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'taxonomy_vocabulary_6' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'author' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'field_ftritem_date_visited' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'virtual_field' => array(
        'phone' => 'phone',
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
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Site Report Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['id'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['field'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['view_mode'] = 'full';
  /* Field: Indexed Node: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['list']['separator'] = ' ';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['display'] = 'view';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['view_mode'] = 'sector_code_icon';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['bypass_access'] = 0;
  /* Field: Indexed Node: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Node: Author */
  $handler->display->display_options['fields']['author']['id'] = 'author';
  $handler->display->display_options['fields']['author']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['author']['field'] = 'author';
  $handler->display->display_options['fields']['author']['label'] = 'User';
  $handler->display->display_options['fields']['author']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['author']['view_mode'] = 'full';
  /* Field: Indexed Node: Visited on */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = '';
  $handler->display->display_options['fields']['virtual_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  /* Field: Global: Site information */
  $handler->display->display_options['fields']['site_info']['id'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['table'] = 'views';
  $handler->display->display_options['fields']['site_info']['field'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['site_info']['site_info'] = 'base_url';
  $handler->display->display_options['displays'] = array(
    'map' => 'map',
  );
  $handler->display->display_options['mode_id'] = 'list';
  $handler->display->display_options['mode_name'] = 'List';

  /* Display: Graphs */
  $handler = $view->new_display('mode', 'Graphs', 'graphs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Dummy Placeholder for the Graphs';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  $handler->display->display_options['displays'] = array(
    'map' => 'map',
  );
  $handler->display->display_options['mode_id'] = 'graphs';
  $handler->display->display_options['mode_name'] = 'Graphs';

  /* Display: Tagcloud */
  $handler = $view->new_display('mode', 'Tagcloud', 'tagcloud');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_comment'] = 'This view is supposed to be empty. With this view being empty, the content-first area is then filled with the tagcloud block from the facetapi.';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    1 => '1',
    2 => '2',
  );
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
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  $handler->display->display_options['displays'] = array(
    'map' => 'map',
  );
  $handler->display->display_options['mode_id'] = 'tagcloud';
  $handler->display->display_options['mode_name'] = 'Tag Cloud';

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'csv');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CSV';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Site Report Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['id'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['field'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['view_mode'] = 'full';
  /* Field: Indexed Node: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['label'] = 'District';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Node: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['view_mode'] = 'full';
  /* Field: Indexed Node: Visited on */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'export_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Report: Text (indexed) */
  $handler->display->display_options['fields']['field_ftritem_public_summary_value']['id'] = 'field_ftritem_public_summary_value';
  $handler->display->display_options['fields']['field_ftritem_public_summary_value']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_public_summary_value']['field'] = 'field_ftritem_public_summary_value';
  $handler->display->display_options['fields']['field_ftritem_public_summary_value']['label'] = 'Summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_public_summary_value']['link_to_entity'] = 0;
  /* Field: Sitevisit UUID URL */
  $handler->display->display_options['fields']['site_info']['id'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['table'] = 'views';
  $handler->display->display_options['fields']['site_info']['field'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['ui_name'] = 'Sitevisit UUID URL';
  $handler->display->display_options['fields']['site_info']['label'] = 'URL';
  $handler->display->display_options['fields']['site_info']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['site_info']['alter']['text'] = '[site_info]/uuid/node/[uuid]';
  $handler->display->display_options['fields']['site_info']['site_info'] = 'base_url';
  /* Field: Location: UUID (indexed) */
  $handler->display->display_options['fields']['field_ftritem_place_uuid']['id'] = 'field_ftritem_place_uuid';
  $handler->display->display_options['fields']['field_ftritem_place_uuid']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_place_uuid']['field'] = 'field_ftritem_place_uuid';
  $handler->display->display_options['fields']['field_ftritem_place_uuid']['label'] = 'Location UUID';
  $handler->display->display_options['fields']['field_ftritem_place_uuid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_place_uuid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Lat-Long */
  $handler->display->display_options['fields']['field_ftritem_lat_long']['id'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['field'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['label'] = 'Site Visit Lat';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Indexed Node: Lat-Long */
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['id'] = 'field_ftritem_lat_long_1';
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['field'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['label'] = 'Site Visit Lon';
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Indexed Node: Location */
  $handler->display->display_options['fields']['field_ftritem_place']['id'] = 'field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_place']['field'] = 'field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['label'] = 'Location Name';
  $handler->display->display_options['fields']['field_ftritem_place']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_ftritem_place']['view_mode'] = 'full';
  /* Field: Indexed Node: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['bypass_access'] = 0;
  /* Field: Global: Site information */
  $handler->display->display_options['fields']['site_info_1']['id'] = 'site_info_1';
  $handler->display->display_options['fields']['site_info_1']['table'] = 'views';
  $handler->display->display_options['fields']['site_info_1']['field'] = 'site_info';
  $handler->display->display_options['fields']['site_info_1']['label'] = 'Location URL';
  $handler->display->display_options['fields']['site_info_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['site_info_1']['alter']['text'] = '[site_info]/uuid/node/[field_ftritem_place_uuid]';
  $handler->display->display_options['fields']['site_info_1']['site_info'] = 'base_url';
  $handler->display->display_options['path'] = 'sitereports/analyse/csv';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'map' => 'map',
    'json' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['return_path'] = '<front>';
  $handler->display->display_options['segment_size'] = '100';

  /* Display: KML */
  $handler = $view->new_display('feed', 'KML', 'kml');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'KML';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'kml_feed';
  $handler->display->display_options['style_options']['fields']['name'] = 'title';
  $handler->display->display_options['style_options']['fields']['description'] = 'field_ftritem_public_summary';
  $handler->display->display_options['style_options']['fields']['longitude'] = 'field_ftritem_lat_long_lon';
  $handler->display->display_options['style_options']['fields']['latitude'] = 'field_ftritem_lat_long_lat';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Site Report Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['id'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['field'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['view_mode'] = 'full';
  /* Field: Indexed Node: Report */
  $handler->display->display_options['fields']['field_ftritem_public_summary']['id'] = 'field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['field'] = 'field_ftritem_public_summary';
  /* Field: Lat-Long: Longitude (indexed) */
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['id'] = 'field_ftritem_lat_long_lon';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['field'] = 'field_ftritem_lat_long_lon';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['precision'] = '0';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['separator'] = '';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['link_to_entity'] = 0;
  /* Field: Lat-Long: Latitude (indexed) */
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['id'] = 'field_ftritem_lat_long_lat';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['field'] = 'field_ftritem_lat_long_lat';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['precision'] = '0';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['separator'] = '';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lat']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ftritem' => 'ftritem',
  );
  /* Filter criterion: Lat-Long: Well-known text (indexed) */
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['id'] = 'field_ftritem_lat_long_geom';
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['field'] = 'field_ftritem_lat_long_geom';
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['value'] = 'POINT';
  $handler->display->display_options['path'] = 'sitereports/analyse/kml';
  $handler->display->display_options['displays'] = array(
    'map' => 'map',
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
    1 => '1',
    2 => '2',
  );
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
        'link' => 'site_info',
        'description' => 'field_ftritem_public_summary',
        'author' => 'author',
        'category' => 'taxonomy_vocabulary_8',
        'comments' => '',
        'enclosure' => '',
        'guid' => 'uuid',
        'pubDate' => 'created',
      ),
    ),
    'dc' => array(
      'views_rss_dc' => array(
        'title' => 'title',
        'creator' => 'author',
        'subject' => 'taxonomy_vocabulary_8',
        'description' => 'field_ftritem_public_summary',
        'publisher' => 'site_info_1',
        'contributor' => '',
        'date' => 'created',
        'type' => '',
        'format' => '',
        'identifier' => 'uuid',
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
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Site Report Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['id'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['field'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['view_mode'] = 'full';
  /* Field: Indexed Node: Report */
  $handler->display->display_options['fields']['field_ftritem_public_summary']['id'] = 'field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['field'] = 'field_ftritem_public_summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary']['alter']['strip_tags'] = TRUE;
  /* Field: Indexed Node: Lat-Long */
  $handler->display->display_options['fields']['field_ftritem_lat_long']['id'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['field'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['label'] = 'Lat-Long Latitude';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Lat-Long: Longitude (indexed) */
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['id'] = 'field_ftritem_lat_long_lon';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['field'] = 'field_ftritem_lat_long_lon';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['label'] = 'Lat + Lon Combined';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['alter']['text'] = '[field_ftritem_lat_long] [field_ftritem_lat_long_lon] ';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['precision'] = '0';
  $handler->display->display_options['fields']['field_ftritem_lat_long_lon']['link_to_entity'] = 0;
  /* Field: Indexed Node: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['view_mode'] = 'full';
  /* Field: Indexed Node: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Node: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['label'] = 'OECD and District';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['alter']['text'] = '[taxonomy_vocabulary_6], [taxonomy_vocabulary_8]';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['view_mode'] = 'full';
  /* Field: Indexed Node: Author */
  $handler->display->display_options['fields']['author']['id'] = 'author';
  $handler->display->display_options['fields']['author']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['author']['field'] = 'author';
  $handler->display->display_options['fields']['author']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['author']['view_mode'] = 'full';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'http://www.devtrac.ug/node/[nid]';
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uuid']['link_to_entity'] = 0;
  /* Field: Global: Site information */
  $handler->display->display_options['fields']['site_info']['id'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['table'] = 'views';
  $handler->display->display_options['fields']['site_info']['field'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['label'] = 'URL';
  $handler->display->display_options['fields']['site_info']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['site_info']['alter']['text'] = '[site_info]/uuid/node/[uuid]';
  $handler->display->display_options['fields']['site_info']['site_info'] = 'base_url';
  /* Field: Site Name (Used as Publisher) */
  $handler->display->display_options['fields']['site_info_1']['id'] = 'site_info_1';
  $handler->display->display_options['fields']['site_info_1']['table'] = 'views';
  $handler->display->display_options['fields']['site_info_1']['field'] = 'site_info';
  $handler->display->display_options['fields']['site_info_1']['ui_name'] = 'Site Name (Used as Publisher)';
  $handler->display->display_options['fields']['site_info_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'sitereports/analyse/feed';
  $handler->display->display_options['displays'] = array(
    'map' => 'map',
    'default' => 0,
  );

  /* Display: Solr Sitevisits OL Data Overlay */
  $handler = $view->new_display('openlayers', 'Solr Sitevisits OL Data Overlay', 'mapdata');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '-1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_ftritem_lat_long',
    'projection' => 'EPSG:4326',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Lat-Long */
  $handler->display->display_options['fields']['field_ftritem_lat_long']['id'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['field'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_lat_long']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['settings'] = array(
    'data' => 'centroid',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Lat-Long: Well-known text (indexed) */
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['id'] = 'field_ftritem_lat_long_geom';
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['field'] = 'field_ftritem_lat_long_geom';
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['value'] = 'POINT';

  /* Display: JSON Feed */
  $handler = $view->new_display('page', 'JSON Feed', 'json');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_geojson';
  $handler->display->display_options['style_options']['data_source']['value'] = 'latlon';
  $handler->display->display_options['style_options']['data_source']['latitude'] = 'field_ftritem_lat_long';
  $handler->display->display_options['style_options']['data_source']['longitude'] = 'field_ftritem_lat_long_1';
  $handler->display->display_options['style_options']['data_source']['geofield'] = 'field_ftritem_lat_long';
  $handler->display->display_options['style_options']['data_source']['wkt'] = 'title';
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
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['view_mode'] = 'full';
  /* Field: Indexed Node: Lat-Long */
  $handler->display->display_options['fields']['field_ftritem_lat_long']['id'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['field'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['label'] = 'Lat';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Indexed Node: Lat-Long */
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['id'] = 'field_ftritem_lat_long_1';
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['field'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['label'] = 'Long';
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'map_popup_view_mode';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Custom: Bounding box */
  $handler->display->display_options['arguments']['bbox_argument']['id'] = 'bbox_argument';
  $handler->display->display_options['arguments']['bbox_argument']['table'] = 'views';
  $handler->display->display_options['arguments']['bbox_argument']['field'] = 'bbox_argument';
  $handler->display->display_options['arguments']['bbox_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['bbox_argument']['default_argument_type'] = 'querystring';
  $handler->display->display_options['arguments']['bbox_argument']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['bbox_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['bbox_argument']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Lat-Long: Well-known text (indexed) */
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['id'] = 'field_ftritem_lat_long_geom';
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['field'] = 'field_ftritem_lat_long_geom';
  $handler->display->display_options['filters']['field_ftritem_lat_long_geom']['value'] = 'POINT';
  $handler->display->display_options['path'] = 'sitereports/json';

  /* Display: CSV Admin */
  $handler = $view->new_display('views_data_export', 'CSV Admin', 'csv_admin');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CSV Admin';
  $handler->display->display_options['display_description'] = 'Exports all available fields so they can be imported into the next Devtrac instance';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Site Report Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['id'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['field'] = 'taxonomy_vocabulary_7';
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_7']['view_mode'] = 'full';
  /* Field: Indexed Node: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['label'] = 'District';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Node: Sector */
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['id'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['field'] = 'taxonomy_vocabulary_8';
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_8']['view_mode'] = 'full';
  /* Field: Indexed Node: Visited on */
  $handler->display->display_options['fields']['field_ftritem_date_visited']['id'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['field'] = 'field_ftritem_date_visited';
  $handler->display->display_options['fields']['field_ftritem_date_visited']['settings'] = array(
    'format_type' => 'export_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Report: Text (indexed) */
  $handler->display->display_options['fields']['field_ftritem_public_summary_value']['id'] = 'field_ftritem_public_summary_value';
  $handler->display->display_options['fields']['field_ftritem_public_summary_value']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_public_summary_value']['field'] = 'field_ftritem_public_summary_value';
  $handler->display->display_options['fields']['field_ftritem_public_summary_value']['label'] = 'Summary';
  $handler->display->display_options['fields']['field_ftritem_public_summary_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_public_summary_value']['link_to_entity'] = 0;
  /* Field: Sitevisit UUID URL */
  $handler->display->display_options['fields']['site_info']['id'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['table'] = 'views';
  $handler->display->display_options['fields']['site_info']['field'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['ui_name'] = 'Sitevisit UUID URL';
  $handler->display->display_options['fields']['site_info']['label'] = 'URL';
  $handler->display->display_options['fields']['site_info']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['site_info']['alter']['text'] = '[site_info]/uuid/node/[uuid]';
  $handler->display->display_options['fields']['site_info']['site_info'] = 'base_url';
  /* Field: Location: UUID (indexed) */
  $handler->display->display_options['fields']['field_ftritem_place_uuid']['id'] = 'field_ftritem_place_uuid';
  $handler->display->display_options['fields']['field_ftritem_place_uuid']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_place_uuid']['field'] = 'field_ftritem_place_uuid';
  $handler->display->display_options['fields']['field_ftritem_place_uuid']['label'] = 'Location UUID';
  $handler->display->display_options['fields']['field_ftritem_place_uuid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_place_uuid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Lat-Long */
  $handler->display->display_options['fields']['field_ftritem_lat_long']['id'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['field'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['label'] = 'Site Visit Lat';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_ftritem_lat_long']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Indexed Node: Lat-Long */
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['id'] = 'field_ftritem_lat_long_1';
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['field'] = 'field_ftritem_lat_long';
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['label'] = 'Site Visit Lon';
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_ftritem_lat_long_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Indexed Node: Location */
  $handler->display->display_options['fields']['field_ftritem_place']['id'] = 'field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_place']['field'] = 'field_ftritem_place';
  $handler->display->display_options['fields']['field_ftritem_place']['label'] = 'Location Name';
  $handler->display->display_options['fields']['field_ftritem_place']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_ftritem_place']['view_mode'] = 'full';
  /* Field: Indexed Node: Location Type */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['bypass_access'] = 0;
  /* Field: Global: Site information */
  $handler->display->display_options['fields']['site_info_1']['id'] = 'site_info_1';
  $handler->display->display_options['fields']['site_info_1']['table'] = 'views';
  $handler->display->display_options['fields']['site_info_1']['field'] = 'site_info';
  $handler->display->display_options['fields']['site_info_1']['label'] = 'Location URL';
  $handler->display->display_options['fields']['site_info_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['site_info_1']['alter']['text'] = '[site_info_1]/uuid/node/[field_ftritem_place_uuid]';
  $handler->display->display_options['fields']['site_info_1']['site_info'] = 'base_url';
  /* Field: Indexed Node: Notes */
  $handler->display->display_options['fields']['field_ftritem_narrative']['id'] = 'field_ftritem_narrative';
  $handler->display->display_options['fields']['field_ftritem_narrative']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_narrative']['field'] = 'field_ftritem_narrative';
  $handler->display->display_options['fields']['field_ftritem_narrative']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_narrative']['type'] = 'services';
  $handler->display->display_options['fields']['field_ftritem_narrative']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Field Trip: UUID (indexed) */
  $handler->display->display_options['fields']['field_ftritem_field_trip_uuid']['id'] = 'field_ftritem_field_trip_uuid';
  $handler->display->display_options['fields']['field_ftritem_field_trip_uuid']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_field_trip_uuid']['field'] = 'field_ftritem_field_trip_uuid';
  $handler->display->display_options['fields']['field_ftritem_field_trip_uuid']['label'] = 'Field Trip UUID';
  $handler->display->display_options['fields']['field_ftritem_field_trip_uuid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_field_trip_uuid']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'sitereports/analyse/csvadmin';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'map' => 'map',
    'json' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['return_path'] = '<front>';
  $handler->display->display_options['segment_size'] = '100';
  $export['devtrac_solr_view_sitevisits'] = $view;

  return $export;
}
