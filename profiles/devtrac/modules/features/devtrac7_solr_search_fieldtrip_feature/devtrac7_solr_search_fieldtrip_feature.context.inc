<?php
/**
 * @file
 * devtrac7_solr_search_fieldtrip_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac7_solr_search_fieldtrip_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_fieldtrips_graphs';
  $context->description = 'Shows graphs on Fieldtrips Solr pages';
  $context->tag = 'Solr,Fieldtrip';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_fieldtrips' => 'devtrac_solr_view_fieldtrips',
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
        'quicktabs-devtrac_fieldtrips_graphs_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'devtrac_fieldtrips_graphs_tabs',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shows graphs on Fieldtrips Solr pages');
  t('Solr,Fieldtrip');
  $export['devtrac_solr_fieldtrips_graphs'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'solr_fieldtrip_all_pages';
  $context->description = 'Active on all fieldtrip pages,';
  $context->tag = 'Solr,Fieldtrip';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_fieldtrips' => 'devtrac_solr_view_fieldtrips',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'current_search-devtrac7_fieldtrips_activefacets' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_fieldtrips_activefacets',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-16qQUMF1HuZE3x70uGSRpn1VXIsNTdJH' => array(
          'module' => 'facetapi',
          'delta' => '16qQUMF1HuZE3x70uGSRpn1VXIsNTdJH',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-n49VhFfODLB6pbfilkpnOPSnjCGu17iI' => array(
          'module' => 'facetapi',
          'delta' => 'n49VhFfODLB6pbfilkpnOPSnjCGu17iI',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-jQIAevtCpTm45T6MJy6iyrNRctOmLdDl' => array(
          'module' => 'facetapi',
          'delta' => 'jQIAevtCpTm45T6MJy6iyrNRctOmLdDl',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'facetapi-ZrAr0vddYwHq9NwqylBAt4XzhcDXcZ6x' => array(
          'module' => 'facetapi',
          'delta' => 'ZrAr0vddYwHq9NwqylBAt4XzhcDXcZ6x',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-b62GiMKp95sX9AOFWY7KvPzD1YvsaTGd' => array(
          'module' => 'facetapi',
          'delta' => 'b62GiMKp95sX9AOFWY7KvPzD1YvsaTGd',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-56C5qJfQXuoGMgG1mnJMOChFoUokxDuj' => array(
          'module' => 'facetapi',
          'delta' => '56C5qJfQXuoGMgG1mnJMOChFoUokxDuj',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-jZAixYsYNLlh9txGA8mDmsYr86V1sxlw' => array(
          'module' => 'facetapi',
          'delta' => 'jZAixYsYNLlh9txGA8mDmsYr86V1sxlw',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-UzhpHPEmgaDAgAVmB0MEbPQCl9O6waGc' => array(
          'module' => 'facetapi',
          'delta' => 'UzhpHPEmgaDAgAVmB0MEbPQCl9O6waGc',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
        'facetapi-lcaBeK6GodjxJ8t0h2Tn8ZccToAdcGIN' => array(
          'module' => 'facetapi',
          'delta' => 'lcaBeK6GodjxJ8t0h2Tn8ZccToAdcGIN',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
        'current_search-devtrac7_fieldtrips_standard' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_fieldtrips_standard',
          'region' => 'featured',
          'weight' => '-100',
        ),
        'search_api_saved_searches-devtrac_solr_field_trip_index' => array(
          'module' => 'search_api_saved_searches',
          'delta' => 'devtrac_solr_field_trip_index',
          'region' => 'featured',
          'weight' => '25',
        ),
        'pane-field_trips_info' => array(
          'module' => 'pane',
          'delta' => 'field_trips_info',
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
  t('Active on all fieldtrip pages,');
  t('Solr,Fieldtrip');
  $export['solr_fieldtrip_all_pages'] = $context;

  return $export;
}
