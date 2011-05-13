<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function dynamic_backgrounds_contribute_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function dynamic_backgrounds_contribute_imagecache_default_presets() {
  $items = array(
    'background_node_view' => array(
      'presetname' => 'background_node_view',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '500',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'dynamic_backgrounds_contribute_preview' => array(
      'presetname' => 'dynamic_backgrounds_contribute_preview',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '500',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'my_backgrounds_preview' => array(
      'presetname' => 'my_backgrounds_preview',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '160',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function dynamic_backgrounds_contribute_node_info() {
  $items = array(
    'dynamic_backgrounds_contribute' => array(
      'name' => t('Background'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function dynamic_backgrounds_contribute_views_api() {
  return array(
    'api' => '2',
  );
}
