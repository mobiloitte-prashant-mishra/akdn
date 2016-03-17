/**
 * @file
 * A javascript file for all the pages.
 */
jQuery(document).ready(function() {
  if (jQuery("#tb-megamenu-main-menu .tb-megamenu-subnav li").hasClass("active")) { 
    jQuery("#tb-megamenu-main-menu").addClass("tb-menu-active"); 
  }
  
  if (window.location.href.indexOf("latest-additions")) {
    jQuery(".tb-megamenu-item:nth-child(7)").removeClass("active");		
} 
});
