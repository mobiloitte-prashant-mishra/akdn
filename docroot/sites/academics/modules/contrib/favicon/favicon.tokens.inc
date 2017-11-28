<?php

/**
 * @file
 * Token integration for the Favicon module.
 */

/**
 * Implements hook_token_info().
 */
function favicon_token_info() {
  $info['tokens']['site']['favicon-url'] = array(
    'name' => t('Favicon URL'),
    'description' => t('The absolute path to the current favicon.'),
  );

  return $info;
}

/**
 * Implements hook_tokens().
 */
function favicon_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $sanitize = !empty($options['sanitize']);
  $replacements = array();

  if ($type == 'site') {
    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'favicon-url':
          if ($file = favicon_get_favicon_file()) {
            $url = file_create_url($file->uri);
            $replacements[$original] = $sanitize ? check_url($url) : $url;
          }
          break;
      }
    }
  }

  return $replacements;
}
