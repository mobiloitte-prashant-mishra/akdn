<?php
/**
 * @file
 * ak_syndication_source.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function ak_syndication_source_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'akdn_endpoint';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'akdn-endpoint';
  $endpoint->authentication = array();
  $endpoint->server_settings = array(
    'formatters' => array(
      'xml' => TRUE,
      'bencode' => FALSE,
      'json' => FALSE,
      'jsonp' => FALSE,
      'php' => FALSE,
    ),
    'parsers' => array(
      'application/json' => TRUE,
      'application/vnd.php.serialized' => TRUE,
      'application/x-www-form-urlencoded' => TRUE,
      'application/xml' => TRUE,
      'multipart/form-data' => TRUE,
      'text/xml' => TRUE,
    ),
  );
  $endpoint->resources = array(
    'events-feeds' => array(
      'operations' => array(
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'services_nodequeue_clear' => array(
      'alias' => 'nodequeue-clear',
      'operations' => array(
        'create' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'press-release-feeds' => array(
      'operations' => array(
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'views' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['akdn_endpoint'] = $endpoint;

  return $export;
}
