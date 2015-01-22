<?php
/**
 * @file
 * flipkart_product_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function flipkart_product_content_type_node_info() {
  $items = array(
    'flipdemo' => array(
      'name' => t('Flipkart Product'),
      'base' => 'node_content',
      'description' => t('Flipkart Products'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
