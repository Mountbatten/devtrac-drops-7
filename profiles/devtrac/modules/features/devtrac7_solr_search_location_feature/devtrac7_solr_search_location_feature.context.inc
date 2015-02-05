<?php
/**
 * @file
 * devtrac7_solr_search_location_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac7_solr_search_location_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_locations_graphs';
  $context->description = '';
  $context->tag = 'Solr, Locations';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_locations' => 'devtrac_solr_view_locations',
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
        'quicktabs-devtrac_locations_graphs_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'devtrac_locations_graphs_tabs',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Solr, Locations');
  $export['devtrac_solr_locations_graphs'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_locations_list';
  $context->description = '';
  $context->tag = 'Solr, Locations';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_locations' => 'devtrac_solr_view_locations',
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
        'current_search-devtrac7_locations_activefacets' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_locations_activefacets',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-j33WJ0dIJxhKI8LoCF4ocXtCsBUvr0HD' => array(
          'module' => 'facetapi',
          'delta' => 'j33WJ0dIJxhKI8LoCF4ocXtCsBUvr0HD',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-NyR3gAwd0DMH1wd1cTAkAuODwiRcyqmX' => array(
          'module' => 'facetapi',
          'delta' => 'NyR3gAwd0DMH1wd1cTAkAuODwiRcyqmX',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-F1uLPOlCDXrjeUarLsG1atIlmE6kphRD' => array(
          'module' => 'facetapi',
          'delta' => 'F1uLPOlCDXrjeUarLsG1atIlmE6kphRD',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-J7sj75M1E0Yh4LqeD6Wh7BiCFRxi6auZ' => array(
          'module' => 'facetapi',
          'delta' => 'J7sj75M1E0Yh4LqeD6Wh7BiCFRxi6auZ',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'current_search-devtrac7_locations_standard' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_locations_standard',
          'region' => 'featured',
          'weight' => '-100',
        ),
        'pane-locations_info' => array(
          'module' => 'pane',
          'delta' => 'locations_info',
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
  t('Solr, Locations');
  $export['devtrac_solr_locations_list'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_locations_map';
  $context->description = 'Locations Map Page';
  $context->tag = 'Solr, Locations';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_locations' => 'devtrac_solr_view_locations',
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
        'current_search-devtrac7_locations_standard' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_locations_standard',
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
        'pane-locations_info' => array(
          'module' => 'pane',
          'delta' => 'locations_info',
          'region' => 'olmaptext_rightuppercorner',
          'weight' => '-8',
        ),
        'current_search-devtrac7_locations_activefacets' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_locations_activefacets',
          'region' => 'olblockpanel',
          'weight' => '-10',
        ),
        'facetapi-j33WJ0dIJxhKI8LoCF4ocXtCsBUvr0HD' => array(
          'module' => 'facetapi',
          'delta' => 'j33WJ0dIJxhKI8LoCF4ocXtCsBUvr0HD',
          'region' => 'olblockpanel',
          'weight' => '-9',
        ),
        'facetapi-NyR3gAwd0DMH1wd1cTAkAuODwiRcyqmX' => array(
          'module' => 'facetapi',
          'delta' => 'NyR3gAwd0DMH1wd1cTAkAuODwiRcyqmX',
          'region' => 'olblockpanel',
          'weight' => '-8',
        ),
        'facetapi-J7sj75M1E0Yh4LqeD6Wh7BiCFRxi6auZ' => array(
          'module' => 'facetapi',
          'delta' => 'J7sj75M1E0Yh4LqeD6Wh7BiCFRxi6auZ',
          'region' => 'olblockpanel',
          'weight' => '-7',
        ),
        'facetapi-F1uLPOlCDXrjeUarLsG1atIlmE6kphRD' => array(
          'module' => 'facetapi',
          'delta' => 'F1uLPOlCDXrjeUarLsG1atIlmE6kphRD',
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
  t('Locations Map Page');
  t('Solr, Locations');
  $export['devtrac_solr_locations_map'] = $context;

  return $export;
}
