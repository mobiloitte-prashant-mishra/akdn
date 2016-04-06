<?php

// $Id$
/**
 * @file
 * Manage Library Node Migration
 */

/**
 * Migrate Library node and maintain the author relationship
 *
 */
class LibraryNodeMigration extends BaseMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Library content migration');

    $query = $this->query;

    $query->condition('n.type', array('library'), 'IN');
    // $query->condition('n.nid', array('100841'), '=');
    $query->orderBy('n.nid', 'ASC');

    $this->source = new MigrateSourceSQL($query, $this->source_fields);
    $this->destination = new MigrateDestinationNode('library');

    $body_arguments = MigrateTextFieldHandler::arguments(NULL, filter_default_format(), NULL);
    $body_arguments = MigrateTextFieldHandler::arguments(array('source_field' => 'teaser'), array('source_field' => 'format'), NULL);

    // $field_3 ManuscriptLibraryCollectionegArI, $field_1  Provenance, $author  ManuscriptLanguage

    // map node uid
    $this->addFieldMapping('tnid', 'field_2')
            ->sourceMigration('LibraryNode');

    $this->addFieldMapping('field_manuscript_lib_col', 'field_3')
            ->sourceMigration('ManuscriptCollectionAriTerm')
            ->arguments(array('source_type' => 'tid'));

    $this->addFieldMapping('field_provenance', 'field_1')
            ->sourceMigration('ManuscriptProvenanceTerm')
            ->arguments(array('source_type' => 'tid'));

    $this->addFieldMapping('field_manuscript_language', 'author')
            ->sourceMigration('ManuscriptLanguageTerm')
            ->arguments(array('source_type' => 'tid'));

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
    $library_image = content_migrate_unt_process_library_image($data);
    if ($library_image['name'] != '') {
      $show_case_image_url = 'WebAssets/Large/Manuscript/' . $library_image['name'];
      $row->field_image_url = $show_case_image_url;
      $row->showcase_image_found = 0;
      $image_processed = content_migrate_save_remote_image($this->site_url, $show_case_image_url);
      if ($image_processed['success'] == 1) {
        $file_saved = $image_processed['file_saved'];
        $account->field_image = content_migrate_unt_process_image_file($file_saved, 0);
      }
      content_migrate_unt_pass_field_data($account, 'field_image_caption', $library_image['caption']);
    }
    if (isset($row->status) &&  ($row->status != 2)) {
      $data['node']->PublishStatusID = $row->status;
      $row->data = serialize($data);
    }
    if (isset($data['node']->content['ManuscriptDescription'])) {
      $data['node']->content['ManuscriptDescription'] = content_migrate_unt_process_body_image($data['node']->content['ManuscriptDescription'], $this->site_url, $library_image['name']);
    }
    if (isset($data['node']->content['ManuscriptInformation'])) {
      $data['node']->content['ManuscriptInformation'] = content_migrate_unt_process_body_image($data['node']->content['ManuscriptInformation'], $this->site_url, $library_image['name']);
    }
    $source_lang_id = $data['node']->lang_id;
    $account->language = $this->source_lang[$data['node']->lang_id];
    content_migrate_unt_process_library_body_title($account, $data);
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
