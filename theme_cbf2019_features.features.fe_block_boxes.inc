<?php
/**
 * @file
 * theme_cbf2019_features.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function theme_cbf2019_features_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'CBF 2019 theme - home - top';
  $fe_block_boxes->format = 'dynamic_shortcodes';
  $fe_block_boxes->machine_name = 'cbf2019_theme_home_top';
  $fe_block_boxes->body = '[nd_menu menu="main-menu" fid="7598" transparent="1" search="1" cart="0" language="0" different_values="0" menu_type="popup_menu" type="white"]
[/nd_menu]
[nd_slider slide_anim="fullwidth" slide_autoplay="8000" different_values="0"]
[nd_slider_item]
[nd_bg fid="10663" slider="0" banner="0" full_height="1" scroll_icon="0" video_sound="0" different_values="0"]
[nd_div vertical_align="1" different_values="0"]
[nd_container different_values="0"]
[nd_title title="SPACES AND OPPORTUNITIES" size="h1_big" alignment=" align-center" styled="1" uppercase="1" color="white" different_values="0"]
[/nd_title]
[nd_title title="TO ASK THE BIGGER QUESTIONS" size="h1_big" alignment=" align-center" styled="1" uppercase="1" color="white" different_values="0"]
[/nd_title]
[/nd_container]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[/nd_slider]
[nd_div vertical_align="1" different_values="0"]
[nd_container different_values="0"]
[row different_values="0"]
[col desktop="8" different_values="0"]
[nd_title title="About City Bible Forum" size="h4" alignment=" align-left" styled="1" uppercase="1" color="black" different_values="0"]
[/nd_title]
[/col]
[col desktop="4" different_values="0"]
[html format="2" different_values="0" text_align="right"]<p>About us</p>[/html]
[/col]
[/row]
[row different_values="0"]
[col desktop="4" different_values="0" text_align="left"]
[html format="2" different_values="0"]<blockquote><p>Creating the spaces and opportunities in the workplace to explore the bigger questions of life, faith and culture</p></blockquote>[/html]
[/col]
[col desktop="4" different_values="0" text_align="left"]
[html format="2" different_values="0"]<p>City Bible forum creates the spaces and opportunities in the workplace to talk about the big issues you care about. Join our public forums and professional networks or browse our extensive library of resources to explore the bigger questions about life, faith and purpose.</p>[/html]
[/col]
[col desktop="4" different_values="0" text_align="left"]
[html format="2" different_values="0"]<p>From CEOs to new graduates, our highly trained and experienced staff and volunteers are explaining the Bible to people every day, in every way.Together we engage thousands of city workers from every worldview, in every major city of Australia, every year.</p>[/html]
[/col]
[/row]
[/nd_container]
[/nd_div]
[nd_div vertical_align="0" different_values="0"]
[nd_view admin_url="admin/structure/views/view/local_civicrm_event_slider/edit/block" different_values="0"]
[/nd_view]
[/nd_div]
 ';

  $export['cbf2019_theme_home_top'] = $fe_block_boxes;

  return $export;
}
