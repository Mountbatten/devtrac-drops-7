(function ($) {
  Drupal.behaviors.divMigrator = {
    attach: function(context, settings) {
      $('#Extruderolblockpanel.olControlblockpanel.extruder .flap').click( function () {
        if ($('#Extruderolblockpanel.olControlblockpanel.extruder').hasClass('isOpened') == true) {
          divMigratorIn();
        }
        else {
          divMigratorOut();
        }
      });
      $("#block-current-search-devtrac7-sitevisits-standard .current-search-item.current-search-item-active").hide();
      $("#OpenLayers_Map_2_OpenLayers_ViewPort h3.hiddentitle-done-processed").show();
 
      $('#OpenLayers_Map_2_OpenLayers_ViewPort h3.hiddentitle-done-processed').click(function() {
        $("#block-current-search-devtrac7-sitevisits-standard .current-search-item.current-search-item-active").slideToggle();
      });
    
      $('input[name="search_api_aggregation_1"]').click(function(event) {
        $(this).focus();
      });

      function divMigratorOut() {
        $('#Extruderolblockpanel .block-facetapi#block-facetapi-qroatxahw3knaekhprfd9avquqpaigex')
          .appendTo('#OpenLayers_Map_2_OpenLayers_ViewPort')
          //.insertBefore('#Extruderolblockpanel.olControlblockpanel')
          .addClass('outside');        
        
        /*$('#block-current-search-devtrac7-sitevisits-standard')
          .appendTo('#OpenLayers_Map_2_OpenLayers_ViewPort .block-facetapi#block-facetapi-qroatxahw3knaekhprfd9avquqpaigex');

        $('#block-current-search-devtrac7-sitevisits-standard .current-search-item.current-search-item-active').addClass('hide');*/

        $('#OpenLayers_Map_2_OpenLayers_ViewPort .block-facetapi#block-facetapi-qroatxahw3knaekhprfd9avquqpaigex.outside')
          .css('opacity','0')
          .animate({opacity:'1.0'}, 1000)
      }

      function divMigratorIn() {
        /*$('#block-facetapi-qroatxahw3knaekhprfd9avquqpaigex.outside #block-current-search-devtrac7-sitevisits-standard')
          .appendTo('#Extruderolblockpanel')
          .insertBefore('#Extruderolblockpanel .block-facetapi#block-facetapi-lxcsjuspi4hstsg0c8hcqgwn6vgs7poa');*/
        
        $('#OpenLayers_Map_2_OpenLayers_ViewPort .block-facetapi#block-facetapi-qroatxahw3knaekhprfd9avquqpaigex')
          .appendTo('#Extruderolblockpanel')
          .insertBefore('#Extruderolblockpanel .block-facetapi#block-facetapi-lxcsjuspi4hstsg0c8hcqgwn6vgs7poa')
          .removeClass('outside');
      }
    }
  };
})(jQuery);

