<?php

/**
 * @file
 *
 * Filter to exclude inaccessible facet items from being shown on the facet
 *
 * In the case that a user does not have rights to access an entity,
 * facetapi returns the entity_id instead of the name in the #markup,
 * but it is not excluded from display.
 * This plugin allows them to be excluded from display.
 *
 * This is heavily inspired by the excellent blog post from Trellon
 * http://www.trellon.com/content/blog/apachesolr-and-facetapi
 */

/**
 * Plugin that excludes inaccessible facet items.
 */
class FacetapiFilterInaccessibleItems extends FacetapiFilter {

  /**
   * Filters inaccessible facet items.
   */
  public function execute(array $build) {
  	// If the filter is not on, just return the complete $build
    if ($this->settings->settings['inaccessible'] == 0) {
      return $build;
    }

    // The filter is on, so we filter inaccessible items out.
    $searcher = $this->settings->searcher;
    $facet_name = $this->settings->facet;
    $facet = facetapi_facet_load($facet_name, $searcher);
    $entity_type = $facet['map options']['field']['entity_type'];

    $filtered_build = array();
    foreach ($build as $key => $item) {
      // Here we try to load the entity.
      // The result will be an empty array if it's inaccessible.
      $result = entity_load($entity_type, array($key));
      if ($result == array()) {
        continue;
      }
      $filtered_build[$key] = $item;
    }

    return $filtered_build;
  }

  /**
   * Adds settings to the filter form.
   */
  public function settingsForm(&$form, &$form_state) {
    $form['inaccessible'] = array(
      '#title' => t('Exclude inaccessible facet items'),
      '#type' => 'checkbox',
      '#description' => t('Whether or not inaccessible facet items should be excluded.'),
      '#default_value' => $this->settings->settings['inaccessible'],
    );
  }

  /**
   * Returns an array of default settings.
   */
  public function getDefaultSettings() {
    return array(
      'inaccessible' => 0,
    );
  }
}
