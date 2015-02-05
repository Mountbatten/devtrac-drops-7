(function($){
  Drupal.behaviors.tabs_behavior_apply = {
    attach : function(context, settings) {
        
        $("#region-preface-third", context).mCustomScrollbar({
            scrollButtons:{ enable:true },
            theme: "dark-thick",
            advanced:{ updateOnContentResize: true }
        });

        $("#context-block-quicktabs-organisation_map_list", context).mCustomScrollbar({
            scrollButtons:{ enable:true },
            theme: "dark-thick",
            advanced:{ updateOnContentResize: true }
        });
  
        $("#context-block-quicktabs-tabpage-activities_map_list-1", context).mCustomScrollbar({
            scrollButtons:{ enable:true },
            theme: "dark-thick",
            advanced:{ updateOnContentResize: true }
        });
  
        $("#quicktabs-tabpage-organisation_map_list-1", context).mCustomScrollbar({
            scrollButtons:{ enable:true },
            theme: "dark-thick",
            advanced:{ updateOnContentResize: true }
        });

        $("#modal-content.modal-content", context).mCustomScrollbar({
            scrollButtons:{ enable:true },
            theme: "dark-thick",
            advanced:{ updateOnContentResize: true }
        });
 
        $(".ext_wrapper > .content > .text", context).mCustomScrollbar({
            scrollButtons:{ enable:true },
            theme: "light-thick",
            advanced:{ updateOnContentResize: true }
        });

    }
  };
})(jQuery);
