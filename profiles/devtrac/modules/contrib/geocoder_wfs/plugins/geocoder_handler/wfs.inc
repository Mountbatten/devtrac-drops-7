<?php
/**
 * @file
 * Plugin to provide a WFS geocoder.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array (
		'title' => t ( "WFS Geocoder" ),
		'description' => t ( 'Geocodes via WFS geocoder' ),
		'callback' => 'geocoder_wfs',
		'field_types' => array (
				'text',
				'text_long',
				'addressfield',
				'location',
				'text_with_summary',
				'computed',
				'taxonomy_term_reference'
		),
		'field_callback' => 'geocoder_wfs_field',
		'settings_callback' => 'geocoder_wfs_form',
		'terms_of_service' => 'http://maps1.devtrac.org/web/;jsessionid=2D1E627E60DA9591A4618D9E3C6663F7?wicket:bookmarkablePage=:org.geoserver.web.AboutGeoServerPage'
);

/**
 * Process Markup.
 */
function geocoder_wfs($query, $options = array()) {
	geophp_load ();

	$request = '<wfs:GetFeature service="WFS" version="1.1.0"
  xmlns:topp="http://www.openplans.org/topp"
  xmlns:wfs="http://www.opengis.net/wfs"
  xmlns:ogc="http://www.opengis.net/ogc"
  xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
  xsi:schemaLocation="http://www.opengis.net/wfs
                      http://schemas.opengis.net/wfs/1.1.0/wfs.xsd">
  <wfs:Query typeName="' . variable_get ( 'geocoder_wfs_namespace', '' ) . ":" . variable_get ( 'geocoder_wfs_layer', '' ) . '">
    <ogc:Filter>
      <PropertyIsLike matchCase="false" wildCard="*" singleChar="#" escapeChar="!">
        <PropertyName>' . variable_get ( 'geocoder_wfs_queryfield', '' ) . '</PropertyName>
        <Literal>*' . $query . '*</Literal>
      </PropertyIsLike>
    </ogc:Filter>
  </wfs:Query>
</wfs:GetFeature>';
  $url = variable_get ( 'geocoder_wfs_url', '' );
	$result = drupal_http_request ($url, array (
			'headers' => array (
					'Content-Type' => 'text/xml'
			),
			'data' => $request,
			'method' => 'POST',
			'timeout' => 300
	));

	return _geocoder_wfs_process_result($result);
}

/**
 * Process field.
 * This is not really tested.
 */
function geocoder_wfs_field($field, $field_item, $options = array()) {
	if ($field ['type'] == 'text' || $field ['type'] == 'text_long' || $field ['type'] == 'text_with_summary' || $field ['type'] == 'computed') {
		return geocoder_wfs( $field_item ['value'], $options );
	}
	if ($field ['type'] == 'addressfield') {
		$address = geocoder_widget_parse_addressfield ( $field_item );
		return geocoder_wfs( $address, $options );
	}
	if ($field ['type'] == 'location') {
		$address = geocoder_widget_parse_locationfield ( $field_item );
		return geocoder_wfs( $address, $options );
	}
	if ($field ['type'] == 'taxonomy_term_reference') {
		$term = taxonomy_term_load ( $field_item ['tid'] );
		return geocoder_wfs( $term->name );
	}
}

/**
 * Process the WFS XML result into the internal geosearch format
 *
 * @param
 *   WFS XML value
 *
 * @return
 *  Array with results
 *
 */
function _geocoder_wfs_process_result($rawxml) {
	//geophp_load();
	module_load_include('inc', 'wms', 'includes/gml_to_wkt');
	if(isset($rawxml->data)) {
		$xmlresult = simplexml_load_string($rawxml->data);//new SimpleXMLElement($rawxml->data);
		$xml = explode("\n", $rawxml->data);

		if (!$xmlresult) {
			$errors = libxml_get_errors();
			foreach ($errors as $error) {
				echo _geocoder_wfs_display_xml_error($error, $xml);
			}
			libxml_clear_errors();
		}

		$namespaces = $xmlresult->getNameSpaces(true);
		$gml = $xmlresult->children($namespaces['gml']);
		$features = $gml->featureMembers;
		$numberoffeatures = count($features);

		$result = array();
		$layername = variable_get('geocoder_wfs_layer', '');
		$namespace = variable_get('geocoder_wfs_namespace', '');
		$result = _geocoder_wfs_namespace_process_result($features, $namespaces, $namespace, $numberoffeatures);

		return $result;
	}else {
		return true;
	}

}

/**
 * Internal function to read all values from fields in 1 specific namespace
 *
 * @param $features
 *   array of fields to go through
 *
 * @param $namespaces
 *   array of all possible namespaces
 *
 * @param $namespace
 *   namespace to extract fields of
 *
 * @return
 *   array of fields and values that are part of the resultfields setting
 *
 */
function _geocoder_wfs_namespace_process_result($features, $namespaces, $namespace, $numberoffeatures) {
	geophp_load();
	$results = array();
	$tpresultfields = variable_get('geocoder_wfs_resultfields', '');
	$resultfields = explode(",", $tpresultfields);
	$geometries = array();

	foreach ($features->children($namespaces[$namespace]) as $feature) {
		$address = '';
		$components = Array();
		$location = Array();
		$bounds = Array();

		$queryfieldname = variable_get('geocoder_wfs_queryfield', '');
		$queryfields = $feature->children($namespaces['gml']);
		/*
		 * From all the fields in this namespace, find the one that has the right name
		*/
		foreach ($queryfields as $key => $value) {
			if ($key == $queryfieldname) {
				/* find the GML information */
				$components[$queryfieldname] = (String)$value;
			}
		}

		foreach ($resultfields as $resultfield) {
			$resultfielddetails = explode(":", $resultfield);
			$resultfieldname = $resultfielddetails[1];
			if ($resultfieldname != $queryfieldname) {
				$components[$resultfieldname] = (string)$feature->$resultfieldname;
			}
			else {
			  $components['name'] = (string)$feature->$resultfieldname;
			  $address = (string)$feature->$resultfieldname;
			}
		}

		$geofielddetails = explode(":", variable_get('geocoder_wfs_geofield', ''));
		$geofieldnamespace = $geofielddetails[0];
		$geofieldname = $geofielddetails[1];
		$geofields = $feature->children($namespaces[$geofieldnamespace]);
		/*
		 * From all the fields in this namespace, find the one that has the right name
		*/
		foreach ($geofields as $key => $value) {
			if ($key == $geofieldname) {
				/* find the GML information */
				$geofield = $value->children($namespaces['gml']);
				// Presume it is a Point TODO: never presume anything
				$latlon = explode(" ", (string)$geofield->Point->pos);
				$location['lat'] = $latlon[0];
				$location['lng'] = $latlon[1];
			}
		}

		$results = Array(
				'address' => $address,
				'components' => $components,
				'location' => $location,
				'bounds' => $bounds,
		);


		if (count($results) > 0) {
			$geom = new Point($results['location']['lng'], $results['location']['lat']);

			// Add additional metadata to the geometry - it might be useful.
			$geom->data = array();
			//$geom->data['geocoder_accuracy'] = $results['components']['name'];
			$geom->data['geocoder_formatted_address'] = $results['components']['name'];

			// For now, this has to suffice. Originally (in D6) the table in the openlayers_geosearch module
			// was built up dynamically, for now, we return the Google format so that client modules
			// Can understand what is returned. We use the list of fields to populate types & long_name
			// these are then displayed in the table.
			//foreach ($results['components'] as $key => $value) {
			  $values = array_values($results['components']);
			  $component = new stdClass();
			  $component->types = array($values[1]);
			  $component->long_name = $values[2];
			  $geom->data['geocoder_address_components'][] = $component;
			//}
			$geom->data['geocoder_count'] = $numberoffeatures;

			//$geometries[] = $geom;

			array_push($geometries, $geom);
		}


		// If there are any other geometries, these are auxiliary geometries that
		// represent "alternatives".

	}
	// The cannonical geometry is the first result.
	$geometry = array_shift($geometries);

	if (count($geometries)) {
		$geometry->data['geocoder_alternatives'] = $geometries;
	}

	return $geometry;
}

/**
 * Process Form.
 */
function geocoder_wfs_form($default_values = array()) {
	$form = array ();

	$form ['geometry_type'] = array (
			'#type' => 'select',
			'#title' => 'Geometry Type',
			'#options' => array (
					'point' => 'Point (default)',
					'bounds' => 'Bounding Box',
					'viewport' => 'Viewport'
			),
			'#default_value' => isset ( $default_values ['geometry_type'] ) ? $default_values ['geometry_type'] : 'point'
	);

	$form ['all_results'] = array (
			'#type' => 'checkbox',
			'#title' => 'Geocode all alternative results',
			'#default_value' => isset ( $default_values ['all_results'] ) ? $default_values ['all_results'] : FALSE,
			'#description' => 'Often an ambiguous address (such as "Springfield USA") can result in multiple hits. By default we only return the first (best guess) result. Check this to return all results as a Multi-Geometry (MultiPoint or MultiPolygon).'
	);

	$form ['reject_results'] = array (
			'#type' => 'checkboxes',
			'#title' => 'Reject Results',
			'#options' => array (
					'APPROXIMATE' => 'APPROXIMATE:  indicates that the returned result is approximate.',
					'GEOMETRIC_CENTER' => 'GEOMETRIC_CENTER: indicates that the returned result is the geometric center of a result such as a polyline (for example, a street) or polygon (region).',
					'RANGE_INTERPOLATED' => 'RANGE_INTERPOLATED: indicates that the returned result reflects an approximation (usually on a road) interpolated between two precise points (such as intersections). Interpolated results are generally returned when rooftop geocodes are unavailable for a street address.',
					'ROOFTOP' => 'ROOFTOP: indicates that the returned result is a precise geocode for which we have location information accurate down to street address precision.'
			),
			'#default_value' => isset ( $default_values ['reject_results'] ) ? $default_values ['reject_results'] : array (),
			'#description' => 'Reject results that do not meet a certain level of quality or precision. Check all types of results to reject.'
	);

	return $form;
}
