<?php
/**
 * @file
 * devtrac7_solr_user_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac7_solr_user_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac7_solr_user_context';
  $context->description = 'List of Users';
  $context->tag = 'Solr, user';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac7_solr_user_view' => 'devtrac7_solr_user_view',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'current_search-devtrac7_users_activefacets' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_users_activefacets',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-Hm3LOQqE1Sf9OtYK52GQ7htgdmgRSRGW' => array(
          'module' => 'facetapi',
          'delta' => 'Hm3LOQqE1Sf9OtYK52GQ7htgdmgRSRGW',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-L2DlUv3AAQMwzO0fi0e7IdWPLai93ANC' => array(
          'module' => 'facetapi',
          'delta' => 'L2DlUv3AAQMwzO0fi0e7IdWPLai93ANC',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
        'facetapi-zCvKA214T8ajde4jIuVZiZxqtgKBoWoR' => array(
          'module' => 'facetapi',
          'delta' => 'zCvKA214T8ajde4jIuVZiZxqtgKBoWoR',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-6gyMD1npY939VoVxep1okFiLRCVG9Gsk' => array(
          'module' => 'facetapi',
          'delta' => '6gyMD1npY939VoVxep1okFiLRCVG9Gsk',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-sTzddB7m90kFViJkO939QN1a7YEYIiFR' => array(
          'module' => 'facetapi',
          'delta' => 'sTzddB7m90kFViJkO939QN1a7YEYIiFR',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-DjDdko7vVOuihI8c1c3RsSY3hYq80wZM' => array(
          'module' => 'facetapi',
          'delta' => 'DjDdko7vVOuihI8c1c3RsSY3hYq80wZM',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-GDbEzfxCZAC606tzCznsV0AtHxDj6qsb' => array(
          'module' => 'facetapi',
          'delta' => 'GDbEzfxCZAC606tzCznsV0AtHxDj6qsb',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'facetapi-Z5GxCmjK3PIVJ8fmF9MEg7jOmbRGP2v6' => array(
          'module' => 'facetapi',
          'delta' => 'Z5GxCmjK3PIVJ8fmF9MEg7jOmbRGP2v6',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'facetapi-Gd090Z2GI4FfPHA319dOKUybohZ80jBx' => array(
          'module' => 'facetapi',
          'delta' => 'Gd090Z2GI4FfPHA319dOKUybohZ80jBx',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-kFxN7xn0pE3pHzLzFNLu4Oh2zAujIN99' => array(
          'module' => 'facetapi',
          'delta' => 'kFxN7xn0pE3pHzLzFNLu4Oh2zAujIN99',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
        'current_search-devtrac7_users_standard' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_users_standard',
          'region' => 'featured',
          'weight' => '-100',
        ),
        'pane-user_info' => array(
          'module' => 'pane',
          'delta' => 'user_info',
          'region' => 'featured',
          'weight' => '-50',
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
  t('List of Users');
  t('Solr, user');
  $export['devtrac7_solr_user_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac7_solr_user_graphs';
  $context->description = 'Graphs of Users';
  $context->tag = 'Solr, user';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac7_solr_user_view' => 'devtrac7_solr_user_view',
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
        'quicktabs-devtrac_users_graphs_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'devtrac_users_graphs_tabs',
          'region' => 'content',
          'weight' => '-10',
        ),
        'current_search-devtrac7_users_standard' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_users_standard',
          'region' => 'featured',
          'weight' => '-100',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Graphs of Users');
  t('Solr, user');
  $export['devtrac7_solr_user_graphs'] = $context;

  return $export;
}
