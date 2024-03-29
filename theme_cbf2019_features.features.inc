<?php

/**
 * @file
 * theme_cbf2019_features.features.inc
 */

/**
 * Implements hook_views_api().
 */
function theme_cbf2019_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function theme_cbf2019_features_default_entityform_type() {
  $items = array();
  $items['collection'] = entity_import('entityform_type', '{
    "type" : "collection",
    "label" : "Collection",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "2" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "2" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "4" : "4",
        "1" : 0,
        "2" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "3" : 0,
        "8" : 0,
        "10" : 0,
        "11" : 0,
        "9" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "2" }
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_image_default_styles().
 */
function theme_cbf2019_features_image_default_styles() {
  $styles = array();

  // Exported image style: title.
  $styles['title'] = array(
    'label' => 'title',
    'effects' => array(
      18 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 900,
        ),
        'weight' => 1,
      ),
      19 => array(
        'name' => 'imagick_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 60,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
