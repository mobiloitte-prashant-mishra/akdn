<?php

// $Id$
/**
 * @file
 * Manage Event
 */

/**
 * Event content migration.
 */
class EventContentMigration extends BaseMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Event content migration');

    $this->map = new MigrateSQLMap($this->machineName,
                    array('contentid' => array(
                            'type' => 'int',
                            'not null' => TRUE,
                            'description' => 'Event ID.',
                            'alias' => 'n'
                        )
                    ),
                    MigrateDestinationNode::getKeySchema()
    );

    $source_fields = array(
        'contentid' => t('Event ID'),
    );
    
    $query = $this->query;

    // Include event like articles
    $query->condition('n.contentheading', 'EVENT:%', 'LIKE');
     
    // Group all categories
    $query->leftJoin(CONTENT_MIGRATE_DATABASE_NAME . '.' . 'ismaili_articletag', 'ar', 'n.contentid=ar.articleid');
    $query->groupBy('ar.articleid');
    $query->addExpression('GROUP_CONCAT(distinct ar.tagid)', 'primary_tags');



    $query->groupBy('n.contentid');
    $query->orderBy('n.contentid', 'ASC');

    $this->source = new MigrateSourceSQL($query, $source_fields);
    $this->destination = new MigrateDestinationNode('events');

    $body_arguments = MigrateTextFieldHandler::arguments(NULL, filter_default_format(), NULL);
    $body_arguments = MigrateTextFieldHandler::arguments(array('source_field' => 'teaser'), array('source_field' => 'format'), NULL);

    $this->addFieldMapping('title', 'contentheading');
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

    $this->addFieldMapping('status')
      ->defaultValue('1');


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
    if ($this->category_mapping[$row->categoryid]['tid'] != '') {
      $tid = $this->category_mapping[$row->categoryid]['tid'];
      $account->field_microsite[LANGUAGE_NONE][0]['tid'] = $tid;
    }
    $account->caption = $row->caption;
    $account->copyright = $row->copyright;
    content_migrate_unt_process_article_body_title($account, $row, $this->site_url);
    content_migrate_unt_media_mapping($account, $row, $this->site_url, 'field_main_image');
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
