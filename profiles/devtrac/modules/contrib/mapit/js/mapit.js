/*
 *  @file
 *  Resolves a Mapit field using AJAX upon viewing the entity for the first 
 *  time
 */

(function ($) {
  Drupal.mapit = Array();
  Drupal.behaviors.mapit = {
    attach: function(context, settings) {
      // enable accordion memory
      $('.mapit-field', context).each(function() {
        for (var i = 0; i < this.attributes.length; i++) {
          if (this.attributes[i].nodeName == 'entity_type') {
            entity_type = this.attributes[i].nodeValue;
          }
          if (this.attributes[i].nodeName == 'entity_id') {
            entity_id = this.attributes[i].nodeValue;
          }
        }
        var url = Drupal.settings.basePath + "mapit/" + entity_type + "/" + entity_id + "/sync/js";
        loading = Drupal.t('Fetching...')
        $(this).html(loading + ' <span class="ajax-progress ajax-progress-throbber"><span class="throbber"></span></span>');
        $.ajax({ 
          type: 'GET', 
          url: url,
          success: Drupal.mapit.fillterm,
          fail: Drupal.mapit.filltermerror
        });
      });

      // enable tab memory
      
    }
  };
  
  Drupal.mapit.fillterm = function(resultjson) {
    result = JSON.parse(resultjson);
    var mapit_class_suffix = result.entity_type + '-' + result.entity_id;
    $("#mapit-view-" + mapit_class_suffix).parent().html(result.markup);
  };

  Drupal.mapit.filltermerror = function(result) {
    result = JSON.parse(resultjson);
    alert (result.markup); 
  };
  
})(jQuery);
