<?php
/**
 * @file
 * content_type_course_packages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function content_type_course_packages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_course_packages';
  $strongarm->value = 0;
  $export['comment_anonymous_course_packages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_course_packages';
  $strongarm->value = '1';
  $export['comment_course_packages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_course_packages';
  $strongarm->value = 1;
  $export['comment_default_mode_course_packages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_course_packages';
  $strongarm->value = '50';
  $export['comment_default_per_page_course_packages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_course_packages';
  $strongarm->value = 1;
  $export['comment_form_location_course_packages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_course_packages';
  $strongarm->value = '1';
  $export['comment_preview_course_packages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_course_packages';
  $strongarm->value = 1;
  $export['comment_subject_field_course_packages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__course_packages';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'node_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'node_full' => array(
        'custom_settings' => FALSE,
      ),
      'node_rss' => array(
        'custom_settings' => FALSE,
      ),
      'node_diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'node_search_result' => array(
        'custom_settings' => FALSE,
      ),
      'node_node_full' => array(
        'custom_settings' => FALSE,
      ),
      'node_node_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'node_node_rss' => array(
        'custom_settings' => FALSE,
      ),
      'node_node_diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'node_node_search_result' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'node:course_package_template:title' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'node:course_package_template:log' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'node:course_package_template:field_course_type_education' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '-3',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__course_packages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_course_packages';
  $strongarm->value = '0';
  $export['language_content_type_course_packages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_course_packages';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_course_packages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_course_packages';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_course_packages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_course_packages';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_course_packages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_course_packages';
  $strongarm->value = '1';
  $export['node_preview_course_packages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_course_packages';
  $strongarm->value = 1;
  $export['node_submitted_course_packages'] = $strongarm;

  return $export;
}