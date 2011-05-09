<?php
/**
 * @file
 * n.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function n_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_information_provider';
  $strongarm->value = 0;
  $export['comment_anonymous_information_provider'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_information_provider';
  $strongarm->value = 1;
  $export['comment_default_mode_information_provider'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_information_provider';
  $strongarm->value = '50';
  $export['comment_default_per_page_information_provider'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_information_provider';
  $strongarm->value = 1;
  $export['comment_form_location_information_provider'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_information_provider';
  $strongarm->value = '1';
  $export['comment_information_provider'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_information_provider';
  $strongarm->value = '1';
  $export['comment_preview_information_provider'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_information_provider';
  $strongarm->value = 1;
  $export['comment_subject_field_information_provider'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_information_provider';
  $strongarm->value = array();
  $export['menu_options_information_provider'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_information_provider';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_information_provider'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_information_provider';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_information_provider'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_information_provider';
  $strongarm->value = '1';
  $export['node_preview_information_provider'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_information_provider';
  $strongarm->value = 0;
  $export['node_submitted_information_provider'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_information_provider';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_information_provider'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagtag_field_information_provider';
  $strongarm->value = 'field_tags';
  $export['tagtag_field_information_provider'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagtag_replace_information_provider';
  $strongarm->value = '1';
  $export['tagtag_replace_information_provider'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagtag_search_fields_information_provider';
  $strongarm->value = array(
    0 => 'body',
  );
  $export['tagtag_search_fields_information_provider'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagtag_search_information_provider';
  $strongarm->value = array(
    0 => 'autotag',
  );
  $export['tagtag_search_information_provider'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagtag_ui_information_provider';
  $strongarm->value = 'tag_on_save';
  $export['tagtag_ui_information_provider'] = $strongarm;

  return $export;
}
