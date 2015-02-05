<?php
/**
 * @file
 * devtrac7_theme_settings.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function devtrac7_theme_settings_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.devtrac_classic.narrow';
  $breakpoint->name = 'narrow';
  $breakpoint->breakpoint = '(min-width: 740px) and (min-device-width: 740px)';
  $breakpoint->source = 'devtrac_classic';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.devtrac_classic.narrow'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.devtrac_classic.narrow_landscape';
  $breakpoint->name = 'narrow_landscape';
  $breakpoint->breakpoint = '(max-device-width: 800px) and (min-width: 740px)';
  $breakpoint->source = 'devtrac_classic';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.devtrac_classic.narrow_landscape'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.devtrac_classic.normal';
  $breakpoint->name = 'normal';
  $breakpoint->breakpoint = '(min-width: 980px) and (min-device-width: 980px)';
  $breakpoint->source = 'devtrac_classic';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.devtrac_classic.normal'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.devtrac_classic.normal_desktop';
  $breakpoint->name = 'normal_desktop';
  $breakpoint->breakpoint = '(max-device-width: 1024px) and (min-width: 1024px)';
  $breakpoint->source = 'devtrac_classic';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 3;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.devtrac_classic.normal_desktop'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.devtrac_classic.wide';
  $breakpoint->name = 'wide';
  $breakpoint->breakpoint = '(min-width: 1220px)';
  $breakpoint->source = 'devtrac_classic';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 4;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.devtrac_classic.wide'] = $breakpoint;

  return $export;
}
