<?php
/**
 * @file
 * devtrac7_solr_search_questions_feature.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function devtrac7_solr_search_questions_feature_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@questions::taxonomy_vocabulary_1';
  $facet->searcher = 'search_api@questions';
  $facet->realm = '';
  $facet->facet = 'taxonomy_vocabulary_1';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
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
    'individual_parent' => '0',
    'limit_active_items' => 0,
    'exclude' => 0,
  );
  $export['search_api@questions::taxonomy_vocabulary_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@questions::taxonomy_vocabulary_8';
  $facet->searcher = 'search_api@questions';
  $facet->realm = '';
  $facet->facet = 'taxonomy_vocabulary_8';
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
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@questions::taxonomy_vocabulary_8'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@questions:block:field_question_subject';
  $facet->searcher = 'search_api@questions';
  $facet->realm = 'block';
  $facet->facet = 'field_question_subject';
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
  );
  $export['search_api@questions:block:field_question_subject'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@questions:block:questionnaire_question_type';
  $facet->searcher = 'search_api@questions';
  $facet->realm = 'block';
  $facet->facet = 'questionnaire_question_type';
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
  $export['search_api@questions:block:questionnaire_question_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@questions:block:taxonomy_vocabulary_1';
  $facet->searcher = 'search_api@questions';
  $facet->realm = 'block';
  $facet->facet = 'taxonomy_vocabulary_1';
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
      'graph_combo_filter' => array(
        'status' => 0,
        'weight' => '-48',
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
    'title' => 'Filter by Location Types:',
    'yfacet' => '',
    'graphstitle' => 'Location Types',
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
    'graphs_combotitle' => 'Location Types',
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
    'graphsbluff' => 'line',
    'graphsflot' => 'point',
    'empty_text' => array(
      'value' => '',
      'format' => '',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
  );
  $export['search_api@questions:block:taxonomy_vocabulary_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@questions:block:taxonomy_vocabulary_8';
  $facet->searcher = 'search_api@questions';
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
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
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
      'format' => '',
    ),
  );
  $export['search_api@questions:block:taxonomy_vocabulary_8'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@questions:block:title';
  $facet->searcher = 'search_api@questions';
  $facet->realm = 'block';
  $facet->facet = 'title';
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
  $export['search_api@questions:block:title'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@questions:block:type';
  $facet->searcher = 'search_api@questions';
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
  $export['search_api@questions:block:type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@questions:devtrac7_graph_pie:author';
  $facet->searcher = 'search_api@questions';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'author';
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
    'graphstitle' => 'Author',
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
  $export['search_api@questions:devtrac7_graph_pie:author'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@questions:devtrac7_graph_pie:nid';
  $facet->searcher = 'search_api@questions';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'nid';
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
    'graphstitle' => 'Node ID',
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
  $export['search_api@questions:devtrac7_graph_pie:nid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@questions:devtrac7_graph_pie:questionnaire_question_options';
  $facet->searcher = 'search_api@questions';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'questionnaire_question_options';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_graphs',
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
    'graphstitle' => 'Options',
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
    'graphsseries_colours' => '#123456,#654321,#1177ff',
    'graphsshowlegend' => 1,
    'title' => 'Filter by Options:',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'graphs_combotitle' => 'Options',
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
    'graphsbluff' => 'line',
    'graphsflot' => 'pie',
    'empty_text' => array(
      'value' => '',
      'format' => '1',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@questions:devtrac7_graph_pie:questionnaire_question_options'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@questions:devtrac7_graph_pie:questionnaire_question_type';
  $facet->searcher = 'search_api@questions';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'questionnaire_question_type';
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
    'graphstitle' => 'The type of question.',
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
  $export['search_api@questions:devtrac7_graph_pie:questionnaire_question_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@questions:devtrac7_graph_pie:search_api_access_node';
  $facet->searcher = 'search_api@questions';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'search_api_access_node';
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
    'graphstitle' => 'Node access information',
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
  $export['search_api@questions:devtrac7_graph_pie:search_api_access_node'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@questions:devtrac7_graph_pie:search_api_language';
  $facet->searcher = 'search_api@questions';
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
    'graphstitle' => 'Item language',
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
  $export['search_api@questions:devtrac7_graph_pie:search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@questions:devtrac7_graph_pie:status';
  $facet->searcher = 'search_api@questions';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'status';
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
    'graphstitle' => 'Status',
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
  $export['search_api@questions:devtrac7_graph_pie:status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@questions:devtrac7_graph_pie:taxonomy_vocabulary_1';
  $facet->searcher = 'search_api@questions';
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
    'graphstitle' => 'Location Types',
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
  $export['search_api@questions:devtrac7_graph_pie:taxonomy_vocabulary_1'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@questions:devtrac7_graph_pie:title';
  $facet->searcher = 'search_api@questions';
  $facet->realm = 'devtrac7_graph_pie';
  $facet->facet = 'title';
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
    'graphstitle' => 'Title',
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
  $export['search_api@questions:devtrac7_graph_pie:title'] = $facet;

  return $export;
}
