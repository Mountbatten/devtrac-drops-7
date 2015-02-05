(function($) {
	Drupal.behaviors.nicefileinput = {
		attach : function(context, settings) {
			
			$("input[type=file]").nicefileinput();

		}

	};

})(jQuery);
