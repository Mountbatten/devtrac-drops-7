<?php

/**
 * @file
 * SMS campaign sending handler.
 */

class QuestionnaireSmsCampaignSend {
  /**
   * Friendly name of class.
   */
  public function __toString() {
    return t('SMS');
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
   * @todo if it's a big recipients array batch.
   *
   * @param QuestionnaireCampaign $campaign
   *   The campaign send.
   * @param array $recipients
   *   Keyed array of objects to send questionnaire to.
   */
  public function send(QuestionnaireCampaign $campaign, $recipients_array) {
    $queue = DrupalQueue::get('questionnaire_sms_campaign');
    $queue->createQueue();

    foreach ($recipients_array as $entity_type => $recipients) {
      if (is_array($recipients)) {
        foreach ($recipients as $recipient) {
          $item = array($campaign->id, $entity_type, $recipient);
          $queue->createItem($item);
        }
      }
    }
  }
}
