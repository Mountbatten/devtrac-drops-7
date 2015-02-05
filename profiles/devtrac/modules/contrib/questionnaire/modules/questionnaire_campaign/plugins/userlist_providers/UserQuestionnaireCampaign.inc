<?php

/**
 * @file
 * Questionnaire campaign user list provider from a search api saved search.
 */
class UserQuestionnaireCampaign extends QuestionnaireCampaignUserlist {
  /**
   * Friendly name of the class.
   */
  public function __toString() {
   return t('Single user');
  }

  /**
   * Form elements to add.
   */
  public function addForm($element_name, $form, $form_state) {
    $key = explode('][', 'values][' . $element_name);
    $value = drupal_array_get_nested_value($form_state, $key);
    return array(
      '#title' => t('User'),
      '#description' => t('The user to send the questionnaire to.'),
      '#type' => 'textfield',
      '#autocomplete_path' =>  'user/autocomplete',
      '#size' => 60,
      '#maxlength' => 500,
      '#required' => TRUE,
      '#default_value' => $value,
    );
  }

  /**
   * Check for a valid user in our element.
   */
  public function addFormValidate($element_name, $form, &$form_state) {
    $key = explode('][', 'values][' . $element_name);
    $value =& drupal_array_get_nested_value($form_state, $key);
    // Do what core does. Yep, db_query on the table.
    $uid = db_query('SELECT uid FROM {users} WHERE name = :name', array(':name' => $value))->fetchField();
    if ($uid) {
      $value = $uid;
    }
    else {
      form_set_error($element_name, t('A valid user name is required'));
    }
  }

  /**
   * Return the user list, our single user, as an array of entity keys.
   */
  public function getList(QuestionnaireCampaign $campaign) {
    return array('user' => array($campaign->userlist_id => $campaign->userlist_id));
  }
}
