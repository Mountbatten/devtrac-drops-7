<?php
/**
 * @file
 * devtrac7_solr_search_questions_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac7_solr_search_questions_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'questions';
  $context->description = '';
  $context->tag = 'answers&questions';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_solr_view_questions' => 'devtrac_solr_view_questions',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'current_search-devtrac7_questions_activefacets' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_questions_activefacets',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq' => array(
          'module' => 'facetapi',
          'delta' => 'fSX63uLiWBaiwSKUQwAKSQmEtz0LfZxq',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-YtTGmzsTed723wjNeg6EbRh6pzk1SHJP' => array(
          'module' => 'facetapi',
          'delta' => 'YtTGmzsTed723wjNeg6EbRh6pzk1SHJP',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-I8ahSLEcADyf8r2qefIpTOTnqp19kxHk' => array(
          'module' => 'facetapi',
          'delta' => 'I8ahSLEcADyf8r2qefIpTOTnqp19kxHk',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'current_search-devtrac7_questions_standard' => array(
          'module' => 'current_search',
          'delta' => 'devtrac7_questions_standard',
          'region' => 'featured',
          'weight' => '-100',
        ),
        'pane-statistics_info' => array(
          'module' => 'pane',
          'delta' => 'statistics_info',
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
  t('answers&questions');
  $export['questions'] = $context;

  return $export;
}
