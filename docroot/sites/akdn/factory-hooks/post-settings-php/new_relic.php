<?php
if (extension_loaded('newrelic')) {
  $domain_fragments = explode('.', $_SERVER['HTTP_HOST']);
  $site_name = array_shift($domain_fragments);
  newrelic_set_appname("$site_name;AKDN-REDESIGN", '', 'true');
}
