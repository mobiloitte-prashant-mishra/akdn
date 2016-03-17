<?php

// $Id$
/**
 * @file
 * Manage Article
 */

/**
 * Gallery content migration.
 */
class GalleryContentMigration extends BaseMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Gallery content migration');

    $this->map = new MigrateSQLMap($this->machineName,
                    array('contentid' => array(
                            'type' => 'int',
                            'not null' => TRUE,
                            'description' => 'Gallery ID.',
                            'alias' => 'n'
                        )
                    ),
                    MigrateDestinationNode::getKeySchema()
    );

    $source_fields = array(
        'contentid' => t('Article ID'),
    );
    $query = $this->query;
    $query->condition('n.contenttypeid', array('6'), 'in');
    $query->condition('n.templateid', array('59', '61', '69', '50',
        '64', '63', '26', '36', '11' , '6'), 'in');


    // Group all categories
    $query->leftJoin(CONTENT_MIGRATE_DATABASE_NAME . '.' . 'ismaili_articletag', 'ar', 'n.contentid=ar.articleid');
    $query->groupBy('ar.articleid');
    $query->addExpression('GROUP_CONCAT(distinct ar.tagid)', 'primary_tags');

    // Group all categories
    $query->leftJoin(CONTENT_MIGRATE_DATABASE_NAME . '.' . 'ismaili_mediagalleryitem', 'mg', 'n.intflag10=mg.galleryid and mg.displayorder=1');
    $query->groupBy('mg.galleryid');
    $query->addExpression('GROUP_CONCAT(distinct mg.mediaid)', 'primary_gallery_id');
    


    $query->groupBy('n.contentid');
    $query->orderBy('n.contentid', 'ASC');

    $this->source = new MigrateSourceSQL($query, $source_fields);
    $this->destination = new MigrateDestinationNode('photo_gallery');

    $body_arguments = MigrateTextFieldHandler::arguments(NULL, filter_default_format(), NULL);
    $body_arguments = MigrateTextFieldHandler::arguments(array('source_field' => 'teaser'), array('source_field' => 'format'), NULL);

    $this->addFieldMapping('title', 'contentheading');
    $this->addFieldMapping('field_body', 'contenttext');
    $this->addFieldMapping('field_short_title', 'strflag2');
    $this->addFieldMapping('field_summary', 'contentsummary');
    $this->addFieldMapping('field_summary:format')
      ->defaultValue('full_html');
    $this->addFieldMapping('field_introduction', 'contentintro');
    $this->addFieldMapping('field_introduction:format')
      ->defaultValue('full_html');

    //Map primary term
    $this->addFieldMapping('field_primary_category', 'primary_tags')
        ->sourceMigration('PrimaryCategoryTerm')
        ->separator(',')
        ->arguments(array('source_type' => 'tid'));

    //Map Geography term
    $this->addFieldMapping('field_geographies', 'primary_tags')
        ->sourceMigration('GeographyTerm')
        ->separator(',')
        ->arguments(array('source_type' => 'tid'));

    //Map Tags term
    $this->addFieldMapping('field_tags', 'primary_tags')
        ->sourceMigration('TagsTerm')
        ->separator(',')
        ->arguments(array('source_type' => 'tid'));

    //Map Author term
    $this->addFieldMapping('field_author', 'author')
        ->sourceMigration('ContentAuthorTerm')
        ->separator(',')
        ->arguments(array('source_type' => 'tid'));

    $this->addFieldMapping('created', 'dateadded');
    $this->addFieldMapping('field_publish_date', 'dateadded');
  }

  /**
   * process raw data here and place at their correct locations
   * @param stdClass $account
   * @param stdClass $row
   */
  public function prepare(stdClass $account, stdClass $row) {
    content_migrate_unt_get_migrated_nid($account, $row);
    content_migrate_unt_series_mapping($account, $row, $this->series_mapping);
    content_migrate_unt_map_link_info($account, $row->contentid);
    $account->status= 1;
    $exlcude_mediaid = '';
    if ($row->mediaid == 0) {
      $row->mediaid = $row->primary_gallery_id;
      $exlcude_mediaid = $row->primary_gallery_id;
    }
    content_migrate_unt_media_mapping($account, $row, $this->site_url, 'field_main_image');

    content_migrate_unt_save_gallery_info($account, $row, $row->intflag10, $this->site_url, $exlcude_mediaid);
    if ($this->category_mapping[$row->categoryid]['tid'] != '') {
      $tid = $this->category_mapping[$row->categoryid]['tid'];
      $account->field_microsite[LANGUAGE_NONE][0]['tid'] = $tid;
    }
    content_migrate_unt_process_article_body_title($account, $row, $this->site_url);

  }

  /**
   * Handle the post node create functionality
   * Adding attachment to the file and upload table
   * */
  public function complete(stdClass $node, stdClass $row) {
    content_migrate_unt_save_migrated_info($row->contentid, $node->nid);
    $tid = $this->category_mapping[$row->categoryid]['tid'];
    content_migrate_unt_update_workbench_access($node->nid, $tid);
    content_migrate_unt_publish_node($node->nid, 1);
  }

}
