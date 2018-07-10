<?php
/**
 * @file
 * akdn_context.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function akdn_context_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Content Type Header';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'content_type_header';
  $fe_block_boxes->body = '<?php
global $language ;
$lang_name = $language->language;
if (arg(0) == 'node' && is_numeric(arg(1))) {
  $entity = node_load(arg(1));
} else if (arg(0) == 'speeches-centre') {
  if (arg(1) == 'themes')
    $value = t('Speech Themes');
  else
    $value = ucwords(str_replace('-', ' ', arg(1)));
} else {
 return;
}
$value;
if ($lang_name == "en") {
  $prefix = '/';
} else {
  $prefix = '/' . $lang_name . '/';
}

switch($entity->type) {
  case 'project':
    $value = '<a href="' . $prefix . 'press-centre/projects">' . t('Spotlight') . '</a>';
    break;
  case 'article':
    reset($entity->field_article_cat);
    $key = key($entity->field_article_cat);
    $term = taxonomy_term_load($entity->field_article_cat[$key][0]['tid']);
    $value = $term->name_original;
    if ($value == 'Blog') {
      $value = '<a href="' . $prefix . 'press-centre/news">' . t('News') . '</a>';
    }
    elseif ($value == 'In the media') {
      $value = '<a href="' . $prefix . 'press-centre/in-the-media">' . t('In the Media') . '</a>';
    }
    elseif ($value == 'Press Release') {
      $value = '<a href="' . $prefix . 'press-centre/press-releases">' . t('Press Release') . '</a>';
    }
    elseif ($value == 'News') {
      $value = '<a href="' . $prefix . 'press-centre/news">' . t('News') . '</a>';
    }
    break;
  case 'event':
    $value = '<a href="' . $prefix . 'press-centre/events">' . t('Event') . '</a>';
    break;
  case 'gallery':
    $value = '<a href="' . $prefix . 'press-centre/galleries">' . t('Photographs') . '</a>';
    break;
  case 'person':
    $value = t('People');
    break;
  case 'podcast':
    $term = taxonomy_term_load($entity->field_podcast_type['en'][0]['tid']);
    if ($term->name) {
      $value = '<a href="' . $prefix . 'press-centre/videos">'.$term->name.'</a>';
    } else {
      $value = '<a href="' . $prefix . 'press-centre/videos">' . t('Video') . '</a>';
    }
    break;
  case 'publication':
    $value = '<a href="' . $prefix . 'press-centre/publications">' . t('Publication') . '</a>';
    break;
  case 'speech':
    $event_type = $entity->field_speech_type['und'][0]['value'];
    if ($event_type == 'interview'){
      $value = '<a href="' . $prefix . 'press-centre/speeches">' . t('Interview') . '</a>';
    } else {
      $value = '<a href="' . $prefix . 'press-centre/speeches">' . t('Speech') . '</a>';
    }
    break;
  case 'speech_quote':
    $value = t('Speech Quote');
    break;
}
if (isset($value)) {
  print "<h2 class='header-name'>$value</h2>";
}
?>
';

  $export['content_type_header'] = $fe_block_boxes;

  return $export;
}
