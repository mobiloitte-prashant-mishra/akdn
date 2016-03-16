// Hide Media source url when creating an article
// #states does not seem to be working on field of type url
jQuery(document).ready(function() {
  jQuery('#edit-field-article-cat-und').change(function() {
    var category = this.value;
    if (category == 2511) {
      jQuery('#edit-field-media-source-url-und-0-url').hide();
      jQuery('label[for="edit-field-media-source-url-und-0"]').hide();
    }
    else {
      jQuery('#edit-field-media-source-url-und-0-url').show();
      jQuery('label[for="edit-field-media-source-url-und-0"]').show();
    }
  });

  /* JQuery for displaying Quotations.*/
  jQuery('.page-quote-finder .views-row-1').siblings().css('display', 'none');
  jQuery('.page-quote-finder .views-row-1').siblings('h3').css('display', 'block');
  jQuery('.more-quotes').click(function() {
     var moreQuotes = jQuery(this).find('span:first').attr('class');
     jQuery('.' + moreQuotes).css('display', 'block');
  });

  /* hide More Quotations link if there is only one Quotations */
  jQuery(".view-id-solr_quote_finder .view-grouping-content").each(function(){
    var check = jQuery(this).find('div.views-row:nth-child(3)').length;
    if(check == 0){
      jQuery(this).find('.more-quotes').hide();
    }
  });
});
