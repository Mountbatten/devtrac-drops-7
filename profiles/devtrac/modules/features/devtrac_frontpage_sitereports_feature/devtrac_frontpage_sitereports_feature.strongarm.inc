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
  $strongarm->name = 'nodesinblock_article_block';
  $strongarm->value = array(
    2 => '2',
    1 => 0,
  );
  $export['nodesinblock_article_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_article_collapsed';
  $strongarm->value = 0;
  $export['nodesinblock_article_collapsed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_article_collapsible';
  $strongarm->value = 0;
  $export['nodesinblock_article_collapsible'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_article_label';
  $strongarm->value = 'Nodes in block';
  $export['nodesinblock_article_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_article_render';
  $strongarm->value = 'teaser:1';
  $export['nodesinblock_article_render'] = $strongarm;

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
  $strongarm->name = 'nodesinblock_fieldtrip_block';
  $strongarm->value = array(
    1 => '1',
    2 => 0,
  );
  $export['nodesinblock_fieldtrip_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_fieldtrip_collapsed';
  $strongarm->value = 1;
  $export['nodesinblock_fieldtrip_collapsed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_fieldtrip_collapsible';
  $strongarm->value = 1;
  $export['nodesinblock_fieldtrip_collapsible'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_fieldtrip_label';
  $strongarm->value = 'Nodes in block 1';
  $export['nodesinblock_fieldtrip_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_fieldtrip_render';
  $strongarm->value = 'teaser:1';
  $export['nodesinblock_fieldtrip_render'] = $strongarm;

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
  $strongarm->name = 'nodesinblock_friendlyname_2';
  $strongarm->value = 'Homepage Organisation Article';
  $export['nodesinblock_friendlyname_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_ftritem_block';
  $strongarm->value = array(
    2 => '2',
    1 => 0,
  );
  $export['nodesinblock_ftritem_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_ftritem_collapsed';
  $strongarm->value = 1;
  $export['nodesinblock_ftritem_collapsed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_ftritem_collapsible';
  $strongarm->value = 1;
  $export['nodesinblock_ftritem_collapsible'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_ftritem_label';
  $strongarm->value = 'Nodes in block 2';
  $export['nodesinblock_ftritem_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_ftritem_render';
  $strongarm->value = 'teaser:';
  $export['nodesinblock_ftritem_render'] = $strongarm;

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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_visibility_2';
  $strongarm->value = '1';
  $export['nodesinblock_visibility_2'] = $strongarm;

  return $export;
}
