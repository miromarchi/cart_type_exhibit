<?php
/**
 * @file
 * cart_type_exhibit.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cart_type_exhibit_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:cart_exhibition:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'cart_exhibition';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'unico';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '68439a3b-a629-4276-b419-7f06341f5f4b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c60d7f5a-0695-49f8-bddd-61c54442c72a';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_completeness-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'panel-completeness',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c60d7f5a-0695-49f8-bddd-61c54442c72a';
    $display->content['new-c60d7f5a-0695-49f8-bddd-61c54442c72a'] = $pane;
    $display->panels['contentmain'][0] = 'new-c60d7f5a-0695-49f8-bddd-61c54442c72a';
    $pane = new stdClass();
    $pane->pid = 'new-67230d58-7f0c-445b-ba9e-ca30b3ae465a';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cart_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'cart_img_cover',
        'image_link' => 'file',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '67230d58-7f0c-445b-ba9e-ca30b3ae465a';
    $display->content['new-67230d58-7f0c-445b-ba9e-ca30b3ae465a'] = $pane;
    $display->panels['contentmain'][1] = 'new-67230d58-7f0c-445b-ba9e-ca30b3ae465a';
    $pane = new stdClass();
    $pane->pid = 'new-bab4b263-d25d-4d41-a7bc-fd040a8e7916';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_links-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bab4b263-d25d-4d41-a7bc-fd040a8e7916';
    $display->content['new-bab4b263-d25d-4d41-a7bc-fd040a8e7916'] = $pane;
    $display->panels['contentmain'][2] = 'new-bab4b263-d25d-4d41-a7bc-fd040a8e7916';
    $pane = new stdClass();
    $pane->pid = 'new-e7d480df-1d6a-44b1-87d0-5c9a1548bd16';
    $pane->panel = 'contentmain';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e7d480df-1d6a-44b1-87d0-5c9a1548bd16';
    $display->content['new-e7d480df-1d6a-44b1-87d0-5c9a1548bd16'] = $pane;
    $display->panels['contentmain'][3] = 'new-e7d480df-1d6a-44b1-87d0-5c9a1548bd16';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:cart_exhibition:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:cart_exhibition:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'cart_exhibition';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = '';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '6',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '6',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
      'middle' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '368d217f-2dfd-4a7a-b9c8-5a690e5a2057';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8a3252b9-ee8a-40eb-bd8b-57e1afe065c1';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cart_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'cart_img_cover',
        'image_link' => 'content',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8a3252b9-ee8a-40eb-bd8b-57e1afe065c1';
    $display->content['new-8a3252b9-ee8a-40eb-bd8b-57e1afe065c1'] = $pane;
    $display->panels['middle'][0] = 'new-8a3252b9-ee8a-40eb-bd8b-57e1afe065c1';
    $pane = new stdClass();
    $pane->pid = 'new-3777ab5e-a259-4038-9bb6-027345ec0225';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'teaser',
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3777ab5e-a259-4038-9bb6-027345ec0225';
    $display->content['new-3777ab5e-a259-4038-9bb6-027345ec0225'] = $pane;
    $display->panels['middle'][1] = 'new-3777ab5e-a259-4038-9bb6-027345ec0225';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:cart_exhibition:default:teaser'] = $panelizer;

  return $export;
}
