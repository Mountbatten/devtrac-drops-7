<?php

/**
 * @file
 * Basic views integration.
 */

/**
 * Implementation of hook_views_data_alter().
 *
 * Using entityapi default for now. Just adding edit link.
 */
function questionnaire_campaign_views_data_alter(&$data) {
  $data['questionnaire_campaign']['edit'] = array(
    'field' => array(
      'title' => t('Edit link'),
      'help' => t('Provide a simple link to edit the campaign.'),
      'handler' => 'questionnaire_campaign_handler_field_link_edit',
    ),
  );
  $data['questionnaire_campaign']['toggle'] = array(
    'field' => array(
      'title' => t('Disable link'),
      'help' => t('Provide a simple link to disable/enable the campaign.'),
      'handler' => 'questionnaire_campaign_handler_field_link_toggle',
    ),
  );
}
