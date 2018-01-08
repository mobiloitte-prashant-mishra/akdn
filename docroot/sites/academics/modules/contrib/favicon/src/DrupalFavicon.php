<?php

class DrupalFavicon {

  const DEFAULT_URI = 'misc/favicon.ico';

  protected $theme;
  protected $file;

  public function __construct($theme) {
    $this->theme = $theme;

    // @todo Separate this to individual methods
    // @todo Should this check validation for each one before proceeding to the next?
    if (is_file(conf_path() . '/favicon.ico')) {
      // Allow the favicon to be set in sites/mysite.com/favicon.ico.
      $uri = conf_path() . '/favicon.ico';
    }
    elseif ($favicon = theme_get_setting('favicon', $this->theme)) {
      // Otherwise use the theme's default favicon.
      // This needs to be converted to a path relative to the Drupal root since
      // it gets saved as an absolute link.
      $uri = str_replace($GLOBALS['base_url'] . '/', '', $favicon);
    }
    elseif ($favicon_path = theme_get_setting('favicon_path', $this->theme)) {
      // Otherwise use the custom path for the theme's favicon.
      $uri = $favicon_path;
    }
    else {
      // Fallback to the default Drupal favicon file.
      $uri = static::DEFAULT_URI;
    }

    // Convert the URI to a file object.
    $this->file = static::getFileFromUri($uri);
  }

  public function getFile() {
    return $this->file;
  }

  /**
   * Convert a URI into a file object.
   *
   * @param string $uri
   *   A file URI.
   *
   * @return object
   *   A file object with the uri, filemime, and filesize properties defined.
   */
  public static function getFileFromUri($uri) {
    // Allow the URI to be altered.
    drupal_alter('favicon_file_uri', $uri);

    $file = new stdClass();
    $file->uri = $uri;
    $file->filemime = file_get_mimetype($uri);
    $file->filesize = @filesize($uri);
    static::validateFile($file);

    // Allow modules to alter the generated favicon file.
    drupal_alter('favicon_file', $file);

    return $file;
  }

  /**
   * Validates a file to be used for a favicon.
   *
   * @param object $file
   *   A favicon file object
   *
   * @throws DrupalFaviconValidationException
   */
  public static function validateFile($file) {
    if (!in_array($file->filemime, array(
      'image/vnd.microsoft.icon',
      'image/x-icon',
      'image/png',
      'image/gif',
      'image/jpeg',
    ), TRUE)) {
      throw new DrupalFaviconValidationException("The file {$file->uri} has an invalid MIME type of <em>{$file->filemime}</em> for use as a shortcut icon.");
    }
  }

  /**
   * Fetches the favicon file object.
   *
   * This will attempt to retrieve the calculated favicon based on the current
   * theme and base URL.
   *
   * @param string $theme
   *   (optional) The theme to use for determining the favicon file. If not
   *   provided, the current theme will be used.
   * @param bool $cached
   *   (optional) TRUE if the cached should be used, or FALSE if it should be
   *   skipped.
   *
   * @return object
   *   The favicon file object.
   */
  public static function fetchFile($theme = NULL, $cached = TRUE) {
    // If the variable is being used, use it before using cached data.
    if ($uri = variable_get('favicon_uri')) {
      return static::getFileFromUri($uri);
    }

    if (!isset($theme)) {
      $theme = !empty($GLOBALS['theme_key']) ? $GLOBALS['theme_key'] : '';
    }

    $cid = FALSE;
    if ($cached) {
      $cache_data = array(
        'theme' => $theme,
        'base_url' => $GLOBALS['base_url'],
        'conf_path' => conf_path(),
      );
      drupal_alter('favicon_cache_data', $cache_data);
      $cid = 'favicon:' . md5(serialize($cache_data));
    }

    if ($cached && $cache = cache_get($cid)) {
      return $cache->data;
    }
    else {
      $favicon = new static($theme);
      if ($cached) {
        cache_set($cid, $favicon->getFile());
      }
      return $favicon->getFile();
    }
  }

  public static function canCacheFile($file) {
    return $file->filesize <= variable_get('favicon_page_cache_maximum_size', DRUPAL_KILOBYTE * DRUPAL_KILOBYTE);
  }

  /**
   * Delivery callback; transfer the file inline.
   *
   * @param mixed $file
   */
  public static function deliverFileTransfer($file) {
    if (is_int($file)) {
      drupal_deliver_html_page($file);
      return;
    }
    elseif (!is_object($file) || !is_file($file->uri) || !is_readable($file->uri)) {
      drupal_deliver_html_page(MENU_NOT_FOUND);
      return;
    }

    // @todo Figure out if any other headers should be added.
    $headers = array(
      'Content-Type' => mime_header_encode($file->filemime),
      'Content-Disposition' => 'inline',
      'Content-Length' => $file->filesize,
    );

    // Let other modules alter the download headers.
    //drupal_alter('file_download_headers', $headers, $file);

    // Let other modules know the file is being downloaded.
    module_invoke_all('file_transfer', $file->uri, $headers);

    foreach ($headers as $name => $value) {
      drupal_add_http_header($name, $value);
    }

    $fd = fopen($file->uri, 'rb');
    if ($fd !== FALSE) {
      while (!feof($fd)) {
        print fread($fd, DRUPAL_KILOBYTE);
      }
      fclose($fd);
    }
    else {
      watchdog('favicon', 'Unable to open @uri for reading.', array('@uri' => $file->uri));
      drupal_deliver_html_page(MENU_NOT_FOUND);
      return;
    }

    // Perform end-of-request tasks.
    if (static::canCacheFile($file)) {
      drupal_page_footer();
    }
    else {
      drupal_exit();
    }
  }

  /**
   * Delivery callback; redirect to the file's location.
   *
   * @param mixed $file
   */
  public static function deliverFileRedirect($file) {
    if (is_int($file)) {
      drupal_deliver_html_page($file);
      return;
    }
    elseif (!is_object($file)) {
      drupal_deliver_html_page(MENU_NOT_FOUND);
      return;
    }

    $file->url = file_create_url($file->uri);
    if (module_exists('redirect')) {
      // Using the redirect module instead of drupal_goto() may allow this
      // redirect to be stored in the page cache.
      $redirect = new stdClass();
      $redirect->redirect = $file->url;
      redirect_redirect($redirect);
    }
    else {
      drupal_goto($file->url, array(), 301);
    }
  }


}
