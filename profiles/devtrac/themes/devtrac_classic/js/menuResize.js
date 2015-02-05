(function ($) {
  Drupal.behaviors.menuResize = {
    attach: function(context, settings) {
    	
        //dropdownArrow();

        dropdownArrow('li.menuparent > a');
        dropdownArrow('html.js fieldset.collapsible .fieldset-legend .fieldset-title');

        
    	sizeMenuDiv();
    	menuResize();
    	$(window).resize(function() {
    		sizeMenuDiv();
    		resetMenu();
    		menuResize();
    	});
    	
    	function menuResize() {

    		//Get the width of menu container a
    		var containerWidth = $('#region-menu').width();
    		
    		//Get width of all menu items summed up b
    		var ul = $('#region-menu ul#nice-menu-1'),
	    		l = ul.children('li').length,
	    		ul_items = ul.children("li"),
	    		totalLength = 0;
    		
    		for (var i = 0; i < l; i++) {
    			totalLength += $(ul_items[i]).outerWidth(true);
    		}
    		
   			if (totalLength > containerWidth) {
				ul.append('<li class="submenu"><a href="#">More</a><ul></ul></li>');
				var t_Length = $('.submenu').outerWidth(true);
				for (var i = 0; i < l; i++) {
	    			t_Length += $(ul_items[i]).outerWidth(true);
	    			if (t_Length > containerWidth) {
	    				$('.submenu ul').append($(ul_items[i]));
	    			}
	    		}
			}
    	}
    	
    	function resetMenu() {
    		if ($('.submenu').length) {
    			var c_length = $('.submenu ul').children('li').length;
    			var submenu_items = $('.submenu ul').children('li');
    			
				for (var i = 0; i < c_length; i++) {
					$('#region-menu ul#nice-menu-1').append($(submenu_items[i]));
	    		}
    			$('.submenu').remove();
    		}
    		
    	}  
    	
    	function sizeMenuDiv() {
			if ($('#zone-branding').width() > 256 ) {
				$('.grid-8.region-menu').css('width', function() {
					return ($('#zone-branding').width() - (265 + 40));
				});
			}
			else {
				$('.grid-8.region-menu').css('width', function() {
					return 256;
				});
			}
    	}




        function dropdownArrow(item) {
            if ($( item + ' .drop-arrow').length < 1) {
                $(item).append('<span class="drop-arrow"></span>');
            }           
        }

    }
  };
})(jQuery);





