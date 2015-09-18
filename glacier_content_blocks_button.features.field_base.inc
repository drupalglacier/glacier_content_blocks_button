<?php
/**
 * @file
 * glacier_content_blocks_button.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function glacier_content_blocks_button_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_pg_button_buttons'
  $field_bases['field_pg_button_buttons'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pg_button_buttons',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  return $field_bases;
}
