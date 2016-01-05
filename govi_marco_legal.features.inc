<?php
/**
 * @file
 * govi_marco_legal.features.inc
 */

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
