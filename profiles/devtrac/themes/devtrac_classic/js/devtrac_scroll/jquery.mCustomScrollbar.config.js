(function($){
  Drupal.behaviors.tabs_behavior_apply = {
    attach : function(context, settings) {
        
        $("#block-views-dvtrc-action-items-block-2 .content", context).mCustomScrollbar({
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
 

 


    }
  };
})(jQuery);
