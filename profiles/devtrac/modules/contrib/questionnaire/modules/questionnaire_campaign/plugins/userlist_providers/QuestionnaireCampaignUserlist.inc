<?php

/**
 * @file
 * Base class for campaign user list provider.
 */

class QuestionnaireCampaignUserlist {
  /**
   * Friendly name of class.
   */
  public function __toString() {
    return t('A name has not been set for this list handler.');
  }

  /**
   * Form elements to add to the userlist provider section.
   *
   * @param string $element_name
   *   The element being added to, presently sent recipients][userlist_id. Use
   *   drupal_array_get_nested_value to retrieve this form value. This allows
   *   for the parent form to be updated without breaking the plugin.
   * @param array $form
   * @param array $form_state
   *
   * @return
   *   Element array to be added to the form.
   *
   * @see questionnaire_campaign_node_add().
   * @see self::addFormValidate().
   * @see self::addFormSubmit().
   */
  public function addForm($element_name, $form, $form_state) {
    return array();
  }

  /**
   * Add any validate of form elements.
   *
   * @param string $element_name
   *   The name of the element on the form.
   * @param array $form
   * @param array $form_state
   */
  public function addFormValidate($element_name, $form, &$form_state) {
  }

  /**
   * Additional submission handling for add form.
   */
  public function addFormSubmit($element_name, $form, &$form_state) {
  }

  /**
   * Retrieve the list for sending the questionnaire.
   *
   * @param QuestionnaireCampaign $campaign
   *   The campaign to return the list for.
   *
   * @return array
   *   Keyed array of entity ids to send questionnaire to.
   *   array( entity_type => array(entity_key) )
   */
  public function getList(QuestionnaireCampaign $campaign) {
    return array();
  }
}
