<?php
/**
 * @file
 * unicef_wms.openlayers_layers.inc
 */

/**
 * Implements hook_openlayers_layers().
 */
function unicef_wms_openlayers_layers() {
  $export = array();

  $openlayers_layers = new stdClass();
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'u_map_it_health';
  $openlayers_layers->title = 'U-Map It Health';
  $openlayers_layers->description = 'Baselayer for Health in Uganda';
  $openlayers_layers->data = array(
    'base_url' => 'http://maps1.devtrac.org/gwc/service/wms',
    'params' => array(
      'buffer' => '2',
      'ratio' => '1.5',
      'singleTile' => 0,
      'attribution' => 'Overlays: <a href="http://www.who.int/countries/uga/en/">© WHO</a>',
    ),
    'options' => array(
      'TRANSPARENT' => 'true',
      'exceptions' => 'application/vnd.ogc.se_inimage',
      'format' => 'image/jpeg',
      'layers' => array(
        0 => 'UgandaHealth',
      ),
      'styles' => '',
    ),
    'projection' => array(
      0 => 'EPSG:3857',
      1 => 'EPSG:4326',
      2 => 'EPSG:900913',
    ),
    'isBaseLayer' => 0,
    'layer_type' => 'openlayers_layer_type_wms',
    'layer_handler' => 'wms',
    'transitionEffect' => 'resize',
    'weight' => 0,
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
      19 => 0.29858214169740999,
      20 => 0.1492910708487,
      21 => 0.074645535424351997,
    ),
  );
  $export['u_map_it_health'] = $openlayers_layers;

  $openlayers_layers = new stdClass();
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'u_map_it_schools';
  $openlayers_layers->title = 'U-Map It Schools';
  $openlayers_layers->description = 'Baselayer for Schools in Uganda';
  $openlayers_layers->data = array(
    'base_url' => 'http://maps1.devtrac.org/gwc/service/wms',
    'params' => array(
      'buffer' => '2',
      'ratio' => '1.5',
      'singleTile' => 0,
      'attribution' => 'Overlays: <a href="http://www.who.int/countries/uga/en/">© WHO</a>',
    ),
    'options' => array(
      'TRANSPARENT' => 'true',
      'exceptions' => 'application/vnd.ogc.se_inimage',
      'format' => 'image/png',
      'layers' => array(
        0 => 'UgandaSchools',
      ),
      'styles' => '',
    ),
    'projection' => array(
      0 => 'EPSG:3857',
      1 => 'EPSG:4326',
      2 => 'EPSG:900913',
    ),
    'isBaseLayer' => 0,
    'layer_type' => 'openlayers_layer_type_wms',
    'layer_handler' => 'wms',
    'transitionEffect' => 'resize',
    'weight' => 0,
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
      19 => 0.29858214169740999,
      20 => 0.1492910708487,
      21 => 0.074645535424351997,
    ),
  );
  $export['u_map_it_schools'] = $openlayers_layers;

  $openlayers_layers = new stdClass();
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'u_map_it_schoolswms';
  $openlayers_layers->title = 'U-Map It Schools (New)';
  $openlayers_layers->description = 'Baselayer for Schools in Uganda in WMS for Querying';
  $openlayers_layers->data = array(
    'base_url' => 'http://maps1.devtrac.org/wms',
    'params' => array(
      'buffer' => '0',
      'ratio' => '1.5',
      'singleTile' => 0,
    ),
    'options' => array(
      'TRANSPARENT' => 'true',
      'exceptions' => 'application/vnd.ogc.se_inimage',
      'format' => 'image/jpeg',
      'layers' => array(
        0 => 'Devtrac:Schools',
        1 => 'Devtrac:SchoolsNorth',
      ),
      'styles' => '',
      'attribution' => '© WHO',
    ),
    'projection' => array(
      0 => 'EPSG:3857',
      1 => 'EPSG:4326',
      2 => 'EPSG:900913',
    ),
    'isBaseLayer' => 0,
    'layer_type' => 'openlayers_layer_type_wms',
    'layer_handler' => 'wms',
    'transitionEffect' => 'resize',
    'weight' => 0,
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
      19 => 0.29858214169740999,
      20 => 0.1492910708487,
      21 => 0.074645535424351997,
    ),
  );
  $export['u_map_it_schoolswms'] = $openlayers_layers;

  $openlayers_layers = new stdClass();
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'u_map_it_wash';
  $openlayers_layers->title = 'U-Map It Wash';
  $openlayers_layers->description = 'Baselayer for WASH in Uganda';
  $openlayers_layers->data = array(
    'base_url' => 'http://maps1.devtrac.org/gwc/service/wms',
    'params' => array(
      'buffer' => '2',
      'ratio' => '1.5',
      'singleTile' => 0,
      'attribution' => 'Overlays: <a href="http://www.who.int/countries/uga/en/">© WHO</a>',
    ),
    'options' => array(
      'TRANSPARENT' => 'true',
      'exceptions' => 'application/vnd.ogc.se_inimage',
      'format' => 'image/png',
      'layers' => array(
        0 => 'UgandaWash',
      ),
      'styles' => '',
    ),
    'projection' => array(
      0 => 'EPSG:3857',
      1 => 'EPSG:4326',
      2 => 'EPSG:900913',
    ),
    'isBaseLayer' => 0,
    'layer_type' => 'openlayers_layer_type_wms',
    'layer_handler' => 'wms',
    'transitionEffect' => 'resize',
    'weight' => 0,
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
      19 => 0.29858214169740999,
      20 => 0.1492910708487,
      21 => 0.074645535424351997,
    ),
  );
  $export['u_map_it_wash'] = $openlayers_layers;

  $openlayers_layers = new stdClass();
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'u_map_it_washwms';
  $openlayers_layers->title = 'U-Map It Wash (New)';
  $openlayers_layers->description = 'Baselayer for WASH in Uganda for Querying';
  $openlayers_layers->data = array(
    'base_url' => 'http://maps1.devtrac.org/wms',
    'params' => array(
      'buffer' => '0',
      'ratio' => '1.5',
      'singleTile' => 0,
    ),
    'options' => array(
      'TRANSPARENT' => 'true',
      'exceptions' => 'application/vnd.ogc.se_inimage',
      'format' => 'image/jpeg',
      'layers' => array(
        0 => 'Devtrac:WaterSources',
        1 => 'Devtrac:WaterSourcesNorth',
      ),
      'styles' => '',
    ),
    'attribution' => '© WHO',
    'projection' => array(
      0 => 'EPSG:3857',
      1 => 'EPSG:4326',
      2 => 'EPSG:900913',
    ),
    'isBaseLayer' => 0,
    'layer_type' => 'openlayers_layer_type_wms',
    'layer_handler' => 'wms',
    'transitionEffect' => 'resize',
    'weight' => 0,
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
      19 => 0.29858214169740999,
      20 => 0.1492910708487,
      21 => 0.074645535424351997,
    ),
  );
  $export['u_map_it_washwms'] = $openlayers_layers;

  $openlayers_layers = new stdClass();
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'uganda_basemap';
  $openlayers_layers->title = 'Natural';
  $openlayers_layers->description = 'Mapbox natural';
  $openlayers_layers->data = array(
    'url' => array(
      0 => 'http://a.tiles.mapbox.com/v3/
',
    ),
    'layername' => 'reinier.map-6x4cbjrs',
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
    'serviceVersion' => '1.0.0',
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
  $export['uganda_basemap'] = $openlayers_layers;

  $openlayers_layers = new stdClass();
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'uganda_basemap_streets';
  $openlayers_layers->title = 'Streets';
  $openlayers_layers->description = 'Mapbox Streets basemap';
  $openlayers_layers->data = array(
    'url' => array(
      0 => 'http://a.tiles.mapbox.com/v3/
',
    ),
    'layername' => 'reinier.map-wctwovf2',
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
    'serviceVersion' => '1.0.0',
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
  $export['uganda_basemap_streets'] = $openlayers_layers;

  $openlayers_layers = new stdClass();
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'ugandahealthwms';
  $openlayers_layers->title = 'U-Map It Health (New)';
  $openlayers_layers->description = 'Baselayer for Health in Uganda';
  $openlayers_layers->data = array(
    'base_url' => 'http://maps1.devtrac.org/wms',
    'params' => array(
      'buffer' => '0',
      'ratio' => '1.5',
      'singleTile' => 0,
    ),
    'options' => array(
      'TRANSPARENT' => 'true',
      'exceptions' => 'application/vnd.ogc.se_inimage',
      'format' => 'image/jpeg',
      'layers' => array(
        0 => 'Devtrac:HealthUnits',
        1 => 'Devtrac:HealthCenterII',
        2 => 'Devtrac:HealthCenterIII',
        3 => 'Devtrac:HealthCenterIV',
      ),
      'styles' => '',
    ),
    'attribution' => '© WHO',
    'projection' => array(
      0 => 'EPSG:3857',
      1 => 'EPSG:4326',
      2 => 'EPSG:900913',
    ),
    'isBaseLayer' => 0,
    'layer_type' => 'openlayers_layer_type_wms',
    'layer_handler' => 'wms',
    'transitionEffect' => 'resize',
    'weight' => 0,
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
      19 => 0.29858214169740999,
      20 => 0.1492910708487,
      21 => 0.074645535424351997,
    ),
  );
  $export['ugandahealthwms'] = $openlayers_layers;

  return $export;
}
