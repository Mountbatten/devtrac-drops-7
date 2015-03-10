<?php
/**
 * @file
 * devtrac7_maps.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function devtrac7_maps_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'devtrac_mapstyle_marker_active';
  $openlayers_styles->title = 'Devtrac Marker Active';
  $openlayers_styles->description = 'Black marker provided by the OpenLayers module.';
  $openlayers_styles->data = array(
    'externalGraphic' => 'profiles/devtrac/modules/contrib/openlayers/themes/default_dark/markers/marker-black.png',
    'pointRadius' => 6,
    'fillColor' => '#EE9900',
    'fillOpacity' => 1,
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'cursor' => 'pointer',
    'graphicWidth' => 25,
    'graphicHeight' => 41,
    'graphicOpacity' => 1,
    'graphicXOffset' => -12,
    'graphicYOffset' => -41,
    'labelAlign' => 'cm',
  );
  $export['devtrac_mapstyle_marker_active'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'devtrac_mapstyle_marker_default';
  $openlayers_styles->title = 'Devtrac Marker Default';
  $openlayers_styles->description = 'Black marker provided by the OpenLayers module.';
  $openlayers_styles->data = array(
    'externalGraphic' => 'profiles/devtrac/modules/contrib/openlayers/themes/default_dark/markers/marker-black.png',
    'pointRadius' => 6,
    'fillColor' => '#EE9900',
    'fillOpacity' => 1,
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'cursor' => 'pointer',
    'graphicWidth' => 25,
    'graphicHeight' => 41,
    'graphicOpacity' => 1,
    'graphicXOffset' => -12,
    'graphicYOffset' => -41,
    'labelAlign' => 'cm',
  );
  $export['devtrac_mapstyle_marker_default'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'devtrac_mapstyle_marker_selected';
  $openlayers_styles->title = 'Devtrac Marker Selected';
  $openlayers_styles->description = 'Black marker provided by the OpenLayers module.';
  $openlayers_styles->data = array(
    'externalGraphic' => 'profiles/devtrac/modules/contrib/openlayers/themes/default_dark/markers/marker-black.png',
    'pointRadius' => 6,
    'fillColor' => '#EE9900',
    'fillOpacity' => 1,
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'cursor' => 'pointer',
    'graphicWidth' => 25,
    'graphicHeight' => 41,
    'graphicOpacity' => 1,
    'graphicXOffset' => -12,
    'graphicYOffset' => -41,
    'labelAlign' => 'cm',
  );
  $export['devtrac_mapstyle_marker_selected'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'devtrac_mapstyle_placetype_active';
  $openlayers_styles->title = 'Devtrac Placetype Active Style';
  $openlayers_styles->description = 'Placetype Black and White';
  $openlayers_styles->data = array(
    'externalGraphic' => '${field_term_icon_1}',
    'pointRadius' => 12,
    'fillColor' => '#EE9900',
    'fillOpacity' => 1,
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'cursor' => 'pointer',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['devtrac_mapstyle_placetype_active'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'devtrac_mapstyle_placetype_default';
  $openlayers_styles->title = 'Devtrac Placetype Default Style';
  $openlayers_styles->description = 'The style to render placetypes with. Must have a [tid] field to show the taxonomy image';
  $openlayers_styles->data = array(
    'externalGraphic' => '${field_term_icon}',
    'pointRadius' => 12,
    'fillColor' => '#EE9900',
    'fillOpacity' => 1,
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'cursor' => 'pointer',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['devtrac_mapstyle_placetype_default'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'devtrac_mapstyle_placetype_selected';
  $openlayers_styles->title = 'Devtrac Placetype Selected Style';
  $openlayers_styles->description = 'Placetype Black and White';
  $openlayers_styles->data = array(
    'externalGraphic' => '${field_term_icon_1}',
    'pointRadius' => 12,
    'fillColor' => '#EE9900',
    'fillOpacity' => 1,
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'cursor' => 'pointer',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['devtrac_mapstyle_placetype_selected'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'devtrac_mapstyle_plain_active';
  $openlayers_styles->title = 'Devtrac Plain Active Style';
  $openlayers_styles->description = 'Default style for selected locations on the map';
  $openlayers_styles->data = array(
    'pointRadius' => 5,
    'fillColor' => '#FFFFFF',
    'fillOpacity' => 0.5,
    'strokeColor' => '#ea0001',
    'strokeWidth' => 2,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'cursor' => 'pointer',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['devtrac_mapstyle_plain_active'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'devtrac_mapstyle_plain_default';
  $openlayers_styles->title = 'Devtrac Plain Default Style';
  $openlayers_styles->description = 'Devtrac Plain Default Style.';
  $openlayers_styles->data = array(
    'pointRadius' => 10,
    'fillColor' => '#FFFFFF',
    'fillOpacity' => 0.29999999999999999,
    'strokeColor' => '#ea0001',
    'strokeWidth' => 1,
    'strokeOpacity' => 0.69999999999999996,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'cursor' => 'pointer',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['devtrac_mapstyle_plain_default'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'devtrac_mapstyle_plain_selected';
  $openlayers_styles->title = 'Devtrac Plain Selected Style';
  $openlayers_styles->description = 'Default style for selecting locations on the map';
  $openlayers_styles->data = array(
    'pointRadius' => 15,
    'fillColor' => '#9D48A1',
    'fillOpacity' => 0.5,
    'strokeColor' => '#9D48A1',
    'strokeWidth' => 4,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'butt',
    'strokeDashstyle' => 'solid',
    'cursor' => 'pointer',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['devtrac_mapstyle_plain_selected'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'devtrac_mapstyle_search_active';
  $openlayers_styles->title = 'Devtrac Search Active Style';
  $openlayers_styles->description = 'Active style for search results';
  $openlayers_styles->data = array(
    'pointRadius' => 5,
    'fillColor' => '#000000',
    'fillOpacity' => 0.5,
    'strokeColor' => '#EA0001',
    'strokeWidth' => 4,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'cursor' => 'pointer',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['devtrac_mapstyle_search_active'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'devtrac_mapstyle_search_default';
  $openlayers_styles->title = 'Devtrac Search Default Style';
  $openlayers_styles->description = 'Default style for search results';
  $openlayers_styles->data = array(
    'pointRadius' => 10,
    'fillColor' => '#FFFFFF',
    'fillOpacity' => 0.5,
    'strokeColor' => '#EA0001',
    'strokeWidth' => 4,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'cursor' => 'pointer',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['devtrac_mapstyle_search_default'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'devtrac_mapstyle_search_selected';
  $openlayers_styles->title = 'Devtrac Search Selected Style';
  $openlayers_styles->description = 'Selected style for search results ';
  $openlayers_styles->data = array(
    'pointRadius' => 15,
    'fillColor' => '#555555',
    'fillOpacity' => 0.5,
    'strokeColor' => '#EA0001',
    'strokeWidth' => 4,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'butt',
    'strokeDashstyle' => 'solid',
    'cursor' => 'pointer',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['devtrac_mapstyle_search_selected'] = $openlayers_styles;

  return $export;
}
