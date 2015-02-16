; Drush Make File
core = 7.x
api = 2

; Mountbatten defaults
includes[mountbatten_web_analytics] = https://raw.githubusercontent.com/Mountbatten/mountbatten_makefiles/master/mountbatten_web_analytics.make
includes[mountbatten_seo] = https://raw.githubusercontent.com/Mountbatten/mountbatten_makefiles/master/mountbatten_seo.make
; includes[mountbatten_spam_protection] = https://raw.githubusercontent.com/Mountbatten/mountbatten_makefiles/master/mountbatten_spam_protection.make
includes[mountbatten_web_media] = https://raw.githubusercontent.com/Mountbatten/mountbatten_makefiles/master/mountbatten_web_media.make
includes[mountbatten_sitewide] = https://raw.githubusercontent.com/Mountbatten/mountbatten_makefiles/master/mountbatten_sitewide.make

; Adding the following Mountbatten developer default for demonstration purposes. It installs a lot of ui stuff.
includes[mountbatten_developer] = https://raw.githubusercontent.com/Mountbatten/mountbatten_makefiles/master/mountbatten_developer.make

; Modules
projects[acl][version] = "1.0"
projects[acl][type] = "module"
projects[acl][subdir] = "contrib"

projects[adaptive_image][version] = "1.4"
projects[adaptive_image][type] = "module"
projects[adaptive_image][subdir] = "contrib"

projects[barcode][version] = "2.1"
projects[barcode][type] = "module"
projects[barcode][subdir] = "contrib"
projects[barcode][patch][] = "https://www.drupal.org/files/barcode-empty_value_in_barcode_generate_image-1937974-1.patch"

projects[behavior_weights][version] = "1.0"
projects[behavior_weights][type] = "module"
projects[behavior_weights][subdir] = "contrib"

projects[better_messages][version] = "1.x-dev"
projects[better_messages][type] = "module"
projects[better_messages][subdir] = "contrib"

projects[blockify][version] = "1.2"
projects[blockify][type] = "module"
projects[blockify][subdir] = "contrib"

projects[charts_graphs][version] = "2.0"
projects[charts_graphs][type] = "module"
projects[charts_graphs][subdir] = "contrib"

projects[charts_graphs_flot][version] = "1.x-dev"
projects[charts_graphs_flot][type] = "module"
projects[charts_graphs_flot][subdir] = "contrib"

projects[chosen][version] = "2.0-beta4"
projects[chosen][type] = "module"
projects[chosen][subdir] = "contrib"

projects[ckan_packages][version] = "1.x-dev"
projects[ckan_packages][type] = "module"
projects[ckan_packages][subdir] = "contrib"

projects[collapsiblock][version] = "1.0"
projects[collapsiblock][type] = "module"
projects[collapsiblock][subdir] = "contrib"

projects[colorbox][version] = "2.8"
projects[colorbox][type] = "module"
projects[colorbox][subdir] = "contrib"

projects[content_access][version] = "1.2-beta2"
projects[content_access][type] = "module"
projects[content_access][subdir] = "contrib"

projects[content_taxonomy][version] = "1.0-beta2"
projects[content_taxonomy][type] = "module"
projects[content_taxonomy][subdir] = "contrib"

projects[css_browser_selector][version] = "1.1"
projects[css_browser_selector][type] = "module"
projects[css_browser_selector][subdir] = "contrib"

projects[date_duration_formatter][version] = "1.x-dev"
projects[date_duration_formatter][type] = "module"
projects[date_duration_formatter][subdir] = "contrib"

projects[delta][version] = "3.0-beta11"
projects[delta][type] = "module"
projects[delta][subdir] = "contrib"

projects[diff][version] = "3.2"
projects[diff][type] = "module"
projects[diff][subdir] = "contrib"

projects[draggableviews][version] = "2.0"
projects[draggableviews][type] = "module"
projects[draggableviews][subdir] = "contrib"

projects[ds][version] = "1.9"
projects[ds][type] = "module"
projects[ds][subdir] = "contrib"

projects[entityreference][version] = "1.1"
projects[entityreference][type] = "module"
projects[entityreference][subdir] = "contrib"

projects[entityreference_prepopulate][version] = "1.5"
projects[entityreference_prepopulate][type] = "module"
projects[entityreference_prepopulate][subdir] = "contrib"

projects[exif][version] = "1.2"
projects[exif][type] = "module"
projects[exif][subdir] = "contrib"
projects[exif][patch][] = "https://www.drupal.org/files/issues/exif_xmp_install_patch-2325833-1.patch"

projects[facetapi][version] = "1.5"
projects[facetapi][type] = "module"
projects[facetapi][subdir] = "contrib"
projects[facetapi][patch][] = "https://www.drupal.org/files/issues/facetapi-fix_missing_data_warnings_during_tests-2419817-1.patch"

projects[facetapi_bonus][version] = "1.1"
projects[facetapi_bonus][type] = "module"
projects[facetapi_bonus][subdir] = "contrib"
projects[facetapi_bonus][patch][] = "https://www.drupal.org/files/facetapi_bonus_exclude_inaccessible_items.patch"

projects[facetapi_graphs][version] = "1.x-dev"
projects[facetapi_graphs][type] = "module"
projects[facetapi_graphs][subdir] = "contrib"

projects[facetapi_tagcloud][version] = "1.0-beta1"
projects[facetapi_tagcloud][type] = "module"
projects[facetapi_tagcloud][subdir] = "contrib"

projects[facetapi_textfield_widget][version] = "1.x-dev"
projects[facetapi_textfield_widget][type] = "module"
projects[facetapi_textfield_widget][subdir] = "contrib"

projects[features_override][version] = "2.0-rc2"
projects[features_override][type] = "module"
projects[features_override][subdir] = "contrib"

projects[feeds][version] = "2.0-alpha8"
projects[feeds][type] = "module"
projects[feeds][subdir] = "contrib"

projects[feeds_entityreference][version] = "1.x-dev"
projects[feeds_entityreference][type] = "module"
projects[feeds_entityreference][subdir] = "contrib"

projects[feeds_tamper][version] = "1.0"
projects[feeds_tamper][type] = "module"
projects[feeds_tamper][subdir] = "contrib"

projects[field_collection_feeds][version] = "1.0-alpha3"
projects[field_collection_feeds][type] = "module"
projects[field_collection_feeds][subdir] = "contrib"

projects[field_collection][version] = "1.0-beta8"
projects[field_collection][type] = "module"
projects[field_collection][subdir] = "contrib"

projects[field_collection_table][version] = "1.0-beta1"
projects[field_collection_table][type] = "module"
projects[field_collection_table][subdir] = "contrib"

projects[field_extrawidgets][version] = "1.1"
projects[field_extrawidgets][type] = "module"
projects[field_extrawidgets][subdir] = "contrib"
projects[field_extrawidgets][patch][] = "https://www.drupal.org/files/issues/field_extrawidgets_notice_string_offset_cast-2097901-3.patch"

projects[field_group][version] = "1.4"
projects[field_group][type] = "module"
projects[field_group][subdir] = "contrib"

projects[field_permissions][version] = "1.0-beta2"
projects[field_permissions][type] = "module"
projects[field_permissions][subdir] = "contrib"

; Is included in mountbatten_web_media.make on github
; projects[file_entity][version] = "2.0-beta1"
; projects[file_entity][type] = "module"
; projects[file_entity][subdir] = "contrib"

projects[file_entity_usage][version] = "1.x-dev"
projects[file_entity_usage][type] = "module"
projects[file_entity_usage][subdir] = "contrib"

projects[flot][version] = "1.x-dev"
projects[flot][type] = "module"
projects[flot][subdir] = "contrib"
projects[flot][patch][] = "https://www.drupal.org/files/flot-pie_options-2088021-3.patch"
projects[flot][patch][] = "https://www.drupal.org/files/issues/flot-default_objects-2264691-4.patch"
projects[flot][patch][] = "https://www.drupal.org/files/issues/1897440_flot_resize_module.patch"

projects[footable][version] = "1.0-rc1"
projects[footable][type] = "module"
projects[footable][subdir] = "contrib"

projects[geocoder][version] = "1.x-dev"
projects[geocoder][type] = "module"
projects[geocoder][subdir] = "contrib"
projects[geocoder][patch][] = "https://www.drupal.org/files/issues/geocoder-mapquest-nominatim-1748412-46.patch"
projects[geocoder_wfs][version] = "1.0"
projects[geocoder_wfs][type] = "module"
projects[geocoder_wfs][subdir] = "contrib"

projects[geofield][version] = "2.3"
projects[geofield][type] = "module"
projects[geofield][subdir] = "contrib"
projects[geofield][patch][] = "https://www.drupal.org/files/issues/geofield-merge-openlayers-layers.patch"
projects[geofield][patch][] = "https://www.drupal.org/files/issues/geofield-sql-error-1965484-18.patch"
; projects[geofield][patch][] = "https://www.drupal.org/files/issues/geofield-wkb-exception-1924206-11.patch"
projects[geofield][patch][] = https://www.drupal.org/files/issues/add_titles_to_editingtoolbar_buttons.patch

projects[geonames][version] = "1.1"
projects[geonames][type] = "module"
projects[geonames][subdir] = "contrib"
projects[geonames][patch][] = "https://www.drupal.org/files/issues/geonames_type_not_set.patch"

projects[geophp][version] = "1.7"
projects[geophp][type] = "module"
projects[geophp][subdir] = "contrib"

projects[globalredirect][version] = "1.5"
projects[globalredirect][type] = "module"
projects[globalredirect][subdir] = "contrib"

projects[hidden_comment][version] = "1.x-dev"
projects[hidden_comment][type] = "module"
projects[hidden_comment][subdir] = "contrib"

projects[hurricane][version] = "1.x-dev"
projects[hurricane][type] = "module"
projects[hurricane][subdir] = "contrib"
projects[hurricane][patch][] = "https://www.drupal.org/files/issues/hurricane-black-throbbers-2366421-7.patch"

projects[image_url_formatter][version] = "1.4"
projects[image_url_formatter][type] = "module"
projects[image_url_formatter][subdir] = "contrib"

projects[job_scheduler][version] = "2.0-alpha3"
projects[job_scheduler][type] = "module"
projects[job_scheduler][subdir] = "contrib"

projects[jquery_update][version] = "2.x-dev"
projects[jquery_update][type] = "module"
projects[jquery_update][subdir] = "contrib"

projects[kml][version] = "1.x-dev"
projects[kml][type] = "module"
projects[kml][subdir] = "contrib"
projects[kml][patch][] = "https://www.drupal.org/files/kml_blockify.patch"

projects[mapit][version] = "1.x-dev"
projects[mapit][type] = "module"
projects[mapit][subdir] = "contrib"

projects[masonry][version] = "2.0"
projects[masonry][type] = "module"
projects[masonry][subdir] = "contrib"

projects[masonry_views][version] = "1.0"
projects[masonry_views][type] = "module"
projects[masonry_views][subdir] = "contrib"

projects[maxlength][version] = "3.0"
projects[maxlength][type] = "module"
projects[maxlength][subdir] = "contrib"
projects[maxlength][patch][] = "https://www.drupal.org/files/issues/maxlength-exclude-any-html-entity-and-token-1830182-6.patch"

projects[me][version] = "1.1"
projects[me][type] = "module"
projects[me][subdir] = "contrib"

projects[menu_token][version] = "1.0-beta5"
projects[menu_token][type] = "module"
projects[menu_token][subdir] = "contrib"
projects[menu_token][patch][] = "https://www.drupal.org/files/issues/localized_options-not-set.patch"

projects[migrate][version] = "2.5"
projects[migrate][type] = "module"
projects[migrate][subdir] = "contrib"

projects[migrate_extras][version] = "2.5"
projects[migrate_extras][type] = "module"
projects[migrate_extras][subdir] = "contrib"

projects[nice_menus][version] = "2.5"
projects[nice_menus][type] = "module"
projects[nice_menus][subdir] = "contrib"

projects[modal_forms][version] = "1.2"
projects[modal_forms][type] = "module"
projects[modal_forms][subdir] = "contrib"

projects[openlayers][version] = "2.0-beta11"
projects[openlayers][type] = "module"
projects[openlayers][subdir] = "contrib"
projects[openlayers][patch][] = "https://www.drupal.org/files/2060451-bbox_geojson_anydisplay_4.patch"
; projects[openlayers][patch][] = "http://cgit.drupalcode.org/openlayers/patch/openlayers.make?id=66ca5d62bee0601902ca3dbda171d6a8fea8993d"
; Following 2 patches were committed in 7.x-2.0-beta11
; projects[openlayers][patch][] = "https://www.drupal.org/files/issues/openlayers-7.x-2.0-beta9_makefile_release_patch-2257461-5.patch"
; projects[openlayers][patch][] = "https://www.drupal.org/files/issues/zoomtolayer-only-when-there-are-features-%232344127-1.patch"
projects[openlayers][patch][] = "https://www.drupal.org/files/issues/fix_facetapi.patch"
; Following patch makes sure any library variants will be picked up
projects[openlayers][patch][] = "https://www.drupal.org/files/issues/openlayers-locale-original-variant-2191887-19.patch"
projects[openlayers[patch][] ="https://www.drupal.org/files/issues/OpenLayers-Markers-not-displaying-in-211-2360525-%235.patch"

projects[openlayers_geosearch][version] = "1.0-beta4"
projects[openlayers_geosearch][type] = "module"
projects[openlayers_geosearch][subdir] = "contrib"

projects[openlayers_plus][version] = "3.x-dev"
projects[openlayers_plus][type] = "module"
projects[openlayers_plus][subdir] = "contrib"

projects[pane][version] = "2.5"
projects[pane][type] = "module"
projects[pane][subdir] = "contrib"
projects[pane][patch][] = "https://www.drupal.org/files/issues/pane-remove-wrapper-markup-2119593-3.patch"

projects[proj4js][version] = "1.2"
projects[proj4js][type] = "module"
projects[proj4js][subdir] = "contrib"

projects[publishcontent][version] = "1.3"
projects[publishcontent][type] = "module"
projects[publishcontent][subdir] = "contrib"

projects[purl][version] = "1.x-dev"
projects[purl][type] = "module"
projects[purl][subdir] = "contrib"
projects[purl][patch][] = "https://www.drupal.org/files/1511708_5_menu_save.patch"

projects[purl_search_api][version] = "1.x-dev"
projects[purl_search_api][type] = "module"
projects[purl_search_api][subdir] = "contrib"

projects[questionnaire][version] = "1.x-dev"
projects[questionnaire][type] = "module"
projects[questionnaire][subdir] = "contrib"
;projects[questionnaire][download][type] = "git"
;projects[questionnaire][download][url] = "http://git.drupal.org/project/questionnaire.git"
;projects[questionnaire][download][branch] = "7.x-1.x"

projects[quicktabs][version] = "3.x-dev"
projects[quicktabs][type] = "module"
projects[quicktabs][subdir] = "contrib"
;projects[quicktabs][patch][] = "https://www.drupal.org/files/quicktabs.user-interface.2108935-3.patch"
projects[quicktabs][patch][] = "https://www.drupal.org/files/quicktabs--machine_name-7.x-3.6.patch"

projects[realname][version] = "1.2"
projects[realname][type] = "module"
projects[realname][subdir] = "contrib"

projects[robotstxt][version] = "1.3"
projects[robotstxt][type] = "module"
projects[robotstxt][subdir] = "contrib"

projects[role_delegation][version] = "1.1"
projects[role_delegation][type] = "module"
projects[role_delegation][subdir] = "contrib"
projects[role_delegation][patch][] = "https://www.drupal.org/files/issues/role_delegation-add-compatibility-with-permission_lock-582524-19.patch"

projects[rules][version] = "2.8"
projects[rules][type] = "module"
projects[rules][subdir] = "contrib"

projects[search_api][version] = "1.14"
projects[search_api][type] = "module"
projects[search_api][subdir] = "contrib"
projects[search_api][patch][] = "https://www.drupal.org/files/issues/search_api-drush-user-do-not-test.patch"

projects[search_api_autocomplete][version] = "1.1"
projects[search_api_autocomplete][type] = "module"
projects[search_api_autocomplete][subdir] = "contrib"

projects[search_api_db][version] = "1.4"
projects[search_api_db][type] = "module"
projects[search_api_db][subdir] = "contrib"

projects[search_api_date][version] = "1.0-alpha2"
projects[search_api_date][type] = "module"
projects[search_api_date][subdir] = "contrib"
projects[search_api_date][patch][] = "https://www.drupal.org/files/issues/search_api_date-widget_date_only_links-2063115-7.patch"

projects[search_api_file_source_bundle_filter][version] = "1.x-dev"
projects[search_api_file_source_bundle_filter][type] = "module"
projects[search_api_file_source_bundle_filter][subdir] = "contrib"

projects[search_api_saved_searches][version] = "1.x-dev"
projects[search_api_saved_searches][type] = "module"
projects[search_api_saved_searches][subdir] = "contrib"
projects[search_api_saved_searches][patch][] = "https://www.drupal.org/files/issues/search_api_saved_searches-7.x-1.2-reminders-3.patch"
; projects[search_api_saved_searches][patch][] = "https://www.drupal.org/files/issues/search_api_saved_searches-last_excuted-field-7.x-1.x-2142063_9.patch"
projects[search_api_saved_searches][patch][] = "https://www.drupal.org/files/issues/2346679-3--expose_search_status.patch"
projects[search_api_saved_searches][patch][] = "https://www.drupal.org/files/issues/2346677-5--user_ban_disable_searches.patch"

projects[search_api_solr][version] = "1.5"
projects[search_api_solr][type] = "module"
projects[search_api_solr][subdir] = "contrib"

projects[search_api_solr_boundingbox_search][version] = "1.x-dev"
projects[search_api_solr_boundingbox_search][type] = "module"
projects[search_api_solr_boundingbox_search][subdir] = "contrib"

projects[search_api_solr_dynamic_ranges][version] = "1.x-dev"
projects[search_api_solr_dynamic_ranges][type] = "module"
projects[search_api_solr_dynamic_ranges][subdir] = "contrib"

projects[search_api_swatches][version] = "1.x-dev"
projects[search_api_swatches][type] = "module"
projects[search_api_swatches][subdir] = "contrib"

projects[services][version] = "3.x-dev"
projects[services][type] = "module"
projects[services][subdir] = "contrib"

projects[services_views][version] = "1.0"
projects[services_views][type] = "module"
projects[services_views][subdir] = "contrib"

projects[shs][version] = "1.6"
projects[shs][type] = "module"
projects[shs][subdir] = "contrib"

projects[special_menu_items][version] = "2.0"
projects[special_menu_items][type] = "module"
projects[special_menu_items][subdir] = "contrib"

projects[taxonomy_access][version] = "1.0-rc1"
projects[taxonomy_access][type] = "module"
projects[taxonomy_access][subdir] = "contrib"
projects[taxonomy_access][patch][] = "https://www.drupal.org/files/1313912-5.patch"

projects[tipsy][version] = "1.0-rc1"
projects[tipsy][type] = "module"
projects[tipsy][subdir] = "contrib"

projects[transliteration][version] = "3.2"
projects[transliteration][type] = "module"
projects[transliteration][subdir] = "contrib"

projects[uuid][version] = "1.0-alpha6"
projects[uuid][type] = "module"
projects[uuid][subdir] = "contrib"

projects[views_charts][version] = "1.x-dev"
projects[views_charts][type] = "module"
projects[views_charts][subdir] = "contrib"

projects[views_data_export][version] = "3.0-beta8"
projects[views_data_export][type] = "module"
projects[views_data_export][subdir] = "contrib"
; projects[views_data_export][patch][] = "https://www.drupal.org/files/issues/views_data_export-blockify_3.0-beta7.patch"
projects[views_data_export][patch][] = "https://www.drupal.org/files/issues/views_data_export-blockify_3.0-beta8-2037165-3.patch"
projects[views_data_export][patch][] = "https://www.drupal.org/files/views_data_export-solr_export-1258390-13.patch"

projects[views_field_view][version] = "1.1"
projects[views_field_view][type] = "module"
projects[views_field_view][subdir] = "contrib"

projects[views_flipped_table][version] = "1.0"
projects[views_flipped_table][type] = "module"
projects[views_flipped_table][subdir] = "contrib"
projects[views_flipped_table][patch][] = "https://www.drupal.org/files/issues/flipping_rows_undefined_index-2277369-6.patch"

; projects[views_geojson][version] = "1.x-dev"
projects[views_geojson][type] = "module"
projects[views_geojson][subdir] = "contrib"
projects[views_geojson][download][type] = "git"
projects[views_geojson][download][url] = "git://git.drupal.org/project/views_geojson.git"
projects[views_geojson][download][branch] = "7.x-1.x"
projects[views_geojson][download][revision] = "cc2bc0b97743404b793f954c19c52e22931223ff"
projects[views_geojson][patch][] = "https://www.drupal.org/files/issues/1839554_views_geojson_bbox_argument_handler_fixes_15.patch"
projects[views_geojson][patch][] = "https://drupal.org/files/bbox_on_all_views.patch"
projects[views_geojson][patch][] = "https://www.drupal.org/files/views_geojson-description_property-2082143-1.patch"

projects[views_infinite_scroll][version] = "1.1"
projects[views_infinite_scroll][type] = "module"
projects[views_infinite_scroll][subdir] = "contrib"

projects[views_modes][version] = "1.x-dev"
projects[views_modes][type] = "module"
projects[views_modes][subdir] = "contrib"

projects[views_rss][version] = "2.0-rc4"
projects[views_rss][type] = "module"
projects[views_rss][subdir] = "contrib"

projects[views_plugin_argument_default_referer][version] = "1.x-dev"
projects[views_plugin_argument_default_referer][type] = "module"
projects[views_plugin_argument_default_referer][subdir] = "contrib"

projects[views_rss_georss][version] = "1.0-rc1"
projects[views_rss_georss][type] = "module"
projects[views_rss_georss][subdir] = "contrib"

projects[views_slideshow][version] = "3.x-dev"
projects[views_slideshow][type] = "module"
projects[views_slideshow][subdir] = "contrib"

projects[virtual_field][version] = "1.2"
projects[virtual_field][type] = "module"
projects[virtual_field][subdir] = "contrib"
projects[virtual_field][patch][] = "https://www.drupal.org/files/issues/virtual_field_views_support_1506376_11.patch"

projects[addressfield][version] = "1.0"
projects[addressfield][type] = "module"
projects[addressfield][subdir] = "contrib"

projects[elements][version] = "1.4"
projects[elements][type] = "module"
projects[elements][subdir] = "contrib"

projects[link_favicon_formatter][version] = "1.6"
projects[link_favicon_formatter][type] = "module"
projects[link_favicon_formatter][subdir] = "contrib"

projects[telephone][version] = "1.0-alpha1"
projects[telephone][type] = "module"
projects[telephone][subdir] = "contrib"

projects[flexslider][version] = "2.0-alpha3"
projects[flexslider][type] = "module"
projects[flexslider][subdir] = "contrib"

projects[nodesinblock][version] = "1.0"
projects[nodesinblock][type] = "module"
projects[nodesinblock][subdir] = "contrib"

projects[openlayers_blocks][version] = "2.1"
projects[openlayers_blocks][type] = "module"
projects[openlayers_blocks][subdir] = "contrib"

; Sandbox projects
projects[cancel_button][type] = "module"
projects[cancel_button][download][type] = "git"
projects[cancel_button][download][url] = "http://git.drupal.org/sandbox/amuhebwa/2227951.git"
projects[cancel_button][download][branch] = "master"
projects[cancel_button][subdir] = "contrib"

projects[commentblock][type] = "module"
projects[commentblock][download][type] = "git"
projects[commentblock][download][url] = "http://git.drupal.org/sandbox/bc/1447318.git"
projects[commentblock][download][branch] = "7.x-1.x"
projects[commentblock][subdir] = "contrib"
projects[commentblock][patch][] = "https://www.drupal.org/files/parameter-1-expected-to-be-a-reference.patch"

projects[OL_lat_long][type] = "module"
projects[OL_lat_long][download][type] = "git"
projects[OL_lat_long][download][url] = "http://git.drupal.org/sandbox/GwenMahe/2055375.git"
projects[OL_lat_long][download][branch] = "master"
projects[OL_lat_long][subdir] = "contrib"

projects[geocoder_geonames][version] = "1.0"
projects[geocoder_geonames][type] = "module"
projects[geocoder_geonames][subdir] = "contrib"

projects[apps][version] = "1.0-beta20"
projects[apps][subdir] = "contrib"
; Following patch just fails.
; projects[apps][patch][] = "https://www.drupal.org/files/issues/apps-post-enabled-disabled-callback-1990512-8.patch"
; Going to use Aggrey's patch.
projects[apps][patch][] = "https://www.drupal.org/files/issues/apps-call_post_install_callback-2376519-%233.patch"

; Themes
projects[omega][version] = "3.1"
projects[omega][patch][] = "https://www.drupal.org/files/omega-mini-pager-1828552-49.patch"
projects[omega][type] = "theme"

; projects[devtrac7_theme][version] = "1.x-dev"
projects[devtrac7_theme][type] = "theme"
projects[devtrac7_theme][download][type] = "git"
projects[devtrac7_theme][download][url] = "git://git.drupal.org/project/devtrac7_theme.git"
projects[devtrac7_theme][download][branch] = "7.x-1.x"

; Libraries
libraries[autopager][download][type] = "file"
libraries[autopager][download][url] = "https://jquery-autopager.googlecode.com/files/jquery.autopager-1.0.0.js"
libraries[autopager][directory_name] = "autopager"
libraries[autopager][type] = "library"

libraries[chosen][download][type] = "file"
libraries[chosen][download][url] = "https://github.com/harvesthq/chosen/releases/download/v1.1.0/chosen_v1.1.0.zip"
libraries[chosen][directory_name] = "chosen"
libraries[chosen][type] = "library"

libraries[colorbox][download][type] = "file"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/1.5.14.zip"
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][type] = "library"

libraries[FirePHPCore][download][type] = "file"
libraries[FirePHPCore][download][url] = "https://github.com/firephp/firephp-core/archive/master.zip"
libraries[FirePHPCore][directory_name] = "FirePHPCore"
libraries[FirePHPCore][type] = "library"

libraries[flot][download][type] = "file"
libraries[flot][download][url] = "https://flot.googlecode.com/files/flot-0.7.tar.gz"
libraries[flot][directory_name] = "flot"
libraries[flot][type] = "library"
libraries[flot][patch][] = "https://www.drupal.org/files/issues/1897440_flot_resize_library.patch"

libraries[FooTable][download][type] = "file"
libraries[FooTable][download][url] = "https://github.com/bradvin/FooTable/archive/V2.zip"
libraries[FooTable][directory_name] = "FooTable"
libraries[FooTable][type] = "library"

libraries[jquery-mb-extruder][download][type] = "file"
; libraries[jquery-mb-extruder][download][url] = "https://github.com/pupunzi/jquery.mb.extruder/archive/master.zip"
libraries[jquery-mb-extruder][download][url] = "https://github.com/pupunzi/jquery.mb.extruder/archive/2.5.0.zip"
libraries[jquery-mb-extruder][directory_name] = "jquery-mb-extruder"
libraries[jquery-mb-extruder][type] = "library"

libraries[masonry][download][type] = "file"
libraries[masonry][download][url] = "http://desandro.github.io/masonry/jquery.masonry.min.js"
libraries[masonry][directory_name] = "masonry"
libraries[masonry][destination] = "libraries"

libraries[openlayers][download][type] = "file"
libraries[openlayers][download][url] = "https://github.com/Mountbatten/openlayers/archive/master.zip"
libraries[openlayers][directory_name] = "openlayers"
libraries[openlayers][destination] = "libraries"

libraries[raphael][download][type] = "file"
libraries[raphael][download][url] = "http://github.com/DmitryBaranovskiy/raphael/raw/master/raphael-min.js"
libraries[raphael][directory_name] = "raphael"
libraries[raphael][type] = "library"

libraries[spinjs][download][type] = "file"
libraries[spinjs][download][url] = "http://github.com/DmitryBaranovskiy/raphael/raw/master/raphael.js"
libraries[spinjs][directory_name] = "raphael"
libraries[spinjs][type] = "library"
