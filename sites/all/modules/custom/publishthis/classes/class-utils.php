<?php

class Publishthis_Utils extends Publishthis_Utils_Common {
  /**
   * Publishthis constructor.
   */
  function __construct() {
  }

  /**
   *  Returns Curated By Logo
   */
  function getCuratedByLogo() {
    global $pt_settings_value;
    global $pt_client_info;

    //get selected logo
    $logo_index = $pt_settings_value['curatedby_logos'];
    $logo_index = isset( $logo_index ) ? $logo_index : 0;

    $client = $pt_client_info;
    $client_id = $client && $client->clientId ? $client->clientId : 0;

    $url = 'http://www.publishthis.com/?utm_source='.trim( $_SERVER['HTTP_HOST'] ).'_'.$client_id.'&utm_medium=image&utm_campaign=WPPluginCurateByButton';

    $html = '<p id="pt_curated_by" class="pt_curated_by">'.
      '<a href="'.rawurlencode( $url ).'" target="_blank">'.
      '<img src="' . $this->getCuratedByLogoImage( strval($logo_index) ) . '" alt="Curated By Logo">'.
      '</a>'.
      '</p>';

    return $html;
  }

  public function _get_style_value( $key ) {
    /*$tmp = explode( '_', $key );
    $styles = $this->_map_style_values( strpos($key, 'annotation_title')!==false ? 'annotation_title' : $tmp[0] );
    return isset($styles[ $key ]) ? $styles[ $key ] : '';*/
    // TODO
    return '';
  }

}
