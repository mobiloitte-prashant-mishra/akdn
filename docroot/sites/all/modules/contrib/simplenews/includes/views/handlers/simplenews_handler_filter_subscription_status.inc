<?php

/**
 * @file
 * Views filter for simplenews sent status.
 */

/**
 * Filter based on subscription sent status.
 */
class simplenews_handler_filter_subscription_status extends views_handler_filter_in_operator {
  function get_value_options() {
    $this->value_options = array(
      SIMPLENEWS_SUBSCRIPTION_STATUS_SUBSCRIBED => t('Subcribed'),
      SIMPLENEWS_SUBSCRIPTION_STATUS_UNCONFIRMED => t('Not Confirmed'),
      SIMPLENEWS_SUBSCRIPTION_STATUS_UNSUBSCRIBED => t('Unsubcribed'),
    );
  }
}
