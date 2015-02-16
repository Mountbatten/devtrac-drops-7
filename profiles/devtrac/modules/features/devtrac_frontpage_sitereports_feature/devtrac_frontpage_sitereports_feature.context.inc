<?php
/**
 * @file
 * devtrac_frontpage_sitereports_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac_frontpage_sitereports_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'devtrac_frontpage_sitereports_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'devtrac_frontpage_sitereports' => 'devtrac_frontpage_sitereports',
        'frontpage_recent_sitereports' => 'frontpage_recent_sitereports',
        'frontpage_slideshow' => 'frontpage_slideshow',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nodesinblock-1' => array(
          'module' => 'nodesinblock',
          'delta' => '1',
          'region' => 'content',
          'weight' => '-1000',
        ),
        'nodesinblock-0' => array(
          'module' => 'nodesinblock',
          'delta' => '0',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-83c26643a608e9d16863c934d081821d' => array(
          'module' => 'views',
          'delta' => '83c26643a608e9d16863c934d081821d',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-frontpage_slideshow-block' => array(
          'module' => 'views',
          'delta' => 'frontpage_slideshow-block',
          'region' => 'postscript_second',
          'weight' => '-9',
        ),
        'openlayers_blocks-a3bc3cde_block' => array(
          'module' => 'openlayers_blocks',
          'delta' => 'a3bc3cde_block',
          'region' => 'preface_first',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_node_page_layout',
    ),
  );
  $context->condition_mode = 0;
  $export['devtrac_frontpage_sitereports_context'] = $context;

  return $export;
}
