(function ($) {
  Drupal.behaviors.readmore = {
    attach : function(context, settings) {
      $('.readmore-summary .readmore-link').click(function(e) {
        $('.readmore-summary').removeClass("readmore_hide").addClass("readmore_show");
        $('.readmore-text').removeClass("readmore_show").addClass("readmore_hide");
        //$('.related-artist').removeClass("readmore_show").addClass("readmore_hide");
        e.preventDefault();
        var summary = $(this).closest('.readmore-summary');
        var rel_info_show = $(this).closest('.pc-listing-info').siblings('.pc-listing-img').children('.related-artist');
        summary.removeClass("readmore_show").addClass("readmore_hide");
        summary.next('.readmore-text').removeClass("readmore_hide").addClass("readmore_show");
        rel_info_show.removeClass("readmore_hide").addClass("readmore_show");
      });
      $('.readmore-text .readless-link').click(function(e) {
        e.preventDefault();
        var text = $(this).closest('.readmore-text');
        var rel_info_hide = $(this).closest('.pc-listing-info').siblings('.pc-listing-img').children('.related-artist');
        text.removeClass("readmore_show").addClass("readmore_hide");
        text.prev('.readmore-summary').removeClass("readmore_hide").addClass("readmore_show");
        rel_info_hide.removeClass("readmore_show").addClass("readmore_hide");
      });
    }
  };
})(jQuery);
