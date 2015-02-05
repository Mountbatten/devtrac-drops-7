<?php

/**
 * Field handler for a link to enable or disable a campaign.
 */
class questionnaire_campaign_handler_field_link_toggle extends views_handler_field {
  function construct() {
    parent::construct();

    $this->additional_fields['id'] = 'id';
    $this->additional_fields['nid'] = 'nid';
  }

  function option_definition() {
    $options = parent::option_definition();

    $options['text'] = array('default' => '', 'translatable' => TRUE);
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  function render($values) {
    global $user;

    $id = $this->get_value($values, 'id');
    $nid = $this->get_value($values, 'nid');

    $campaign = questionnaire_campaign_load($values->id);

    $text = ($campaign->enabled) ? t('disable') : t('enable');
    $_GET['destination'] = current_path();
    
    if ($campaign->enabled) {
      return l($text, 'node/' . $nid . '/campaign/' . $id . '/status/disable', array('query' => drupal_get_destination()));
    }
    else {
      return l($text, 'node/' . $nid . '/campaign/' . $id . '/status/enable', array('query' => drupal_get_destination()));
    }
  }
}
