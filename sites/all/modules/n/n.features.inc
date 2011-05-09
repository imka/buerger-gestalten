<?php
/**
 * @file
 * n.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function n_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function n_node_info() {
  $items = array(
    'information_provider' => array(
      'name' => t('Information provider'),
      'base' => 'node_content',
      'description' => t('Anbieter von Informationen, die in das System via RSS importiert werden koennen.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
