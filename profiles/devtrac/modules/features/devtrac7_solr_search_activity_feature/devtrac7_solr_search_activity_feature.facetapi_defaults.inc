<?php
/**
 * @file
 * devtrac7_solr_search_activity_feature.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function devtrac7_solr_search_activity_feature_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index::endpoints_source_node:field_activity_status';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = '';
  $facet->facet = 'endpoints_source_node:field_activity_status';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '20',
    'dependencies' => array(
      'roles' => array(
        3 => 0,
        1 => 0,
        2 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'iati_organisation_role' => 0,
      ),
      'facets' => array(
        'endpoints_source_node:field_iati_activity_planned_date:value' => 0,
        'endpoints_source_node:field_iati_activity_planned_date:value2' => 0,
        'endpoints_source_node:taxonomy_vocabulary_8' => 0,
        'endpoints_source_node:taxonomy_vocabulary_6' => 0,
        'field_iati_org_role' => 0,
        'endpoints_target_node' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_endpoints_source_node:field_iati_activity_planned_date:value' => '',
      'facet_items_endpoints_source_node:field_iati_activity_planned_date:value2' => '',
      'facet_items_endpoints_source_node:taxonomy_vocabulary_8' => '',
      'facet_items_endpoints_source_node:taxonomy_vocabulary_6' => '',
      'facet_items_field_iati_org_role' => '',
      'facet_items_endpoints_target_node' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
  );
  $export['search_api@devtrac_solr_activity_index::endpoints_source_node:field_activity_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index::endpoints_source_node:field_iati_activity_status';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = '';
  $facet->facet = 'endpoints_source_node:field_iati_activity_status';
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
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@devtrac_solr_activity_index::endpoints_source_node:field_iati_activity_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index::endpoints_source_node:field_iati_admin_area';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = '';
  $facet->facet = 'endpoints_source_node:field_iati_admin_area';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
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
  );
  $export['search_api@devtrac_solr_activity_index::endpoints_source_node:field_iati_admin_area'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index::endpoints_source_node:taxonomy_vocabulary_6';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = '';
  $facet->facet = 'endpoints_source_node:taxonomy_vocabulary_6';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '20',
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
  $export['search_api@devtrac_solr_activity_index::endpoints_source_node:taxonomy_vocabulary_6'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index::endpoints_source_node:taxonomy_vocabulary_6:parents_all';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = '';
  $facet->facet = 'endpoints_source_node:taxonomy_vocabulary_6:parents_all';
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
    'facet_missing' => '1',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@devtrac_solr_activity_index::endpoints_source_node:taxonomy_vocabulary_6:parents_all'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index::endpoints_source_node:taxonomy_vocabulary_8';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = '';
  $facet->facet = 'endpoints_source_node:taxonomy_vocabulary_8';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '10',
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
  $export['search_api@devtrac_solr_activity_index::endpoints_source_node:taxonomy_vocabulary_8'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index::endpoints_source_node:taxonomy_vocabulary_8:parents_all';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = '';
  $facet->facet = 'endpoints_source_node:taxonomy_vocabulary_8:parents_all';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
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
  $export['search_api@devtrac_solr_activity_index::endpoints_source_node:taxonomy_vocabulary_8:parents_all'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index::endpoints_target_node';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = '';
  $facet->facet = 'endpoints_target_node';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
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
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@devtrac_solr_activity_index::endpoints_target_node'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index::endpoints_target_node:field_iati_admin_area';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = '';
  $facet->facet = 'endpoints_target_node:field_iati_admin_area';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
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
  );
  $export['search_api@devtrac_solr_activity_index::endpoints_target_node:field_iati_admin_area'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index::endpoints_target_node:taxonomy_vocabulary_6';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = '';
  $facet->facet = 'endpoints_target_node:taxonomy_vocabulary_6';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
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
  );
  $export['search_api@devtrac_solr_activity_index::endpoints_target_node:taxonomy_vocabulary_6'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index::field_iati_org_role';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = '';
  $facet->facet = 'field_iati_org_role';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
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
  );
  $export['search_api@devtrac_solr_activity_index::field_iati_org_role'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index::relation_iati_organisation_role_node_reverse';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = '';
  $facet->facet = 'relation_iati_organisation_role_node_reverse';
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
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
  );
  $export['search_api@devtrac_solr_activity_index::relation_iati_organisation_role_node_reverse'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index::search_api_aggregation_1';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
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
    'exclude' => 0,
    'individual_parent' => 0,
    'limit_active_items' => 0,
  );
  $export['search_api@devtrac_solr_activity_index::search_api_aggregation_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:endpoints_source_node';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'block';
  $facet->facet = 'endpoints_source_node';
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
  $export['search_api@devtrac_solr_activity_index:block:endpoints_source_node'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:endpoints_source_node:field_activity_status';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'block';
  $facet->facet = 'endpoints_source_node:field_activity_status';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_inaccessible_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
      'graph_combo_filter' => array(
        'status' => 0,
        'weight' => '-43',
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
    'exclude' => '',
    'regex' => 0,
    'inaccessible' => 0,
    'show_minimum_items' => 2,
    'yfacet' => '',
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
  $export['search_api@devtrac_solr_activity_index:block:endpoints_source_node:field_activity_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:endpoints_source_node:field_iati_activity_planned_date:value';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'block';
  $facet->facet = 'endpoints_source_node:field_iati_activity_planned_date:value';
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
  $export['search_api@devtrac_solr_activity_index:block:endpoints_source_node:field_iati_activity_planned_date:value'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:endpoints_source_node:field_iati_activity_planned_date:value2';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'block';
  $facet->facet = 'endpoints_source_node:field_iati_activity_planned_date:value2';
  $facet->enabled = TRUE;
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
  $export['search_api@devtrac_solr_activity_index:block:endpoints_source_node:field_iati_activity_planned_date:value2'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:endpoints_source_node:field_iati_activity_status';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'block';
  $facet->facet = 'endpoints_source_node:field_iati_activity_status';
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
  $export['search_api@devtrac_solr_activity_index:block:endpoints_source_node:field_iati_activity_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:endpoints_source_node:field_iati_admin_area';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'block';
  $facet->facet = 'endpoints_source_node:field_iati_admin_area';
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
    'empty_behavior' => 'text',
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
  $export['search_api@devtrac_solr_activity_index:block:endpoints_source_node:field_iati_admin_area'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:endpoints_source_node:taxonomy_vocabulary_6';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'block';
  $facet->facet = 'endpoints_source_node:taxonomy_vocabulary_6';
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
    'exclude' => '',
    'regex' => 0,
    'inaccessible' => 0,
    'show_minimum_items' => 2,
    'yfacet' => '',
  );
  $export['search_api@devtrac_solr_activity_index:block:endpoints_source_node:taxonomy_vocabulary_6'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:endpoints_source_node:taxonomy_vocabulary_6:parents_all';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'block';
  $facet->facet = 'endpoints_source_node:taxonomy_vocabulary_6:parents_all';
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
      'indexed' => 'indexed',
      'display' => 0,
      'natural' => 0,
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
    'exclude' => '',
    'regex' => 0,
    'inaccessible' => 1,
    'show_minimum_items' => 2,
    'yfacet' => '',
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
  );
  $export['search_api@devtrac_solr_activity_index:block:endpoints_source_node:taxonomy_vocabulary_6:parents_all'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:endpoints_source_node:taxonomy_vocabulary_8';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'block';
  $facet->facet = 'endpoints_source_node:taxonomy_vocabulary_8';
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
        'status' => 1,
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
  $export['search_api@devtrac_solr_activity_index:block:endpoints_source_node:taxonomy_vocabulary_8'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:endpoints_source_node:taxonomy_vocabulary_8:parents_all';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'block';
  $facet->facet = 'endpoints_source_node:taxonomy_vocabulary_8:parents_all';
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
    'swatch_field' => 'field_term_icon',
    'swatch_imagestyle' => 'devtrac_oecd_icons_bw_small',
    'swatch_showtext' => 1,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'devtrac_oecd_icons_color_small',
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@devtrac_solr_activity_index:block:endpoints_source_node:taxonomy_vocabulary_8:parents_all'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:endpoints_target_node';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'block';
  $facet->facet = 'endpoints_target_node';
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
    'swatch_field' => 'field_org_logo',
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
  $export['search_api@devtrac_solr_activity_index:block:endpoints_target_node'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:endpoints_target_node:field_iati_admin_area';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'block';
  $facet->facet = 'endpoints_target_node:field_iati_admin_area';
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
    'empty_behavior' => 'text',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 1,
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
  $export['search_api@devtrac_solr_activity_index:block:endpoints_target_node:field_iati_admin_area'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:endpoints_target_node:taxonomy_vocabulary_6';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'block';
  $facet->facet = 'endpoints_target_node:taxonomy_vocabulary_6';
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
    'empty_behavior' => 'text',
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
  $export['search_api@devtrac_solr_activity_index:block:endpoints_target_node:taxonomy_vocabulary_6'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:endpoints_target_node:uuid';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'block';
  $facet->facet = 'endpoints_target_node:uuid';
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
  $export['search_api@devtrac_solr_activity_index:block:endpoints_target_node:uuid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:field_iati_org_role';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'block';
  $facet->facet = 'field_iati_org_role';
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
  $export['search_api@devtrac_solr_activity_index:block:field_iati_org_role'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:relation_iati_organisation_role_node';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'block';
  $facet->facet = 'relation_iati_organisation_role_node';
  $facet->enabled = TRUE;
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
  $export['search_api@devtrac_solr_activity_index:block:relation_iati_organisation_role_node'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:relation_iati_organisation_role_node_reverse';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'block';
  $facet->facet = 'relation_iati_organisation_role_node_reverse';
  $facet->enabled = FALSE;
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
  $export['search_api@devtrac_solr_activity_index:block:relation_iati_organisation_role_node_reverse'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:relation_type';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'block';
  $facet->facet = 'relation_type';
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
  $export['search_api@devtrac_solr_activity_index:block:relation_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:search_api_aggregation_1';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
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
  $export['search_api@devtrac_solr_activity_index:block:search_api_aggregation_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:block:search_api_language';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
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
  $export['search_api@devtrac_solr_activity_index:block:search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:devtrac7_graph_pie:endpoints_source_node:field_activity_status';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'endpoints_source_node:field_activity_status';
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
  $export['search_api@devtrac_solr_activity_index:devtrac7_graph_pie:endpoints_source_node:field_activity_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:devtrac7_graph_pie:endpoints_source_node:field_iati_activity_status';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'endpoints_source_node:field_iati_activity_status';
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
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => '#ffccff,#7d57a3,#f5cd81,#ffe8c2,#ececec',
    'graphsshowlegend' => 1,
    'graphsflot' => 'pie',
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@devtrac_solr_activity_index:devtrac7_graph_pie:endpoints_source_node:field_iati_activity_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:devtrac7_graph_pie:endpoints_source_node:taxonomy_vocabulary_6';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'endpoints_source_node:taxonomy_vocabulary_6';
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
  $export['search_api@devtrac_solr_activity_index:devtrac7_graph_pie:endpoints_source_node:taxonomy_vocabulary_6'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:devtrac7_graph_pie:endpoints_source_node:taxonomy_vocabulary_6:parents_all';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'endpoints_source_node:taxonomy_vocabulary_6:parents_all';
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
  $export['search_api@devtrac_solr_activity_index:devtrac7_graph_pie:endpoints_source_node:taxonomy_vocabulary_6:parents_all'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:devtrac7_graph_pie:endpoints_source_node:taxonomy_vocabulary_8:parent';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'endpoints_source_node:taxonomy_vocabulary_8:parent';
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
  $export['search_api@devtrac_solr_activity_index:devtrac7_graph_pie:endpoints_source_node:taxonomy_vocabulary_8:parent'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_activity_index:devtrac7_graph_pie:endpoints_source_node:taxonomy_vocabulary_8:parents_all';
  $facet->searcher = 'search_api@devtrac_solr_activity_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'endpoints_source_node:taxonomy_vocabulary_8:parents_all';
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
    'graphsseries_colours' => '#ffccff,#7d57a3,#f5cd81,#ffe8c2,#ececec',
    'graphsshowlegend' => 1,
    'graphsflot' => 'pie',
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@devtrac_solr_activity_index:devtrac7_graph_pie:endpoints_source_node:taxonomy_vocabulary_8:parents_all'] = $facet;

  return $export;
}
