(function ($) {
  Drupal.behaviors.mapDivResize = {
    attach: function(context, settings) {
    	
    	mapDivResize();
        geoSearchResize();

    	$(window).resize(function() {
    		mapDivResize();
            geoSearchResize();
    	});
    	
    	function mapDivResize() {
    	  var useHeight = $(window).height() - ($('header').height() + $('footer').height());
    	  // we start with .html because that class is not available in the print pages
    	  // where we do not want to resize the map
    	  $('.html .grid-12.region-content #openlayers-container-openlayers-map').css('height', useHeight);
    	  $('.html .grid-12.region-content #openlayers-map').css('height', useHeight);
    	}
    	
        function geoSearchResize() {
          // if this is a maptext control, then take the height of the parent of the control.
          // that is the height of the map
          var mapHeight = $('#openlayers_geosearch_search-form-results.olControlMaptext').parent().height();
          var titleHeight = $('#openlayers_geosearch_search-form-results_title').height();
          var formHeight = 73; // The CSS applied does not allow for this. This is a bug! $('#openlayers-geosearch-searchform').height();
          var panelHeaderHeight = $('.olControlMaptext h2.openlayersgeosearchpanels-title').outerHeight(true);
          
          /*
           * The 100 is an arbitrary value that encompasses the top margin of the maptext
           * + the bottom margin. In our case, that is just above the Scale control
           * + some stuff we missed in the previous calculation (margins somewhere?)
           */
          var scrollSpace = (mapHeight - (titleHeight + formHeight + (3 * panelHeaderHeight))) - 130;
          if (scrollSpace > 10) {
            $('#openlayersgeosearchpanels-mapquest_nominatim, #openlayersgeosearchpanels-geonames, #openlayersgeosearchpanels-wfs').css('height', scrollSpace);
          }
        }

    }
  };
})(jQuery);
