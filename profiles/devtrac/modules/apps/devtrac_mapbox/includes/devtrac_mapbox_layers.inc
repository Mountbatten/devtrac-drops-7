<?php

/**
 * @file
 * This file contains layers implementations
 *
 * @ingroup openlayers
 */

/**
 * Preset Implementation.
 *
 * Internal callback for openlayers layers implementation.
 *
 * @return array $exports
 *   returns an associative array of layers.
 */
function _devtrac_mapbox_openlayers_layers() {
  $exports = array();

  // Get all the additional layers.
  $layers = devtrac_mapbox_getlayers();

  if(!is_null($layers)) {
  foreach ($layers as $layer) {
    $openlayers_layers = new stdClass();
    $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
    $openlayers_layers->api_version = 1;
    $openlayers_layers->name = $layer['name'];
    $openlayers_layers->title = $layer['title'];
    $openlayers_layers->description = $layer['description'];
    $openlayers_layers->data = array(
      'url' => array(
        0 => 'http://a.tiles.mapbox.com/v1',
        1 => 'http://b.tiles.mapbox.com/v1',
        2 => 'http://c.tiles.mapbox.com/v1',
        3 => 'http://d.tiles.mapbox.com/v1',
      ),
      'layername' => $layer['id'],
      'type' => 'png',
      'resolutions' => array(
        0 => 156543.03390000001,
        1 => 78271.516950000005,
        2 => 39135.758475000002,
        3 => 19567.879237500001,
        4 => 9783.9396187500006,
        5 => 4891.9698093750003,
        6 => 2445.9849046875001,
        7 => 1222.9924523438001,
        8 => 611.49622617188004,
        9 => 305.74811308594002,
        10 => 152.87405654297001,
        11 => 76.437028271483996,
        12 => 38.218514135741998,
        13 => 19.109257067870999,
        14 => 9.5546285339354995,
        15 => 4.7773142669678004,
        16 => 2.3886571334839002,
        17 => 1.1943285667418999,
        18 => 0.59716428337097005,
      ),
      'wrapDateLine' => FALSE,
      'serviceVersion' => '',
      'zoomOffset' => 0,
      'maptiler' => FALSE,
      'attribution' => 'Basemap: © <a href="http://www.openstreetmap.org/copyright">OpenStreetMap contributors</a> Tiles by <a href="http://www.mapbox.com/about/maps/">Mapbox</a>',
      'projection' => array(
        0 => 'EPSG:3857',
        1 => 'EPSG:900913',
      ),
      'isBaseLayer' => 1,
      'layer_type' => 'openlayers_layer_type_tms',
      'layer_handler' => 'tms',
      'serverResolutions' => array(
        0 => 156543.03390000001,
        1 => 78271.516950000005,
        2 => 39135.758475000002,
        3 => 19567.879237500001,
        4 => 9783.9396187500006,
        5 => 4891.9698093750003,
        6 => 2445.9849046875001,
        7 => 1222.9924523438001,
        8 => 611.49622617188004,
        9 => 305.74811308594002,
        10 => 152.87405654297001,
        11 => 76.437028271483996,
        12 => 38.218514135741998,
        13 => 19.109257067870999,
        14 => 9.5546285339354995,
        15 => 4.7773142669678004,
        16 => 2.3886571334839002,
        17 => 1.1943285667418999,
        18 => 0.59716428337097005,
        19 => 0.29858214169740999,
        20 => 0.1492910708487,
        21 => 0.074645535424351997,
      ),
      'base_url' => NULL,
      'transitionEffect' => 'resize',
      'weight' => 0,
    );
    $exports[$layer['name']] = $openlayers_layers;
  }
  }
  return $exports;
}