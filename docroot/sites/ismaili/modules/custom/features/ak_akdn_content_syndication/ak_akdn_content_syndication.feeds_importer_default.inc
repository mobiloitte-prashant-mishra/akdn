<?php
/**
 * @file
 * ak_akdn_content_syndication.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ak_akdn_content_syndication_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'speech_importer';
  $feeds_importer->config = array(
    'name' => 'Speech Importer',
    'description' => 'Import speeches from Imamat Speech Centre',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
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
            'source' => 'Location',
            'target' => 'field_speech_location',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Publication Date',
            'target' => 'field_publication_date:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Speech Date',
            'target' => 'field_publish_date:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Short Title',
            'target' => 'field_short_title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Speech Themes',
            'target' => 'field_speech_themes',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          5 => array(
            'source' => 'Speech Type',
            'target' => 'field_speech_type',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Tags',
            'target' => 'field_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'Body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          9 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Image',
            'target' => 'field_image',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Audio',
            'target' => 'field_audio',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Publication URL',
            'target' => 'field_publication_source:url',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Author',
            'target' => 'field_publication_author',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Publication Date',
            'target' => 'field_publication_date:start',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Geography',
            'target' => 'field_geographies',
            'term_search' => '0',
            'autocreate' => 1,
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
  $export['speech_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'speech_quotes_importer';
  $feeds_importer->config = array(
    'name' => 'Speech quotes importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
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
            'source' => 'Title',
            'target' => 'title',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'Body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Speech Themes',
            'target' => 'field_speech_themes',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'Speech reference GUID',
            'target' => 'field_speech_reference:guid',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => 1,
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
  $export['speech_quotes_importer'] = $feeds_importer;

  return $export;
}
