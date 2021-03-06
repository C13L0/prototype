<?php
/**
 * @file
 * license_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function license_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_license_to_kill';
  $strongarm->value = '1';
  $export['ant_license_to_kill'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_license_to_kill';
  $strongarm->value = 'license-[current-date:raw]';
  $export['ant_pattern_license_to_kill'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_license_to_kill';
  $strongarm->value = 0;
  $export['comment_anonymous_license_to_kill'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_license_to_kill';
  $strongarm->value = 0;
  $export['comment_default_mode_license_to_kill'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_license_to_kill';
  $strongarm->value = '50';
  $export['comment_default_per_page_license_to_kill'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_license_to_kill';
  $strongarm->value = 0;
  $export['comment_form_location_license_to_kill'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_license_to_kill';
  $strongarm->value = '1';
  $export['comment_license_to_kill'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_license_to_kill';
  $strongarm->value = '0';
  $export['comment_preview_license_to_kill'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_license_to_kill';
  $strongarm->value = 0;
  $export['comment_subject_field_license_to_kill'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_license_to_kill';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_license_to_kill'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_license_to_kill';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_license_to_kill'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_license_to_kill';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_license_to_kill'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_license_to_kill';
  $strongarm->value = '1';
  $export['node_preview_license_to_kill'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_license_to_kill';
  $strongarm->value = 1;
  $export['node_submitted_license_to_kill'] = $strongarm;

  return $export;
}
