<?php
/**
 * @file
 * devtrac_frontpage_sitereports_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac_frontpage_sitereports_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'devtrac_frontpage_sitereports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'devtrac_frontpage_sitereports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'charts';
  $handler->display->display_options['style_options']['width'] = '100%';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['type'] = array(
    'bluff' => 'line',
    'flot' => 'pie',
  );
  $handler->display->display_options['style_options']['showlegend'] = 0;
  $handler->display->display_options['style_options']['zoom'] = 0;
  $handler->display->display_options['style_options']['views_charts_series_fields'] = array(
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['views_charts_x_labels'] = 'type';
  $handler->display->display_options['style_options']['engine'] = 'flot';
  $handler->display->display_options['style_options']['y_min'] = '';
  $handler->display->display_options['style_options']['y_legend'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="node-title">Project Reports</h2>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="view-more-statistics" href="statistics">view more statistics</a>';
  $handler->display->display_options['footer']['area']['format'] = '2';
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
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
    'place' => 'place',
    'questionnaire_question' => 'questionnaire_question',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'graphpage');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Our mission is to show how world aid resources are distributed among supported in underdeveloped regions in the world';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'frontpage-organisation-slogan';
  $handler->display->display_options['path'] = 'frontpage-sitereports';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'reports graph';
  $export['devtrac_frontpage_sitereports'] = $view;

  $view = new view();
  $view->name = 'frontpage_recent_sitereports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_devtrac_solr_site_visits_index';
  $view->human_name = 'Frontpage Recent Sitereports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Reports';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'frontpage-recent-report';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Images */
  $handler->display->display_options['fields']['field_ftritem_images']['id'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['table'] = 'search_api_index_devtrac_solr_site_visits_index';
  $handler->display->display_options['fields']['field_ftritem_images']['field'] = 'field_ftritem_images';
  $handler->display->display_options['fields']['field_ftritem_images']['label'] = '';
  $handler->display->display_options['fields']['field_ftritem_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ftritem_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ftritem_images']['settings'] = array(
    'sizes' => '100pvW',
    'image_styles' => array(
      'media_thumbnail' => 'media_thumbnail',
      'apps_logo' => 0,
      'apps_logo_small' => 0,
      'apps_screenshot' => 0,
      'apps_featured_screenshot' => 0,
      'devtrac_oecd_icons_bw' => 0,
      'devtrac_oecd_icons_bw_small' => 0,
      'devtrac_oecd_icons_color' => 0,
      'devtrac_oecd_icons_color_small' => 0,
      'grid' => 0,
      'image_export' => 0,
      'map-pop-image' => 0,
      'slideshow_thumbnail' => 0,
      'user_profile_img' => 0,
      'gallery' => 0,
      'gallery_popup_images' => 0,
      'map_icon' => 0,
      'map_icon_bw' => 0,
      'print_thumbnail' => 0,
      'user_comment_img' => 0,
      'thumbnail' => 0,
      'medium' => 0,
      'large' => 0,
      '_empty image_' => 0,
      '_original image_' => 0,
    ),
    'fallback_image_style' => 'apps_logo',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ftritem_images']['delta_offset'] = '0';

  /* Display: Frontpage Recent Reports */
  $handler = $view->new_display('block', 'Frontpage Recent Reports', 'block');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Recent Reports</h2>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  $handler->display->display_options['block_description'] = 'Recent Reports';
  $export['frontpage_recent_sitereports'] = $view;

  $view = new view();
  $view->name = 'frontpage_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Frontpage Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: File: Upload date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );

  /* Display: Frontpage Slideshow */
  $handler = $view->new_display('block', 'Frontpage Slideshow', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'flexslider_default_thumbnail_slider';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: Rendered */
  $handler->display->display_options['fields']['rendered']['id'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['label'] = '';
  $handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered']['file_view_mode'] = 'teaser';
  $export['frontpage_slideshow'] = $view;

  return $export;
}
