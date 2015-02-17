<?php
/**
 * @file
 * devtrac_frontpage_sitereports_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac_frontpage_sitereports_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_contenttypes';
  $strongarm->value = array(
    'page' => 'page',
    'actionitem' => 0,
    'article' => 0,
    'fieldtrip' => 0,
    'ftritem' => 0,
    'place' => 0,
    'questionnaire_question' => 0,
    'questionnaire' => 0,
  );
  $export['nodesinblock_contenttypes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_friendlyname_0';
  $strongarm->value = 'Homepage About Page';
  $export['nodesinblock_friendlyname_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_friendlyname_1';
  $strongarm->value = 'Homepage Organisation Page';
  $export['nodesinblock_friendlyname_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_nrofblocks';
  $strongarm->value = '2';
  $export['nodesinblock_nrofblocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_page_block';
  $strongarm->value = array(
    1 => '1',
    2 => '2',
  );
  $export['nodesinblock_page_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_page_collapsed';
  $strongarm->value = 0;
  $export['nodesinblock_page_collapsed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_page_collapsible';
  $strongarm->value = 0;
  $export['nodesinblock_page_collapsible'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_page_label';
  $strongarm->value = 'Nodes in block';
  $export['nodesinblock_page_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_page_render';
  $strongarm->value = 'teaser:1';
  $export['nodesinblock_page_render'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_referer';
  $strongarm->value = 0;
  $export['nodesinblock_referer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_visibility_0';
  $strongarm->value = '1';
  $export['nodesinblock_visibility_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_visibility_1';
  $strongarm->value = '1';
  $export['nodesinblock_visibility_1'] = $strongarm;

  return $export;
}
