<?php
/**
 * @file
 * ak_ismaili_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ak_ismaili_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'speech_importer_xml';
  $feeds_importer->config = array(
    'name' => 'Speech importer xml',
    'description' => 'Speech importer xml',
    'fetcher' => array(
      'plugin_key' => 'FeedsNodequeueFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'endpoint_name' => '',
        'queue_name' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'node_title',
          'xpathparser:1' => 'Audio',
          'xpathparser:2' => 'Speech_image',
          'xpathparser:3' => 'Speech_location',
          'xpathparser:4' => 'Publication_Date',
          'xpathparser:5' => 'Speech_Date',
          'xpathparser:6' => 'Short_Title',
          'xpathparser:7' => 'Speech_Themes/item',
          'xpathparser:8' => 'Speech_Type',
          'xpathparser:9' => 'Geography/item',
          'xpathparser:10' => 'Publication_Source_Link',
          'xpathparser:11' => 'Tags/item',
          'xpathparser:12' => 'Body',
          'xpathparser:13' => 'nid',
          'xpathparser:14' => 'Introductory_text',
          'xpathparser:15' => 'Publication_Source/url',
          'xpathparser:16' => 'Publication_Author',
          'xpathparser:17' => 'Serial_ID',
          'xpathparser:18' => 'Brightcove_ID',
          'xpathparser:19' => 'Publication_Source_Title',
          'xpathparser:20' => 'Introductory_text',
          'xpathparser:21' => 'Publication_Author',
          'xpathparser:22' => 'Image',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:16' => 0,
          'xpathparser:17' => 0,
          'xpathparser:18' => 0,
          'xpathparser:19' => 0,
          'xpathparser:20' => 0,
          'xpathparser:21' => 0,
          'xpathparser:22' => 0,
        ),
        'context' => '/result/item',
        'exp' => array(
          'errors' => 0,
          'tidy' => 0,
          'tidy_encoding' => 'UTF8',
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
            'xpathparser:16' => 0,
            'xpathparser:17' => 0,
            'xpathparser:18' => 0,
            'xpathparser:19' => 0,
            'xpathparser:20' => 0,
            'xpathparser:21' => 0,
            'xpathparser:22' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_audio',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_image',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_speech_location',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_publication_date:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_publish_date:start',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_short_title',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_speech_themes',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_speech_type',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_geographies',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_publication_source:url',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          12 => array(
            'source' => 'xpathparser:12',
            'target' => 'body',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:13',
            'target' => 'guid',
            'unique' => 1,
          ),
          14 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_introductory_text',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_publication_source:url',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:16',
            'target' => 'field_publication_author',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'xpathparser:17',
            'target' => 'field_serial_id',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'xpathparser:18',
            'target' => 'field_brightcove_id',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'xpathparser:19',
            'target' => 'field_publication_source:title',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'xpathparser:20',
            'target' => 'field_introductory_text',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'xpathparser:21',
            'target' => 'field_publication_author',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'xpathparser:22',
            'target' => 'field_image',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'speech',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['speech_importer_xml'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'speech_quote_importer_xml';
  $feeds_importer->config = array(
    'name' => 'Speech quote importer xml',
    'description' => 'Speech quote importer xml',
    'fetcher' => array(
      'plugin_key' => 'FeedsNodequeueFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'endpoint_name' => '',
        'queue_name' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'node_title',
          'xpathparser:1' => 'Speech_Reference',
          'xpathparser:2' => 'Speech_Themes/item',
          'xpathparser:3' => 'nid',
          'xpathparser:4' => 'Body',
          'xpathparser:5' => '',
          'xpathparser:6' => '',
          'xpathparser:7' => '',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
        ),
        'context' => '/result/item',
        'exp' => array(
          'errors' => 0,
          'tidy' => 0,
          'tidy_encoding' => 'UTF8',
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_speech_reference:guid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_speech_themes',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'guid',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'body',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_serial_id',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_microsite',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_select_ismaili_centre',
            'term_search' => '0',
            'autocreate' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'speech_quote',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['speech_quote_importer_xml'] = $feeds_importer;

  return $export;
}
