// document.namespaces;
(function ($) {
	Drupal.OL_lat_long = Drupal.OL_lat_long || {};

	var map;
	var pointLayer;

	Drupal.behaviors.OL_lat_long = {
		attach: function (context, settings) {
			$('body').once('OL_lat_long', function () {
				map = $('#openlayers-map').data('openlayers').openlayers;
				pointLayer= map.layers[1];
				proj4326 = new OpenLayers.Projection("EPSG:4326");
				proj900913 = new OpenLayers.Projection("EPSG:900913");
				Drupal.OL_lat_long.dragPoint(pointLayer,map);
				Drupal.OL_lat_long.actualizeLatLong();
				//when a feature is drawn
				pointLayer.events.on({
		 			featureadded : Drupal.OL_lat_long.featureComplete,
				});
// var pointControl = new OpenLayers.Control.DrawFeature(pointLayer, OpenLayers.Handler.Point);
// map.addControl(pointControl);
// // pointControl.activate();
// pointControl.events.register('featureadded', ' ', Drupal.OL_lat_long.myFuncFeatureAddHandler);


				$('#redrawPoint').click(function(){
					Drupal.OL_lat_long.redrawPointOnMap(pointLayer,map);
					// Drupal.OL_lat_long.actualizeLatLong();

				});
			});
		}
	}
	Drupal.OL_lat_long.myFuncFeatureAddHandler = function(data){
		console.log(data);
	}

	Drupal.OL_lat_long.dragPoint = function(pointLayer,map){
		// drag = new OpenLayers.Control.DragFeature(pointLayer, {autoActivate: true, onComplete: Drupal.OL_lat_long.onCompleteMove});
		var drag = new OpenLayers.Control.DragFeature(pointLayer);
		map.addControl(drag);
		drag.activate();
		//when a feature is dragging
		drag.onDrag = function(feature) {
			Drupal.OL_lat_long.onCompleteMove(feature);
		}
	}



	Drupal.OL_lat_long.onCompleteMove = function(feature){
	  if(feature){ 
	  	//display the point lat/long inside the divs
	  	var longitude = feature.geometry.x;
		var latitude = feature.geometry.y;
	  	if(typeof longitude !== 'undefined' || typeof latitude !== 'undefined'){
				var pixel = new OpenLayers.LonLat(latitude, longitude);
				pixel.transform(proj900913, proj4326);
				$('#longitude').text('Longitude: '+pixel.lon);
				$('#latitude').text('Latitude: '+pixel.lat);
			}
		}
	}


	 Drupal.OL_lat_long.actualizeLatLong = function(){
	 	//display the point lat/long inside the divs, Used because when a feature is drawn doesn't take any argument
	 	//have to find another solution to this problem
	 	if($('#openlayers-map').data('openlayers').openlayers.layers[1].features[0]){ 
			var longitude = $('#openlayers-map').data('openlayers').openlayers.layers[1].features[0].geometry.x;
			var latitude = $('#openlayers-map').data('openlayers').openlayers.layers[1].features[0].geometry.y;
			if(typeof longitude !== 'undefined' || typeof latitude !== 'undefined'){
				var pixel = new OpenLayers.LonLat(longitude, latitude);
				pixel.transform(proj900913, proj4326);
				$('#longitude').text('Longitude: '+pixel.lon);
				$('#latitude').text('Latitude: '+pixel.lat);
			}
		}
	}

	Drupal.OL_lat_long.featureComplete = function(){
		setTimeout(function(){Drupal.OL_lat_long.actualizeLatLong()},100);
	}

 
	Drupal.OL_lat_long.redrawPoint = function(latitude,longitude,pointLayer,map){
		//draw a point on the map, center it and display inside the divs
		var point = new OpenLayers.Geometry.Point(longitude, latitude);
		lonlat= new OpenLayers.LonLat(longitude, latitude);
		lonlat.transform(proj4326, map.getProjectionObject());
		map.setCenter(lonlat, 2);

		point = point.transform(proj4326, map.getProjectionObject());
		var pointFeature = new OpenLayers.Feature.Vector(point, null, null);
		pointLayer.addFeatures([pointFeature]);
		$('#longitude').text('Longitude: '+longitude);
		$('#latitude').text('Latitude: '+latitude);
	}

	Drupal.OL_lat_long.scrollToId = function(id){
		//scroll to the map afer clicking on the button to create a point with lat/long
	    $('html, body').animate({scrollTop: $(id).offset().top },1000);
	}


	Drupal.OL_lat_long.redrawPointOnMap = function(pointLayer,map){
		// check if right lat/long
		var lat = $('#edit-edit-field-lat').val();
		var lon = $('#edit-edit-field-lon').val();
		var lonVal = /^-?((([1]?[0-7][0-9]|[1-9]?[0-9])\.{1}\d{1,15}$)|[1]?[1-8][0]\.{1}0{0,15}$)/;
		var latVal = /^-?([1-8]?[0-9]\.{1}\d{0,15}$|90\.{1}0{0,15}$)/;
		var latOk = latVal.test(lat);
		var lonOk = lonVal.test(lon);

		if(latOk === true && lonOk === true){
			var latitude = parseFloat(lat);
			var longitude = parseFloat(lon);
			Drupal.OL_lat_long.redrawPoint(latitude,longitude,pointLayer,map);
			Drupal.OL_lat_long.scrollToId(document.getElementById('openlayers-map'));
		}
		else if(latOk === true && lonOk === false){
			alert('The Longitude you typed is wrong \n The Longitude must be between -180 and 180\n example: -135.345445623');
			$('#edit-edit-field-lon').addClass('error');
		}
		else if(latOk === false && lonOk === true){
			alert('The latitude you typed is wrong \n The Latitude must be between -90 and 90\n example: 35.345445623');
			$('#edit-edit-field-lat').addClass('error');
		}
		else{
			alert('The Latitude and Longitude you typed are wrong \n The Latitude must be between -90 and 90\n The Longitude must be between -180 and 180');
			$('#edit-edit-field-lat').addClass('error');
			$('#edit-edit-field-lon').addClass('error');

		}

		$('input#edit-edit-field-lat, input#edit-edit-field-lon').bind('input', function() {
			$(this).removeClass('error');
		});

	}
}(jQuery));
