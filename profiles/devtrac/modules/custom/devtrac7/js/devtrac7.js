(function ($) {
/**
 * This section is depending on the behaviors_weights module
 * and fixes several issues in the order of, guess what, behaviors
 *
 * First add the browser strings to the <html> tag as classes 
 * then make sure the 'disabled' option is added to the
 * select boxes by the taxonomy_access module
 * both before chosen turns the control into a chosen
 */
Drupal.behaviors['browserSelectors.weight'] = 4;
Drupal.behaviors['tac_create.weight'] = 5;
Drupal.behaviors['chosen.weight'] = 10;

Drupal.behaviors.initModalFieldTrip = {
  attach: function (context, settings) {
    $("a[href*='addplaceform/ajax//go']", context).once('init-modal-fieldtrip', function () {
      this.href = this.href.replace('ajax//','ajax/nojs/');
    });

    $("a[href*='fieldtripcommentform/ajax//go']", context).once('init-modal-fieldtrip', function () {
      this.href = this.href.replace('ajax//','ajax/nojs/');
    });
  }
};

Drupal.behaviors.addPlace = {
	attach: function (context, settings) {
	  /** Finder Page
	   * All items with a placetype are Site Visits.
	   */
/*	  $('#edit-placetype:not(.processed)').each(function() {
	    $(this).addClass('processed'); //this is for ourselves
	      // IE does not see the change event when it happens, so we help it a bit. FUCKERS!!
	      $(this).click(function() {
	        if ($.browser.msie) {
	          $(this).change();
	          $(this).blur();

	       }
	      });
	    $(this).change(function() {
	      if ($(this)[0].selectedIndex > 0 ) {
	        if (($('#edit-sitereporttype')[0].selectedIndex == 0) || ($('#edit-sitereporttype')[0].selectedIndex == 2)) { 
	          $('#edit-sitereporttype')[0].selectedIndex = 1;
	        }
	      }
	      $('#edit-sitereporttype option')[0].disabled = ($(this)[0].selectedIndex > 0);
	      $('#edit-sitereporttype option')[2].disabled = ($(this)[0].selectedIndex > 0);
	      return false;
	    });
	    // call change for initial settings
	    $(this).change();
	  });

	  /** Finder Page
	   *  If Roadside observation then dont select a Placetype
	   */
/*	  $('#edit-sitereporttype:not(.processed)').each(function() {
	    $(this).addClass('processed'); //this is for ourselves
	      // IE does not see the change event when it happens, so we help it a bit. FUCKERS!!
	      $(this).click(function() {
	        if ($.browser.msie) {
	          $(this).change();
	          $(this).blur();

	       }
	      });
	    $(this).change(function() {
	      $('#edit-placetype')[0].disabled = $(this)[0].selectedIndex == 2;
	      return false;
	    });
	    // call change for initial settings
	    $(this).change();
	  });
	*/  
	  

	  /** Add place page
	   *  If adding Roadside Observation, then hide placetype 
	   */
//	  $('#devtrac7-addplaceform .form-radio[name="reporttype"], context').once('init-addplaceform', function() {
//	    //$(this).addClass('processed'); //this is for ourselves
//	      // IE does not see the change event when it happens, so we help it a bit. FUCKERS!!
//	      $(this).click(function() {
//	        if ($.browser.msie) {
//	          $(this).change();
//	          $(this).blur();
//
//	       }
//	      });
//	      $(this).change(function() {
//	        $('input[name="placetype"]').attr('disabled', ($(this)[0].value == 1 && $(this)[0].checked));
//	        $('input[name="placetype"]').parent().parent().parent().toggle(!($(this)[0].value == 1 && $(this)[0].checked));
//	        $($('input[name="placetype"]')[4]).parent().toggle(!($(this)[0].value == 0 && $(this)[0].checked));
//	        if ($('input[name="placetype"]')[4].checked) {
//	          $('input[name="placetype"]')[3].checked = ($(this)[0].value == 0 && $(this)[0].checked);
//	        }
//	        return true;
//	      });
//	      // call change for initial settings
//	      $($('input[name="placetype"]')[0]).checked = true;
//	      $($('input[name="placetype"]')[0]).value = 1;
//	      $(this).change();
//	      $($('input[name="placetype"]')[4]).parent().toggle(false);
//	  });
	}
  };
  
Drupal.behaviors.initModalFormsBarcode = {
  attach: function (context, settings) {
    $("a[href*='/user/barcode'], a[href*='?q=user/barcode']", context).once('init-modal-forms-barcode', function () {
      this.href = this.href.replace(/user\/barcode/,'devtrac7/modal/nojs/barcode');
    }).addClass('ctools-use-modal ctools-modal-modal-popup-medium');
  }
};

Drupal.behaviors.FixOpenLayersOrdering = {
        attach: function (context, settings) {
            if (typeof OpenLayers != 'undefined') {
            OpenLayers.Handler.Feature.prototype.activate = function() {
                var activated = false;
                if (OpenLayers.Handler.prototype.activate.apply(this, arguments)) {
                    //this.moveLayerToTop();
                    this.map.events.on({
                        "removelayer": this.handleMapEvents,
                        "changelayer": this.handleMapEvents,
                        scope: this
                    });
                    activated = true;
                }
                return activated;
            };
          }
        }
  };
})(jQuery);



