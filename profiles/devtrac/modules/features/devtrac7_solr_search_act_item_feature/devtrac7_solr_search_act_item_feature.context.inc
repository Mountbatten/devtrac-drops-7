<?php
/**
 * @file
 * devtrac7_solr_search_act_item_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac7_solr_search_act_item_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_actionitems_graphs';
  $context->description = 'Shows graphs on Actionitem Solr pages';
  $context->tag = 'Solr';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_actionitems' => 'devtrac_solr_view_actionitems',
      ),
    ),
    'views_modes' => array(
      'values' => array(
        'graphs' => 'graphs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-devtrac_actionitems_graph_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'devtrac_actionitems_graph_tabs',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'informationalpage_layout',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shows graphs on Actionitem Solr pages');
  t('Solr');
  $export['devtrac_solr_actionitems_graphs'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_actionitems_views_hasnomap';
  $context->description = 'Context that manages things that happen on the Lists and Graphs for Entities on the action items';
  $context->tag = 'Action Items';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_actionitems' => 'devtrac_solr_view_actionitems',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'current_search-devtrac7_actionitem_activefacets' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_actionitem_activefacets',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-HrVMATBzPjdDP0n3Xt8inLjb01eAAIAW' => array(
          'module' => 'facetapi',
          'delta' => 'HrVMATBzPjdDP0n3Xt8inLjb01eAAIAW',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-1RwXJ6vSSjf01xGzXPu5MxC5EUqVVnVe' => array(
          'module' => 'facetapi',
          'delta' => '1RwXJ6vSSjf01xGzXPu5MxC5EUqVVnVe',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-8CK8UQCGOSot5OfNHtoLaDrLqz02LkDm' => array(
          'module' => 'facetapi',
          'delta' => '8CK8UQCGOSot5OfNHtoLaDrLqz02LkDm',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-1kixDI9IMKBQ8g6EQg5fOhxvfNG4Vw9t' => array(
          'module' => 'facetapi',
          'delta' => '1kixDI9IMKBQ8g6EQg5fOhxvfNG4Vw9t',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-oYhhuVSykO9snZz04K1gjf3ICy6l4OeM' => array(
          'module' => 'facetapi',
          'delta' => 'oYhhuVSykO9snZz04K1gjf3ICy6l4OeM',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'facetapi-uULb6nU1kWf1109Nqm10twGRJi1s2YG6' => array(
          'module' => 'facetapi',
          'delta' => 'uULb6nU1kWf1109Nqm10twGRJi1s2YG6',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
        'facetapi-9V2LGys4yvh3SG0SWLgzqrRQnFRk8CpW' => array(
          'module' => 'facetapi',
          'delta' => '9V2LGys4yvh3SG0SWLgzqrRQnFRk8CpW',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-yrRE28GaTXo7F09IvqpDh2nrR2YJa14p' => array(
          'module' => 'facetapi',
          'delta' => 'yrRE28GaTXo7F09IvqpDh2nrR2YJa14p',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-JuH0lIko1i0PKeepVDfE5JRI5goYRG57' => array(
          'module' => 'facetapi',
          'delta' => 'JuH0lIko1i0PKeepVDfE5JRI5goYRG57',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'facetapi-UCJ8e9Q0dD6C2SdmSSjUbIuGwHn2t38M' => array(
          'module' => 'facetapi',
          'delta' => 'UCJ8e9Q0dD6C2SdmSSjUbIuGwHn2t38M',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
        'facetapi-jobZ0vr9jH1vMQykXNx6xKndWNB7qoP0' => array(
          'module' => 'facetapi',
          'delta' => 'jobZ0vr9jH1vMQykXNx6xKndWNB7qoP0',
          'region' => 'sidebar_first',
          'weight' => '2',
        ),
        'facetapi-3e4Ui5x81K1n21NYJx9lScdE5URu0OX0' => array(
          'module' => 'facetapi',
          'delta' => '3e4Ui5x81K1n21NYJx9lScdE5URu0OX0',
          'region' => 'sidebar_first',
          'weight' => '3',
        ),
        'facetapi-4cXSg2RKMoLp5sR1DVbWmeaZs9p9H1Lz' => array(
          'module' => 'facetapi',
          'delta' => '4cXSg2RKMoLp5sR1DVbWmeaZs9p9H1Lz',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
        'current_search-devtrac7_actionitems_standard' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_actionitems_standard',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'search_api_saved_searches-devtrac_solr_action_items_index' => array(
          'module' => 'search_api_saved_searches',
          'delta' => 'devtrac_solr_action_items_index',
          'region' => 'featured',
          'weight' => '25',
        ),
        'pane-action_items_info' => array(
          'module' => 'pane',
          'delta' => 'action_items_info',
          'region' => 'featured',
          'weight' => '-50',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'informationalpage_layout',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Action Items');
  t('Context that manages things that happen on the Lists and Graphs for Entities on the action items');
  $export['devtrac_solr_actionitems_views_hasnomap'] = $context;

  return $export;
}
