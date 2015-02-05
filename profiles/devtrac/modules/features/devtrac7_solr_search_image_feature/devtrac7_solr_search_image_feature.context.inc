<?php
/**
 * @file
 * devtrac7_solr_search_image_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac7_solr_search_image_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_images_graphs';
  $context->description = 'Search facets and graphs for the Images graphs views mode';
  $context->tag = 'Solr, Images';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_images' => 'devtrac_solr_view_images',
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
        'quicktabs-devtrac_images_graphs_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'devtrac_images_graphs_tabs',
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
  t('Search facets and graphs for the Images graphs views mode');
  t('Solr, Images');
  $export['devtrac_solr_images_graphs'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_images_map';
  $context->description = 'Show images on Images Solr pages';
  $context->tag = 'Solr, Images';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_images' => 'devtrac_solr_view_images',
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
        'current_search-devtrac7_images_standard' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_images_standard',
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
        'pane-images_info' => array(
          'module' => 'pane',
          'delta' => 'images_info',
          'region' => 'olmaptext_rightuppercorner',
          'weight' => '-8',
        ),
        'current_search-devtrac7_images_activefacets' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_images_activefacets',
          'region' => 'olblockpanel',
          'weight' => '-10',
        ),
        'facetapi-0136jCOr0qNxdBvEu1eFd9dmLJJPrIRi' => array(
          'module' => 'facetapi',
          'delta' => '0136jCOr0qNxdBvEu1eFd9dmLJJPrIRi',
          'region' => 'olblockpanel',
          'weight' => '-9',
        ),
        'facetapi-P874lkjf183H8nuvpJUZqB0HG1BJebo7' => array(
          'module' => 'facetapi',
          'delta' => 'P874lkjf183H8nuvpJUZqB0HG1BJebo7',
          'region' => 'olblockpanel',
          'weight' => '-8',
        ),
        'facetapi-QvGB2CkcCz2G8sbizpLOYqZ5LoUNYRty' => array(
          'module' => 'facetapi',
          'delta' => 'QvGB2CkcCz2G8sbizpLOYqZ5LoUNYRty',
          'region' => 'olblockpanel',
          'weight' => '-7',
        ),
        'facetapi-HBWkP77vlaAoT15ngZqUe60gDBnS6wpL' => array(
          'module' => 'facetapi',
          'delta' => 'HBWkP77vlaAoT15ngZqUe60gDBnS6wpL',
          'region' => 'olblockpanel',
          'weight' => '-6',
        ),
        'facetapi-KmUKKR3hGbSOSRidaVNmAkT8C6lBQtoi' => array(
          'module' => 'facetapi',
          'delta' => 'KmUKKR3hGbSOSRidaVNmAkT8C6lBQtoi',
          'region' => 'olblockpanel',
          'weight' => '-5',
        ),
        'facetapi-OTPskdHShzgRK9sT6Cu3fNYPQTQZyRI1' => array(
          'module' => 'facetapi',
          'delta' => 'OTPskdHShzgRK9sT6Cu3fNYPQTQZyRI1',
          'region' => 'olblockpanel',
          'weight' => '-4',
        ),
        'facetapi-ZOh4o0QIjo7sMPGZSMu1AsVVr5ZGCcR5' => array(
          'module' => 'facetapi',
          'delta' => 'ZOh4o0QIjo7sMPGZSMu1AsVVr5ZGCcR5',
          'region' => 'olblockpanel',
          'weight' => '-3',
        ),
        'facetapi-WHZSfP29NWWh1BNzV5wEjrGrMLKOl4bM' => array(
          'module' => 'facetapi',
          'delta' => 'WHZSfP29NWWh1BNzV5wEjrGrMLKOl4bM',
          'region' => 'olblockpanel',
          'weight' => '-2',
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
  t('Show images on Images Solr pages');
  t('Solr, Images');
  $export['devtrac_solr_images_map'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_images_no_map';
  $context->description = 'Facets shown on all Image view modes without map';
  $context->tag = 'Solr, Images';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_images' => 'devtrac_solr_view_images',
      ),
    ),
    'views_modes' => array(
      'values' => array(
        'graphs' => 'graphs',
        'grid' => 'grid',
        'list' => 'list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'current_search-devtrac7_images_standard' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_images_standard',
          'region' => 'featured',
          'weight' => '-100',
        ),
        'pane-images_info' => array(
          'module' => 'pane',
          'delta' => 'images_info',
          'region' => 'featured',
          'weight' => '-50',
        ),
        'current_search-devtrac7_images_activefacets' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_images_activefacets',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-0136jCOr0qNxdBvEu1eFd9dmLJJPrIRi' => array(
          'module' => 'facetapi',
          'delta' => '0136jCOr0qNxdBvEu1eFd9dmLJJPrIRi',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-P874lkjf183H8nuvpJUZqB0HG1BJebo7' => array(
          'module' => 'facetapi',
          'delta' => 'P874lkjf183H8nuvpJUZqB0HG1BJebo7',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-QvGB2CkcCz2G8sbizpLOYqZ5LoUNYRty' => array(
          'module' => 'facetapi',
          'delta' => 'QvGB2CkcCz2G8sbizpLOYqZ5LoUNYRty',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-HBWkP77vlaAoT15ngZqUe60gDBnS6wpL' => array(
          'module' => 'facetapi',
          'delta' => 'HBWkP77vlaAoT15ngZqUe60gDBnS6wpL',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-KmUKKR3hGbSOSRidaVNmAkT8C6lBQtoi' => array(
          'module' => 'facetapi',
          'delta' => 'KmUKKR3hGbSOSRidaVNmAkT8C6lBQtoi',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-OTPskdHShzgRK9sT6Cu3fNYPQTQZyRI1' => array(
          'module' => 'facetapi',
          'delta' => 'OTPskdHShzgRK9sT6Cu3fNYPQTQZyRI1',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-ZOh4o0QIjo7sMPGZSMu1AsVVr5ZGCcR5' => array(
          'module' => 'facetapi',
          'delta' => 'ZOh4o0QIjo7sMPGZSMu1AsVVr5ZGCcR5',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'facetapi-WHZSfP29NWWh1BNzV5wEjrGrMLKOl4bM' => array(
          'module' => 'facetapi',
          'delta' => 'WHZSfP29NWWh1BNzV5wEjrGrMLKOl4bM',
          'region' => 'sidebar_first',
          'weight' => '-2',
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
  t('Facets shown on all Image view modes without map');
  t('Solr, Images');
  $export['devtrac_solr_images_no_map'] = $context;

  return $export;
}
