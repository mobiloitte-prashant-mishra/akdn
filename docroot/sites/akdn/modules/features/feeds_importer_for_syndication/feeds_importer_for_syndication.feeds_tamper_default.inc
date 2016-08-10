<?php
/**
 * @file
 * feeds_importer_for_syndication.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function feeds_importer_for_syndication_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_0-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:0';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_0-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_39-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:39';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_39-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_40-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:40';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_40-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_41-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:41';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_41-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_43-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:43';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_43-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_44-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:44';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_44-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_46-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:46';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_46-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_47-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:47';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_47-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_49-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:49';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_49-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_50-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:50';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_50-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_51-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:51';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_51-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_52-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:52';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_52-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_53-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:53';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_53-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_54-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:54';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_54-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_70-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:70';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_70-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_71-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:71';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_71-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_72-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:72';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_72-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_73-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:73';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_73-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_74-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:74';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_74-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_75-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:75';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_75-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_76-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:76';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_76-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_77-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:77';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_77-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_78-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:78';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_78-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_79-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:79';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_79-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_80-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:80';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_80-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_81-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:81';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_81-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_82-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:82';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_82-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_83-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:83';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_83-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_84-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:84';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_84-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_85-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:85';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_85-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_86-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:86';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_86-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_87-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:87';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_87-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_88-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:88';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_88-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_89-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:89';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_89-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_90-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:90';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_90-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_91-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:91';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_91-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_92-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:92';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_92-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_93-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:93';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_93-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_94-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:94';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_94-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_95-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:95';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_95-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_96-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:96';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_96-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-xpathparser_97-html_entity_decode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'xpathparser:97';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['article_import-xpathparser_97-html_entity_decode'] = $feeds_tamper;

  return $export;
}
