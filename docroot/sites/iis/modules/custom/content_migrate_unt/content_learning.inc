<?php

// $Id$
/**
 * @file
 * Manage  Learning Node Migration
 */

/**
 * Migrate  Learning node and maintain the author relationship
 *
 */
class LearningNodeMigration extends BaseMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Learning content migration');

    $query = $this->query;

    $query->condition('n.type', array('learning'), 'IN');
    // $query->condition('n.nid', array('100953'), '='); // @TODO: to be removed
    $query->orderBy('n.nid', 'ASC');

    $this->source = new MigrateSourceSQL($query, $this->source_fields);
    $this->destination = new MigrateDestinationNode('article');

    $body_arguments = MigrateTextFieldHandler::arguments(NULL, filter_default_format(), NULL);
    $body_arguments = MigrateTextFieldHandler::arguments(array('source_field' => 'teaser'), array('source_field' => 'format'), NULL);

    // map node uid
    $this->addFieldMapping('tnid', 'field_2')
            ->sourceMigration('LearningNode');

    $this->addFieldMapping('title', 'type');
    $this->addFieldMapping('status', 'status');
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('changed', 'changed');
    $this->addFieldMapping('comment', 'comment');
    $this->addFieldMapping('promote', 'promote');
    $this->addFieldMapping('translate')->defaultValue('0');
    $this->addFieldMapping('language')->defaultValue('en');
  }

  /**
   * process raw data here and place at their correct locations
   * @param stdClass $account
   * @param stdClass $row
   */
  public function prepare(stdClass $account, stdClass $row) {
    $data = unserialize($row->data);

    $data['node']->type = $row->type;
    $data['node']->content['ContentDate'] = $data['node']->content['DateofArticle'];
    $account->field_article_type[LANGUAGE_NONE][0]['tid'] = $this->learning_article_tid;
    if (isset($row->status) &&  ($row->status != 2)) {
      $data['node']->PublishStatusID = $row->status;
      $row->data = serialize($data);
    }
    //Fields: DateofArticle, PublishingData, Abstract

    $data['node']->content['BodyText'] = content_migrate_unt_process_body_image($data['node']->content['BodyText'], $this->site_url);

    $source_lang_id = $data['node']->lang_id;
    $account->language = $this->source_lang[$data['node']->lang_id];
    content_migrate_unt_process_body_title($account, $data);
    content_migrate_unt_process_date($account, $data);

    content_migrate_unt_map_author($account, $data['node']->content['Author']);

    // Handle show case image
    if ($data['node']->content['Image'] != '') {
      $show_case_image_url = 'WebAssets/medium/Articles/' . $data['node']->content['Image'];
      $row->field_image_url = $show_case_image_url;
      $row->showcase_image_found = 0;
      $image_processed = content_migrate_save_remote_image($this->site_url, $show_case_image_url);
      if ($image_processed['success'] == 1) {
        $file_saved = $image_processed['file_saved'];
        $account->field_image = content_migrate_unt_process_image_file($file_saved, 0);
      }
    }

  }  //End of prepare function

  /**
   * Handle the post node create functionality
   * Adding attachment to the file and upload table
   * */
  public function complete(stdClass $node, stdClass $row) {
    $data = unserialize($row->data);
    if ($node->tnid == 0) {
      $node->tnid = $node->nid;
    }
    node_save($node);
    content_migrate_unt_publish_node($node, $data['node']->PublishStatusID);

    content_migrate_unt_retain_update_time($node, $row->changed);
  }

}
