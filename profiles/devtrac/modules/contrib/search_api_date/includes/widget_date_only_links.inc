<?php

/**
 * @file
 * The facetapi_date_only_links plugin class.
 */

/**
 * Widget that only renders date facets as a list of clickable links.
 * So it will not render the time facets.
 *
 * Links make it easy for users to narrow down their search results by clicking
 * on them. The render arrays use theme_item_list() to generate the HTML markup.
 */
class FacetapiWidgetDateOnlyLinks extends FacetapiWidgetLinks {

  /**
   * Overrides FacetapiWidgetLinks::__construct().
   */
  public function __construct($id, array $realm, FacetapiFacet $facet, stdClass $settings) {
    parent::__construct($id, $realm, $facet, $settings);
  }

  /**
   * Transforms the render array for use with theme_item_list().
   *
   * The recursion allows this function to act on the various levels of a
   * hierarchical data set.
   *
   * @param array $build
   *   The items in the facet's render array being transformed.
   *
   * @return array
   *   The "items" parameter for theme_item_list().
   */
  function buildListItems($build) {
    $settings = $this->settings->settings;

    // Initializes links attributes, adds rel="nofollow" if configured.
    $attributes = ($settings['nofollow']) ? array('rel' => 'nofollow') : array();
    $attributes += array('class' => $this->getItemClasses());

    // Builds rows.
    $items = array();
    foreach ($build as $value => $item) {
      // Year, eg. '2011', will be interpreted as a time, eg. '20:11'.
      if (is_numeric($item['#markup'])) {
        $timestamp = strtotime('January ' . $item['#markup']);
      }
      else {
        $timestamp = strtotime($item['#markup']);
      }
      $timezoneoffset = date('Z', $timestamp);
      if (($timestamp + $timezoneoffset) % 86400 != 0) {
        continue;
      }
      $row = array('class' => array());

      // Initializes variables passed to theme hook.
      $variables = array(
        'text' => $item['#markup'],
        'path' => $item['#path'],
        'count' => $item['#count'],
        'options' => array(
          'attributes' => $attributes,
          'html' => $item['#html'],
          'query' => $item['#query'],
        ),
      );

      // Adds the facetapi-zero-results class to items that have no results.
      if (!$item['#count']) {
        $variables['options']['attributes']['class'][] = 'facetapi-zero-results';
      }

      // If the item has no children, it is a leaf.
      if (empty($item['#item_children'])) {
        $row['class'][] = 'leaf';
      }
      else {
        // If the item is active or the "show_expanded" setting is selected,
        // show this item as expanded so we see its children.
        if ($item['#active'] || !empty($settings['show_expanded'])) {
          $row['class'][] = 'expanded';
          $row['children'] = $this->buildListItems($item['#item_children']);
        }
        else {
          $row['class'][] = 'collapsed';
        }
      }

      // Gets theme hook, adds last minute classes.
      $class = ($item['#active']) ? 'facetapi-active' : 'facetapi-inactive';
      $variables['options']['attributes']['class'][] = $class;

      // Themes the link, adds row to items.
      $row['data'] = theme($item['#theme'], $variables);
      $items[] = $row;
    }

    return $items;
  }
}
