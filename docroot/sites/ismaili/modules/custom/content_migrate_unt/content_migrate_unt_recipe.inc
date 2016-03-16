<?php

// $Id$
/**
 * @file
 * Manage Article
 */

/**
 * Recipe content migration.
 */
class RecipeContentMigration extends BaseMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Recipe content migration');

    $this->map = new MigrateSQLMap($this->machineName,
                    array('recipeid' => array(
                            'type' => 'int',
                            'not null' => TRUE,
                            'description' => 'Recipe ID.',
                            'alias' => 'n'
                        )
                    ),
                    MigrateDestinationNode::getKeySchema()
    );

    $source_fields = array(
        'recipeid' => t('Recipe ID'),
    );
    $query = db_select(CONTENT_MIGRATE_DATABASE_NAME . '.' . 'ismaili_recipe', 'n')
            ->fields('n', array('recipeid', 'recipename', 'attribution', 'statusid', 'authorid', 'foodtypeid', 'assetid', 'servesmakes', 'servingquantity', 'servingweight', 'servingweightimp', 'servingweightimpunit', 'nutritionper100', 'regionid', 'description', 'eatingtip', 'urgenthealth', 'instructions', 'sourcedescription', 'dateadded'
          ));

    // Get image related info (caption,copyright)
    $query->leftJoin( 'migrate_map_generalmediacontent', 'mc', 'n.assetid=mc.sourceid1');
    $query->fields('mc', array('destid1'));

    $query->leftJoin( 'file_managed', 'fm', 'mc.destid1=fm.fid');
    $query->fields('fm', array('fid'));

    // Get Caption
    $query->leftJoin(CONTENT_MIGRATE_DATABASE_NAME . '.' . 'ismaili_media', 'm', 'n.assetid=m.mediaid');
    $query->fields('m', array('caption', 'roughcaption', 'source', 'copyright', 'description', 'medianame'));


    // get author type info
    $query->leftJoin(CONTENT_MIGRATE_DATABASE_NAME . '.' . 'ismaili_author', 'author', 'n.authorid=author.authorid');
    $query->fields('author', array('authorname', 'location'));
    // $query->groupBy('author.authorid');

    
    $query->leftJoin(CONTENT_MIGRATE_DATABASE_NAME . '.' . 'ismaili_recipenutrient', 'nats', 'n.recipeid=nats.recipeid');
    $query->groupBy('nats.recipeid');
    $query->addExpression("GROUP_CONCAT(nats.nutrientid,'=>',nats.value)", 'ndata');



    $query->groupBy('n.recipeid');
    $query->orderBy('n.recipeid', 'ASC');

    $this->source = new MigrateSourceSQL($query, $source_fields);
    $this->destination = new MigrateDestinationNode('recipe');
    $body_arguments = MigrateTextFieldHandler::arguments(NULL, filter_default_format(), NULL);
    $body_arguments = MigrateTextFieldHandler::arguments(array('source_field' => 'teaser'), array('source_field' => 'format'), NULL);

    //Map Recipe Type term
    $this->addFieldMapping('field_recipe_type', 'foodtypeid')
        ->sourceMigration('RecipeTypeTerm')
        ->separator(',')
        ->arguments(array('source_type' => 'tid'));

    //Map Geography term
    $this->addFieldMapping('field_geographies', 'regionid')
        ->sourceMigration('GeographyTerm')
        ->separator(',')
        ->arguments(array('source_type' => 'tid'));

    //Map atrribution term
    $this->addFieldMapping('field_attribution', 'attribution')
        ->sourceMigration('AttributionTerm')
        ->separator(',')
        ->arguments(array('source_type' => 'tid'));

    $this->addFieldMapping('title', 'recipename');
    $this->addFieldMapping('field_short_title', 'recipename');

    //Full html fields mapping
    $this->addFieldMapping('field_summary', 'description');
    $this->addFieldMapping('field_summary:format')
      ->defaultValue('full_html');

    $this->addFieldMapping('field_urgent_health_info', 'urgenthealth');
    $this->addFieldMapping('field_urgent_health_info:format')
      ->defaultValue('full_html');
    $this->addFieldMapping('field_healthy_hints', 'eatingtip');
    $this->addFieldMapping('field_healthy_hints:format')
      ->defaultValue('full_html');

    $this->addFieldMapping('field_body', 'instructions');
    $this->addFieldMapping('field_body:format')
     ->defaultValue('full_html');

    $this->addFieldMapping('field_serving_weight', 'servingweight');
    $this->addFieldMapping('field_quantity', 'servingquantity');
    //Imperial data
    $this->addFieldMapping('field_serving_weight_quantity', 'servingweightimp');
    $this->addFieldMapping('field_imperial_unit', 'servingweightimpunit');

    $this->addFieldMapping('field_type_of_food')
      ->defaultValue('food');

    $this->addFieldMapping('created', 'dateadded');
    $this->addFieldMapping('field_publish_date', 'dateadded');
  }

  /**
   * process raw data here and place at their correct locations
   * @param stdClass $account
   * @param stdClass $row
   */
  public function prepare(stdClass $account, stdClass $row) {
    $account->field_trafic_light_100g[LANGUAGE_NONE][0]['value'] = 0;
    if ($row->nutritionper100 == 1) {
      $account->field_trafic_light_100g[LANGUAGE_NONE][0]['value'] = 1;
    }
    $account->field_source_link[LANGUAGE_NONE][0]['title'] = $row->authorname;
    if ($row->field_serving_weight_quantity == '') {
      unset($account->field_serving_weight_quantity);
    }
    $account->field_serves_type[LANGUAGE_NONE][0]['value'] = 'makes';
    if (drupal_strtoupper($row->servesmakes) == 'S') {
      $account->field_serves_type[LANGUAGE_NONE][0]['value'] = 'serves';
      
    }
    $row->mediaid = $row->assetid;
    content_migrate_unt_media_mapping($account, $row, $this->site_url, 'field_main_image');
    // Map Ingredients
    content_migrate_unt_map_recipe_ingredients_info($account, $row->recipeid);
  }

  /**
   * Handle the post node create functionality
   * Adding attachment to the file and upload table
   * */
  public function complete(stdClass $node, stdClass $row) {
    content_migrate_unt_update_workbench_access($node->nid, $this->recipe_tid);
    $nutrient_data = explode(',', $row->ndata);
    foreach ($nutrient_data as $pos => $ndata) {
      $nutrient_data_arr = explode('=>', $ndata);
      $old_nutrient_nid = $nutrient_data_arr[0];
      $old_nutrient_value = $nutrient_data_arr[1];
      $new_nid = $this->nutrient_mapping[$old_nutrient_nid]['nid'];
       if ($new_nid == '') {
         continue;
       } 
      content_migrate_unt_save_nutrient_field_collection($node, $new_nid, $old_nutrient_value);
    }

    content_migrate_unt_publish_node($node->nid, 1);
  }

}