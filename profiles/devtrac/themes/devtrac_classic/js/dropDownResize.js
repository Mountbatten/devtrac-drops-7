(function ($) {
  Drupal.behaviors.myDropDown = {
    attach: function(context, settings) {
    	
    		dropDownResize();

    	function dropDownResize() {

    		var maxWidth = 0;
    		
    		$('.ctools-dropbutton .ctools-content ul').each(function() {
    			
    			var l = $(this).children('li').length,
        		ul_items = $(this).children('li'),
        		itemWidth;
        		
        		for (var i = 0; i < l; i++) {
        			itemWidth = $(ul_items[i]).outerWidth(true);
        			if (itemWidth > maxWidth) {
        				maxWidth = itemWidth;
        			}
        		}
    			
    			//Set fixed width
        		$(this).css('width', maxWidth);
        		
    		});

    		
    	}

    }
  };
})(jQuery);
