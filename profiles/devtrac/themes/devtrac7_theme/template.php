<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 *
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

/**
 * Returns HTML for the group list title.
 *
 * @param $variables
 *   An associative array containing:
 *   - title: The title of the group list.
 *
 * @ingroup themeable
 */
function devtrac7_theme_current_search_group_title(array $variables) {
  return "";//'<h4 class="current-search-group-title">' . $variables['title'] . '</h4>';
}

/**
 * Adds wrapper markup around the group.
 *
 * @param $variables
 *   An associative array containing:
 *   - element: The render array for the current search group.
 *
 * @ingroup themeable
 */
function devtrac7_theme_current_search_group_wrapper(array $variables) {
  $element = $variables['element'];
  return $element['#children'];
}

/**
 * Returns HTML for a grouped active facet item.
 *
 * @param $variables
 *   An associative array containing the keys 'text', 'path', 'options', and
 *   'count'.
 *
 * @ingroup themeable
 */
function devtrac7_theme_current_search_link_active($variables) {
  // Builds accessible markup.
  // @see http://drupal.org/node/1316580
  $accessible_vars = array(
    'text' => $variables['text'],
    'active' => TRUE,
  );
  $accessible_markup = theme('facetapi_accessible_markup', $accessible_vars);

  // Sanitizes the link text if necessary.
  $sanitize = empty($variables['options']['html']);
  $variables['text'] = ($sanitize) ? check_plain($variables['text']) : $variables['text'];

  // Adds the deactivation widget.
  $variables['text'] .= theme('current_search_deactivate_widget');

  // Resets link text, sets to options to HTML since we already sanitized the
  // link text and are providing additional markup for accessibility.
  $variables['text'] .= ' ' . $accessible_markup;
  $variables['options']['html'] = TRUE;
  $variables['options']['attributes']['class'][] = 'beautytips';

  return theme_link($variables);
}

/**
 * Returns HTML for the deactivation widget.
 *
 * @param $variables
 *   An associative array containing:
 *   - text: The text of the facet link.
 *
 * @ingroup themable
 */
function devtrac7_theme_facetapi_deactivate_widget($variables) {
  return '[-]';
}

/**
 * Themes a facet link for a value that is currently being searched.
 *
 * WARNING: This is not standard, this is copied from facetapi_collapsible
 *
 * That module we do not use (yet)
 *
 * I copied it because eve started styling with this, and i wanted to delete the facetapi_collapsible module
 * we also changed the (-) in to [-]
 *
 */
function devtrac7_theme_facetapi_link_active($variables) {
  $facet_text = '';
  if (isset($variables['text'])) {
    if (empty($variables['options']['html'])) {
      $facet_text = check_plain(trim($variables['text'], '"'));
    }
    else {
      $facet_text  = $variables['text'];
    }
  }
  $variables['text'] = $facet_text . '<span class="remove">[-]</span>';
  $variables['options']['html'] = TRUE;

  return '<div class="facetapi-facet facetapi-active">' . theme_link($variables) . '</div>';
}

/**
 * Returns HTML for the inactive facet item's count.
 *
 * @param $variables
 *   An associative array containing:
 *   - count: The item's facet count.
 *
 * @ingroup themeable
 */
function devtrac7_theme_facetapi_count($variables) {
  if (isset($variables['count'])) {
    return '<span class="count">(' . (int) $variables['count'] . ')</span>';
  }
  else {
    return "";
  }
}

/**
 * Returns HTML for an active facet item.
 *
 * @param $variables
 *   An associative array containing the keys 'text', 'path', 'options', and
 *   'count'. See the l() and theme_facetapi_count() functions for information
 *   about these variables.
 *
 * @ingroup themeable
 */
function devtrac7_theme_facetapi_link_inactive($variables) {
  // Builds accessible markup.
  // @see http://drupal.org/node/1316580
  $accessible_vars = array(
      'text' => $variables['text'],
      'active' => FALSE,
  );
  $accessible_markup = theme('facetapi_accessible_markup', $accessible_vars);
  $variables['options']['attributes']['class'][] = str_replace(" ", "-",strtolower($variables['text']));

  // Sanitizes the link text if necessary.
  $sanitize = empty($variables['options']['html']);
  $variables['text'] = ($sanitize) ? check_plain($variables['text']) : $variables['text'];

  $variables['text'] .= ' ' . theme('facetapi_count', $variables);

  // Resets link text, sets to options to HTML since we already sanitized the
  // link text and are providing additional markup for accessibility.
  $variables['text'] .= $accessible_markup;
  $variables['options']['html'] = TRUE;
 // if (((drupal_is_front_page()) && ((isset($_GET['display']) && ($_GET['display'] == 'default')) || (!isset($_GET['display'])))) && ((((isset($variables['count'])) && (!((strpos($variables['options']['query']['f'][0], 'taxonomy_vocabulary_1') === FALSE) || (count($variables['options']['query']['f']) > 1))))))) {
 //     return '<span class="counter_number">' . theme('facetapi_count', $variables) . '</span><span class="placetype_match_to_counter_number">' .  theme_link($variables) . '</span>';
 // }
 // else {
  return theme_link($variables);
 // }
}

/**
 * Implementation of hook_theme().
 */
function devtrac7_theme_theme() {
  $items = array();

  $items['site_name'] = array();
  $items['theme_path'] = array();
  // Print friendly page headers.
  $items['print_header'] = array(
    'arguments' => array('page'),
    'template' => 'print-header',
    'path' => drupal_get_path('theme', 'devtrac7_theme') .'/templates',
  );
  $items['print_page'] = array(
    'arguments' => array(),
    'template' => 'print-page',
    'path' => drupal_get_path('theme', 'devtrac7_theme') .'/templates',
  );

  return $items;
}

/**
 * Preprocessor for theme_print_header().
 */
function devtrac7_theme_preprocess_print_header(&$vars) {
  $vars = array(
//    'base_path' => base_path(),
    'theme_path' => path_to_theme(),
    'site_name' => variable_get('site_name', 'Drupal'),
  );
}

/**
 * Preprocessor for theme_print_page().
 */
function devtrac7_theme_preprocess_print_page(&$vars) {
  $vars = array(
    'content' => $vars['page'],
  );
}

/**
 * Implements hook_theme_select()
 * 
 * We want to style the indenting of the hierarchy in chosen controls by 
 * changing the html 
 * 
 */
function devtrac7_theme_select(&$element) {
  array_walk($element['element']['#options'], '_devtrac7_theme_trim_value');
  return theme_select($element);
}

/**
 * Callback function that processes every item in a select
 * 
 * @see devtrac7_theme_select()
 * 
 * @param type $value Value in the select. Can be something else than string
 * for example on the Questions edit page.
 */
function _devtrac7_theme_trim_value(&$value) {
  if (is_string($value)) {
    // Do not replace "- None -" dash
    if (!(strstr($value, "- ") == $value)) {
      // replace "--" with "-- "
      $value = str_replace('--', '-- ',$value);
      // Only replace leading "-" with "- "
      if ((!(strstr($value, "--") == $value)) && (strpos($value, '-') === 0)) {
        $tpvalue = $value;
        $value = str_replace('-', '- ', $tpvalue);
      }
    }
  }
}

/**
 * Returns HTML for an Colorbox image field formatter.
 *
 * @param $variables
 *   An associative array containing:
 *   - item: An array of image data.
 *   - image_style: An optional image style.
 *   - path: An array containing the link 'path' and link 'options'.
 *
 * @ingroup themeable
 */
function devtrac7_theme_image_formatter($variables) {
  $item = $variables['item'];
  if (isset($variables['path']['options'])) {
    $options = $variables['path']['options'];
    if (isset($options['entity_type']) && ($options['entity_type'] == 'taxonomy_term')
        && isset($options['entity']->vid) && ($options['entity']->vid == 8)) {
      // Taxonomy_vocabulary_8 are the OECD codes.
      $term = $options['entity'];
      if (!isset($term->field_term_icon[LANGUAGE_NONE])) {
        return l(theme_image_formatter($variables), 'taxonomy/term/' . $term->tid, array('html' => TRUE));
      }
      $path = file_create_url(image_style_url($variables['image_style'], $item['uri']));
      $activepath = file_create_url(image_style_url(str_replace('color', 'bw', $variables['image_style']), $item['uri']));
      $image = array(
        'path' => $path,
        'alt' => $term->name,
        'title' => $term->description,
        'attributes' => array(
          'class' => array('taxonomy-term-image'),
          'onmouseover' => "this.src='" . $activepath. "'",
          'onmouseout' => "this.src='" . $path ."'",
        ),
      );
      return l(theme('image', $image), 'taxonomy/term/' . $term->tid, array('html' => TRUE));
    }
  }
  return theme_image_formatter($variables);
}

/**
 * Returns HTML for a set of links.
 *
 * We use it to add an extra class to the view mode link items so
 * we can style them properly with a background image for example.
 *
 * @param $variables
 *   An associative array containing:
 *   - links: An associative array of links to be themed. The key for each link
 *     is used as its CSS class. Each link should be itself an array, with the
 *     following elements:
 *     - title: The link text.
 *     - href: The link URL. If omitted, the 'title' is shown as a plain text
 *       item in the links list.
 *     - html: (optional) Whether or not 'title' is HTML. If set, the title
 *       will not be passed through check_plain().
 *     - attributes: (optional) Attributes for the anchor, or for the <span>
 *       tag used in its place if no 'href' is supplied. If element 'class' is
 *       included, it must be an array of one or more class names.
 *     If the 'href' element is supplied, the entire link array is passed to
 *     l() as its $options parameter.
 *   - attributes: A keyed array of attributes for the UL containing the
 *     list of links.
 *   - heading: (optional) A heading to precede the links. May be an
 *     associative array or a string. If it's an array, it can have the
 *     following elements:
 *     - text: The heading text.
 *     - level: The heading level (e.g. 'h2', 'h3').
 *     - class: (optional) An array of the CSS classes for the heading.
 *     When using a string it will be used as the text of the heading and the
 *     level will default to 'h2'. Headings should be used on navigation menus
 *     and any list of links that consistently appears on multiple pages. To
 *     make the heading invisible use the 'element-invisible' CSS class. Do not
 *     use 'display:none', which removes it from screen-readers and assistive
 *     technology. Headings allow screen-reader and keyboard only users to
 *     navigate to or skip the links. See
 *     http://juicystudio.com/article/screen-readers-display-none.php and
 *     http://www.w3.org/TR/WCAG-TECHS/H42.html for more information.
 */
function devtrac7_theme_links(&$variables) {
  // Only change the array when it involves view modes.
  if (isset($variables['attributes']['id']) && ($variables['attributes']['id'] == 'view-modes')) {
    foreach ($variables['links'] as $name => $link) {
      // Only add a class if the link item's title is set.
      if (isset($variables['links'][$name]['attributes']['title'])) {
        // Add anoter class to the default view mode link item.
        // Take the class name from the link item's title.
        $variables['links'][$name]['attributes']['class'][] = str_replace(' ', '-', strtolower($variables['links'][$name]['attributes']['title']));
      }
    }
  }
  // Use function theme_links() to generate the actual html.
  return theme_links($variables);
}

