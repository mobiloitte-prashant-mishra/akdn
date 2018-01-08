<?php

/**
 * Call back for admin/image-path-change
 * @global $user
 */
function image_path_change() {
  global $user;
  if ($user->uid == 1) {
    $batch = array(
      'operations' => array(
        array('_batch_process_admin_image_path_change_script', array()),
      ),
      'finished' => 'batch_admin_image_path_change_finished',
      'title' => t('Image path change'),
      'init_message' => t('Image path change.'),
      'progress_message' => t('Processed @current out of @total.'),
      'error_message' => t('Image path change Batch has encountered an error.'),
      //'file' => 'image-path-change.admin.inc',
    );
    batch_set($batch);
    batch_process('home');
  }
  else {
    drupal_access_denied();
  }
}
