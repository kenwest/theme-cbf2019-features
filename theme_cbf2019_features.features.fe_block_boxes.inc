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
[nd_slider slide_anim="fullwidth" slide_autoplay="8000" different_values="0" style_margin_bottom="36px"]
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
[col different_values="0" phone="8"]
[nd_title title="About City Bible Forum" size="h4" alignment=" align-left" styled="1" uppercase="1" color="black" different_values="0"]
[/nd_title]
[/col]
[col different_values="0" phone="4"]
[html format="2" different_values="0" extra_classes="h5 align-right uppercase"]<p><a href="/node/13">About us »</a></p>[/html]
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
[html format="2" different_values="0"]<p>From CEOs to new graduates, our highly trained and experienced staff and volunteers are explaining the Bible to people every day, in every way. Together we engage thousands of city workers from every worldview, in every major city of Australia, every year.</p>[/html]
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
  $fe_block_boxes->body = '[row different_values="0"]
[col different_values="0"]
[nd_div vertical_align="0" different_values="0" style_background_color="3e88ea" style_padding_top="36px" style_padding_bottom="36px"]
[html format="2" different_values="0" extra_classes="uppercase h4" text_align="center" extra_style="color: white;"]<p>I am a Christian looking for discipleship content</p>[/html]
[nd_div vertical_align="0" different_values="0" text_align="center"]
[nd_button block="0" display="round" size="medium" text="Go to City Bible Forum Plus" link="https://plus.citybibleforum.org" invert="1" icon="fa fa-arrow-right" icon_position="beside" target="0" different_values="0" text_align="center" extra_classes="align-center"]
[/nd_button]
[/nd_div]
[/nd_div]
[/col]
[/row]
[row different_values="0" extra_classes="bg-gray-lighter" style_padding_top="36px" style_padding_bottom="36px"]
[col different_values="0"]
[nd_title title="Find us" size="h4" alignment=" align-center" styled="0" uppercase="1" color="black" different_values="0"]
[/nd_title]
[/col]
[col phone="2" different_values="0"]
[/col]
[col phone="8" different_values="0"]
[row different_values="0"]
[col phone="12" different_values="0" wide="6"]
[row different_values="0"]
[col phone="12" tablet="6" desktop="3" different_values="0"]
[nd_title title="National" size="h5" alignment=" align-center" styled="0" uppercase="1" color="black" different_values="0"]
[/nd_title]
[/col]
[col phone="12" tablet="6" desktop="3" different_values="0"]
[nd_title title="Adelaide" size="h5" alignment=" align-center" styled="0" uppercase="1" color="black" different_values="0"]
[/nd_title]
[/col]
[col phone="12" tablet="6" desktop="3" different_values="0"]
[nd_title title="Brisbane" size="h5" alignment=" align-center" styled="0" uppercase="1" color="black" different_values="0"]
[/nd_title]
[/col]
[col phone="12" tablet="6" desktop="3" different_values="0"]
[nd_title title="Canberra" size="h5" alignment=" align-center" styled="0" uppercase="1" color="black" different_values="0"]
[/nd_title]
[/col]
[/row]
[/col]
[col phone="12" wide="6" different_values="0"]
[row different_values="0"]
[col phone="12" tablet="6" desktop="3" different_values="0"]
[nd_title title="Hobart" size="h5" alignment=" align-center" styled="0" uppercase="1" color="black" different_values="0"]
[/nd_title]
[/col]
[col phone="12" tablet="6" desktop="3" different_values="0"]
[nd_title title="Melbourne" size="h5" alignment=" align-center" styled="0" uppercase="1" color="black" different_values="0"]
[/nd_title]
[/col]
[col phone="12" tablet="6" desktop="3" different_values="0"]
[nd_title title="Perth" size="h5" alignment=" align-center" styled="0" uppercase="1" color="black" different_values="0"]
[/nd_title]
[/col]
[col phone="12" tablet="6" desktop="3" different_values="0"]
[nd_title title="Sydney" size="h5" alignment=" align-center" styled="0" uppercase="1" color="black" different_values="0"]
[/nd_title]
[/col]
[/row]
[/col]
[/row]
[row different_values="0"]
[col phone="4" different_values="0"]
[html format="2" different_values="0"]<p>Call us</p><p>+61 2 9251 1166</p>[/html]
[/col]
[col phone="4" different_values="0"]
[html format="2" different_values="0"]<p>Address</p><p>National Office | Level 3<br>13-15 Bridge Street<br>Sydney NSW 2000</p>[/html]
[/col]
[col phone="4" different_values="0"]
[html format="2" different_values="0"]<p>Address</p><p>info@citybibleforum.org</p>[/html]
[/col]
[/row]
[/col]
[col phone="2" different_values="0"]
[/col]
[/row]
[row style_padding_top="36px" style_padding_bottom="36px" extra_classes="bg-gray" text_align="center" different_values="0"]
[col different_values="0"]
[html format="2" text_align="center" different_values="0"]<p>|LS|Logo|RS|</p><p>|LS|FB|RS| |LS|Tw|RS| |LS|In|RS| |LS|...|RS|</p>[/html]
[/col]
[/row]
 ';

  $export['cbf_2019_theme_home_footer'] = $fe_block_boxes;

  return $export;
}
