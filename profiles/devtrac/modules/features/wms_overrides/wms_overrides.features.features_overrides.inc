<?php
/**
 * @file
 * wms_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function wms_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: openlayers_maps
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|behaviors|openlayers_behavior_zoomtolayer|zoomtolayer|osm_cycle"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|behaviors|openlayers_behavior_zoomtolayer|zoomtolayer|osm_mapnik"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|behaviors|openlayers_behavior_zoomtolayer|zoomtolayer|uganda_basemap"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|behaviors|openlayers_behavior_zoomtolayer|zoomtolayer|uganda_basemap_streets"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_activated|u_map_it_health"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_activated|u_map_it_schools"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_activated|u_map_it_schoolswms"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_activated|u_map_it_wash"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_activated|u_map_it_washwms"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_activated|ugandahealthwms"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_select|u_map_it_health"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_select|u_map_it_schools"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_select|u_map_it_schoolswms"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_select|u_map_it_wash"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_select|u_map_it_washwms"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_select|ugandahealthwms"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_temporary|u_map_it_health"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_temporary|u_map_it_schools"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_temporary|u_map_it_schoolswms"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_temporary|u_map_it_wash"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_temporary|u_map_it_washwms"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_temporary|ugandahealthwms"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles|u_map_it_health"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles|u_map_it_schools"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles|u_map_it_schoolswms"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles|u_map_it_wash"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles|u_map_it_washwms"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles|ugandahealthwms"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_switcher|u_map_it_health"] = 'u_map_it_health';
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_switcher|u_map_it_schools"] = 'u_map_it_schools';
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_switcher|u_map_it_schoolswms"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_switcher|u_map_it_wash"] = 'u_map_it_wash';
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_switcher|u_map_it_washwms"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_switcher|ugandahealthwms"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_weight|u_map_it_health"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_weight|u_map_it_schools"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_weight|u_map_it_schoolswms"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_weight|u_map_it_wash"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_weight|u_map_it_washwms"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_weight|ugandahealthwms"] = 0;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layers|u_map_it_health"] = 'u_map_it_health';
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layers|u_map_it_schools"] = 'u_map_it_schools';
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layers|u_map_it_wash"] = 'u_map_it_wash';

 return $overrides;
}
