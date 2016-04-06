<?php

/**
 * Services nodequeue clear services resources.
 */

/**
 * Update nodequeue.
 *
 * @param string $queue_name
 *   Queue name which will be updated.
 * @param string $bundle
 *   Node type which will we cleared from queue.
 *
 * @return array
 *   Status message.
 */
function services_nodequeue_clear_nodequeue_update($queue_name, $bundle) {
  $queue = nodequeue_load_queue_by_name($queue_name);

  if ($queue) {
    $subqueues = nodequeue_load_subqueues_by_queue($queue->qid);

    foreach ($subqueues as $subqueue) {
      // Load all published nodes in subqueue and then delete by bundle.
      $nodes = nodequeue_load_nodes($subqueue->sqid, FALSE, 0, 0, TRUE);

      foreach ($nodes as $node) {
        if ($node->type == $bundle) {
          nodequeue_subqueue_remove_node($subqueue->sqid, $node->nid);
        }
      }
    }
  }

  return array(
    'status' => t('@queue_name nodequeue cleared', array('@queue_name' => $queue_name))
  );
}

/**
 * Dummy access callback.
 */
function services_nodequeue_clear_access_callback() {
  return TRUE;
}
