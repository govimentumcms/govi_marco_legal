<?php
/**
 * @file
 * govi_marco_legal.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function govi_marco_legal_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-marco-legal_lineamientos:menutoken/568ff29656ea8.
  $menu_links['menu-menu-marco-legal_lineamientos:menutoken/568ff29656ea8'] = array(
    'menu_name' => 'menu-menu-marco-legal',
    'link_path' => 'menutoken/568ff29656ea8',
    'router_path' => 'menutoken/%',
    'link_title' => 'Lineamientos',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_token_link_path' => '[site:url]marco-legal/lineamientos',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-menu-marco-legal_lineamientos:menutoken/568ff29656ea8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-marco-legal_normatividad:menutoken/568ff279ef393.
  $menu_links['menu-menu-marco-legal_normatividad:menutoken/568ff279ef393'] = array(
    'menu_name' => 'menu-menu-marco-legal',
    'link_path' => 'menutoken/568ff279ef393',
    'router_path' => 'menutoken/%',
    'link_title' => 'Normatividad',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_token_link_path' => '[site:url]marco-legal/normatividad',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-menu-marco-legal_normatividad:menutoken/568ff279ef393',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-marco-legal_planes:menutoken/568ff2b36ff87.
  $menu_links['menu-menu-marco-legal_planes:menutoken/568ff2b36ff87'] = array(
    'menu_name' => 'menu-menu-marco-legal',
    'link_path' => 'menutoken/568ff2b36ff87',
    'router_path' => 'menutoken/%',
    'link_title' => 'Planes',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_token_link_path' => '[site:url]marco-legal/planes',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-menu-marco-legal_planes:menutoken/568ff2b36ff87',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Lineamientos');
  t('Normatividad');
  t('Planes');

  return $menu_links;
}
