(function($) {
    $(function() {
        var node_alias_url = Drupal.settings.node_alias_url;
        var user_anonymous = Drupal.settings.user_anonymous;
        var paragraph_arrive_links = $('div.paragraph-arrive-link');

        paragraph_arrive_links.each(function(index, value) {
            var paragraph_arrive_link = $(this).text();

            var paragraph_arrive_text = paragraph_arrive_link.toLowerCase();
            paragraph_arrive_text = paragraph_arrive_text.replace(/ +/g, '-');

            $(this).attr('id', paragraph_arrive_text);
            
            if (!user_anonymous) {
                // Print full URL for admin to create Custom header Block links
                $(this).append("&nbsp;&nbsp;<span>" + node_alias_url + '#' + paragraph_arrive_text + "</span>");
            }
        });
        
        // Directly arrive to the paragraph concerning this country
        $("a[rel='m_PageScroll2id']").mPageScroll2id();
        
    });
})(jQuery);
