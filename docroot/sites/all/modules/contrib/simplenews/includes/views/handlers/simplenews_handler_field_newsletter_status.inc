<?php

/**
 * @file
 * Views handler for simplenews sent status.
 */

/**
 * Display newsletter sent status.
 */
class simplenews_handler_field_subscription_status extends views_handler_field {
  function render($values) {
    switch ($values->{$this->field_alias}) {
      case SIMPLENEWS_SUBSCRIPTION_STATUS_UNCONFIRMED:
      default:
        return t('Not Confirmed');
      case SIMPLENEWS_SUBSCRIPTION_STATUS_UNSUBSCRIBED:
        return t('Unsubcribed');
      case SIMPLENEWS_SUBSCRIPTION_STATUS_SUBSCRIBED:
        return t('Subcribed');
    }
  }
}
