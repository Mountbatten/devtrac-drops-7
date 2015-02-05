<?php
/**
 * @file
 * devtrac7_solr_user_feature.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function devtrac7_solr_user_feature_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index::field_user_superior';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = '';
  $facet->facet = 'field_user_superior';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
  );
  $export['search_api@devtrac7_user_index::field_user_superior'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index::roles';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = '';
  $facet->facet = 'roles';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
  );
  $export['search_api@devtrac7_user_index::roles'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index::search_api_aggregation_1';
  $facet->searcher = 'search_api@devtrac7_user_index';
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
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
    'individual_parent' => 0,
    'limit_active_items' => 0,
  );
  $export['search_api@devtrac7_user_index::search_api_aggregation_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index::status';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = '';
  $facet->facet = 'status';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
  );
  $export['search_api@devtrac7_user_index::status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index::taxonomy_vocabulary_4';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = '';
  $facet->facet = 'taxonomy_vocabulary_4';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
  );
  $export['search_api@devtrac7_user_index::taxonomy_vocabulary_4'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index::taxonomy_vocabulary_5';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = '';
  $facet->facet = 'taxonomy_vocabulary_5';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
  );
  $export['search_api@devtrac7_user_index::taxonomy_vocabulary_5'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index::taxonomy_vocabulary_6';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = '';
  $facet->facet = 'taxonomy_vocabulary_6';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '20',
    'dependencies' => array(
      'roles' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@devtrac7_user_index::taxonomy_vocabulary_6'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index::taxonomy_vocabulary_6:field_district_category';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = '';
  $facet->facet = 'taxonomy_vocabulary_6:field_district_category';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
  );
  $export['search_api@devtrac7_user_index::taxonomy_vocabulary_6:field_district_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index::taxonomy_vocabulary_8';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = '';
  $facet->facet = 'taxonomy_vocabulary_8';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@devtrac7_user_index::taxonomy_vocabulary_8'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index:block:field_user_firstname';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = 'block';
  $facet->facet = 'field_user_firstname';
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
  $export['search_api@devtrac7_user_index:block:field_user_firstname'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index:block:field_user_superior';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = 'block';
  $facet->facet = 'field_user_superior';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
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
  $export['search_api@devtrac7_user_index:block:field_user_superior'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index:block:field_user_surname';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = 'block';
  $facet->facet = 'field_user_surname';
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
  $export['search_api@devtrac7_user_index:block:field_user_surname'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index:block:last_access';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = 'block';
  $facet->facet = 'last_access';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'indexed' => 'indexed',
      'count' => 'count',
      'display' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'indexed' => '-48',
      'count' => '-46',
      'display' => '-44',
      'natural' => '-42',
    ),
    'sort_order' => array(
      'active' => '3',
      'indexed' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@devtrac7_user_index:block:last_access'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index:block:mail';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = 'block';
  $facet->facet = 'mail';
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
  $export['search_api@devtrac7_user_index:block:mail'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index:block:name';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = 'block';
  $facet->facet = 'name';
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
  $export['search_api@devtrac7_user_index:block:name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index:block:roles';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = 'block';
  $facet->facet = 'roles';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
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
  $export['search_api@devtrac7_user_index:block:roles'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index:block:search_api_aggregation_1';
  $facet->searcher = 'search_api@devtrac7_user_index';
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
    'empty_behavior' => 'none',
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
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
  );
  $export['search_api@devtrac7_user_index:block:search_api_aggregation_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index:block:search_api_language';
  $facet->searcher = 'search_api@devtrac7_user_index';
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
  $export['search_api@devtrac7_user_index:block:search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index:block:status';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = 'block';
  $facet->facet = 'status';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
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
  $export['search_api@devtrac7_user_index:block:status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index:block:taxonomy_vocabulary_4';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = 'block';
  $facet->facet = 'taxonomy_vocabulary_4';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
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
  $export['search_api@devtrac7_user_index:block:taxonomy_vocabulary_4'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index:block:taxonomy_vocabulary_5';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = 'block';
  $facet->facet = 'taxonomy_vocabulary_5';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
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
  $export['search_api@devtrac7_user_index:block:taxonomy_vocabulary_5'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index:block:taxonomy_vocabulary_6';
  $facet->searcher = 'search_api@devtrac7_user_index';
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
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
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
    'exclude' => '',
    'regex' => 0,
    'inaccessible' => 1,
    'show_minimum_items' => 2,
    'yfacet' => '',
  );
  $export['search_api@devtrac7_user_index:block:taxonomy_vocabulary_6'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index:block:taxonomy_vocabulary_6:field_district_category';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = 'block';
  $facet->facet = 'taxonomy_vocabulary_6:field_district_category';
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
  $export['search_api@devtrac7_user_index:block:taxonomy_vocabulary_6:field_district_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index:block:taxonomy_vocabulary_8';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = 'block';
  $facet->facet = 'taxonomy_vocabulary_8';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'search_api_swatches',
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
    'exclude' => '',
    'regex' => 0,
    'inaccessible' => 1,
    'show_minimum_items' => 2,
    'yfacet' => '',
  );
  $export['search_api@devtrac7_user_index:block:taxonomy_vocabulary_8'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index:devtrac7_graph_bar:taxonomy_vocabulary_6';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'taxonomy_vocabulary_6';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 1,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'exclude_inaccessible_items' => array(
        'status' => 0,
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
      'count' => '4',
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
    'graphsshowlegend' => 0,
    'graphsflot' => 'sidebar',
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'exclude' => '',
    'regex' => 0,
    'inaccessible' => 1,
    'show_minimum_items' => 2,
    'yfacet' => '',
  );
  $export['search_api@devtrac7_user_index:devtrac7_graph_bar:taxonomy_vocabulary_6'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac7_user_index:devtrac7_graph_pie:taxonomy_vocabulary_8';
  $facet->searcher = 'search_api@devtrac7_user_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'taxonomy_vocabulary_8';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
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
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'exclude' => '',
    'regex' => 0,
    'inaccessible' => 1,
    'show_minimum_items' => 2,
    'yfacet' => '',
  );
  $export['search_api@devtrac7_user_index:devtrac7_graph_pie:taxonomy_vocabulary_8'] = $facet;

  return $export;
}
