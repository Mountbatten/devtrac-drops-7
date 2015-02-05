<?php

/**
 * @file
 * Contains Batch API callbacks used during installation.
 */

/**
 * BatchAPI callback.
 *
 * @see devtrac_install_additional_modules()
 */
function _devtrac_enable_theme($theme, &$context) {
  theme_enable(array($theme));
  variable_set('theme_default', $theme);

  $context['message'] = st('Installed the default theme.');
}

/**
 * BatchAPI callback.
 *
 * @see devtrac_install_additional_modules()
 */
function _devtrac_enable_module($module, $module_name, &$context) {
  module_enable(array($module), FALSE);
  $context['message'] = st('Installed %module module.', array('%module' => $module_name));
}

/**
 * BatchAPI callback.
 *
 * @see devtrac_install_additional_modules()
 */
function _devtrac_flush_caches($operation, &$context) {
  $context['message'] = t('@operation', array('@operation' => $operation));
  drupal_flush_all_caches();
}