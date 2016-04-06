<?php
/**
 * @file
 * ak_akdn_content_syndication.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ak_akdn_content_syndication_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-agency-explode';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'Agency';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '*',
    'limit' => '',
    'real_separator' => '*',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['speech_importer-agency-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-geography-explode';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'Geography';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '*',
    'limit' => '',
    'real_separator' => '*',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['speech_importer-geography-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-image-find_replace';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'People/Official%20Portrait%20of%20His%20Highness%20the%20Aga%20Khan/HisHighnessAgaKhan-Portrait-24082.jpg',
    'replace' => 'events/2014/2014-12-uk-photo.jpg',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Find replace';
  $export['speech_importer-image-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-image-find_replace_10';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Events/2013/2013-12-Pakistan/PAK_2013_0418.JPG',
    'replace' => 'events/2014/2014-12-uk-photo.jpg',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 15;
  $feeds_tamper->description = 'Find replace';
  $export['speech_importer-image-find_replace_10'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-image-find_replace_11';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Events/2011/2011-07-Africa/2011-07-Kenya-37444.jpg',
    'replace' => 'events/2014/2014-12-uk-photo.jpg',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 16;
  $feeds_tamper->description = 'Find replace';
  $export['speech_importer-image-find_replace_11'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-image-find_replace_12';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Events/2011/2011-03-Kyrgyz%20Republic/2011-03-KyrgyzRep-33997.jpg',
    'replace' => 'events/2014/2014-12-uk-photo.jpg',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 17;
  $feeds_tamper->description = 'Find replace';
  $export['speech_importer-image-find_replace_12'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-image-find_replace_13';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Events/2011/2011-10-Kenya/2011oct19_kenya5.jpg',
    'replace' => 'events/2014/2014-12-uk-photo.jpg',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 18;
  $feeds_tamper->description = 'Find replace';
  $export['speech_importer-image-find_replace_13'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-image-find_replace_2';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'events/1986/1986-11-morocco/1986%20AKAA%20ceremony33229_0.jpg',
    'replace' => 'events/2014/2014-12-uk-photo.jpg',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'Find replace';
  $export['speech_importer-image-find_replace_2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-image-find_replace_3';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Events/2010/2010-10-Canada/2010-10-Canada-31428.jpg',
    'replace' => 'events/2014/2014-12-uk-photo.jpg',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 9;
  $feeds_tamper->description = 'Find replace';
  $export['speech_importer-image-find_replace_3'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-image-find_replace_4';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Events/2001/2001-04-USA/2001-04-USA-38596.jpg',
    'replace' => 'events/2014/2014-12-uk-photo.jpg',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Find replace';
  $export['speech_importer-image-find_replace_4'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-image-find_replace_5';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Events/2000/2000-11-USA/2000-11-USA-24443.jpg',
    'replace' => 'events/2014/2014-12-uk-photo.jpg',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 10;
  $feeds_tamper->description = 'Find replace';
  $export['speech_importer-image-find_replace_5'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-image-find_replace_6';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Events/2013/2013-12-Pakistan/PAK_2013_0370.JPG',
    'replace' => 'events/2014/2014-12-uk-photo.jpg',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 11;
  $feeds_tamper->description = 'Find replace';
  $export['speech_importer-image-find_replace_6'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-image-find_replace_7';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Events/2011/2011-07-Africa/2011-07-Kenya-37444.jpg',
    'replace' => 'events/2014/2014-12-uk-photo.jpg',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 12;
  $feeds_tamper->description = 'Find replace';
  $export['speech_importer-image-find_replace_7'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-image-find_replace_8';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Events/2011/2011-03-Kyrgyz%20Republic/2011-03-KyrgyzRep-33997.jpg',
    'replace' => 'events/2014/2014-12-uk-photo.jpg',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 13;
  $feeds_tamper->description = 'Find replace';
  $export['speech_importer-image-find_replace_8'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-image-find_replace_9';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Events/2006/2006-10-Canada/2006-10-Canada-16755.jpg',
    'replace' => 'events/2014/2014-12-uk-photo.jpg',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 14;
  $feeds_tamper->description = 'Find replace';
  $export['speech_importer-image-find_replace_9'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-speech_themes-explode';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'Speech Themes';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '*',
    'limit' => '',
    'real_separator' => '*',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['speech_importer-speech_themes-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-tags-explode';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'Tags';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '*',
    'limit' => '',
    'real_separator' => '*',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['speech_importer-tags-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-thematic_area-explode';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'Thematic Area';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '*',
    'limit' => '',
    'real_separator' => '*',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['speech_importer-thematic_area-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-xpathparser_0-html_entity_decode';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'xpathparser:0';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['speech_importer-xpathparser_0-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-xpathparser_2-html_entity_decode';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['speech_importer-xpathparser_2-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-xpathparser_31-find_replace';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'xpathparser:31';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'People/Official%20Portrait%20of%20His%20Highness%20the%20Aga%20Khan/HisHighnessAgaKhan-Portrait-24082.jpg',
    'replace' => '1241_0.jpg',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^People/Official%20Portrait%20of%20His%20Highness%20the%20Aga%20Khan/HisHighnessAgaKhan-Portrait-24082.jpg$/i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['speech_importer-xpathparser_31-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_importer-xpathparser_7-html_entity_decode';
  $feeds_tamper->importer = 'speech_importer';
  $feeds_tamper->source = 'xpathparser:7';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['speech_importer-xpathparser_7-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_quotes_importer-xpathparser_5-rewrite';
  $feeds_tamper->importer = 'speech_quotes_importer';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '15071',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Rewrite';
  $export['speech_quotes_importer-xpathparser_5-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_quotes_importer-xpathparser_5-trim';
  $feeds_tamper->importer = 'speech_quotes_importer';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['speech_quotes_importer-xpathparser_5-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'speech_quotes_importer-xpathparser_7-rewrite';
  $feeds_tamper->importer = 'speech_quotes_importer';
  $feeds_tamper->source = 'xpathparser:7';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '15071',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['speech_quotes_importer-xpathparser_7-rewrite'] = $feeds_tamper;

  return $export;
}
