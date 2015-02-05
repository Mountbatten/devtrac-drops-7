<?php

/**
 * @file
 * Block campaign sending handler.
 */

class QuestionnaireBlockCampaignSend {
  /**
   * Friendly name of class.
   */
  public function __toString() {
    return t('Block displayed on the website');
  }

  /**
   * Form elements to add to the sender handler section.
   *
   * @todo parameters to be finalized.
   *
   * @see questionnaire_campaign_node_add().
   * @see self::addFormValidate().
   * @see self::addFormSubmit().
   */
  public function addForm($campaign) {
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
   * Send, or queue to send, questionnaire.
   *
   * @todo see questionnaire/TODO.txt about adding multiple field/submissions.
   *
   * @param QuestionnaireCampaign $campaign
   *   The campaign send.
   * @param array $recipients
   *   Keyed array of objects to send questionnaire to.
   */
  public function send(QuestionnaireCampaign $campaign, $recipients_array) {
    if ($campaign->enabled) {
      foreach ($recipients_array as $entity_type => $recipients) {
        foreach ($recipients as $recipient) {
          $questionnaire = array('id' => $campaign->nid, 'context_type' => 'questionnaire_campaign', 'context_id' => $campaign->id, 'started' => time(), 'updated' => 0, 'completed' => 0, 'qid' => 0);
          $entity = entity_load($entity_type, array($recipient));
          $entity = reset($entity);
          questionnaire_field_entity_add_questionnaire($entity_type, $entity, $campaign->questionnaire_field, $questionnaire);
        }
      }
    }
  }
}
