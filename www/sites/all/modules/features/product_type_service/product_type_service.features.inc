<?php
/**
 * @file
 * product_type_service.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function product_type_service_commerce_product_default_types() {
  $items = array(
    'service' => array(
      'type' => 'service',
      'name' => 'Service',
      'description' => '',
      'help' => '',
      'revision' => '1',
    ),
  );
  return $items;
}
