jQuery(document).ready(function() { // FUNCTION CALLED WHEN DOCMENT READY
    
   toggle_menubar(); 
   insert_akmifilterblock(); 
});


jQuery(window).resize(function(){ // FUNCTION CALLED WHEN DEVICE ORIENTANTAION CHANGE OR CHNAGE IN THE WIDTH OF THE BROSWER
    
     insert_akmifilterblock(); // Function to insert before akmi filter to the content on akmi search pages on mobile
     
});

function toggle_menubar(){  // Function to toggle menu block on mobile devices
//     jQuery('.menu-title .arrow').click(function() {
//        jQuery('.toggle-block .view-content').slideToggle();
//        jQuery(this).toggleClass('up-arrow');
//    });
    
//      jQuery('.menu-title .arrow').each(function() {
//           jQuery(this).click(function() {
//        jQuery(this).find('').slideToggle();
//        jQuery(this).toggleClass('up-arrow');
//    });
//      });

jQuery('.menu-title .arrow').each(function() {
        jQuery(this).click(function(){          
             jQuery(this).toggleClass('up-arrow');
            if(jQuery(this).hasClass('up-arrow')){
                jQuery(this).closest('.toggle-block').find('.view-content').slideUp();
            }
           else{
               jQuery(this).closest('.toggle-block').find('.view-content').slideDown();
           }
        });
});
    
    jQuery('.menu-link-toggle').click(function(){
        jQuery('.mobile-menu').slideToggle();
    });
    
}

function insert_akmifilterblock(){  // Function to insert before akmi filter to the content on akmi search pages on mobile
    var width = jQuery(window).width();
    if(width <= 740){
         jQuery('.akmi-search-result-sidebar-first').insertBefore('.akmi-search-result-content-area');
        
    }else{
        jQuery('.akmi-search-result-sidebar-first').insertAfter('.akmi-search-result-content-area');
    }
    
}