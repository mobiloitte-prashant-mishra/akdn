<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
if (isset($row->_field_data['nid']['entity']->field_show_block['und'][0]['value']) &&
    $row->_field_data['nid']['entity']->field_show_block['und'][0]['value'] &&
    isset($row->field_field_youtube_embed[0]['rendered']['#element']['url'])) {
  $content = array();
  $youtube_URL = $row->field_field_youtube_embed[0]['rendered']['#element']['url'];
  $youtube_key = preg_replace('/(https|http)\:\/\/www\.youtube\.com\/watch\?v\=/', '', $youtube_URL);
  $content['id'] = $youtube_key;
  $content['image_url'] = "http://i3.ytimg.com/vi/{$youtube_key}/hqdefault.jpg";
  $details = file_get_contents("http://youtube.com/get_video_info?video_id={$youtube_key}");
  parse_str($details, $ytarr);
  $content['title'] = $ytarr['title'];
  $content['date'] = $ytarr['timestamp'];
  
}
else {
  $arg = arg();
  $url = 'https://www.youtube.com/feeds/videos.xml';
  if ($arg[0] == 'front') {
    $channel_id = variable_get('akdn_youtube_channelid') ? variable_get('akdn_youtube_channelid') : 'UCJ9z0V7erDeLCWHS2iGGg5g';
  }
  elseif ($arg[1] == '22106') {
    $channel_id = variable_get('akaa_youtube_channelid') ? variable_get('akaa_youtube_channelid') : 'UCq2a2B38dTDMKW7rgDf0LIA';
  }
  elseif ($arg[1] == '9576') {
    $channel_id = variable_get('akmi_youtube_channelid') ? variable_get('akmi_youtube_channelid') : 'UCdXlZQFsArBuxT7bdkjhqvw';
  }
  if (function_exists('_akdn_custom_get_latest_youtube_video')) {
    $content = _akdn_custom_get_latest_youtube_video($url, $channel_id);
  }
}
?>
<?php
if ($content['id']) {
  $img_url = $content['image_url'];
  $id = $content['id'];
  $output = '<div class="grid-social-block_picture grid-social-block_picture-youtube"><span class="youtube-play-button"></span>';
  $output .= '<a href="https://www.youtube.com/embed/' . $id . '?autoplay=1&fs=1&amp;width=640&amp;height=360&amp;hl=en_US1&amp;iframe=true&amp;rel=0" class="colorbox-inline"><img src="' . $img_url . '"  width="360" height="240" style="max-height:240px;"/></a></div>';
  $output .= '<div class="field-content grid-social-block_title grid-social-block_title-youtube"><a href="http://www.youtube.com/watch?v=' . $id . '" target="_blank"><div class="title"><span class="social-icon-image"></span>' . $content['title'] . '</div></a></div>';
  $output .= '<div class="field-content grid-social-block_date grid-social-block_date-youtube">' . date("d M Y", $content['date']) . '</div>';
  $output .= '<div class="field-content grid-social-block_body grid-social-block_body-youtube"><p>' . $content['title'] . '</p></div>';
  $output .= '<div class="field-content grid-social-block_medialink grid-social-block_medialink-youtube"><div class="social_sharing">
<span class="play-video" id="MNrBAwjEkUI"><a href="https://www.youtube.com/embed/' . $id . '?autoplay=1&fs=1&amp;width=640&amp;height=360&amp;hl=en_US1&amp;iframe=true&amp;rel=0" class="colorbox-inline">' . t('Play') . '</a></span>
</div></div>';
}
print $output; ?>