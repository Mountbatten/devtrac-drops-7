<?php
/**
 * @file
 * devtrac7_solr_search_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac7_solr_search_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_sitereports_graphs';
  $context->description = 'Shows graphs on Sitevisit Solr pages';
  $context->tag = 'Solr';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_sitevisits' => 'devtrac_solr_view_sitevisits',
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
        'quicktabs-devtrac_sitereports_graphs_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'devtrac_sitereports_graphs_tabs',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shows graphs on Sitevisit Solr pages');
  t('Solr');
  $export['devtrac_solr_sitereports_graphs'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_sitereports_main';
  $context->description = 'Manages layout on the Site Visit Map Page';
  $context->tag = 'Solr';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_sitevisits' => 'devtrac_solr_view_sitevisits',
        'devtrac_solr_view_sitevisits:map' => 'devtrac_solr_view_sitevisits:map',
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
        'current_search-devtrac7_sitevisits_standard' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_sitevisits_standard',
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
          'weight' => '-8',
        ),
        'devtrac7_realms-19dqfDK2pFqdJCRH9C971eH0QN9IVhvV' => array(
          'module' => 'devtrac7_realms',
          'delta' => '19dqfDK2pFqdJCRH9C971eH0QN9IVhvV',
          'region' => 'olmaptext_rightuppercorner',
          'weight' => '-6',
        ),
        'pane-front_about_information' => array(
          'module' => 'pane',
          'delta' => 'front_about_information',
          'region' => 'olmaptext_rightuppercorner',
          'weight' => '-5',
        ),
        'current_search-devtrac7_sitevisits_activefacets' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_sitevisits_activefacets',
          'region' => 'olblockpanel',
          'weight' => '-10',
        ),
        'facetapi-qrOAtXahw3kNaekhPRfD9AvqUQPAIGeX' => array(
          'module' => 'facetapi',
          'delta' => 'qrOAtXahw3kNaekhPRfD9AvqUQPAIGeX',
          'region' => 'olblockpanel',
          'weight' => '-9',
        ),
        'facetapi-LXCSjuspI4hSTSg0c8hCqGwN6VGS7POA' => array(
          'module' => 'facetapi',
          'delta' => 'LXCSjuspI4hSTSg0c8hCqGwN6VGS7POA',
          'region' => 'olblockpanel',
          'weight' => '-8',
        ),
        'facetapi-aMVw0EOrO22VgnzwzXrzohRPrftQKd3s' => array(
          'module' => 'facetapi',
          'delta' => 'aMVw0EOrO22VgnzwzXrzohRPrftQKd3s',
          'region' => 'olblockpanel',
          'weight' => '-7',
        ),
        'facetapi-pTRO3d6ZZTSp4x2G0recyLN6CAHMBoqp' => array(
          'module' => 'facetapi',
          'delta' => 'pTRO3d6ZZTSp4x2G0recyLN6CAHMBoqp',
          'region' => 'olblockpanel',
          'weight' => '-6',
        ),
        'facetapi-Vwf9Le2WI55HoXZ7c3kuoOSWH06fVYFO' => array(
          'module' => 'facetapi',
          'delta' => 'Vwf9Le2WI55HoXZ7c3kuoOSWH06fVYFO',
          'region' => 'olblockpanel',
          'weight' => '-5',
        ),
        'facetapi-3grH78sRONBJsBCG4czO3CXhhLEm5ZK1' => array(
          'module' => 'facetapi',
          'delta' => '3grH78sRONBJsBCG4czO3CXhhLEm5ZK1',
          'region' => 'olblockpanel',
          'weight' => '-4',
        ),
        'facetapi-krL97bH45g1x3ci0VXRJQY1UMtoKw40l' => array(
          'module' => 'facetapi',
          'delta' => 'krL97bH45g1x3ci0VXRJQY1UMtoKw40l',
          'region' => 'olblockpanel',
          'weight' => '-3',
        ),
        'facetapi-1MOwyanJkNRdOpBtS0C089qkom59uMzK' => array(
          'module' => 'facetapi',
          'delta' => '1MOwyanJkNRdOpBtS0C089qkom59uMzK',
          'region' => 'olblockpanel',
          'weight' => '-2',
        ),
        'facetapi-UNfXM8tHO5fV8taZA5mkuesmTwcEk3zW' => array(
          'module' => 'facetapi',
          'delta' => 'UNfXM8tHO5fV8taZA5mkuesmTwcEk3zW',
          'region' => 'olblockpanel',
          'weight' => '-1',
        ),
        'facetapi-2TzkoHt1hR709cgaOW08O0DZM9HYN7o8' => array(
          'module' => 'facetapi',
          'delta' => '2TzkoHt1hR709cgaOW08O0DZM9HYN7o8',
          'region' => 'olblockpanel',
          'weight' => '0',
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
  t('Manages layout on the Site Visit Map Page');
  t('Solr');
  $export['devtrac_solr_sitereports_main'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_solr_sitereports_notmap';
  $context->description = 'Context that manages things that happen on non map pages for site reports';
  $context->tag = 'Solr,sitereports';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_sitevisits' => 'devtrac_solr_view_sitevisits',
      ),
    ),
    'views_modes' => array(
      'values' => array(
        'graphs' => 'graphs',
        'list' => 'list',
        'tagcloud' => 'tagcloud',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'current_search-devtrac7_sitevisits_standard' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_sitevisits_standard',
          'region' => 'featured',
          'weight' => '-100',
        ),
        'pane-front_about_information' => array(
          'module' => 'pane',
          'delta' => 'front_about_information',
          'region' => 'featured',
          'weight' => '-50',
        ),
        'current_search-devtrac7_sitevisits_activefacets' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_sitevisits_activefacets',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-qrOAtXahw3kNaekhPRfD9AvqUQPAIGeX' => array(
          'module' => 'facetapi',
          'delta' => 'qrOAtXahw3kNaekhPRfD9AvqUQPAIGeX',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-LXCSjuspI4hSTSg0c8hCqGwN6VGS7POA' => array(
          'module' => 'facetapi',
          'delta' => 'LXCSjuspI4hSTSg0c8hCqGwN6VGS7POA',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-aMVw0EOrO22VgnzwzXrzohRPrftQKd3s' => array(
          'module' => 'facetapi',
          'delta' => 'aMVw0EOrO22VgnzwzXrzohRPrftQKd3s',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-pTRO3d6ZZTSp4x2G0recyLN6CAHMBoqp' => array(
          'module' => 'facetapi',
          'delta' => 'pTRO3d6ZZTSp4x2G0recyLN6CAHMBoqp',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-Vwf9Le2WI55HoXZ7c3kuoOSWH06fVYFO' => array(
          'module' => 'facetapi',
          'delta' => 'Vwf9Le2WI55HoXZ7c3kuoOSWH06fVYFO',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-3grH78sRONBJsBCG4czO3CXhhLEm5ZK1' => array(
          'module' => 'facetapi',
          'delta' => '3grH78sRONBJsBCG4czO3CXhhLEm5ZK1',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-krL97bH45g1x3ci0VXRJQY1UMtoKw40l' => array(
          'module' => 'facetapi',
          'delta' => 'krL97bH45g1x3ci0VXRJQY1UMtoKw40l',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'facetapi-1MOwyanJkNRdOpBtS0C089qkom59uMzK' => array(
          'module' => 'facetapi',
          'delta' => '1MOwyanJkNRdOpBtS0C089qkom59uMzK',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
        'facetapi-UNfXM8tHO5fV8taZA5mkuesmTwcEk3zW' => array(
          'module' => 'facetapi',
          'delta' => 'UNfXM8tHO5fV8taZA5mkuesmTwcEk3zW',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
        'facetapi-2TzkoHt1hR709cgaOW08O0DZM9HYN7o8' => array(
          'module' => 'facetapi',
          'delta' => '2TzkoHt1hR709cgaOW08O0DZM9HYN7o8',
          'region' => 'sidebar_first',
          'weight' => '0',
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
  t('Context that manages things that happen on non map pages for site reports');
  t('Solr,sitereports');
  $export['devtrac_solr_sitereports_notmap'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'solr_tagcloud_page';
  $context->description = 'Shows the Tag Cloud facet in the content area';
  $context->tag = 'Solr';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_sitevisits' => 'devtrac_solr_view_sitevisits',
      ),
    ),
    'views_modes' => array(
      'values' => array(
        'tagcloud' => 'tagcloud',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-RzVtQKnBDvd1Iorpp8r35xyViY4P0xoY' => array(
          'module' => 'facetapi',
          'delta' => 'RzVtQKnBDvd1Iorpp8r35xyViY4P0xoY',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shows the Tag Cloud facet in the content area');
  t('Solr');
  $export['solr_tagcloud_page'] = $context;

  return $export;
}
