<?php

// $Id$
/**
 * @file
 * Manage Video Node Migration
 */

/**
 * Migrate Video node and maintain the author relationship
 *
 */
class VideoNodeMigration extends BaseMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Video content migration');

    $query = $this->query;

    $query->condition('n.type', array('iis_videos'), 'IN');
    $query->orderBy('n.nid', 'ASC');

    $this->source = new MigrateSourceSQL($query, $this->source_fields);
    $this->destination = new MigrateDestinationNode('video');

    $body_arguments = MigrateTextFieldHandler::arguments(NULL, filter_default_format(), NULL);
    $body_arguments = MigrateTextFieldHandler::arguments(array('source_field' => 'teaser'), array('source_field' => 'format'), NULL);

    // map node uid
    $this->addFieldMapping('tnid', 'field_2')
            ->sourceMigration('VideoNode');

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
    if (isset($row->status) &&  ($row->status != 2)) {
      $data['node']->PublishStatusID = $row->status;
      $row->data = serialize($data);
    }

    $body_data = (isset($data['node']->content['BodyText'])) ? $data['node']->content['BodyText'] : $data['node']->content['MainContent'];
    $data['node']->content['BodyText'] = content_migrate_unt_process_body_image($body_data, $this->site_url);

    $source_lang_id = $data['node']->lang_id;
    $account->language = $this->source_lang[$data['node']->lang_id];
    content_migrate_unt_process_body_title($account, $data);
    content_migrate_unt_process_date($account, $data);
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
