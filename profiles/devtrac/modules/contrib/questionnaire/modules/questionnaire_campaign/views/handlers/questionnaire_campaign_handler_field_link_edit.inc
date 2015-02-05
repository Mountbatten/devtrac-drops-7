<?php

/**
 * Field handler for a link to edit a campaign.
 */
class questionnaire_campaign_handler_field_link_edit extends views_handler_field {
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

    $form['text'] = array(
      '#type' => 'textfield',
      '#title' => t('Text to display'),
      '#default_value' => $this->options['text'],
    );
  }

  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  function render($values) {
    $id = $this->get_value($values, 'id');
    $nid = $this->get_value($values, 'nid');

    $node = node_load($nid);
    if (! _questionnaire_campaign_node_page_access($node)) {
      return;
    }

    $text = !empty($this->options['text']) ? $this->options['text'] : t('edit');
    return l($text, 'node/' . $nid . '/campaign/' . $id . '/edit', array('query' => drupal_get_destination()));
  }
}
