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
  $fe_block_boxes->body = '[nd_menu menu="menu-cbf-2019-main-menu" fid="" transparent="1" search="1" cart="0" language="0" different_values="0" type="dark"]
[/nd_menu]
[nd_slider slide_anim="fullwidth" slide_autoplay="8000" different_values="0"]
[nd_slider_item 0=""]
[nd_bg fid="10663" slider="0" banner="0" full_height="1" scroll_icon="0" video_sound="0" different_values="0"]
[nd_div vertical_align="1" different_values="0"]
[nd_container different_values="0"]
[nd_title title="Spaces and opportunities to" size="h4_styled" alignment=" align-center" styled="1" uppercase="1" color="white" different_values="0"]
[/nd_title]
[nd_title title="Ask the bigger questions" size="h2_42" alignment=" align-center" styled="1" uppercase="1" different_values="0" color="white" style_margin_top="50" style_margin_bottom="50"]
[/nd_title]
[nd_button button_type="border" block="0" display="round" size="medium" text="Link 1" invert="1" style_margin_right="8" different_values="0" target="0" extra_classes="uppercase"]
[/nd_button]
[nd_button button_type="border" block="0" display="round" size="medium" text="Link 2" invert="1" different_values="0" target="0" extra_classes="uppercase"]
[/nd_button]
[/nd_container]
[/nd_div]
[/nd_bg]
[/nd_slider_item]
[/nd_slider]
[nd_div vertical_align="1" different_values="0"]
[nd_container different_values="0"]
[row different_values="0" style_margin_top="140px" style_margin_bottom="60px"]
[col different_values="0" phone="8"]
[nd_title title="About City Bible Forum" size="h4" alignment=" align-left" styled="1" uppercase="1" color="black" different_values="0"]
[/nd_title]
[/col]
[col different_values="0" phone="4"]
[html format="2" different_values="0" extra_classes="h4 align-right uppercase"]<p><a class="section-more" href="/node/13">About us ›</a></p>[/html]
[/col]
[/row]
[row different_values="0"]
[col desktop="4" different_values="0" text_align="left"]
[html format="2" different_values="0"]<blockquote><p>Creating the spaces and opportunities in the workplace to explore the bigger questions of life, faith and culture</p></blockquote>[/html]
[/col]
[col desktop="4" different_values="0" text_align="left"]
[html format="2" different_values="0" extra_classes="section-text"]<p>City Bible forum creates the spaces and opportunities in the workplace to talk about the big issues you care about. Join our public forums and professional networks or browse our extensive library of resources to explore the bigger questions about life, faith and purpose.</p>[/html]
[/col]
[col desktop="4" different_values="0" text_align="left"]
[html format="2" different_values="0" extra_classes="section-text"]<p>From CEOs to new graduates, our highly trained and experienced staff and volunteers are explaining the Bible to people every day, in every way. Together we engage thousands of city workers from every worldview, in every major city of Australia, every year.</p>[/html]
[/col]
[/row]
[/nd_container]
[/nd_div]
 ';

  $export['cbf2019_theme_home_top'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'CBF 2019 theme - home - footer';
  $fe_block_boxes->format = 'dynamic_shortcodes';
  $fe_block_boxes->machine_name = 'cbf_2019_theme_home_footer';
  $fe_block_boxes->body = '[row style_padding_top="140px" extra_classes="bg-gray" text_align="center" different_values="0" style_padding_bottom="36px"]
[col different_values="0"]
[html format="2" text_align="center" different_values="0"]<p style="max-width: 50%; display: inline-block;">|LS|The Logo goes here. Note that the NikaDevs&nbsp;shortcodes&nbsp;for images expect the image to be uploaded each time. I\'d prefer to upload the logo once. Also SVG format images might not work well being inserted this way.|RS|</p>[/html]
[nd_icon icon="fa fa-facebook" boxed="0" different_values="0" link="https://www.facebook.com/CityBibleForum/" type="Bordered" target="0" no_lightbox="0"]
[/nd_icon]
[nd_icon icon="fa fa-linkedin" boxed="0" different_values="0" link="https://www.linkedin.com/company/city-bible-forum" type="Bordered" target="0" no_lightbox="0"]
[/nd_icon]
[nd_icon icon="fa fa-instagram" boxed="0" different_values="0" type="Bordered" target="0" no_lightbox="0"]
[/nd_icon]
[/col]
[/row]
 ';

  $export['cbf_2019_theme_home_footer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'CBF 2019 theme - home - link to CBF+';
  $fe_block_boxes->format = 'dynamic_shortcodes';
  $fe_block_boxes->machine_name = 'cbf_2019_theme_home_plus';
  $fe_block_boxes->body = '[row different_values="0"]
[col different_values="0"]
[nd_div vertical_align="0" different_values="0" style_background_color="3e88ea" style_padding_top="60px" style_padding_bottom="60px" text_align="center"]
[nd_title title="I am a Christian looking for discipleship content" size="h4" alignment=" align-center" styled="1" uppercase="1" different_values="0" color="white" weight="fw-300"]
[/nd_title]
[nd_button block="0" display="round" size="medium" text="Go to City Bible Forum Plus" invert="1" different_values="0" target="0"]
[/nd_button]
[/nd_div]
[/col]
[/row]
 ';

  $export['cbf_2019_theme_home_plus'] = $fe_block_boxes;

  return $export;
}
