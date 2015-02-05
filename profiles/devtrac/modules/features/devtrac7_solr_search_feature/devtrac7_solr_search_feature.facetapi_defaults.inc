<?php
/**
 * @file
 * devtrac7_solr_search_feature.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function devtrac7_solr_search_feature_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index::author';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = '';
  $facet->facet = 'author';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '20',
    'dependencies' => array(
      'roles' => array(
        3 => '3',
        2 => '2',
        5 => '5',
        1 => 0,
        4 => 0,
        6 => 0,
        7 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'actionitem' => 0,
        'book' => 0,
        'fieldtrip' => 0,
        'ftritem' => 0,
        'iati_activity' => 0,
        'iati_organisation' => 0,
        'place' => 0,
        'page' => 0,
        'questionnaire_question' => 0,
        'story' => 0,
      ),
      'facets' => array(
        'author:field_user_superior' => 0,
        'taxonomy_vocabulary_6:field_district_category' => 0,
        'search_api_aggregation_1' => 0,
        'field_ftritem_date_visited' => 0,
        'status' => 0,
        'field_ftritem_status' => 0,
        'taxonomy_vocabulary_6' => 0,
        'taxonomy_vocabulary_7' => 0,
        'taxonomy_vocabulary_1' => 0,
        'taxonomy_vocabulary_8' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_author:field_user_superior' => '',
      'facet_items_taxonomy_vocabulary_6:field_district_category' => '',
      'facet_items_search_api_aggregation_1' => '',
      'facet_items_field_ftritem_date_visited' => '',
      'facet_items_status' => '',
      'facet_items_field_ftritem_status' => '',
      'facet_items_taxonomy_vocabulary_6' => '',
      'facet_items_taxonomy_vocabulary_7' => '',
      'facet_items_taxonomy_vocabulary_1' => '',
      'facet_items_taxonomy_vocabulary_8' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
    'individual_parent' => 0,
    'limit_active_items' => 0,
  );
  $export['search_api@devtrac_solr_site_visits_index::author'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index::author:field_user_superior';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = '';
  $facet->facet = 'author:field_user_superior';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '-1',
    'dependencies' => array(
      'roles' => array(
        3 => '3',
        2 => '2',
        5 => '5',
        1 => 0,
        4 => 0,
        6 => 0,
        7 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'actionitem' => 0,
        'book' => 0,
        'fieldtrip' => 0,
        'ftritem' => 0,
        'iati_activity' => 0,
        'iati_organisation' => 0,
        'place' => 0,
        'page' => 0,
        'questionnaire_question' => 0,
        'story' => 0,
      ),
      'facets' => array(
        'taxonomy_vocabulary_6:field_district_category' => 0,
        'search_api_aggregation_1' => 0,
        'field_ftritem_date_visited' => 0,
        'author' => 0,
        'status' => 0,
        'field_ftritem_status' => 0,
        'taxonomy_vocabulary_6' => 0,
        'taxonomy_vocabulary_7' => 0,
        'taxonomy_vocabulary_1' => 0,
        'taxonomy_vocabulary_8' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_taxonomy_vocabulary_6:field_district_category' => '',
      'facet_items_search_api_aggregation_1' => '',
      'facet_items_field_ftritem_date_visited' => '',
      'facet_items_author' => '',
      'facet_items_status' => '',
      'facet_items_field_ftritem_status' => '',
      'facet_items_taxonomy_vocabulary_6' => '',
      'facet_items_taxonomy_vocabulary_7' => '',
      'facet_items_taxonomy_vocabulary_1' => '',
      'facet_items_taxonomy_vocabulary_8' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
  );
  $export['search_api@devtrac_solr_site_visits_index::author:field_user_superior'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index::author:field_user_title';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = '';
  $facet->facet = 'author:field_user_title';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
  );
  $export['search_api@devtrac_solr_site_visits_index::author:field_user_title'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index::author:name';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = '';
  $facet->facet = 'author:name';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
  );
  $export['search_api@devtrac_solr_site_visits_index::author:name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index::created';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = '';
  $facet->facet = 'created';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'date_granularity' => 'DAY',
  );
  $export['search_api@devtrac_solr_site_visits_index::created'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index::field_ftritem_date_visited';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
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
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'date',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'date_granularity' => 'DAY',
  );
  $export['search_api@devtrac_solr_site_visits_index::field_ftritem_date_visited'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index::field_ftritem_status';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = '';
  $facet->facet = 'field_ftritem_status';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => 50,
    'dependencies' => array(
      'roles' => array(
        5 => '5',
        1 => 0,
        3 => 0,
        4 => 0,
        6 => 0,
        2 => 0,
        7 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'actionitem' => 0,
        'article' => 0,
        'page' => 0,
        'fieldtrip' => 0,
        'ftritem' => 0,
        'place' => 0,
        'questionnaire_question' => 0,
        'questionnaire' => 0,
      ),
      'facets' => array(
        'taxonomy_vocabulary_6:field_district_category' => 0,
        'author:field_user_superior' => 0,
        'search_api_aggregation_1' => 0,
        'taxonomy_vocabulary_8' => 0,
        'author' => 0,
        'status' => 0,
        'taxonomy_vocabulary_1' => 0,
        'taxonomy_vocabulary_6' => 0,
        'taxonomy_vocabulary_7' => 0,
        'field_ftritem_date_visited' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_taxonomy_vocabulary_6:field_district_category' => '',
      'facet_items_author:field_user_superior' => '',
      'facet_items_search_api_aggregation_1' => '',
      'facet_items_taxonomy_vocabulary_8' => '',
      'facet_items_author' => '',
      'facet_items_status' => '',
      'facet_items_taxonomy_vocabulary_1' => '',
      'facet_items_taxonomy_vocabulary_6' => '',
      'facet_items_taxonomy_vocabulary_7' => '',
      'facet_items_field_ftritem_date_visited' => '',
    ),
    'facet_mincount' => 1,
    'facet_missing' => 0,
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
  );
  $export['search_api@devtrac_solr_site_visits_index::field_ftritem_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index::taxonomy_vocabulary_1';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = '';
  $facet->facet = 'taxonomy_vocabulary_1';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '15',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
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
    'individual_parent' => '0',
    'limit_active_items' => 0,
  );
  $export['search_api@devtrac_solr_site_visits_index::taxonomy_vocabulary_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index::taxonomy_vocabulary_1:parents_all';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = '';
  $facet->facet = 'taxonomy_vocabulary_1:parents_all';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '15',
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
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@devtrac_solr_site_visits_index::taxonomy_vocabulary_1:parents_all'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index::taxonomy_vocabulary_6';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = '';
  $facet->facet = 'taxonomy_vocabulary_6';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '-1',
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
        'actionitem' => 0,
        'book' => 0,
        'fieldtrip' => 0,
        'ftritem' => 0,
        'page' => 0,
        'place' => 0,
        'questionnaire_question' => 0,
        'story' => 0,
      ),
      'facets' => array(
        'field_ftritem_date_visited' => 0,
        'taxonomy_vocabulary_7' => 0,
        'field_actionitem_responsible' => 0,
        'field_ftritem_status' => 0,
        'author:field_user_superior' => 0,
        'field_actionitem_status' => 0,
        'field_actionitem_severity' => 0,
        'author' => 0,
        'status' => 0,
        'field_actionitem_due_date' => 0,
        'taxonomy_vocabulary_8' => 0,
        'taxonomy_vocabulary_1' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_ftritem_date_visited' => '',
      'facet_items_taxonomy_vocabulary_7' => '',
      'facet_items_field_actionitem_responsible' => '',
      'facet_items_field_ftritem_status' => '',
      'facet_items_author:field_user_superior' => '',
      'facet_items_field_actionitem_status' => '',
      'facet_items_field_actionitem_severity' => '',
      'facet_items_author' => '',
      'facet_items_status' => '',
      'facet_items_field_actionitem_due_date' => '',
      'facet_items_taxonomy_vocabulary_8' => '',
      'facet_items_taxonomy_vocabulary_1' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
  );
  $export['search_api@devtrac_solr_site_visits_index::taxonomy_vocabulary_6'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index::taxonomy_vocabulary_6:field_district_category';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = '';
  $facet->facet = 'taxonomy_vocabulary_6:field_district_category';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '-1',
    'dependencies' => array(
      'facets' => array(),
      'force_deactivation' => 1,
      'regex' => 0,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '1',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
  );
  $export['search_api@devtrac_solr_site_visits_index::taxonomy_vocabulary_6:field_district_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index::taxonomy_vocabulary_7';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = '';
  $facet->facet = 'taxonomy_vocabulary_7';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '-1',
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
        'actionitem' => 0,
        'book' => 0,
        'fieldtrip' => 0,
        'ftritem' => 0,
        'page' => 0,
        'place' => 0,
        'questionnaire_question' => 0,
        'story' => 0,
      ),
      'facets' => array(
        'field_ftritem_date_visited' => 0,
        'field_actionitem_responsible' => 0,
        'field_ftritem_status' => 0,
        'author:field_user_superior' => 0,
        'field_actionitem_status' => 0,
        'field_actionitem_severity' => 0,
        'author' => 0,
        'status' => 0,
        'taxonomy_vocabulary_6' => 0,
        'field_actionitem_due_date' => 0,
        'taxonomy_vocabulary_8' => 0,
        'taxonomy_vocabulary_1' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_ftritem_date_visited' => '',
      'facet_items_field_actionitem_responsible' => '',
      'facet_items_field_ftritem_status' => '',
      'facet_items_author:field_user_superior' => '',
      'facet_items_field_actionitem_status' => '',
      'facet_items_field_actionitem_severity' => '',
      'facet_items_author' => '',
      'facet_items_status' => '',
      'facet_items_taxonomy_vocabulary_6' => '',
      'facet_items_field_actionitem_due_date' => '',
      'facet_items_taxonomy_vocabulary_8' => '',
      'facet_items_taxonomy_vocabulary_1' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
  );
  $export['search_api@devtrac_solr_site_visits_index::taxonomy_vocabulary_7'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index::taxonomy_vocabulary_8';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = '';
  $facet->facet = 'taxonomy_vocabulary_8';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
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
  $export['search_api@devtrac_solr_site_visits_index::taxonomy_vocabulary_8'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:author';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'block';
  $facet->facet = 'author';
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
    'keep_open' => 0,
    'expand_first' => 1,
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
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
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
  );
  $export['search_api@devtrac_solr_site_visits_index:block:author'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:author:field_user_superior';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'block';
  $facet->facet = 'author:field_user_superior';
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
      'active' => -50,
      'count' => -49,
      'display' => -48,
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
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
  $export['search_api@devtrac_solr_site_visits_index:block:author:field_user_superior'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:created';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'block';
  $facet->facet = 'created';
  $facet->enabled = TRUE;
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
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
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
  $export['search_api@devtrac_solr_site_visits_index:block:created'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:field_ftritem_date_visited';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'block';
  $facet->facet = 'field_ftritem_date_visited';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_date_only_links',
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
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'keep_open' => 0,
    'expand_first' => 1,
    'tagcloud_levels' => '6',
    'swatch_field' => '',
    'swatch_imagestyle' => 'slideshow_thumbnail',
    'swatch_showtext' => 0,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'slideshow_thumbnail',
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
    'graphsflot' => 'point',
  );
  $export['search_api@devtrac_solr_site_visits_index:block:field_ftritem_date_visited'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:field_ftritem_lat_long:geom';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'block';
  $facet->facet = 'field_ftritem_lat_long:geom';
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
  $export['search_api@devtrac_solr_site_visits_index:block:field_ftritem_lat_long:geom'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:field_ftritem_lat_long:latlon';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'block';
  $facet->facet = 'field_ftritem_lat_long:latlon';
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
  $export['search_api@devtrac_solr_site_visits_index:block:field_ftritem_lat_long:latlon'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:field_ftritem_status';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'block';
  $facet->facet = 'field_ftritem_status';
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
      'active' => -50,
      'count' => -49,
      'display' => -48,
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
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
  $export['search_api@devtrac_solr_site_visits_index:block:field_ftritem_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:search_api_access_node';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'block';
  $facet->facet = 'search_api_access_node';
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
  $export['search_api@devtrac_solr_site_visits_index:block:search_api_access_node'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:search_api_aggregation_1';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
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
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
  );
  $export['search_api@devtrac_solr_site_visits_index:block:search_api_aggregation_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:search_api_viewed';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
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
  $export['search_api@devtrac_solr_site_visits_index:block:search_api_viewed'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:status';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
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
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@devtrac_solr_site_visits_index:block:status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:taxonomy_vocabulary_1';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'block';
  $facet->facet = 'taxonomy_vocabulary_1';
  $facet->enabled = FALSE;
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
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'keep_open' => 0,
    'expand_first' => 1,
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
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
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'yfacet' => '',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
  );
  $export['search_api@devtrac_solr_site_visits_index:block:taxonomy_vocabulary_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:taxonomy_vocabulary_1:parents_all';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'block';
  $facet->facet = 'taxonomy_vocabulary_1:parents_all';
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
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
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
      'value' => 'som\'hin\'',
      'format' => '1',
    ),
  );
  $export['search_api@devtrac_solr_site_visits_index:block:taxonomy_vocabulary_1:parents_all'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:taxonomy_vocabulary_6';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
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
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'keep_open' => 0,
    'expand_first' => 1,
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'tagcloud_levels' => '6',
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
    'swatch_field' => '',
    'swatch_imagestyle' => 'devtrac_oecd_icons_bw',
    'swatch_showtext' => 0,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'devtrac_oecd_icons_bw',
    'graphsflot' => 'point',
    'exclude' => '',
    'regex' => 0,
    'inaccessible' => 1,
    'show_minimum_items' => 2,
    'yfacet' => '',
  );
  $export['search_api@devtrac_solr_site_visits_index:block:taxonomy_vocabulary_6'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:taxonomy_vocabulary_6:field_district_category';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
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
  $export['search_api@devtrac_solr_site_visits_index:block:taxonomy_vocabulary_6:field_district_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:taxonomy_vocabulary_7';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'block';
  $facet->facet = 'taxonomy_vocabulary_7';
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
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'keep_open' => 0,
    'expand_first' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
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
  );
  $export['search_api@devtrac_solr_site_visits_index:block:taxonomy_vocabulary_7'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:taxonomy_vocabulary_8';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
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
      'exclude_inaccessible_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'exclude_items' => array(
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
      'display' => 'display',
      'indexed' => 0,
      'active' => 0,
      'count' => 0,
      'natural' => 0,
    ),
    'sort_weight' => array(
      'indexed' => '-50',
      'active' => '-49',
      'count' => '-48',
      'display' => '-47',
      'natural' => '0',
    ),
    'sort_order' => array(
      'indexed' => '4',
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'keep_open' => 0,
    'expand_first' => 1,
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'tagcloud_levels' => '6',
    'swatch_field' => 'field_term_icon',
    'swatch_imagestyle' => 'devtrac_oecd_icons_bw_small',
    'swatch_showtext' => 1,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'devtrac_oecd_icons_color_small',
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
    'graphsflot' => 'point',
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'yfacet' => '',
    'inaccessible' => 1,
  );
  $export['search_api@devtrac_solr_site_visits_index:block:taxonomy_vocabulary_8'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:title';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'block';
  $facet->facet = 'title';
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
  $export['search_api@devtrac_solr_site_visits_index:block:title'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:block:type';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'block';
  $facet->facet = 'type';
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
  $export['search_api@devtrac_solr_site_visits_index:block:type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:devtrac7_graph_bar:taxonomy_vocabulary_1';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'devtrac7_graph_bar';
  $facet->facet = 'taxonomy_vocabulary_1';
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
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'graphstitle' => 'My SiteVisits per PlaceType',
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
    'exclude' => '',
    'regex' => 0,
    'inaccessible' => 0,
    'show_minimum_items' => 2,
    'yfacet' => '',
  );
  $export['search_api@devtrac_solr_site_visits_index:devtrac7_graph_bar:taxonomy_vocabulary_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo:author';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'author';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'graph_combo_filter' => array(
        'status' => 1,
        'weight' => '-49',
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
    'graphs_combotitle' => 'Sitevisits on Me and my colleagues per placestypes',
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '100%',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => '',
    'graphs_comboy_max' => '',
    'graphs_comboy_step' => '',
    'graphs_comboy_legend' => '',
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => '#ffccff,#7d57a3,#f5cd81,#ffe8c2,#ececec',
    'graphs_comboshowlegend' => 1,
    'yfacet' => 'taxonomy_vocabulary_1',
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
    'tagcloud_levels' => '6',
    'swatch_field' => '',
    'swatch_imagestyle' => 'devtrac_oecd_icons_bw',
    'swatch_showtext' => 0,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'devtrac_oecd_icons_bw',
    'graphsflot' => 'point',
    'graphs_comboflot' => 'sidebarstack',
    'empty_text' => array(
      'value' => '<p>There is not enough data to generate this graph</p>
',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo:author'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo:taxonomy_vocabulary_1';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'taxonomy_vocabulary_1';
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
  $export['search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo:taxonomy_vocabulary_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo:taxonomy_vocabulary_6';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'taxonomy_vocabulary_6';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
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
      'graph_combo_filter' => array(
        'status' => 1,
        'weight' => '-46',
      ),
      'rewrite_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-44',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-43',
      ),
      'deepest_level_items' => array(
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
    'graphs_combotitle' => 'Sitevisits in My Districts per placetype',
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '100%',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => '',
    'graphs_comboy_max' => '',
    'graphs_comboy_step' => '',
    'graphs_comboy_legend' => '',
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => '#ffccff,#7d57a3,#f5cd81,#ffe8c2,#ececec',
    'graphs_comboshowlegend' => 1,
    'yfacet' => 'taxonomy_vocabulary_1',
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
    'tagcloud_levels' => '6',
    'swatch_field' => '',
    'swatch_imagestyle' => 'devtrac_oecd_icons_bw',
    'swatch_showtext' => 0,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'devtrac_oecd_icons_bw',
    'graphsflot' => 'point',
    'graphs_comboflot' => 'sidebarstack',
    'empty_text' => array(
      'value' => 'There is not enough data to generate this graph',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'inaccessible' => 1,
  );
  $export['search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo:taxonomy_vocabulary_6'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo:taxonomy_vocabulary_8';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'taxonomy_vocabulary_8';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'graph_combo_filter' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'exclude_inaccessible_items' => array(
        'status' => 1,
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
    'graphs_combotitle' => 'Sitevisits of My Subjects per placetype',
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '500',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => '',
    'graphs_comboy_max' => '',
    'graphs_comboy_step' => '',
    'graphs_comboy_legend' => '',
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => '',
    'graphs_comboshowlegend' => 1,
    'yfacet' => 'taxonomy_vocabulary_1',
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
    'tagcloud_levels' => '6',
    'swatch_field' => '',
    'swatch_imagestyle' => 'devtrac_oecd_icons_bw',
    'swatch_showtext' => 0,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'devtrac_oecd_icons_bw',
    'graphsflot' => 'point',
    'graphs_comboflot' => 'sidebarstack',
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'inaccessible' => 1,
  );
  $export['search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo:taxonomy_vocabulary_8'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo:type';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'devtrac7_graph_combo';
  $facet->facet = 'type';
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
  $export['search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo:type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo_2:author';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'devtrac7_graph_combo_2';
  $facet->facet = 'author';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'graph_combo_filter' => array(
        'status' => 1,
        'weight' => '-49',
      ),
    ),
    'active_sorts' => array(
      'count' => 'count',
      'active' => 0,
      'display' => 0,
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
    'graphs_combotitle' => 'No Title',
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '100%',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => '',
    'graphs_comboy_max' => '',
    'graphs_comboy_step' => '',
    'graphs_comboy_legend' => '',
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => '#ffccff,#7d57a3,#f5cd81,#ffe8c2,#ececec',
    'graphs_comboshowlegend' => 1,
    'yfacet' => 'field_actionitem_status',
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
    'tagcloud_levels' => '6',
    'swatch_field' => '',
    'swatch_imagestyle' => 'devtrac_oecd_icons_bw',
    'swatch_showtext' => 0,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'devtrac_oecd_icons_bw',
    'graphsflot' => 'point',
    'graphs_comboflot' => 'sidebarstack',
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo_2:author'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo_2:taxonomy_vocabulary_1';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'devtrac7_graph_combo_2';
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
    'soft_limit' => '20',
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
    'tagcloud_levels' => '6',
    'swatch_field' => 'field_term_icon',
    'swatch_imagestyle' => 'devtrac_oecd_icons_color_small',
    'swatch_showtext' => 1,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'devtrac_oecd_icons_bw_small',
    'graphsflot' => 'point',
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
  );
  $export['search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo_2:taxonomy_vocabulary_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo_2:taxonomy_vocabulary_6';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'devtrac7_graph_combo_2';
  $facet->facet = 'taxonomy_vocabulary_6';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
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
      'graph_combo_filter' => array(
        'status' => 1,
        'weight' => '-46',
      ),
      'rewrite_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-44',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-43',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-42',
      ),
    ),
    'active_sorts' => array(
      'count' => 'count',
      'active' => 0,
      'display' => 0,
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
    'graphs_combotitle' => '',
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '100%',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => '',
    'graphs_comboy_max' => '',
    'graphs_comboy_step' => '',
    'graphs_comboy_legend' => '',
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => '#ffccff,#7d57a3,#f5cd81,#ffe8c2,#ececec',
    'graphs_comboshowlegend' => 1,
    'yfacet' => 'field_actionitem_status',
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
    'tagcloud_levels' => '6',
    'swatch_field' => '',
    'swatch_imagestyle' => 'devtrac_oecd_icons_bw',
    'swatch_showtext' => 0,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'devtrac_oecd_icons_bw',
    'graphsflot' => 'point',
    'graphs_comboflot' => 'sidebarstack',
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'exclude' => '',
    'regex' => 0,
    'inaccessible' => 1,
    'show_minimum_items' => 2,
  );
  $export['search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo_2:taxonomy_vocabulary_6'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo_2:taxonomy_vocabulary_8';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'devtrac7_graph_combo_2';
  $facet->facet = 'taxonomy_vocabulary_8';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo',
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
      'graph_combo_filter' => array(
        'status' => 1,
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
    'graphs_combotitle' => '',
    'graphs_comboshowzoom' => 0,
    'graphs_comboengine' => 'flot',
    'graphs_combonofollow' => 1,
    'graphs_combowidth' => '100%',
    'graphs_comboheight' => '400',
    'graphs_comboy_min' => '',
    'graphs_comboy_max' => '',
    'graphs_comboy_step' => '',
    'graphs_comboy_legend' => '',
    'graphs_combobackground_colour' => '#fff',
    'graphs_comboseries_colours' => '#ffccff,#7d57a3,#f5cd81,#ffe8c2,#ececec',
    'graphs_comboshowlegend' => 1,
    'yfacet' => 'field_actionitem_status',
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
    'tagcloud_levels' => '6',
    'swatch_field' => '',
    'swatch_imagestyle' => 'devtrac_oecd_icons_bw',
    'swatch_showtext' => 0,
    'swatch_shownoimage' => 1,
    'swatch_imagestyle_select' => 'devtrac_oecd_icons_bw',
    'graphsflot' => 'point',
    'graphs_comboflot' => 'sidebarstack',
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'exclude' => '',
    'regex' => 0,
    'inaccessible' => 1,
    'show_minimum_items' => 2,
  );
  $export['search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo_2:taxonomy_vocabulary_8'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo_3:taxonomy_vocabulary_1';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'devtrac7_graph_combo_3';
  $facet->facet = 'taxonomy_vocabulary_1';
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
  $export['search_api@devtrac_solr_site_visits_index:devtrac7_graph_combo_3:taxonomy_vocabulary_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:devtrac7_graph_pie:taxonomy_vocabulary_1';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'taxonomy_vocabulary_1';
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
      'access' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'exclude_inaccessible_items' => array(
        'status' => 1,
        'weight' => '-46',
      ),
      'rewrite_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-44',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-43',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-42',
      ),
      'graph_combo_filter' => array(
        'status' => 0,
        'weight' => '-41',
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
    'graphstitle' => 'SiteVisits per placetype',
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '100%',
    'graphsheight' => '350',
    'graphsy_min' => '',
    'graphsy_max' => '',
    'graphsy_step' => '',
    'graphsy_legend' => '',
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => '#ffccff,#7d57a3,#f5cd81,#ffe8c2,#ececec',
    'graphsshowlegend' => 1,
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
  $export['search_api@devtrac_solr_site_visits_index:devtrac7_graph_pie:taxonomy_vocabulary_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:devtrac7_graph_pie:taxonomy_vocabulary_8';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
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
        'status' => 1,
        'weight' => '-48',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'rewrite_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'exclude_inaccessible_items' => array(
        'status' => 1,
        'weight' => '-49',
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
    'graphstitle' => 'SiteVisits per Subject(s)',
    'graphsshowzoom' => 0,
    'graphsengine' => 'flot',
    'graphsnofollow' => 1,
    'graphswidth' => '100%',
    'graphsheight' => '350',
    'graphsy_min' => '',
    'graphsy_max' => '',
    'graphsy_step' => '',
    'graphsy_legend' => '',
    'graphsbackground_colour' => '#fff',
    'graphsseries_colours' => '#ffccff,#7d57a3,#f5cd81,#ffe8c2,#ececec',
    'graphsshowlegend' => 1,
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
    'graphsflot' => 'pie',
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'exclude' => 'OECD',
    'regex' => 0,
    'show_minimum_items' => 2,
    'yfacet' => '',
    'inaccessible' => 1,
  );
  $export['search_api@devtrac_solr_site_visits_index:devtrac7_graph_pie:taxonomy_vocabulary_8'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:graphs_data_combo:taxonomy_vocabulary_1';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'graphs_data_combo';
  $facet->facet = 'taxonomy_vocabulary_1';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo_data',
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
    'title' => NULL,
    'nofollow' => 1,
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@devtrac_solr_site_visits_index:graphs_data_combo:taxonomy_vocabulary_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:graphs_data_combo:taxonomy_vocabulary_6';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'graphs_data_combo';
  $facet->facet = 'taxonomy_vocabulary_6';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo_data',
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
        'status' => 1,
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
    'title' => NULL,
    'nofollow' => 1,
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'exclude' => '',
    'regex' => 0,
    'inaccessible' => 0,
    'show_minimum_items' => 2,
    'yfacet' => 'taxonomy_vocabulary_1',
  );
  $export['search_api@devtrac_solr_site_visits_index:graphs_data_combo:taxonomy_vocabulary_6'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@devtrac_solr_site_visits_index:graphs_data_combo:taxonomy_vocabulary_8';
  $facet->searcher = 'search_api@devtrac_solr_site_visits_index';
  $facet->realm = 'graphs_data_combo';
  $facet->facet = 'taxonomy_vocabulary_8';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs_combo_data',
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
    'title' => NULL,
    'nofollow' => 1,
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
  $export['search_api@devtrac_solr_site_visits_index:graphs_data_combo:taxonomy_vocabulary_8'] = $facet;

  return $export;
}
