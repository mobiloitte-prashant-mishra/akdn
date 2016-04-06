<?php

// $Id$
/**
 * @file
 * Manage Author Node Migration
 */

/**
 * Migrate Author node and maintain the author relationship
 *
 */
class AuthorNodeMigration extends BaseMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Author content migration');
    // $this->dependencies = array('AuthorTerm');
    $this->map = new MigrateSQLMap($this->machineName,
                    array('per_id' => array(
                            'type' => 'int',
                            'not null' => TRUE,
                            'description' => 'node NID.',
                            'alias' => 'n'
                        )
                    ),
                    MigrateDestinationNode::getKeySchema()
    );

    $source_fields = array(
        'nid' => t('Node ID'),
    );
    $query = db_select(CONTENT_MIGRATE_DATABASE_NAME . '.' . 'cms_publishauthor', 'n')
      ->fields('n', array('per_id', 'title', 'nameone', 'initial', 'nametwo', 'pertypeid', 'miscinfo', 'emailaddress', 'University', 'miscinfo', 'lang_id', 'PublishStatusID'));
    $query->leftJoin(CONTENT_MIGRATE_DATABASE_NAME . '.' . 'cms_biography', 'b', 'n.per_id = b.AuthorId and b.LangId = 1');
    $query->fields('b', array('Biography', 'AuthorId', 'BiogId'));

    // $query->condition('n.per_id', array('100599'), 'IN'); // @TODO : to be removed
    $query->orderBy('n.per_id', 'ASC');
    $query->orderBy('b.BiogId', 'DESC');

    $this->source = new MigrateSourceSQL($query, $source_fields);
    $this->destination = new MigrateDestinationNode('people');

    $body_arguments = MigrateTextFieldHandler::arguments(NULL, filter_default_format(), NULL);
    $body_arguments = MigrateTextFieldHandler::arguments(array('source_field' => 'teaser'), array('source_field' => 'format'), NULL);

    // map node designation
    $this->addFieldMapping('field_designation', 'pertypeid')
            ->sourceMigration('PersonTypeTerm')
            ->arguments(array('source_type' => 'tid'));

    // // map node department
    // $this->addFieldMapping('field_department', 'departmentid')
    //         ->sourceMigration('PersonDepartmentTerm')
    //         ->arguments(array('source_type' => 'tid'));

    // map node catgeory
    $this->addFieldMapping('field_category', 'PerRoleID')
            ->sourceMigration('PersonRoleTerm')
            ->arguments(array('source_type' => 'tid'));

    $this->addFieldMapping('title', 'type');
    $this->addFieldMapping('field_email', 'emailaddress');
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
    $data = $row;
    $account->language = $this->source_lang[$data->lang_id];
    $account->field_type_of_people[LANGUAGE_NONE][0]['tid'] = $this->author_people_tid;
    $data->Biography = content_migrate_unt_process_body_image($data->Biography, $this->site_url);
    content_migrate_map_person_data($account, $data);
    $account->status = 0;
    if ($data->PublishStatusID == 2) {
      $account->status = 1;
    }

  }  //End of prepare function

  /**
   * Handle the post node create functionality
   * Adding attachment to the file and upload table
   * */
  public function complete(stdClass $node, stdClass $row) {
    if ($node->tnid == 0) {
      $node->tnid = $node->nid;
    }
    node_save($node);
    // content_migrate_unt_publish_node($node, 2); // @TODO: workflow not in action
  }

}
