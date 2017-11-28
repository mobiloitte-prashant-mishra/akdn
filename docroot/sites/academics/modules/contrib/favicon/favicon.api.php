<?php

/**
 * @file
 * API integration for the Favicon module.
 */

/**
 * Alter the favicon file URI.
 *
 * @param string $uri
 *   A file URI.
 *
 * @see DrupalFavicon::getFileFromUri()
 */
function hook_favicon_file_uri_alter(&$uri) {
  $basename = drupal_basename($uri);
  // Allow for individual user variations of the favicon file.
  $uri_with_uid = str_replace($basename, $basename . '-' . $GLOBALS['user']->uid, $uri);
  if (is_file($uri_with_uid)) {
    $uri = $uri_with_uid;
  }
}

/**
 * Alter the favicon file object after it has been validated.
 *
 * @param object $file
 *   A file object with the following properties defined: uri, filesize, and
 *   filemime.
 *
 * @see DrupalFavicon::getFileFromUri()
 */
function hook_favicon_file_alter($file) {
  // @todo Document
}

/**
 * Alter the favicon cache data.
 *
 * @param array $data
 *   An array of cache data which will be serialized into a cache ID used
 *   to fetch the current favicon file. By default this contains
 *
 * @see DrupalFavicon::fetchFile()
 */
function hook_favicon_cache_data_alter(array &$data) {
  $data['uid'] = $GLOBALS['user']->uid;
}
