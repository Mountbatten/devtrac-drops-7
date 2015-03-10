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
/**
 * BatchAPI callback.
 *
 * @see devtrac_import_oecd_icons()
 */
function _devtrac_import_icons($file, $importers, &$context) {
  foreach($importers as $importer) {
    $myfeed = feeds_source($importer);
    $config = array('FeedsFileFetcher' => array('source' => $file));
    $myfeed->addConfig($config);
    $myfeed->save();
    try {
      watchdog('OECD Codes Import', 'Starting Import : %importer', array('%importer' => $importer));
      $myfeed->startImport();
      watchdog('OECD Codes Import', 'Done with Import : %importer', array('%importer' => $importer));
    }
    catch (Exception $exept) {
      drupal_set_message("error", $except->getMessage(), "error");
    }
  }
  watchdog('OECD Codes Import', 'Done with Import task.');
  $context['message'] = st('OECD Codes Imported.');
}
