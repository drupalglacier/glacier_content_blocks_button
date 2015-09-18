<?php
/**
 * @file
 * glacier_content_blocks_button.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function glacier_content_blocks_button_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function glacier_content_blocks_button_paragraphs_info() {
  $items = array(
    'button' => array(
      'name' => 'Button',
      'bundle' => 'button',
      'locked' => '1',
    ),
  );
  return $items;
}
