(function ($) {
Drupal.behaviors.ToolTips = {
    attach: function() {
        $('.word-link').tooltip({
          position: {
            my: "center bottom-20",
            at: "center top",
            using: function( position, feedback ) {
              $( this ).css( position );
              $( "<div>" )
                .addClass( "arrow" )
                .addClass( feedback.vertical )
                .addClass( feedback.horizontal )
                .appendTo( this );
            }
          }
        });

        $('.popup-only').click(function() {
          return false;
        });
    }
}
})(jQuery);
