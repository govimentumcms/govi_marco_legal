<?php
/**
 * @file
 * govi_marco_legal.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_marco_legal_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function govi_marco_legal_node_info() {
  $items = array(
    'marco_legal' => array(
      'name' => t('Marco Legal'),
      'base' => 'node_content',
      'description' => t('Utilice este tipo de contenido para gestionar y clasificar los documentos y enlaces del marco legal que afecta a la Entidad'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
