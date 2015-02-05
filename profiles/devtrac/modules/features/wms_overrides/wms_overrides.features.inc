<?php
/**
 * @file
 * wms_overrides.features.inc
 */

/**
 * Implements hook_openlayers_maps_alter().
 */
function wms_overrides_openlayers_maps_alter(&$data) {
  if (isset($data['devtrac_solr_sitevisits_map'])) {
    $data['devtrac_solr_sitevisits_map']->data['behaviors']['openlayers_behavior_zoomtolayer']['zoomtolayer']['osm_cycle'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['behaviors']['openlayers_behavior_zoomtolayer']['zoomtolayer']['osm_mapnik'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_activated']['u_map_it_health'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_activated']['u_map_it_schools'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_activated']['u_map_it_schoolswms'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_activated']['u_map_it_wash'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_activated']['u_map_it_washwms'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_activated']['ugandahealthwms'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_styles_select']['u_map_it_health'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_styles_select']['u_map_it_schools'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_styles_select']['u_map_it_schoolswms'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_styles_select']['u_map_it_wash'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_styles_select']['u_map_it_washwms'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_styles_select']['ugandahealthwms'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_styles_temporary']['u_map_it_health'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_styles_temporary']['u_map_it_schools'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_styles_temporary']['u_map_it_schoolswms'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_styles_temporary']['u_map_it_wash'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_styles_temporary']['u_map_it_washwms'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_styles_temporary']['ugandahealthwms'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_styles']['u_map_it_health'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_styles']['u_map_it_schools'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_styles']['u_map_it_schoolswms'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_styles']['u_map_it_wash'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_styles']['u_map_it_washwms'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_styles']['ugandahealthwms'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_switcher']['u_map_it_health'] = 'u_map_it_health'; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_switcher']['u_map_it_schools'] = 'u_map_it_schools'; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_switcher']['u_map_it_schoolswms'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_switcher']['u_map_it_wash'] = 'u_map_it_wash'; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_switcher']['u_map_it_washwms'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_switcher']['ugandahealthwms'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_weight']['u_map_it_health'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_weight']['u_map_it_schools'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_weight']['u_map_it_schoolswms'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_weight']['u_map_it_wash'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_weight']['u_map_it_washwms'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layer_weight']['ugandahealthwms'] = 0; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layers']['u_map_it_health'] = 'u_map_it_health'; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layers']['u_map_it_schools'] = 'u_map_it_schools'; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layers']['u_map_it_wash'] = 'u_map_it_wash'; /* WAS: '' */
    unset($data['devtrac_solr_sitevisits_map']->data['behaviors']['openlayers_behavior_zoomtolayer']['zoomtolayer']['uganda_basemap']);
    unset($data['devtrac_solr_sitevisits_map']->data['behaviors']['openlayers_behavior_zoomtolayer']['zoomtolayer']['uganda_basemap_streets']);
  }
}
