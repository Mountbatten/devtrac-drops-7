<?php
/**
 * @file
 * devtrac7_solr_search_answers_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac7_solr_search_answers_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac7_answers_all';
  $context->description = 'Active when displaying the Answers (List + Graphs)';
  $context->tag = 'Questionnaire';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_answers' => 'devtrac_solr_view_answers',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'current_search-devtrac7_answers_standard' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_answers_standard',
          'region' => 'featured',
          'weight' => '-100',
        ),
        'pane-answers_info' => array(
          'module' => 'pane',
          'delta' => 'answers_info',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'current_search-devtrac7_answers_activefacets' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_answers_activefacets',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-N08gIh08uKIW30Y73lucrvcS3TdWOjF0' => array(
          'module' => 'facetapi',
          'delta' => 'N08gIh08uKIW30Y73lucrvcS3TdWOjF0',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-OfXUzvVxP7aNYIVbx2GFb4gOePGANblo' => array(
          'module' => 'facetapi',
          'delta' => 'OfXUzvVxP7aNYIVbx2GFb4gOePGANblo',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV' => array(
          'module' => 'facetapi',
          'delta' => 'paFQVO6LfCmEW1SqGY8d2NZM6kt7n8TV',
          'region' => 'sidebar_first',
          'weight' => '-7',
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
  t('Active when displaying the Answers');
  t('Questionnaire');
  $export['devtrac7_answers_all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac7_answers_graphs';
  $context->description = 'Active when displaying the Answers Graphs';
  $context->tag = 'Answers & Questions';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_answers' => 'devtrac_solr_view_answers',
      ),
    ),
    'views_modes' => array(
      'values' => array(
        'default' => 'default',
        'graphs' => 'graphs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-devtrac_statistics_graphs_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'devtrac_statistics_graphs_tabs',
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
  t('Active when displaying the Answers Graphs');
  t('Active when displaying the Answers (List + Graphs)');
  t('Answers & Questions');
  $export['devtrac7_answers_graphs'] = $context;

  return $export;
}
