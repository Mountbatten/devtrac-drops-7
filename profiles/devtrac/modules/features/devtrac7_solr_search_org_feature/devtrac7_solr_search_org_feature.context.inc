<?php
/**
 * @file
 * devtrac7_solr_search_org_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac7_solr_search_org_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_organisations_graph';
  $context->description = '';
  $context->tag = 'Solr,Organisation';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_organisations_view' => 'devtrac_solr_organisations_view',
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
        'quicktabs-devtrac_organisations_graphs_tab' => array(
          'module' => 'quicktabs',
          'delta' => 'devtrac_organisations_graphs_tab',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Solr,Organisation');
  $export['devtrac_solr_organisations_graph'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_organisations_list';
  $context->description = '';
  $context->tag = 'Solr,Organisation';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_organisations_view' => 'devtrac_solr_organisations_view',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'current_search-devtrac7_organisati_activefacets' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_organisati_activefacets',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-Lu9x058mXCSvPWqGRyErw0A2gPIFATSL' => array(
          'module' => 'facetapi',
          'delta' => 'Lu9x058mXCSvPWqGRyErw0A2gPIFATSL',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-roVneI5fpN0cio3QG3LjDK19f9a0Eeim' => array(
          'module' => 'facetapi',
          'delta' => 'roVneI5fpN0cio3QG3LjDK19f9a0Eeim',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-uUjnuuYBbMlAiQEFMfaAXtvELNCXli0F' => array(
          'module' => 'facetapi',
          'delta' => 'uUjnuuYBbMlAiQEFMfaAXtvELNCXli0F',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-cJM5S73XKSYw4vzxFPQsaq2Enas4NLv5' => array(
          'module' => 'facetapi',
          'delta' => 'cJM5S73XKSYw4vzxFPQsaq2Enas4NLv5',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'current_search-devtrac7_organisations_standard' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_organisations_standard',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'views_modes-modes' => array(
          'module' => 'views_modes',
          'delta' => 'modes',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'pane-organisations_info' => array(
          'module' => 'pane',
          'delta' => 'organisations_info',
          'region' => 'featured',
          'weight' => '-72',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'informationalpage_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Solr,Organisation');
  $export['devtrac_solr_organisations_list'] = $context;

  return $export;
}
