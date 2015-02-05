<?php
/**
 * @file
 * devtrac7_theme_settings.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function devtrac7_theme_settings_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'devtrac_classic';
  $breakpoint_group->name = 'Devtrac Classic';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.devtrac_classic.narrow',
    1 => 'breakpoints.theme.devtrac_classic.narrow_landscape',
    2 => 'breakpoints.theme.devtrac_classic.normal',
    3 => 'breakpoints.theme.devtrac_classic.normal_desktop',
    4 => 'breakpoints.theme.devtrac_classic.wide',
  );
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['devtrac_classic'] = $breakpoint_group;

  return $export;
}
