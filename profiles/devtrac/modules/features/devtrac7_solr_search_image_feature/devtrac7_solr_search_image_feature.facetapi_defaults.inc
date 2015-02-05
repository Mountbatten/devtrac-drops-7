<?php
/**
 * @file
 * devtrac7_solr_search_image_feature.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function devtrac7_solr_search_image_feature_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index::field_ftritem_date_visited';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = '';
  $facet->facet = 'field_ftritem_date_visited';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '1',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'date_granularity' => 'DAY',
  );
  $export['search_api@devtrac_solr_image_index::field_ftritem_date_visited'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index::field_taxonomy_image_tags';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = '';
  $facet->facet = 'field_taxonomy_image_tags';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '20',
    'dependencies' => array(
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
  );
  $export['search_api@devtrac_solr_image_index::field_taxonomy_image_tags'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index::owner';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = '';
  $facet->facet = 'owner';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '-1',
    'dependencies' => array(
      'roles' => array(
        3 => '3',
        5 => '5',
        2 => '2',
        1 => 0,
        4 => 0,
        6 => 0,
        7 => 0,
      ),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
  );
  $export['search_api@devtrac_solr_image_index::owner'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index::owner:field_user_superior';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = '';
  $facet->facet = 'owner:field_user_superior';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '-1',
    'dependencies' => array(
      'roles' => array(
        3 => '3',
        5 => '5',
        2 => '2',
        1 => 0,
        4 => 0,
        6 => 0,
        7 => 0,
      ),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
  );
  $export['search_api@devtrac_solr_image_index::owner:field_user_superior'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index::search_api_aggregation_1';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = '';
  $facet->facet = 'search_api_aggregation_1';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '5',
    'dependencies' => array(
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'exclude' => 0,
  );
  $export['search_api@devtrac_solr_image_index::search_api_aggregation_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index::taxonomy_vocabulary_1';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = '';
  $facet->facet = 'taxonomy_vocabulary_1';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '-1',
    'dependencies' => array(
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'individual_parent' => 0,
    'limit_active_items' => 0,
    'exclude' => 0,
  );
  $export['search_api@devtrac_solr_image_index::taxonomy_vocabulary_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index::taxonomy_vocabulary_6';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = '';
  $facet->facet = 'taxonomy_vocabulary_6';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        3 => 0,
        1 => 0,
        2 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'audio' => 0,
        'document' => 0,
        'image' => 0,
        'video' => 0,
      ),
      'facets' => array(
        'field_taxonomy_image_tags' => 0,
        'search_api_aggregation_1' => 0,
        'field_ftritem_date_visited' => 0,
        'taxonomy_vocabulary_8' => 0,
        'taxonomy_vocabulary_1' => 0,
        'owner' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_taxonomy_image_tags' => '',
      'facet_items_search_api_aggregation_1' => '',
      'facet_items_field_ftritem_date_visited' => '',
      'facet_items_taxonomy_vocabulary_8' => '',
      'facet_items_taxonomy_vocabulary_1' => '',
      'facet_items_owner' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@devtrac_solr_image_index::taxonomy_vocabulary_6'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index::taxonomy_vocabulary_8';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = '';
  $facet->facet = 'taxonomy_vocabulary_8';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '-1',
    'dependencies' => array(
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@devtrac_solr_image_index::taxonomy_vocabulary_8'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:block:field_file_image_title_text';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'block';
  $facet->facet = 'field_file_image_title_text';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@devtrac_solr_image_index:block:field_file_image_title_text'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:block:field_ftritem_date_visited';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'block';
  $facet->facet = 'field_ftritem_date_visited';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_date_only_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'graphstitle' => '',
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => '',
    'graphsy_max' => '',
    'graphsy_step' => '',
    'graphsy_legend' => '',
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => '',
    'graphsshowlegend' => 1,
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
    'tagcloud_levels' => '6',
    'swatch_field' => '',
    'swatch_imagestyle' => 'devtrac_oecd_icons_bw',
    'swatch_showtext' => 0,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'devtrac_oecd_icons_bw',
    'graphsflot' => 'point',
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@devtrac_solr_image_index:block:field_ftritem_date_visited'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:block:field_taxonomy_image_tags';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'block';
  $facet->facet = 'field_taxonomy_image_tags';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'graphstitle' => '',
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => '',
    'graphsy_max' => '',
    'graphsy_step' => '',
    'graphsy_legend' => '',
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => '',
    'graphsshowlegend' => 1,
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
    'tagcloud_levels' => '6',
    'swatch_field' => '',
    'swatch_imagestyle' => 'devtrac_oecd_icons_bw',
    'swatch_showtext' => 0,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'devtrac_oecd_icons_bw',
    'graphsflot' => 'point',
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@devtrac_solr_image_index:block:field_taxonomy_image_tags'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:block:owner';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'block';
  $facet->facet = 'owner';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'graphstitle' => '',
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => '',
    'graphsy_max' => '',
    'graphsy_step' => '',
    'graphsy_legend' => '',
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => '',
    'graphsshowlegend' => 1,
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
    'tagcloud_levels' => '6',
    'swatch_field' => '',
    'swatch_imagestyle' => 'devtrac_oecd_icons_bw',
    'swatch_showtext' => 0,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'devtrac_oecd_icons_bw',
    'graphsflot' => 'point',
    'empty_text' => array(
      'value' => '<p>There are no Authors</p>
',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@devtrac_solr_image_index:block:owner'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:block:owner:field_user_superior';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'block';
  $facet->facet = 'owner:field_user_superior';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'graphstitle' => '',
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => '',
    'graphsy_max' => '',
    'graphsy_step' => '',
    'graphsy_legend' => '',
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => '',
    'graphsshowlegend' => 1,
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
    'tagcloud_levels' => '6',
    'swatch_field' => '',
    'swatch_imagestyle' => 'devtrac_oecd_icons_bw',
    'swatch_showtext' => 0,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'devtrac_oecd_icons_bw',
    'graphsflot' => 'point',
    'empty_text' => array(
      'value' => '<p>There are no Authors</p>
',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@devtrac_solr_image_index:block:owner:field_user_superior'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:block:search_api_aggregation_1';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'block';
  $facet->facet = 'search_api_aggregation_1';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_textfield_widget',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'text',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'graphstitle' => '',
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => '',
    'graphsy_max' => '',
    'graphsy_step' => '',
    'graphsy_legend' => '',
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => '',
    'graphsshowlegend' => 1,
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
    'tagcloud_levels' => '6',
    'swatch_field' => '',
    'swatch_imagestyle' => 'devtrac_oecd_icons_bw',
    'swatch_showtext' => 0,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'devtrac_oecd_icons_bw',
    'graphsflot' => 'point',
    'empty_text' => array(
      'value' => '<p>Your search query returned no results.</p>
',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
  );
  $export['search_api@devtrac_solr_image_index:block:search_api_aggregation_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:block:search_api_language';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'block';
  $facet->facet = 'search_api_language';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@devtrac_solr_image_index:block:search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:block:search_api_viewed';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'block';
  $facet->facet = 'search_api_viewed';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@devtrac_solr_image_index:block:search_api_viewed'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:block:taxonomy_vocabulary_1';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'block';
  $facet->facet = 'taxonomy_vocabulary_1';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'search_api_swatches',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'graphstitle' => '',
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => '',
    'graphsy_max' => '',
    'graphsy_step' => '',
    'graphsy_legend' => '',
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => '',
    'graphsshowlegend' => 1,
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
    'tagcloud_levels' => '6',
    'swatch_field' => 'field_term_icon',
    'swatch_imagestyle' => 'map_icon_bw',
    'swatch_showtext' => 1,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'map_icon',
    'graphsflot' => 'point',
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
  );
  $export['search_api@devtrac_solr_image_index:block:taxonomy_vocabulary_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:block:taxonomy_vocabulary_6';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'block';
  $facet->facet = 'taxonomy_vocabulary_6';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'exclude_inaccessible_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'rewrite_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-43',
      ),
      'graph_combo_filter' => array(
        'status' => 0,
        'weight' => '-42',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'graphstitle' => '',
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => '',
    'graphsy_max' => '',
    'graphsy_step' => '',
    'graphsy_legend' => '',
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => '',
    'graphsshowlegend' => 1,
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
    'tagcloud_levels' => '6',
    'swatch_field' => '',
    'swatch_imagestyle' => 'devtrac_oecd_icons_bw',
    'swatch_showtext' => 0,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'devtrac_oecd_icons_bw',
    'graphsflot' => 'point',
    'empty_text' => array(
      'value' => '<p>There are no districts</p>
',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'exclude' => '',
    'regex' => 0,
    'inaccessible' => 1,
    'show_minimum_items' => 2,
    'yfacet' => '',
  );
  $export['search_api@devtrac_solr_image_index:block:taxonomy_vocabulary_6'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:block:taxonomy_vocabulary_8';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'block';
  $facet->facet = 'taxonomy_vocabulary_8';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'search_api_swatches',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'graphstitle' => '',
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => '',
    'graphsy_max' => '',
    'graphsy_step' => '',
    'graphsy_legend' => '',
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => '',
    'graphsshowlegend' => 1,
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
    'tagcloud_levels' => '6',
    'swatch_field' => 'field_term_icon',
    'swatch_imagestyle' => 'devtrac_oecd_icons_bw_small',
    'swatch_showtext' => 1,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'devtrac_oecd_icons_color_small',
    'graphsflot' => 'point',
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@devtrac_solr_image_index:block:taxonomy_vocabulary_8'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_bar:fid';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'fid';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_bar:fid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_bar:field_file_image_title_text';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'field_file_image_title_text';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_bar:field_file_image_title_text'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_bar:field_ftritem_date_visited';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'field_ftritem_date_visited';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_bar:field_ftritem_date_visited'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_bar:field_ftritem_lat_long:geom';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'field_ftritem_lat_long:geom';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_bar:field_ftritem_lat_long:geom'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_bar:field_ftritem_lat_long:lat';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'field_ftritem_lat_long:lat';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_bar:field_ftritem_lat_long:lat'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_bar:field_ftritem_lat_long:lon';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'field_ftritem_lat_long:lon';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_bar:field_ftritem_lat_long:lon'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_bar:field_taxonomy_image_tags';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'field_taxonomy_image_tags';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_bar:field_taxonomy_image_tags'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_bar:name';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'name';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_bar:name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_bar:owner';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'owner';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_bar:owner'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_bar:owner:field_user_superior';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'owner:field_user_superior';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_bar:owner:field_user_superior'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_bar:search_api_aggregation_1';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'search_api_aggregation_1';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_bar:search_api_aggregation_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_bar:search_api_language';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'search_api_language';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_bar:search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_bar:search_api_url';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'search_api_url';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_bar:search_api_url'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_bar:taxonomy_vocabulary_1';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'taxonomy_vocabulary_1';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'graphstitle' => 'My Images per PlaceType',
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '100%',
    'graphsheight' => '400',
    'graphsy_min' => '',
    'graphsy_max' => '',
    'graphsy_step' => '',
    'graphsy_legend' => '',
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => '#ffccff,#7d57a3,#f5cd81,#ffe8c2,#ececec',
    'graphsshowlegend' => 0,
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
    'tagcloud_levels' => '6',
    'swatch_field' => '',
    'swatch_imagestyle' => 'devtrac_oecd_icons_bw',
    'swatch_showtext' => 0,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'devtrac_oecd_icons_bw',
    'graphsflot' => 'sidebar',
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_bar:taxonomy_vocabulary_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_bar:taxonomy_vocabulary_6';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'taxonomy_vocabulary_6';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'graphstitle' => 'Districts',
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '100%',
    'graphsheight' => '400',
    'graphsy_min' => '',
    'graphsy_max' => '',
    'graphsy_step' => '',
    'graphsy_legend' => '',
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => '#ffccff,#7d57a3,#f5cd81,#ffe8c2,#ececec',
    'graphsshowlegend' => 0,
    'graphsflot' => 'sidebar',
    'empty_text' => array(
      'value' => '<p>There is not enough data available to generate this graph</p>
',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_bar:taxonomy_vocabulary_6'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_bar:taxonomy_vocabulary_8';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'taxonomy_vocabulary_8';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_bar:taxonomy_vocabulary_8'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_bar:url';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'url';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_bar:url'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_combo:fid';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'fid';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_combo:fid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_combo:field_file_image_title_text';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'field_file_image_title_text';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_combo:field_file_image_title_text'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_combo:field_ftritem_date_visited';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'field_ftritem_date_visited';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_combo:field_ftritem_date_visited'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_combo:field_ftritem_lat_long:geom';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'field_ftritem_lat_long:geom';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_combo:field_ftritem_lat_long:geom'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_combo:field_ftritem_lat_long:lat';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'field_ftritem_lat_long:lat';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_combo:field_ftritem_lat_long:lat'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_combo:field_ftritem_lat_long:lon';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'field_ftritem_lat_long:lon';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_combo:field_ftritem_lat_long:lon'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_combo:field_taxonomy_image_tags';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'field_taxonomy_image_tags';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_combo:field_taxonomy_image_tags'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_combo:name';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'name';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_combo:name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_combo:owner';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'owner';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_combo:owner'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_combo:owner:field_user_superior';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'owner:field_user_superior';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_combo:owner:field_user_superior'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_combo:search_api_aggregation_1';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'search_api_aggregation_1';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_combo:search_api_aggregation_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_combo:search_api_language';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'search_api_language';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_combo:search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_combo:search_api_url';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'search_api_url';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_combo:search_api_url'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_combo:taxonomy_vocabulary_1';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'taxonomy_vocabulary_1';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_combo:taxonomy_vocabulary_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_combo:taxonomy_vocabulary_6';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'taxonomy_vocabulary_6';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_combo:taxonomy_vocabulary_6'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_combo:taxonomy_vocabulary_8';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'taxonomy_vocabulary_8';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_combo:taxonomy_vocabulary_8'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_combo:url';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'url';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphs_combotitle' => NULL,
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => NULL,
    'graphs_comboy_max' => NULL,
    'graphs_comboy_step' => NULL,
    'graphs_comboy_legend' => NULL,
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => NULL,
    'graphs_comboshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_combo:url'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_pie:fid';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'fid';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_pie:fid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_pie:field_file_image_title_text';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'field_file_image_title_text';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_pie:field_file_image_title_text'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_pie:field_ftritem_date_visited';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'field_ftritem_date_visited';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_pie:field_ftritem_date_visited'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_pie:field_ftritem_lat_long:geom';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'field_ftritem_lat_long:geom';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_pie:field_ftritem_lat_long:geom'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_pie:field_ftritem_lat_long:lat';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'field_ftritem_lat_long:lat';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_pie:field_ftritem_lat_long:lat'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_pie:field_ftritem_lat_long:lon';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'field_ftritem_lat_long:lon';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_pie:field_ftritem_lat_long:lon'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_pie:field_taxonomy_image_tags';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'field_taxonomy_image_tags';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_pie:field_taxonomy_image_tags'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_pie:name';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'name';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_pie:name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_pie:owner';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'owner';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_pie:owner'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_pie:owner:field_user_superior';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'owner:field_user_superior';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_pie:owner:field_user_superior'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_pie:search_api_aggregation_1';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'search_api_aggregation_1';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_pie:search_api_aggregation_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_pie:search_api_language';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'search_api_language';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_pie:search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_pie:search_api_url';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'search_api_url';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_pie:search_api_url'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_pie:taxonomy_vocabulary_1';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'taxonomy_vocabulary_1';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_pie:taxonomy_vocabulary_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_pie:taxonomy_vocabulary_6';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'taxonomy_vocabulary_6';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'graphstitle' => '',
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '100%',
    'graphsheight' => '400',
    'graphsy_min' => '',
    'graphsy_max' => '',
    'graphsy_step' => '',
    'graphsy_legend' => '',
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => '',
    'graphsshowlegend' => 1,
    'graphsflot' => 'pie',
    'empty_text' => array(
      'value' => '<p>Not enough data for this graph</p>
',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_pie:taxonomy_vocabulary_6'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_pie:taxonomy_vocabulary_8';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'taxonomy_vocabulary_8';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'graphstitle' => '',
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '100%',
    'graphsheight' => '400',
    'graphsy_min' => '',
    'graphsy_max' => '',
    'graphsy_step' => '',
    'graphsy_legend' => '',
    'graphsbackground_colour' => '#ffccff,#7d57a3,#f5cd81,#ffe8c2,#ececec',
    'graphsseries_colours' => '',
    'graphsshowlegend' => 1,
    'graphsflot' => 'pie',
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_pie:taxonomy_vocabulary_8'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_image_index:devtrac7_graph_pie:url';
  $facet->searcher = 'search_api@devtrac_solr_image_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'url';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'graphstitle' => NULL,
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '500',
    'graphsheight' => '400',
    'graphsy_min' => NULL,
    'graphsy_max' => NULL,
    'graphsy_step' => NULL,
    'graphsy_legend' => NULL,
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => NULL,
    'graphsshowlegend' => 1,
  );
  $export['search_api@devtrac_solr_image_index:devtrac7_graph_pie:url'] = $facet;

  return $export;
}
