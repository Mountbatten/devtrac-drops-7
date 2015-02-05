<?php

/**
 * @file
 *
 * Filter to dynamically create ranges from numeric facet items.
 *
 * This is heavily inspired by the excellent blog post from Trellon
 * http://www.trellon.com/content/blog/apachesolr-and-facetapi
 */

/**
 * Plugin that creates dynamic ranges from numeric facet items.
 */
class FacetapiFilterDynamicRanges extends FacetapiFilter {

  /**
   * Filters facet items.
   */
  public function execute(array $build) {
    // We assume there is only one search on a page.
    $current_searches = search_api_current_search();
    $current_search = array_shift($current_searches);
    $response = $current_search[1]['search_api_solr_response'];
    // There are only two possible options for the prefix of the fieldname.
    // is_ for integers and fs_ for decimals.
    $fieldname = 'is_' . $this->settings->facet;
    if (!isset($response->stats->stats_fields->{$fieldname})) {
      $fieldname = 'fs_' . $this->settings->facet;
    }
    $stats = $response->stats->stats_fields->{$fieldname};
    // What algorithm are we going to use for creation of the ranges.
    $algorithm = 'search_api_solr_dynamic_ranges_' . $this->settings->settings['range_algorithm'];
    $filtered_build = $algorithm($build, $stats, $this->settings->settings['range_number'], $fieldname);

    return $filtered_build;
  }

  /**
   * Adds settings to the filter form.
   */
  public function settingsForm(&$form, &$form_state) {
    $form['range_number'] = array(
      '#type' => 'textfield',
      '#title' => t('Number of ranges'),
      '#default_value' => $this->settings->settings['range_number'],
      '#description' => t('Enter the number of ranges to create the "range facet".'),
      '#states' => array(
        'visible' => array(
          'select[name="widget"]' => array('value' => $this->id),
        ),
        'enabled' => array(
          'select[name="widget"]' => array('value' => $this->id),
        ),
      ),
    );
    $options = array(
      'linear' => 'Linear',
    );
    $form['range_algorithm'] = array(
      '#type' => 'select',
      '#title' => t('Algorithm'),
      '#options' => $options,
      '#default_value' => $this->settings->settings['range_algorithm'],
      '#description' => t('Algorithm to use for creating ranges for the "range facet".'),
      '#states' => array(
        'visible' => array(
          'select[name="widget"]' => array('value' => $this->id),
        ),
        'enabled' => array(
          'select[name="widget"]' => array('value' => $this->id),
        ),
      ),
    );
  }

  /**
   * Returns an array of default settings.
   */
  public function getDefaultSettings() {
    return array(
      'range_number' => '5',
      'range_algorithm' => 'linear',
    );
  }

}
