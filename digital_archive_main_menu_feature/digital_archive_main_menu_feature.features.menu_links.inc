<?php
/**
 * @file
 * digital_archive_main_menu_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function digital_archive_main_menu_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_collections:islandora/object
  $menu_links['main-menu_collections:islandora/object'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'islandora/object',
    'router_path' => 'islandora',
    'link_title' => 'collections',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'islandora-collections',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_collections:islandora/object',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('collections');

  return $menu_links;
}
