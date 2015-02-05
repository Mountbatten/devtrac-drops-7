
/*
 *  Manages the left & right scrolling of Category Balls
 */

(function ($) {

  Drupal.behaviors.hidden_title = {
    attach: function (context, settings) {
      $(".region-content h3", context).once('hiddentitle-done', function () {
      $(this).hover(function(){$(".hiddentitle").show();},
                     function(){$(".hiddentitle").hide();});
      });
    }
  };

  /*
   *   Move the comment form from the content area to the other block 
   *   on the right on the comment reply page
   */
  Drupal.behaviors.move_commentform = {
    attach: function (context, settings) {
      $(".page-comment-reply #comment-form", context).once('move-commentform-done', function () {
        $(this).appendTo(".view-dvtrc-action-items .views-row-1");
      });
    }
  };
  
  
})(jQuery);



  

