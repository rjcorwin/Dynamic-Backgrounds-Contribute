<?php

/**
 * Implementation of hook_strongarm().
 */
function dynamic_backgrounds_contribute_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_dynamic_backgrounds_contribute';
  $strongarm->value = 0;
  $export['comment_anonymous_dynamic_backgrounds_contribute'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_dynamic_backgrounds_contribute';
  $strongarm->value = '3';
  $export['comment_controls_dynamic_backgrounds_contribute'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_dynamic_backgrounds_contribute';
  $strongarm->value = '4';
  $export['comment_default_mode_dynamic_backgrounds_contribute'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_dynamic_backgrounds_contribute';
  $strongarm->value = '1';
  $export['comment_default_order_dynamic_backgrounds_contribute'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_dynamic_backgrounds_contribute';
  $strongarm->value = '50';
  $export['comment_default_per_page_dynamic_backgrounds_contribute'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_dynamic_backgrounds_contribute';
  $strongarm->value = '2';
  $export['comment_dynamic_backgrounds_contribute'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_dynamic_backgrounds_contribute';
  $strongarm->value = '0';
  $export['comment_form_location_dynamic_backgrounds_contribute'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_dynamic_backgrounds_contribute';
  $strongarm->value = '1';
  $export['comment_preview_dynamic_backgrounds_contribute'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_dynamic_backgrounds_contribute';
  $strongarm->value = '1';
  $export['comment_subject_field_dynamic_backgrounds_contribute'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_dynamic_backgrounds_contribute';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-3',
    'revision_information' => '0',
    'author' => '-1',
    'options' => '1',
    'comment_settings' => '3',
    'menu' => '-2',
    'path' => '4',
    'path_redirect' => '2',
  );
  $export['content_extra_weights_dynamic_backgrounds_contribute'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_dynamic_backgrounds_contribute';
  $strongarm->value = array();
  $export['node_options_dynamic_backgrounds_contribute'] = $strongarm;

  return $export;
}
