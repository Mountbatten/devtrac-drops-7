(function ($) {
  Drupal.rollOverEffect = {}

  Drupal.behaviors.rollOverEffect = {
    attach: function (context, settings) {

	$(".rss").parent().attr('class', 'feed-icon rss-icon');
	$(".kml").parent().attr('class', 'feed-icon kml-icon');
	$(".csv").parent().attr('class', 'feed-icon csv-icon');

    }
  };
})(jQuery);
