/**
 * @file
 * A javascript file for the home page.
 */
jQuery(document).ready(function() {
  if( !jQuery.trim(jQuery('.panels-flexible-region-1-subscribe-inside').html()).length) {
    jQuery('.panels-flexible-region-1-about_ismaili').css('width', '100%');
  }
});
