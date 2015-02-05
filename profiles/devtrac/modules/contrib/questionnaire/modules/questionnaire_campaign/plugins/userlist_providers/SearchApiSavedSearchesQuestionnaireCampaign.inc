<?php

/**
 * @file
 * Questionnaire campaign user list provider from a search api saved search.
 */

class SearchApiSavedSearchesQuestionnaireCampaign extends QuestionnaireCampaignUserlist {
  /**
   * Friendly name of the class.
   */
  public function __toString() {
    return t('Search API saved searches');
  }

  /**
   * Form elements to add userlist.
   */
  public function addForm($element_name, $form, $form_state) {
    $key = explode('][', 'values][' . $element_name);
    $value = drupal_array_get_nested_value($form_state, $key);
    // defaults = from campaign.
    $searches = $this->saved_searches_list();

    if (empty($searches)) {
      return array(
        '#markup' => t('First create a saved search to use.'),
      );
    }
    else {
      return array(
        '#type' => 'select',
        '#title' => t('Save search'),
        // '#default_vaule' => $campaign->userlist();
        '#options' => $searches,
        '#description' => t('Select the saved search to provide the list of recipients of the questionnaire'),
      );
    }
  }

  /**
   * Return the user list.
   *
   * Based on search_api_saved_searches_check_updates().
   * Should the saved searches diff algorithm provide too much, then altering
   * the search based on $campaign->lastrun might be worth investigating. It
   * would have to be much more exactly timed to when the search happens.
   */
  public function getList(QuestionnaireCampaign $campaign) {
    $new_results = array();

    $search = entity_load('search_api_saved_search', array($campaign->userlist_id));
    $search = current($search);
    $settings = $search->settings();
    $index = $settings->index();
    $query = $search->query();

    try {
      // Add exclusion for users already in the current campaign.
      $filter = $query->createFilter();
      $query->condition($campaign->questionnaire_field . ':context_combined', 'questionnaire_campaign' . ':' . $campaign->id, '<>');
      $query->filter($filter);
    }
    catch (SearchApiException $e) {
      watchdog('questionnaire_campaign', 'Unable to filter saved search by questionnaire field. If repeating the campaign you may need to add Context Type:Context Id to the search fields. Search API said: %msg', array('%msg' => $e->getMessage()), WATCHDOG_NOTICE);
    }

    // Run query as user who owns search.
    $search->query['options']['search_api_access_account'] = $search->uid;
    $response = $query->execute();
    if (! empty($response['results'])) {
      $results = array_keys($response['results']);
      $new_results = drupal_map_assoc($results);
    }
    return array($index->item_type => $new_results);
  }

  /**
   * Retrieve array of saved searches search_id => search name.
   */
  private function saved_searches_list() {
    $searches_list = array();

    // @todo restrict this to searches saved for the purpose.
    $searches = search_api_saved_search_load_multiple();
    foreach ($searches as $search) {
      $searches_list[$search->id] = $search->name;
    }

    return $searches_list;
  }
}
