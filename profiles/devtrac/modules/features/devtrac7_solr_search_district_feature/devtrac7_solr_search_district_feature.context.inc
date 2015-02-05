<?php
/**
 * @file
 * devtrac7_solr_search_district_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac7_solr_search_district_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_district_graphs';
  $context->description = 'Graphs of Admin Units with there facets';
  $context->tag = 'Solr,Admin Unit';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_districts' => 'devtrac_solr_view_districts',
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
        'quicktabs-devtrac_admin_units_graphs_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'devtrac_admin_units_graphs_tabs',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Graphs of Admin Units with there facets');
  t('Solr,Admin Unit');
  $export['devtrac_solr_district_graphs'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_district_list';
  $context->description = 'List of districts with there facets';
  $context->tag = 'Solr,Admin Unit';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_districts' => 'devtrac_solr_view_districts',
      ),
    ),
    'views_modes' => array(
      'values' => array(
        'graphs' => 'graphs',
        'list' => 'list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'current_search-devtrac7_districts_activefacets' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_districts_activefacets',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-OlBNET0M65Y7QzSkYoPGWTodKG8vgbU3' => array(
          'module' => 'facetapi',
          'delta' => 'OlBNET0M65Y7QzSkYoPGWTodKG8vgbU3',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-NyR3gAwd0DMH1wd1cTAkAuODwiRcyqmX' => array(
          'module' => 'facetapi',
          'delta' => 'NyR3gAwd0DMH1wd1cTAkAuODwiRcyqmX',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-lG63gd04gBnS5U1DXSGUqoMdj9xvvjgF' => array(
          'module' => 'facetapi',
          'delta' => 'lG63gd04gBnS5U1DXSGUqoMdj9xvvjgF',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-L2DlUv3AAQMwzO0fi0e7IdWPLai93ANC' => array(
          'module' => 'facetapi',
          'delta' => 'L2DlUv3AAQMwzO0fi0e7IdWPLai93ANC',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'current_search-devtrac7_districts_standard' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_districts_standard',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'pane-devtrac_solr_map_info' => array(
          'module' => 'pane',
          'delta' => 'devtrac_solr_map_info',
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
  t('List of districts with there facets');
  t('Solr,Admin Unit');
  $export['devtrac_solr_district_list'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_district_map';
  $context->description = 'Map on the main district page';
  $context->tag = 'Solr';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_districts' => 'devtrac_solr_view_districts',
        'devtrac_solr_view_districts:map' => 'devtrac_solr_view_districts:map',
      ),
    ),
    'views_modes' => array(
      'values' => array(
        'default' => 'default',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'current_search-devtrac7_districts_standard' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_districts_standard',
          'region' => 'featured',
          'weight' => '-100',
        ),
        'openlayers_plus-blockswitcher' => array(
          'module' => 'openlayers_plus',
          'delta' => 'blockswitcher',
          'region' => 'olmaptext_rightuppercorner',
          'weight' => '-10',
        ),
        'openlayers_geosearch-search-form-results' => array(
          'module' => 'openlayers_geosearch',
          'delta' => 'search-form-results',
          'region' => 'olmaptext_rightuppercorner',
          'weight' => '-9',
        ),
        'pane-devtrac_solr_map_info' => array(
          'module' => 'pane',
          'delta' => 'devtrac_solr_map_info',
          'region' => 'olmaptext_rightuppercorner',
          'weight' => '-8',
        ),
        'current_search-devtrac7_districts_activefacets' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_districts_activefacets',
          'region' => 'olblockpanel',
          'weight' => '-10',
        ),
        'facetapi-OlBNET0M65Y7QzSkYoPGWTodKG8vgbU3' => array(
          'module' => 'facetapi',
          'delta' => 'OlBNET0M65Y7QzSkYoPGWTodKG8vgbU3',
          'region' => 'olblockpanel',
          'weight' => '-8',
        ),
        'facetapi-lG63gd04gBnS5U1DXSGUqoMdj9xvvjgF' => array(
          'module' => 'facetapi',
          'delta' => 'lG63gd04gBnS5U1DXSGUqoMdj9xvvjgF',
          'region' => 'olblockpanel',
          'weight' => '-7',
        ),
        'facetapi-L2DlUv3AAQMwzO0fi0e7IdWPLai93ANC' => array(
          'module' => 'facetapi',
          'delta' => 'L2DlUv3AAQMwzO0fi0e7IdWPLai93ANC',
          'region' => 'olblockpanel',
          'weight' => '-6',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'mappage_layout',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Map on the main district page');
  t('Solr');
  $export['devtrac_solr_district_map'] = $context;

  return $export;
}
