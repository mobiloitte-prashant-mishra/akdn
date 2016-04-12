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
$arg = arg();
$url = 'https://www.youtube.com/feeds/videos.xml';
if ($arg[0] == 'front') {
  $channel_id = variable_get('akdn_youtube_channelid') ? variable_get('akdn_youtube_channelid') : 'UCJ9z0V7erDeLCWHS2iGGg5g';
}
elseif ($arg[1] == '9576') {
  $channel_id = variable_get('akaa_youtube_channelid') ? variable_get('akaa_youtube_channelid') : 'UCq2a2B38dTDMKW7rgDf0LIA';
}
elseif ($arg[1] == '22106') {
  $channel_id = variable_get('akmi_youtube_channelid') ? variable_get('akmi_youtube_channelid') : 'UCdXlZQFsArBuxT7bdkjhqvw';
}
if(function_exists('_akdn_custom_get_latest_youtube_video')){
  $content = _akdn_custom_get_latest_youtube_video($url, $channel_id);
}
?>
<?php
if ($content['image_url']) {
  $img_url = $content['image_url'];
  $id = $content['id'];
  $output = '<span class="youtube-play-button"></span>';
  $output .= '<a href="https://www.youtube.com/embed/' . $id . '?autoplay=1&fs=1&amp;width=640&amp;height=360&amp;hl=en_US1&amp;iframe=true&amp;rel=0" class="colorbox-inline"><img src="' . $img_url . '"  width="360" height="240" /></a>';
}
print $output; ?>