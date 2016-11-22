<?php
/**
 * @file
 * digital_archive_platform_main_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function digital_archive_platform_main_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'flicker_and_blog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Flicker and Blog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Flicker and Blog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Block Image Link */
  $handler->display->display_options['fields']['field_block_image_link']['id'] = 'field_block_image_link';
  $handler->display->display_options['fields']['field_block_image_link']['table'] = 'field_data_field_block_image_link';
  $handler->display->display_options['fields']['field_block_image_link']['field'] = 'field_block_image_link';
  $handler->display->display_options['fields']['field_block_image_link']['label'] = '';
  $handler->display->display_options['fields']['field_block_image_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_block_image_link']['element_label_colon'] = FALSE;
  /* Field: Content: Block Image */
  $handler->display->display_options['fields']['field_block_image']['id'] = 'field_block_image';
  $handler->display->display_options['fields']['field_block_image']['table'] = 'field_data_field_block_image';
  $handler->display->display_options['fields']['field_block_image']['field'] = 'field_block_image';
  $handler->display->display_options['fields']['field_block_image']['label'] = '';
  $handler->display->display_options['fields']['field_block_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_block_image']['alter']['text'] = '<a target="_blank" href="[field_block_image_link]" title="[title]">[field_block_image]</a>';
  $handler->display->display_options['fields']['field_block_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_block_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_block_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '9289e621-315b-4aeb-af6c-810ad1909272';
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['table'] = 'node';
  $handler->display->display_options['filters']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_1']['value'] = '015ad26d-569b-4fcd-a9f4-6992f73051f9';
  $handler->display->display_options['filters']['uuid_1']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['flicker_and_blog'] = array(
    t('Master'),
    t('Flicker and Blog'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a target="_blank" href="[field_block_image_link]" title="[title]">[field_block_image]</a>'),
    t('Block'),
  );
  $export['flicker_and_blog'] = $view;

  $view = new view();
  $view->name = 'front_page_collection_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Front Page Collection Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Museum';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.description */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['link_to_object'] = 0;
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['id'] = 'RELS_EXT_hasModel_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['field'] = 'RELS_EXT_hasModel_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['operator'] = '!=';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['value'] = 'islandora:pageCModel';

  /* Display: Library */
  $handler = $view->new_display('block', 'Library', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'front-page-library-view';

  /* Display: Museum */
  $handler = $view->new_display('block', 'Museum', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'front-page-museum-view';
  $translatables['front_page_collection_views'] = array(
    t('Master'),
    t('Museum'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Library'),
  );
  $export['front_page_collection_views'] = $view;

  $view = new view();
  $view->name = 'frontpage_highlighted';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frontpage Highlighted';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frontpage Highlighted';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;

  /* Display: Library */
  $handler = $view->new_display('block', 'Library', 'block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Highlighted Image (library) (field_highlighted_image:fid) */
  $handler->display->display_options['relationships']['field_highlighted_image_fid']['id'] = 'field_highlighted_image_fid';
  $handler->display->display_options['relationships']['field_highlighted_image_fid']['table'] = 'field_data_field_highlighted_image';
  $handler->display->display_options['relationships']['field_highlighted_image_fid']['field'] = 'field_highlighted_image_fid';
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Highlighted Link (library) */
  $handler->display->display_options['fields']['field_highlighted_link_library_']['id'] = 'field_highlighted_link_library_';
  $handler->display->display_options['fields']['field_highlighted_link_library_']['table'] = 'field_data_field_highlighted_link_library_';
  $handler->display->display_options['fields']['field_highlighted_link_library_']['field'] = 'field_highlighted_link_library_';
  $handler->display->display_options['fields']['field_highlighted_link_library_']['label'] = '';
  $handler->display->display_options['fields']['field_highlighted_link_library_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_highlighted_link_library_']['element_label_colon'] = FALSE;
  /* Field: Content: Go To Link Target */
  $handler->display->display_options['fields']['field_go_to_link_target']['id'] = 'field_go_to_link_target';
  $handler->display->display_options['fields']['field_go_to_link_target']['table'] = 'field_data_field_go_to_link_target';
  $handler->display->display_options['fields']['field_go_to_link_target']['field'] = 'field_go_to_link_target';
  $handler->display->display_options['fields']['field_go_to_link_target']['label'] = '';
  $handler->display->display_options['fields']['field_go_to_link_target']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_go_to_link_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'library_highlighted' => 'library_highlighted',
  );

  /* Display: Museum */
  $handler = $view->new_display('block', 'Museum', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Museum';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Highlighted Image (Museum) (field_highlighted_image_museum_:fid) */
  $handler->display->display_options['relationships']['field_highlighted_image_museum__fid']['id'] = 'field_highlighted_image_museum__fid';
  $handler->display->display_options['relationships']['field_highlighted_image_museum__fid']['table'] = 'field_data_field_highlighted_image_museum_';
  $handler->display->display_options['relationships']['field_highlighted_image_museum__fid']['field'] = 'field_highlighted_image_museum__fid';
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Highlighted Link (Museum) */
  $handler->display->display_options['fields']['field_highlighted_link_museum_']['id'] = 'field_highlighted_link_museum_';
  $handler->display->display_options['fields']['field_highlighted_link_museum_']['table'] = 'field_data_field_highlighted_link_museum_';
  $handler->display->display_options['fields']['field_highlighted_link_museum_']['field'] = 'field_highlighted_link_museum_';
  $handler->display->display_options['fields']['field_highlighted_link_museum_']['label'] = '';
  $handler->display->display_options['fields']['field_highlighted_link_museum_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_highlighted_link_museum_']['element_label_colon'] = FALSE;
  /* Field: Content: Go To Link Target */
  $handler->display->display_options['fields']['field_go_to_link_target_museum']['id'] = 'field_go_to_link_target_museum';
  $handler->display->display_options['fields']['field_go_to_link_target_museum']['table'] = 'field_data_field_go_to_link_target_museum';
  $handler->display->display_options['fields']['field_go_to_link_target_museum']['field'] = 'field_go_to_link_target_museum';
  $handler->display->display_options['fields']['field_go_to_link_target_museum']['label'] = '';
  $handler->display->display_options['fields']['field_go_to_link_target_museum']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_go_to_link_target_museum']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'museum_highlighted' => 'museum_highlighted',
  );
  $translatables['frontpage_highlighted'] = array(
    t('Master'),
    t('Frontpage Highlighted'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Library'),
    t('image from field_highlighted_image'),
    t('File'),
    t('Museum'),
    t('image from field_highlighted_image_museum_'),
  );
  $export['frontpage_highlighted'] = $view;

  $view = new view();
  $view->name = 'frontpage_node_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frontpage Node Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frontpage Node Slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Slideshow Image (field_slideshow_image:fid) */
  $handler->display->display_options['relationships']['field_slideshow_image_fid']['id'] = 'field_slideshow_image_fid';
  $handler->display->display_options['relationships']['field_slideshow_image_fid']['table'] = 'field_data_field_slideshow_image';
  $handler->display->display_options['relationships']['field_slideshow_image_fid']['field'] = 'field_slideshow_image_fid';
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'slideshow-item-text-top';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Sub Title */
  $handler->display->display_options['fields']['field_sub_title']['id'] = 'field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['table'] = 'field_data_field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['field'] = 'field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['label'] = '';
  $handler->display->display_options['fields']['field_sub_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sub_title']['element_wrapper_class'] = 'slideshow-item-text-bottom';
  /* Field: Content: Go To Link */
  $handler->display->display_options['fields']['field_go_to_link']['id'] = 'field_go_to_link';
  $handler->display->display_options['fields']['field_go_to_link']['table'] = 'field_data_field_go_to_link';
  $handler->display->display_options['fields']['field_go_to_link']['field'] = 'field_go_to_link';
  $handler->display->display_options['fields']['field_go_to_link']['label'] = '';
  $handler->display->display_options['fields']['field_go_to_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_go_to_link']['element_label_colon'] = FALSE;
  /* Field: Content: Read More Text */
  $handler->display->display_options['fields']['field_read_more_text']['id'] = 'field_read_more_text';
  $handler->display->display_options['fields']['field_read_more_text']['table'] = 'field_data_field_read_more_text';
  $handler->display->display_options['fields']['field_read_more_text']['field'] = 'field_read_more_text';
  $handler->display->display_options['fields']['field_read_more_text']['label'] = '';
  $handler->display->display_options['fields']['field_read_more_text']['element_label_colon'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  /* Field: Content: Align Image */
  $handler->display->display_options['fields']['field_align_image']['id'] = 'field_align_image';
  $handler->display->display_options['fields']['field_align_image']['table'] = 'field_data_field_align_image';
  $handler->display->display_options['fields']['field_align_image']['field'] = 'field_align_image';
  $handler->display->display_options['fields']['field_align_image']['label'] = '';
  $handler->display->display_options['fields']['field_align_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_align_image']['element_label_colon'] = FALSE;
  /* Field: Content: Go To Link Target */
  $handler->display->display_options['fields']['field_href_target']['id'] = 'field_href_target';
  $handler->display->display_options['fields']['field_href_target']['table'] = 'field_data_field_href_target';
  $handler->display->display_options['fields']['field_href_target']['field'] = 'field_href_target';
  $handler->display->display_options['fields']['field_href_target']['label'] = '';
  $handler->display->display_options['fields']['field_href_target']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_href_target']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow' => 'slideshow',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['frontpage_node_slideshow'] = array(
    t('Master'),
    t('Frontpage Node Slideshow'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('image from field_slideshow_image'),
    t('File'),
    t('Block'),
  );
  $export['frontpage_node_slideshow'] = $view;

  $view = new view();
  $view->name = 'frontpage_slideshow';
  $view->description = 'NYHS Frontpage Slideshow';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Frontpage Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frontpage Slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['element_wrapper_class'] = 'slideshow-item-text-top';
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['id'] = 'mods_titleInfo_subTitle_ms';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['field'] = 'mods_titleInfo_subTitle_ms';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['label'] = '';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['element_class'] = 'slideshow-item-text-subtitle';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['element_label_colon'] = FALSE;
  /* Field: Islandora Solr: dc.description */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['dc.description']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['dc.description']['alter']['more_link_path'] = '/islandora/object/[PID]';
  $handler->display->display_options['fields']['dc.description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['element_class'] = 'slideshow-item-text-bottom';
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['link_to_object'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:sp_large_image_collection';
  $translatables['frontpage_slideshow'] = array(
    t('Master'),
    t('Frontpage Slideshow'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Read More'),
    t('Block'),
  );
  $export['frontpage_slideshow'] = $view;

  $view = new view();
  $view->name = 'nyhs_block_logo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NYHS Block Logo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'NYHS Block Logo';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Block Image Link */
  $handler->display->display_options['fields']['field_block_image_link']['id'] = 'field_block_image_link';
  $handler->display->display_options['fields']['field_block_image_link']['table'] = 'field_data_field_block_image_link';
  $handler->display->display_options['fields']['field_block_image_link']['field'] = 'field_block_image_link';
  $handler->display->display_options['fields']['field_block_image_link']['label'] = '';
  $handler->display->display_options['fields']['field_block_image_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_block_image_link']['element_label_colon'] = FALSE;
  /* Field: Content: Block Image */
  $handler->display->display_options['fields']['field_block_image']['id'] = 'field_block_image';
  $handler->display->display_options['fields']['field_block_image']['table'] = 'field_data_field_block_image';
  $handler->display->display_options['fields']['field_block_image']['field'] = 'field_block_image';
  $handler->display->display_options['fields']['field_block_image']['label'] = '';
  $handler->display->display_options['fields']['field_block_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_block_image']['alter']['text'] = '<a href="[field_block_image_link]" title="[title]">
[field_block_image]
</a>';
  $handler->display->display_options['fields']['field_block_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_block_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_block_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '25eaf698-1ceb-4453-adcc-2b5fd640d582';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['nyhs_block_logo'] = array(
    t('Master'),
    t('NYHS Block Logo'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="[field_block_image_link]" title="[title]">
[field_block_image]
</a>'),
    t('Block'),
  );
  $export['nyhs_block_logo'] = $view;

  $view = new view();
  $view->name = 'nyhs_contact_info_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NYHS Contact Info View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '0e3a7ce0-175c-4e2a-a3b0-5f58eaad1ee0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'nyhs-contact-info-view';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['nyhs_contact_info_view'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Page'),
    t('Block'),
  );
  $export['nyhs_contact_info_view'] = $view;

  $view = new view();
  $view->name = 'powered_by_dgi';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Powered By DGI';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Block Image Link */
  $handler->display->display_options['fields']['field_block_image_link']['id'] = 'field_block_image_link';
  $handler->display->display_options['fields']['field_block_image_link']['table'] = 'field_data_field_block_image_link';
  $handler->display->display_options['fields']['field_block_image_link']['field'] = 'field_block_image_link';
  $handler->display->display_options['fields']['field_block_image_link']['label'] = '';
  $handler->display->display_options['fields']['field_block_image_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_block_image_link']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_block_image_link']['element_label_colon'] = FALSE;
  /* Field: Content: Block Image */
  $handler->display->display_options['fields']['field_block_image']['id'] = 'field_block_image';
  $handler->display->display_options['fields']['field_block_image']['table'] = 'field_data_field_block_image';
  $handler->display->display_options['fields']['field_block_image']['field'] = 'field_block_image';
  $handler->display->display_options['fields']['field_block_image']['label'] = '';
  $handler->display->display_options['fields']['field_block_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_block_image']['alter']['text'] = '<a href="[field_block_image_link]" title="DiscoveryGarden inc.">
[field_block_image]
</a>';
  $handler->display->display_options['fields']['field_block_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_block_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_block_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '10e27c3c-c57e-49ee-aaf1-71b446adb765';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['powered_by_dgi'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="[field_block_image_link]" title="DiscoveryGarden inc.">
[field_block_image]
</a>'),
    t('Block'),
  );
  $export['powered_by_dgi'] = $view;

  $view = new view();
  $view->name = 'recently_added';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Recently added';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recently Added';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Sort criterion: Islandora Solr: fgs_createdDate_dt */
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['id'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['field'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['order'] = 'DESC';
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['id'] = 'RELS_EXT_hasModel_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['field'] = 'RELS_EXT_hasModel_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['operator'] = '!=';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['value'] = 'islandora:pageCModel';

  /* Display: Recently Added */
  $handler = $view->new_display('block', 'Recently Added', 'block');
  $translatables['recently_added'] = array(
    t('Master'),
    t('Recently Added'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
  );
  $export['recently_added'] = $view;

  $view = new view();
  $view->name = 'recently_added_to_collection';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Recently Added to Collection';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recently Added';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Sort criterion: Islandora Solr: fgs_createdDate_dt */
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['id'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['field'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['order'] = 'DESC';
  /* Contextual filter: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['default_action'] = 'default';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['id'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['field'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['operator'] = '!=';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['value'] = 'info:fedora/islandora:pageCModel';

  /* Display: Recently Added to collection */
  $handler = $view->new_display('block', 'Recently Added to collection', 'block');
  $translatables['recently_added_to_collection'] = array(
    t('Master'),
    t('Recently Added'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Recently Added to collection'),
  );
  $export['recently_added_to_collection'] = $view;

  $view = new view();
  $view->name = 'subsequent_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Subsequent Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Subsequent Pages';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['RELS_EXT_isPageNumber_literal_ms']['id'] = 'RELS_EXT_isPageNumber_literal_ms';
  $handler->display->display_options['fields']['RELS_EXT_isPageNumber_literal_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['RELS_EXT_isPageNumber_literal_ms']['field'] = 'RELS_EXT_isPageNumber_literal_ms';
  $handler->display->display_options['fields']['RELS_EXT_isPageNumber_literal_ms']['label'] = '';
  $handler->display->display_options['fields']['RELS_EXT_isPageNumber_literal_ms']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['RELS_EXT_isPageNumber_literal_ms']['alter']['text'] = '<a href="/islandora/object/[PID]"><p>Page [RELS_EXT_isPageNumber_literal_ms]</p></a>';
  $handler->display->display_options['fields']['RELS_EXT_isPageNumber_literal_ms']['element_label_colon'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['RELS_EXT_isSequenceNumber_literal_ss']['id'] = 'RELS_EXT_isSequenceNumber_literal_ss';
  $handler->display->display_options['sorts']['RELS_EXT_isSequenceNumber_literal_ss']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['RELS_EXT_isSequenceNumber_literal_ss']['field'] = 'RELS_EXT_isSequenceNumber_literal_ss';
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['RELS_EXT_isPageOf_uri_mt']['id'] = 'RELS_EXT_isPageOf_uri_mt';
  $handler->display->display_options['arguments']['RELS_EXT_isPageOf_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['RELS_EXT_isPageOf_uri_mt']['field'] = 'RELS_EXT_isPageOf_uri_mt';
  $handler->display->display_options['arguments']['RELS_EXT_isPageOf_uri_mt']['default_action'] = 'default';
  $handler->display->display_options['arguments']['RELS_EXT_isPageOf_uri_mt']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['RELS_EXT_isPageOf_uri_mt']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['RELS_EXT_isPageOf_uri_mt']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['RELS_EXT_isPageOf_uri_mt']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['RELS_EXT_isPageOf_uri_mt']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['subsequent_pages'] = array(
    t('Master'),
    t('Subsequent Pages'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/islandora/object/[PID]"><p>Page [RELS_EXT_isPageNumber_literal_ms]</p></a>'),
    t('All'),
    t('Block'),
  );
  $export['subsequent_pages'] = $view;

  return $export;
}
