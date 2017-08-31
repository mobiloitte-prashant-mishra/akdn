<?php

/**
 * Page callback for search/google-search
 */
function akdn_custom_google_search(){
  drupal_add_js("(function() {
    var cx = '002035667163246317205:k3y1bhypngu';
    var gcse = document.createElement('script');
    gcse.type = 'text/javascript';
    gcse.async = true;
    gcse.src = 'https://cse.google.com/cse.js?cx=' + cx;
    var s = document.getElementsByTagName('script')[0];
    s.parentNode.insertBefore(gcse, s);
  })();", array('type' => 'inline', 'scope' => 'header'));
  return  "<div class='custom_google_search'><gcse:search></gcse:search></div>";
}

