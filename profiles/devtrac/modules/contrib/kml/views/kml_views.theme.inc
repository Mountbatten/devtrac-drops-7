<?php

/**
 * @file
 * Theming functions for KML module views output.
 */

function template_preprocess_views_view_kml(&$vars) {
  $view = $vars['view'];

  $points = $view->style_plugin->map_rows($vars['rows']);

  $style = theme('kml_style', array('points' => $points));

  $rows = '';
  foreach ($points as $point) {
    $rows .= theme('kml_placemark', array('point' => $point, 'points' => $points));
  }

  $vars['rows'] = $rows;
  $vars['style'] = $style;
  $vars['viewtitle'] = $view->get_title();

  // Checks if filename is manually specified in view style options otherwise
  // it sets it as the name of the view.
  if (!empty($view->style_options['filename'])) {
    $filename = $view->style_options['filename'] . '.kml';
  }
  else {
    $filename = $vars['viewtitle'] . '.kml';
  }

  if (empty($vars['view']->live_preview)) {
    drupal_add_http_header('Content-Type', 'application/vnd.google-earth.kml+xml; charset=utf-8');
    drupal_add_http_header('Content-Disposition', "attachment; filename=\"$filename\"");
  }
}

/**
 * Preprocess for theme('kml_placemark').
 */
function template_preprocess_kml_placemark(&$vars) {
  $vars['name'] = filter_xss_admin($vars['point']['name']);
  $vars['description'] = filter_xss_admin($vars['point']['description']);
  $vars['coords'] = check_plain($vars['point']['point']);
  $vars['styleUrl'] = isset($vars['point']['styleUrl']) ? check_plain($vars['point']['styleUrl']) : '';
}

/**
 * Implements MODULE_preprocess_HOOK().
 *
 * Preprocess theme variables for a specific theme hook.
 *
 * This hook allows modules to preprocess theme variables for a specific theme
 * hook. It should only be used if a module needs to override or add to the
 * theme preprocessing for a theme hook it didn't define.
 *
 * For more detailed information, see theme().
 *
 * @param $variables
 *   The variables array (modify in place).
 */
function kml_preprocess_image(&$variables) {
  $path = drupal_get_path('module', 'kml');
  // Assume the default text 'Subscribe to KML'
  // is included in $variables['alt'].
  // See theme_feed_icon() in includes/theme.inc
  if (substr($variables['alt'], 0, 12) == 'Subscribe to') {
    $type = substr($variables['alt'], -3);
    switch ($type) {
      case 'KML':
        $variables['title'] = t('Export as KML');
        $variables['path'] = $path . '/images/' . strtolower($type) . '.png';
        $variables['width'] = NULL;
        $variables['height'] = NULL;
        break;
    }
  }
}

/**
 * Theme function for kml feed icon.
 */
function theme_kml_feed_icon($variables) {
  extract($variables, EXTR_SKIP);
  $url_options = array('html' => TRUE);
  if ($query) {
    $url_options['query'] = $query;
  }
  $image = theme('image', array('path' => $image_path, 'alt' => $title, 'text' => $title));
  return l($image, $url, $url_options);
}
