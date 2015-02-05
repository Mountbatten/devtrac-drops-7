

(function ($) {

	Drupal.behaviors.devtracTagcloud = {
	  attach: function (context, settings) {
	    $(".facetapi-facetapi-tagcloud", context).once('tagcloud-done', function () {
          $(this).find('li').each( function() {
        	  
            var $a = $(this).find('a');
          
	        var cssColor = CreateRandomColor();
	        var cssFontSize = SetFontSize();
             //, fontSize: cssFontSize
	        var linkOffsets = SetOffsets();
        
           $a.css({color: cssColor, top: linkOffsets.top, left: linkOffsets.left});
           
       	function CreateRandomColor() { 

    	    var hex = '0123456789ABC'.split(''),
    	    color = '#', i; 

    	    for (i = 0; i < 6; i += 1) {
    	        color = color + hex[Math.floor(Math.random() * 13)];
    	    }  

    	    return color;
    	};

    	function SetFontSize()  {

    	    var maxFontSize = 30;
    	    var fontSize = Math.floor(Math.random() * maxFontSize + 14) + 'px';

    	    return fontSize;

    	};

    	function SetOffsets()  {

    	    var offsets = {};

    	    var randTop = Math.floor(Math.random() * 10);
    	    var randLeft = Math.floor(Math.random() * 10);

    	    var maxTop = Math.floor(Math.random() * randTop) + 'px';
    	    var maxLeft = Math.floor(Math.random() * randLeft) + 'px';

    	   offsets.top = maxTop;
    	   offsets.left = maxLeft;

    	   return offsets;    

    	};

          });

	    });
	  }
	};
	    	
})(jQuery);
