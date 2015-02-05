 <?php

/**
 * @file
 * Widget that renders facets as a populated editable text field.
 */

/**
 * Extends FacetapiWidget to provide a textfield widget.
 */
class FacetapiWidgetTextfield extends FacetapiWidget {

  /**
   * Implements FacetapiWidget::__construct().
   *
   * Overrides constructor to reset the key.
   */
  public function __construct($id, array $realm, FacetapiFacet $facet, stdClass $settings) {
    parent::__construct($id, $realm, $facet, $settings);
    $this->key = $facet['name'];
  }

  /**
   * Implements FacetapiWidget::execute().
   */
  public function execute() {
    // Sets the key, captures the facet's render array.
    $element = &$this->build[$this->facet['field alias']];

    $element = array(
      '#theme' => 'facetapi_textfield_widget_form',
      '#items' => $this->buildSearchItems($element),
      '#attributes' => $this->build['#attributes'],
    );

    // Gets around bug in beta2 release of Facet API.
    // @see http://drupal.org/node/1173672
    if (is_array($element['#attributes']['class'])) {
      $element['#attributes']['class'][] = 'facetapi-textfield-widget';
    }
    else {
      $element['#attributes']['class'] .= ' facetapi-textfield-widget';
    }
  }

  /**
   * Recursive function that converts the render array into an array that can be
   * passed to theme_facetapi_textfield_widget_form().
   *
   * @param array $build
   *   The facet's render array.
   *
   * @return array
   *   The "items" parameter for theme_facetapi_textfield_widget_form().
   */
  function buildSearchItems($build) {
    $items = array();
    foreach ($build as $value => $item) {
      $row = array('class' => array());

      $variables = array(
        'text' => $item['#markup'],
        'path' => $item['#path'],
        'options' => array(
          'attributes' => isset($item['#attributes']) ? $item['#attributes'] : array(),
          'html' => $item['#html'],
          'query' => $item['#query'],
        ),
      );

      // Gets theme hook, adds last minute classes.
      $class = ($item['#active']) ? 'facetapi-active' : 'facetapi-inactive';
      $variables['options']['attributes']['class'][] = $class;

      // Themes the link, adds row to items.
      $hook = ($item['#active']) ? 'facetapi_textfield_widget_link_active' : 'facetapi_link_inactive';
      $row['data'] = theme($hook, $variables);
      $items[] = $row;
    }

    return $items;
  }
}
