<?php
/**
 * @file
 * akdn_custom_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function akdn_custom_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Akaa Social Share Footer';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'akaa_social_share_footer';
  $fe_block_boxes->body = '<div class="social-box">

<ul class="social-links">
	<li><a href="https://twitter.com/hashtag/agakhanaward" target="_blank" title="Twitter" class="twitter">twitter</a></li>
	<li><a href="http://www.youtube.com/TheAgaKhanAward" target="_blank" title="YouTube" class="youtube">youtube</a></li>
	<li><a href="http://www.facebook.com/AgaKhanAward" target="_blank" title="Facebook" class="facebook" style="font-size: 13.008px; line-height: 1.538em;">facebook</a></li>
</ul>

</div>';

  $export['akaa_social_share_footer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Akdn at galance on home page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'akdn_galance';
  $fe_block_boxes->body = '<span style="font-size: 38px;">AKDN</span> <span>AT A GLANCE</span>

<ul>
	<li><a href="http://akdnstg.prod.acquia-sites.com/sites/akdn/files/media/documents/akaa_documents/2016_akaa/master_jury/akaa_2014-2016_master_jury_bios.pdf" target="_blank">Fact sheet</a></li>
	<li><a href="https://krb-xjobs.brassring.com/tgwebhost/searchresults.aspx?PartnerId=30025&amp;SiteId=5750&amp;amp;Function=LinkQuery&amp;LinkId=642" target="_blank" title="Work with us">work with us</a></li>
	<li><a href="frequently-asked-questions" title="Frequently Questions">frequent questions</a></li>
</ul>';

  $export['akdn_galance'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact us block for AKMI page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'akmi_contact_us_block';
  $fe_block_boxes->body = 'Aga Khan Music Initiative - Aga Khan Trust for Culture
P.O. Box 2049, 1211 Geneva 2 ,
Switzerland
Tel: (+41 22) 909 7247
Fax: (+41 22) 909 7292
E-mail: akmi@akdn.org';

  $export['akmi_contact_us_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'AGA KHAN MUSIC INITIATIVE LOGO';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'akmi_logo';
  $fe_block_boxes->body = '<div class="top-logo"><a href="http://akdn.prod.acquia-sites.com/akmi">[[{"fid":"33311","view_mode":"media_original","fields":{"format":"media_original","field_file_image_alt_text[und][0][value]":"","field_file_image_title_text[und][0][value]":"","field_image_copytight[und][0][value]":"","field_folder[und]":"2764","field_tags[en]":"","field_image_author[und][0][title]":"","field_image_author[und][0][url]":"","field_image_date_taken[und][0][value][date]":"","field_image_date_taken[und][0][value][time]":"","field_image_source[en][0][value]":"","field_image_description[en][0][value]":"","field_image_rough_caption[en][0][value]":"","field_image_external_url[und][0][value]":""},"type":"media","attributes":{}}]]</a></div>';

  $export['akmi_logo'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'AKMI Performance Finder Link';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'akmi_performance_finder_link';
  $fe_block_boxes->body = '<a href="/akmi/performance" title="Project Finder">Performance Finder</a>';

  $export['akmi_performance_finder_link'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'akmi_social_block';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'akmi_social_icons_block';
  $fe_block_boxes->body = '<div class="left-text"><p>Follow us on</p></div>
<div class="right-text">
<div class="addthis_toolbox addthis_32x32_style addthis_default_style">
<a class="addthis_button_twitter_follow" addthis:userid="agakhanmusic" target="_blank"></a>
<a class="addthis_button_facebook_follow" addthis:userid="pages/Aga-Khan-Music-Initiative/453472324767685" target="_blank"></a>
<a class="addthis_button_youtube_follow" addthis:userid="agakhanmusic" target="_blank"></a>
<a class="addthis_button_vimeo_follow" addthis:userid="akmi" target="_blank"></a>
<a href=" https://soundcloud.com/aga-khan-music-initiative" target="_blank"><img src="http://akdndev.prod.acquia-sites.com/sites/all/themes/akdn/images/sound_cloud.png"></a>
</div></div>
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-52ea010a57b03f46"></script>
<!-- AddThis Follow END -->

 ';

  $export['akmi_social_icons_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'AKMI Footer Social Sharing Icon';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'akmi_social_sharing_footer_icon';
  $fe_block_boxes->body = '<div class="social-box">

<ul class="social-links">
	<li><a href="http://www.twitter.com/agakhanmusic" target="_blank" title="AKMI Twitter" class="twitter">twitter</a></li>
	<li><a href="http://www.youtube.com/agakhanmusic" target="_blank" title="AKMI YouTube" class="youtube">youtube</a></li>
	<li><a href="http://www.facebook.com/AgaKhanMusicInitiative" target="_blank" title="AKMI Facebook" class="facebook">facebook</a></li>
	<li><a href="https://vimeo.com/akmi" target="_blank" title="AKMI Vimeo" class="vimeo">Vimeo</a></li>
	<li><a href="https://www.akdn.org/akmi" target="_blank" title="AKMI" class="akmi">AKMI</a></li>
</ul>

</div>';

  $export['akmi_social_sharing_footer_icon'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Breadcrumb New block';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'breadcrumd_new_block';
  $fe_block_boxes->body = '<?php
 print  theme(\'breadcrumb\', array(\'breadcrumb\'=>drupal_get_breadcrumb())); 
?>';

  $export['breadcrumd_new_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home Page Whats New Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'home_page_whats_new_block';
  $fe_block_boxes->body = '<span style="font-size: 42px;">W</span>HAT\'S NEW

<ul>
	<li><a href="press-centre/press-releases">PRESS RELEASES</a></li>
	<li><a href="press-centre/speeches" title="Speeches">SPEECHES</a></li>
	<li><a href="press-centre/videos">VIDEOS</a></li>
	<li><a href="press-centre/publications">PUBLICATIONS</a></li>
	<li><a href="press-centre/events">EVENTS</a></li>
</ul>';

  $export['home_page_whats_new_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'panes Custom Wrapper End Div';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'panes_custom_wrapper_end_div';
  $fe_block_boxes->body = '<span style="display: none;">hide</span>';

  $export['panes_custom_wrapper_end_div'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'panes Custom Wrapper Start Div';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'panes_custom_wrapper_start_div';
  $fe_block_boxes->body = '<span style="display: none;">hide</span>';

  $export['panes_custom_wrapper_start_div'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'AKAA Project Finder Links Right Side Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'project_finder_links';
  $fe_block_boxes->body = '<a href="/architecture/projects" title="Project Finder">Project Finder</a>';

  $export['project_finder_links'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Project Finder Title';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'project_finder_title';
  $fe_block_boxes->body = '&lt;h2 class="pane-title"&gt;Project Finder&lt;/h2&gt;';

  $export['project_finder_title'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Publications page title';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'publications_page_title';
  $fe_block_boxes->body = '<h2 id="publications-title">PUBLICATIONS</h2>';

  $export['publications_page_title'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Site Logo';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'site_logo';
  $fe_block_boxes->body = '<div style="background-image: url(\'/sites/akdn/themes/akdn/images/akdn-logo.png\'); background-repeat: no-repeat; width: 120px; height: 55px;"><a href="/" title="AKDN"><img src="/sites/akdn/themes/akdn/images/transparent_img.png" style="width: 120px; height: 55px;"></a></div>';

  $export['site_logo'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social Share footer';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'social_share_footer';
  $fe_block_boxes->body = '<div class="social-box">

<ul class="social-links">
	<li><a href="http://www.twitter.com/akdn" target="_blank" title="Twitter" class="twitter">twitter</a></li>
	<li><a href="http://www.youtube.com/akdn" target="_blank" title="YouTube" class="youtube">youtube</a></li>
	<li><a href="http://www.facebook.com/akdn" target="_blank" title="Facebook" class="facebook" style="font-size: 13.008px; line-height: 1.538em;">facebook</a></li>
	<li><a href="https://instagram.com/akdn/" target="_blank" title="Instagram" class="instagram">Instagram</a></li>
</ul>

</div>';

  $export['social_share_footer'] = $fe_block_boxes;

  return $export;
}
