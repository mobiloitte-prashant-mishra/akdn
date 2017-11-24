jQuery(document).ready(function() {
      jQuery(" .image-right-align .field-type-text-with-summary p:nth-child(4) img").not('[src*="pdf.png"]').addClass('image-side_image large-image');
});

     /*scroll back to top*/
(function ($) {
    Drupal.behaviors.backtotop = {
      attach: function(context, settings) {
      $(".back_to_top").click(function() {
      $('html, body').animate({ scrollTop: 0 }, 1200);
      return false;
      });
    }}
})(jQuery);
;
;
