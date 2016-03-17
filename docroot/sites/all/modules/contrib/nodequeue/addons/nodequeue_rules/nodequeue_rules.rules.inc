<?php

/**
 * @file
 * Rules integration for the nodequeue module.
 */

/**
 * Implements hook_rules_condition_info()
 */
function nodequeue_rules_rules_condition_info() {
  return array(
    'nodequeue_rules_node_in_queue' => array(
      'label' => t('Nodequeue the node belongs to'),
      'group' => t('Nodequeue'),
      'parameter' => array(
        'queue' => array(
          'type' => 'text',
          'label' => t('Queue'),
          'description' => t('The queue where the node was added.'),
          'options list' => 'nodequeue_rules_get_queue_names',
        ),
        'node' => array(
          'type' => 'node',
          'label' => t('Node'),
          'description' => t('The node that was added to the nodequeue.'),
        ),
      ),
    ),
  );
}

/**
 * The callback for the condition 'nodequeue_rules_node_in_queue'
 */
function nodequeue_rules_node_in_queue($queue_name, $node) {
  // Note that the order of the parameters is the same as in the declaration of
  // the condition. Use the same variable names as in the declaration to avoid
  // confusion.
  $queue = nodequeue_load_queue_by_name($queue_name);
  $node_in_queue = db_select('nodequeue_nodes', 'nodequeue_nodes')
    ->fields('nodequeue_nodes', array('qid', 'nid'))
    ->condition('nid', $node->nid, '=')
    ->condition('qid', $queue->qid, '=')
    ->execute()
    ->fetchAssoc();
  // All conditions return TRUE or FALSE.
  // fetchAssoc returns false if no row is found; use implicit truthiness get around that case.
  return $node_in_queue && ($queue->qid == $node_in_queue['qid']) ? TRUE : FALSE;
}

/**
* Implementation of hook_rules_event_info().
*/
function nodequeue_rules_rules_event_info() {
  return array(
    //Event: Node added to a nodequeue
    'nodequeue_rules_event_add_node' => array(
      'label' => t('After adding a node to a nodequeue'),
      'group' => t('Nodequeue'),
      'variables' => array(
        'queue' => array('type' => 'text', 'label' => t('nodequeue the node was added in')),
        'node' => array('type' => 'node', 'label' => t('the node that was added')),
      ),
    ),
    'nodequeue_rules_event_remove_node' => array(
      'label' => t('After removing a node from a nodequeue'),
      'group' => t('Nodequeue'),
      'variables' => array(
        'queue' => array('type' => 'text', 'label' => t('nodequeue the node was removed from')),
        'node' => array('type' => 'node', 'label' => t('the node that was removed')),
      ),
    ),
    'nodequeue_rules_event_save_subqueue_order_alter' => array(
      'label' => t('After swapping nodes in a nodequeue'),
      'group' => t('Nodequeue'),
      'variables' => array(
        'queue' => array('type' => 'text', 'label' => t('nodequeue the nodes were swapped in')),
        'nodes' => array('type' => 'nodes', 'label' => t('the nodes that were swapped')),
      ),
    ),
  );
}

/**
 * Implements hook_rules_action_info().
 */
function nodequeue_rules_rules_action_info() {
  return array(
    // Action: Add a given node to the given nodequeue.
    'nodequeue_rules_action_add_node' => array(
      'label' => t('Add node to nodequeue'),
      'group' => t('Nodequeue'),
      'parameter' => array(
        'node' => array(
          'type' => 'node',
          'label' => t('Node'),
          'description' => t('The node you want to add.'),
        ),
        'queue' => array(
          'type' => 'text',
          'label' => t('Queue'),
          'description' => t('The queue where the node should be added to.'),
          'options list' => 'nodequeue_rules_get_queue_names',
        ),
        'unique' => array(
          'type' => 'boolean',
          'label' => t('Prevent duplication'),
          'description' => t('Selecting this option will prevent the node from being added more than once to any subqueue.'),
          'default value' => TRUE,
        )
      ),
    ),
    // Action: Remove the given node from the given nodequeue.
    'nodequeue_rules_action_remove_node' => array(
      'label' => t('Remove node from nodequeue'),
      'group' => t('Nodequeue'),
      'parameter' => array(
        'node' => array(
          'type' => 'node',
          'label' => t('Node'),
          'description' => t('The node you want to remove.'),
        ),
        'queue' => array(
          'type' => 'text',
          'label' => t('Queue'),
          'description' => t('The queue where the node should be removed from.'),
          'options list' => 'nodequeue_rules_get_queue_names',
        ),
      ),
    ),
  );
}

/**
 * Action: Add the given node to the given nodequeue.
 */
function nodequeue_rules_action_add_node($node, $queue_name, $unique) {
  $queue = nodequeue_load_queue_by_name($queue_name);
  $smartqueue_enabled = function_exists('smartqueue_taxonomy_nodequeue_subqueues') ? TRUE : FALSE;
  if ($smartqueue_enabled) {
    $references = smartqueue_taxonomy_nodequeue_subqueues($queue, $node);
  }

  $smartqueue_domain_enabled = function_exists('smartqueue_domain_nodequeue_subqueues') ? TRUE : FALSE;
  if ($smartqueue_domain_enabled) {
    $subqueue_domain = smartqueue_domain_nodequeue_subqueues($queue, $node);
    $node_domains = nodequeue_rules_get_node_domains($node);
  }
  $subqueues = nodequeue_load_subqueues_by_queue($queue->qid);
  foreach($subqueues as $subqueue) {
    $add = TRUE;
    // unique means we don't add it if it's in the queue already
    if ($unique) {
      $add = nodequeue_subqueue_position($subqueue->sqid, $node->nid) === FALSE;
    }
    if ($add) {
      if ($smartqueue_domain_enabled) {
        // Do not allow nodes to be added to queues on domains they are not publishted to.
        // The domain id is the last part of the queue reference string.
        // All smartqueue_domain subqueue references also contain ":domain:".
        if (!empty($subqueue->reference) && !empty($node_domains)){
          $reference_array = explode(':', $subqueue->reference);
          $queue_domain_id = end($reference_array);
          if(strpos($subqueue->reference, ':domain:') && in_array($queue_domain_id, $node_domains)) {
            // dsm('Adding ' . $node->title . ' to...' . $subqueue->reference); // Uncomment to debug with devel.
            nodequeue_subqueue_add($queue, $subqueue, $node->nid);
          }
        }
      }
      if ($smartqueue_enabled) {
        if (in_array($subqueue->reference, $references)) {
          nodequeue_subqueue_add($queue, $subqueue, $node->nid);
        }
      }
      if(!$smartqueue_domain_enabled && !$smartqueue_domain_enabled){
        nodequeue_subqueue_add($queue, $subqueue, $node->nid);
      }
    }
  }
}


/**
 * Action: Remove the given node from the given nodequeue.
 */
function nodequeue_rules_action_remove_node($node, $queue_name) {
  $queue = nodequeue_load_queue_by_name($queue_name);
  $subqueues = nodequeue_load_subqueues_by_queue($queue->qid);
  foreach ($subqueues as $subqueue) {
    if (!$queue->i18n || (isset($node->tnid) && empty($node->tnid))) {
      nodequeue_subqueue_remove_node($subqueue->sqid, $node->nid);
    }
  }
}

/**
 * Return a list of nodequeue names.
 */
function nodequeue_rules_get_queue_names() {
  $items = array();
  $queues = nodequeue_load_queues(nodequeue_get_all_qids());
  foreach ($queues as $queue) {
    $items[$queue->name] = $queue->title;
  }
  return $items;
}


/**
 * Helper function for fetching possible domain ids for a node.
 */
function nodequeue_rules_get_node_domains($node){
  $node_domains = array();
  if(empty($node->nid) || !function_exists('domain_get_node_domains')){
    return $node_domains;
  }
  $domain_data = domain_get_node_domains($node->nid);
  if(!empty($domain_data['domain_id'])){
    return $domain_data['domain_id'];
  }
  return $node_domains;
}
