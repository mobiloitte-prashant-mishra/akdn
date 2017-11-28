# Drupal Favicon module

## Installation

* Apply the included patch `core.htaccess.patch` to your Drupal core installation.
* Enable the module as normal

## Logic for determining which file to use

1. First, the value of the `favicon_uri` variable is checked. There is no UI to
  set this variable, so it should be set only using settings.php if needed.
  The path should be relative to the Drupal root directory.
  ```
  $conf['favicon_uri'] = 'sites/all/images/favicon.ico';
  ```

2. Second, if a file exists at `sites/example.com/favicon.ico` or whatever the
  current subdirectory under `sites/` is current will be used.

3. Third, if the current theme's setting has the 'Use default favicon' checkbox
  checked, the theme's default favicon will be used.

4. Fourth, if the current theme has a manually provided favicon, it will be used.

5. Lastly, the default Drupal favicon located at misc/favicon.io will be used.

The result of which favicon is used is stored in the cache using a combination
of the current theme, current base URL, and current sites subdirectory.
