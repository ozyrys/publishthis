<?php
class Publishthis_Publish {
	private $pt_settings = null;
	private $obj_api = null;
	private $obj_utils = null;
	private $publishing_actions = array();

	/**
	* Publishthis_Publish constructor
	*/
	function __construct() {
		$this->pt_settings = unserialize(variable_get('pt_settings'));

		$this->obj_api  = new Publishthis_API();
		$this->obj_utils = new Publishthis_Utils();
	}

	/**
	 * returns all publishing actions that are published
	 */
	public function get_publishing_actions() {
		// Find records
		$actions = array();
		$result = db_select('pt_publishactions', 'pb')
				->fields('pb')
				->execute();
		while($record = $result->fetchAssoc()) {
			$actions[$record['id']] = $record;
		}

		return $actions;
	}

	/**
	 * Publishes the single post with a Publishing Actions meta information
	 *
	 * @param int     $post_id     Publishthis Post id
	 * @param array   $post_meta   Publishthis Post data (display name, etc.)
	 * @param int     $action_id   Publishing Action id
	 * @param array   $action_meta Publishing Action data
	 */
	function publish_post_with_publishing_action( $post, $action_meta ) {
	}

	/**
	 *   Save import content as a node
	 *
	 * @param unknown $nid              	Node ID
	 * @param number  $post_id              The PublishThis Post Id
	 * @param unknown $docid                docid linked to this post
	 * @param unknown $arrPostCategoryNames Category
	 * @param unknown $curated_content      Imported content
	 * @param unknown $content_features     Additional content info
	 */
	private function _update_content( $nid, $post_id, $set_name, $docid, $arrPostCategoryNames, $curated_content, $content_features ) {


		return  empty($nid) ? 'inserted' : 'updated';
	}

	/**
	 *   Prepare node summary text
	 *
	 * @param string $text
	 */
	private function _build_node_summary( $content ) {
		$summary = isset($content->summary) && strlen($content->summary)>0 ? $content->summary : '';
		return text_summary('<p class="pt-excerpt">'.$summary. '</p>' );
	} 

	/**
	 *   Set docid for specified post ID
	 *
	 * @param unknown $docid
	 */
	private function _set_docid( $nid, $docid, $setName='' ) {			
		$query = db_insert('pt_docid_links')
			->fields( array(
						'docId' => $docid,
						'setName' => $setName,
						'nid' => $nid )
					)
			->execute();
	}

	/**
	 *   Get node ID by specified docid value
	 *
	 * @param unknown $docid
	 */
	private function _get_post_by_docid( $docid ) {
		$result = db_select('pt_docid_links', 'dl')
			->fields('dl', array('docId','nid'))
			->condition('dl.docId', $docid, '=')
			->range(0,1)		
			->execute()
			->fetchAssoc();
		return $result ? $result['nid'] : 0;
	}

	/**
	 *   Get node curate date by node id
	 *
	 * @param unknown $nid
	 */
	private function _get_curatedate_by_nid( $nid ) {
		$result = db_select('pt_docid_links', 'dl')
			->fields('dl', array('curateUpdateDate','nid'))
			->condition('dl.nid', $nid, '=')
			->range(0,1)		
			->execute()
			->fetchAssoc();
		return $result ? $result['curateUpdateDate'] : null;
	}

	/**
	 *   Set node curate date for node id
	 *
	 * @param unknown $nid
	 */
	private function _set_curatedate_by_nid( $nid, $curateUpdateDate ) {
		$result = db_update('pt_docid_links')
			->fields( array( 'curateUpdateDate' => $curateUpdateDate ) )
			->condition( 'nid', $nid, '=')
			->execute();
	}

	/**
	 *   Get remove unused nodes
	 *
	 * @param unknown $docid
	 */
	private function _delete_individuals( $new_set_docids, $set_name ) {
		$nodes_deleted = 0;

		//get nodes to remove
		$query = db_select('pt_docid_links', 'dl')
			->fields('dl', array('id','nid'))
			->condition('dl.setName', $set_name, '=');

		if( count($new_set_docids) > 0 ) {
			$query->condition('dl.docId', $new_set_docids, 'NOT IN');
		}

		$result = $query->execute();
		
		if($result->rowCount() > 0 ) {
			while($record = $result->fetchAssoc()) {
				//delete node
				echo 'Node deleted: '.$record['nid'].'<br>';
				node_delete( $record['nid'] );
				$nodes_deleted++;
			}
			
			//delete docs links
			$links_query = db_delete('pt_docid_links')->condition('setName', $set_name, '=');

			if( count($new_set_docids) > 0 ) {
				$links_query->condition('docId', $new_set_docids, 'NOT IN');
			}
			$links_query->execute();
	
		}
		
		return $nodes_deleted;
	}

	/**
	 * Generates resized featured image and link it to the node
	 */
  private function _get_featured_image( $contentImageUrl, $content_features ) {
		$file_name = uniqid() . '_' . basename($contentImageUrl);
		$ok_override_fimage_size = $content_features['ignore_original_image']['resize_featured_image']==="resize_featured_image" ? "1" : "0";

		//build the url that we would need to download the featured image for
		switch ( $content_features ['featured_image_size'] ) {
			case 'custom':
				$resize_pref = "Custom, ";
				$contentImageUrl = $this->obj_utils->getResizedPhotoUrl( $contentImageUrl, $content_features['featured_image_width'], "1", $content_features ['featured_image_height'], $ok_override_fimage_size );
				break;

			case 'custom_max_width':
				$resize_pref = "custom max, ";
				//$this->obj_api->_log_message( "custom max, ok to resize original featured image:" . $ok_override_fimage_size );
				$contentImageUrl = $this->obj_utils->getResizedPhotoUrl( $contentImageUrl, $content_features['featured_image_maxwidth'], "1", 0, $ok_override_fimage_size  );
				break;

			case 'theme_default':
			default:
				$resize_pref = "";
				break;
		}

		$message = array(
			'message' => 'Featured images resizing',
			'status' => 'info',
			'details' => $resize_pref . "ok to resize original featured image:" . $ok_override_fimage_size . "; url:" . $contentImageUrl );
		$this->obj_api->_log_message( $message, "1" );

		$ch = curl_init();
		$timeout = 5;
		curl_setopt($ch, CURLOPT_URL, $contentImageUrl);
		curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
		curl_setopt($ch, CURLOPT_CONNECTTIMEOUT, $timeout);
		$data = curl_exec($ch);
		curl_close($ch);			

        $fp = fopen($file_name, 'w');
		fwrite($fp, $data);
		fclose($fp);

	  $file_path = system_retrieve_file($contentImageUrl, NULL, FALSE, FILE_EXISTS_REPLACE);
		$file = (object) array(
				'uid' => 1,
				'uri' => $file_path,
				'filemime' => file_get_mimetype($contentImageUrl),
				'status' => 1,
			);

		$file = file_copy($file, 'public://'); // Save the file to the root of the files directory. You can specify a subdirectory, for example, 'public://images'
		@unlink($file_path);
		return (array)$file;
	}

	/**
	 * this takes post id, and then tries to publish it
	 * using all of our helper functions.
	 * This will usually be called from our publishing endpoint
	 */

	public function publish_specific_post( $postId ) {


		try{
			//to publish, we need our actual post object
			$post = $this->obj_api->get_post_by_id( $postId );
			//get all publishing actions that match up with this feed template (usually 1)
			$arrPublishingActions = $this->get_publishing_actions();
			$blnDidPublish = false;
			//loop the publishing actions and it will then publish content for that post
			foreach ( $arrPublishingActions as $pubAction ) {
				$actionId = $pubAction['id'];

				$action_meta = unserialize($pubAction['value']);

				if ( $post['templateId'] == $action_meta['post_template'] ) {
					try{
						$this->publish_post_with_publishing_action( $post, $action_meta );
					}catch( Exception $ex ) {
						//we capture individual errors and report them,
						$message = array(
							'message' => 'Import of Feed Failed',
							'status' => 'error',
							'details' => 'The Feed Id that failed:' . $post['postId'] . ' with the following error:' . $ex->getMessage() );
						$this->obj_api->_log_message( $message, "1" );
					}
					$blnDidPublish = true;
				}
			}

		}catch( Exception $ex ) {
			//some other occurred while we tried publish, not sure what
			//capture this and log it and then throw it as well as what info we have

			$message = array(
				'message' => 'Import of Feed Failed',
				'status' => 'error',
				'details' => 'A general exception happened during the publishing of specific post. Post Id not published:' . $post['postId'] . ' specific message:' . $ex->getMessage() );
			$this->obj_api->_log_message( $message, "1" );
		}
	}

}
