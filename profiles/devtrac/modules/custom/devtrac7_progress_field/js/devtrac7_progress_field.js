(function($) {
//  Drupal.behaviors.devtrac7progressbar = function(context) {
  $(document).ready(function() {
    // Have jquery progressbar plugin do its magic
    $('.devtrac7progressbar:not(.devtrac7progressbar-processed)').each(function() { 
      var val = $(this).attr('rel');
      $(this).progressbar({ value: parseInt(val) });
    })
    .addClass('devtrac7progressbar-processed');

    // Copy the classes from the a element onto its parent li element
    // Allows for some more felxibility in styling the list of progress links
    $('.views-field-virtual-field ul.links li a').each(function() {
      $(this).parent().addClass($(this).attr('class'));
    });
  });
//  };
})(jQuery);
