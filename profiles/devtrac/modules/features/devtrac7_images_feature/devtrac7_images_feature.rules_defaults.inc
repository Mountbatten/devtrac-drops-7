<?php
/**
 * @file
 * devtrac7_images_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function devtrac7_images_feature_default_rules_configuration() {
  $items = array();
  $items['rules_image_use_exif_date'] = entity_import('rules_config', '{ "rules_image_use_exif_date" : {
      "LABEL" : "Use the EXIF date of the original image",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "image" : { "label" : "Image file", "type" : "file" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "image" ], "field" : "field_file_image_exif_date" } },
        { "NOT data_is_empty" : { "data" : [ "image:field-file-image-exif-date" ] } },
        { "entity_has_field" : { "entity" : [ "image" ], "field" : "field_ftritem_date_visited" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "image:field-ftritem-date-visited" ],
            "value" : [ "image:field-file-image-exif-date" ]
          }
        }
      ]
    }
  }');
  $items['rules_image_use_exif_lat_lon'] = entity_import('rules_config', '{ "rules_image_use_exif_lat_lon" : {
      "LABEL" : "Use the EXIF lat-lon of the original image",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "image" : { "label" : "Image file", "type" : "file" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "image" ], "field" : "field_file_image_gps_latitude" } },
        { "NOT data_is_empty" : { "data" : [ "image:field-file-image-gps-latitude" ] } },
        { "entity_has_field" : { "entity" : [ "image" ], "field" : "field_file_image_gps_longitude" } },
        { "entity_has_field" : { "entity" : [ "image" ], "field" : "field_ftritem_lat_long" } }
      ],
      "DO" : [
        { "data_convert" : {
            "USING" : {
              "type" : "decimal",
              "value" : [ "image:field-file-image-gps-latitude" ]
            },
            "PROVIDE" : { "conversion_result" : { "conversion_result_latitude" : "Conversion result Latitude" } }
          }
        },
        { "data_convert" : {
            "USING" : {
              "type" : "decimal",
              "value" : [ "image:field-file-image-gps-longitude" ]
            },
            "PROVIDE" : { "conversion_result" : { "conversion_result_longitude" : "Conversion result Longitude" } }
          }
        },
        { "data_set" : {
            "data" : [ "image:field-ftritem-lat-long:lat" ],
            "value" : [ "conversion-result-latitude" ]
          }
        },
        { "data_set" : {
            "data" : [ "image:field-ftritem-lat-long:lon" ],
            "value" : [ "conversion-result-longitude" ]
          }
        }
      ]
    }
  }');
  $items['rules_image_use_fritem_date'] = entity_import('rules_config', '{ "rules_image_use_fritem_date" : {
      "LABEL" : "Use the Fritem Date Visit as date for an image",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "image" : { "label" : "Image file", "type" : "file" },
        "node" : { "label" : "Fritem node", "type" : "node" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "image" ], "field" : "field_ftritem_date_visited" } },
        { "data_is_empty" : { "data" : [ "image:field-ftritem-date-visited" ] } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_ftritem_date_visited" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "image:field-ftritem-date-visited" ],
            "value" : [ "node:field-ftritem-date-visited" ]
          }
        }
      ]
    }
  }');
  $items['rules_image_use_fritem_lat_lon'] = entity_import('rules_config', '{ "rules_image_use_fritem_lat_lon" : {
      "LABEL" : "Use the Fritem lat-lon as coordinates for an image",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "image" : { "label" : "Image file", "type" : "file" },
        "node" : { "label" : "Fritem node", "type" : "node" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "image" ], "field" : "field_ftritem_lat_long" } },
        { "data_is_empty" : { "data" : [ "image:field-ftritem-lat-long:lat" ] } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_ftritem_lat_long" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "image:field-ftritem-lat-long" ],
            "value" : [ "node:field-ftritem-lat-long" ]
          }
        }
      ]
    }
  }');
  $items['rules_image_use_fritem_tags'] = entity_import('rules_config', '{ "rules_image_use_fritem_tags" : {
      "LABEL" : "Use the location tags of the Fritem node for an image",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "image" : { "label" : "Image file", "type" : "file" },
        "node" : { "label" : "Fritem node", "type" : "node" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "image" ], "field" : "taxonomy_vocabulary_1" } },
        { "entity_has_field" : { "entity" : [ "image" ], "field" : "taxonomy_vocabulary_6" } },
        { "entity_has_field" : { "entity" : [ "image" ], "field" : "taxonomy_vocabulary_8" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "taxonomy_vocabulary_1" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "taxonomy_vocabulary_6" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "taxonomy_vocabulary_8" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "image:taxonomy-vocabulary-1" ],
            "value" : [ "node:taxonomy-vocabulary-1" ]
          }
        },
        { "data_set" : {
            "data" : [ "image:taxonomy-vocabulary-6" ],
            "value" : [ "node:taxonomy-vocabulary-6" ]
          }
        },
        { "data_set" : {
            "data" : [ "image:taxonomy-vocabulary-8" ],
            "value" : [ "node:taxonomy-vocabulary-8" ]
          }
        }
      ]
    }
  }');
  $items['rules_images_autopopulate'] = entity_import('rules_config', '{ "rules_images_autopopulate" : {
      "LABEL" : "Autopulate images\\u0027 fields from exif or ftritem",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--ftritem" : { "bundle" : "ftritem" },
        "node_update--ftritem" : { "bundle" : "ftritem" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_ftritem_images" } },
        { "NOT data_is_empty" : { "data" : [ "node:field-ftritem-images" ] } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-ftritem-images" ] },
            "ITEM" : { "list_item_image" : "Current list item Image" },
            "DO" : [
              { "component_rules_image_use_fritem_tags" : { "image" : [ "list-item-image:file" ], "node" : [ "node" ] } },
              { "component_rules_image_use_exif_date" : { "image" : [ "list-item-image:file" ] } },
              { "component_rules_image_use_fritem_date" : { "image" : [ "list-item-image:file" ], "node" : [ "node" ] } },
              { "component_rules_image_use_exif_lat_lon" : { "image" : [ "list-item-image:file" ] } },
              { "component_rules_image_use_fritem_lat_lon" : { "image" : [ "list-item-image:file" ], "node" : [ "node" ] } }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
