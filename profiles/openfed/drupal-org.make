api = 2
core = 7.x

;
; Libraries
; Please fill the following out. Type may be one of get, git, bzr or svn, and url is the url of the download.
;

; CK Editor
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.5.9/ckeditor_4.5.9_full.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"

; Colorbox
libraries[colorbox][download][type] = "get"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/1.6.3.zip"
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][type] = "library"

; jquery.cycle
libraries[jquery.cycle][download][type] = "get"
libraries[jquery.cycle][download][url] = "https://github.com/malsup/cycle/archive/3.0.3-a.zip"
libraries[jquery.cycle][directory_name] = "jquery.cycle"
libraries[jquery.cycle][type] = "library"

; jquery.imagesloaded
libraries[jquery.imagesloaded][download][type] = "file"
libraries[jquery.imagesloaded][download][request_type] = "get"
libraries[jquery.imagesloaded][download][url] = "https://github.com/desandro/imagesloaded/raw/v2.1.2/jquery.imagesloaded.min.js"
libraries[jquery.imagesloaded][directory_name] = "jquery.imagesloaded"
libraries[jquery.imagesloaded][type] = "library"

; jquery.jcarousel
libraries[jquery.jcarousel][download][type] = "get"
libraries[jquery.jcarousel][download][url] = "https://github.com/jsor/jcarousel/raw/0.2.9/lib/jquery.jcarousel.min.js"
libraries[jquery.jcarousel][destination] = "libraries/jquery.jcarousel"
libraries[jquery.jcarousel][directory_name] = "lib"
libraries[jquery.jcarousel][type] = "library"

;
; OpenFed Modules
; Please fill the following out. Type may be one of get, git, bzr or svn, and url is the url of the download.
;

projects[addemar_subscription][version] = "1.2"
projects[addemar_subscription][subdir] = contrib

projects[ofed_menu_dam][version] = "1.1"
projects[ofed_menu_dam][subdir] = contrib

projects[ofed_switcher][version] = "1.2"
projects[ofed_switcher][subdir] = contrib

projects[ofed_vmcd][version] = "1.0"
projects[ofed_vmcd][subdir] = contrib

projects[ofed_theme_nerra][version] = "1.2-rc1"
projects[ofed_theme_nerra][subdir] = contrib

projects[ofed_theme_cms][version] = "1.3-rc4"
projects[ofed_theme_cms][subdir] = contrib

projects[ofed_theme_maintenance][version] = "1.0"
projects[ofed_theme_maintenance][subdir] = contrib

projects[ofed_cms_adminimal_theme][version] = "1.0-beta1"
projects[ofed_cms_adminimal_theme][subdir] = contrib

;
; Themes
; Please fill the following out. Type may be one of get, git, bzr or svn, and url is the url of the download.
;

projects[adminimal_theme][version] = "1.24"
projects[adminimal_theme][subdir] = contrib

;
; Modules
; Please fill the following out. Type may be one of get, git, bzr or svn, and url is the url of the download.
;

projects[addanother][version] = "2.2"
projects[addanother][subdir] = contrib

projects[admin_language][version] = "1.0-beta4"
projects[admin_language][subdir] = contrib

projects[admin_menu][version] = "3.0-rc5"
projects[admin_menu][subdir] = contrib
projects[admin_menu][patch][2096789] = "https://www.drupal.org/files/issues/admin_menu-interface_language_is_mixed_instead_of_forced_EN-2096789-20.patch"

projects[admin_menu_content_languages][version] = "1.0-rc2"
projects[admin_menu_content_languages][subdir] = contrib

projects[admin_theme][version] = "1.0"
projects[admin_theme][subdir] = contrib

projects[admin_views][version] = "1.6"
projects[admin_views][subdir] = contrib

projects[apachesolr][version] = "1.8"
projects[apachesolr][subdir] = contrib
projects[apachesolr][patch][2315173] = "https://www.drupal.org/files/issues/apachesolr-indexing_teaser-2315173-10.patch"

projects[apachesolr_attachments][download][type] = git
projects[apachesolr_attachments][download][branch] = "7.x-1.x"
projects[apachesolr_attachments][download][revision] = 43a8f96
projects[apachesolr_attachments][patch][2134703] = "https://www.drupal.org/files/issues/field_collection_files-2134703-5.patch"
projects[apachesolr_attachments][subdir] = contrib

projects[apachesolr_autocomplete][version] = "1.6"
projects[apachesolr_autocomplete][subdir] = contrib

projects[apachesolr_multilingual][version] = "1.3"
projects[apachesolr_multilingual][subdir] = contrib
projects[apachesolr_multilingual][patch][2293203] = "https://www.drupal.org/files/issues/2293203.apachesolr_multilingual.apachesolr_multilingual_apachesolr_index_documents_alter-language.patch"

projects[apachesolr_views][version] = "1.1-beta1"
projects[apachesolr_views][subdir] = contrib

projects[back_to_top][version] = "1.5"
projects[back_to_top][subdir] = contrib

projects[bean][version] = "1.11"
projects[bean][subdir] = contrib

projects[beidmellon][version] = "1.0-rc1"
projects[beidmellon][subdir] = contrib

projects[calendar][version] = "3.5"
projects[calendar][subdir] = contrib

; Dependency for menu_to_taxonomy.
projects[combined_termref][version] = "1.0-beta2"
projects[combined_termref][subdir] = contrib

projects[ckeditor][version] = "1.17"
projects[ckeditor][subdir] = contrib
projects[ckeditor][patch][2355733] = "https://www.drupal.org/files/issues/2355733-ckeditor-customize-default-3.patch"

projects[ckeditor_link][version] = "2.4"
projects[ckeditor_link][subdir] = contrib
projects[ckeditor_link][patch] = "https://www.drupal.org/files/issues/ckeditor_link-entity-translation-1875720-42-D7.patch"

projects[colorbox][version] = "2.12"
projects[colorbox][subdir] = contrib

projects[comment_goodness][version] = "1.4"
projects[comment_goodness][subdir] = contrib

projects[content_access][version] = "1.2-beta2"
projects[content_access][subdir] = contrib

projects[context][version] = "3.7"
projects[context][subdir] = contrib

projects[countries][version] = "2.3"
projects[countries][subdir] = contrib

projects[ctools][version] = "1.12"
projects[ctools][subdir] = contrib

projects[date][version] = "2.10-rc1"
projects[date][subdir] = contrib

projects[devel][version] = "1.5"
projects[devel][subdir] = contrib

projects[diff][version] = "3.3"
projects[diff][subdir] = contrib

; Dependency for Workbench Moderation
projects[drafty][version] = "1.0-beta3"
projects[drafty][subdir] = contrib

projects[ds][version] = "2.14"
projects[ds][subdir] = contrib

projects[easy_breadcrumb][version] = "2.12"
projects[easy_breadcrumb][subdir] = contrib
projects[easy_breadcrumb][patch][2521138] = "https://www.drupal.org/files/issues/check-plain-vs-filter-xss_0_1.patch"

projects[elements][version] = "1.4"
projects[elements][subdir] = contrib

projects[email][version] = "1.3"
projects[email][subdir] = contrib

projects[emfield][version] = "1.0-alpha2"
projects[emfield][subdir] = contrib

projects[entity][version] = "1.8"
projects[entity][subdir] = contrib

projects[entityreference][version] = "1.5"
projects[entityreference][subdir] = contrib

projects[entityreference_view_widget][version] = "2.0-rc7"
projects[entityreference_view_widget][subdir] = contrib

projects[entity_translation][version] = "1.0-beta5"
projects[entity_translation][subdir] = contrib

projects[extlink][version] = "1.18"
projects[extlink][subdir] = contrib

projects[facetapi][version] = "1.5"
projects[facetapi][subdir] = contrib

projects[facetapi_i18n][version] = "1.0-beta2"
projects[facetapi_i18n][subdir] = contrib
projects[facetapi_i18n][patch][2404953] = "https://www.drupal.org/files/issues/2404953-5.patch"

projects[features][version] = "2.10"
projects[features][subdir] = contrib

projects[features_override][version] = "2.0-rc3"
projects[features_override][subdir] = contrib

projects[feeds][version] = "2.0-beta3"
projects[feeds][subdir] = contrib

projects[feeds_xpathparser][version] = "1.1"
projects[feeds_xpathparser][subdir] = contrib

projects[field_collection][version] = "1.0-beta12"
projects[field_collection][subdir] = contrib

projects[field_conditional_state][version] = "2.1"
projects[field_conditional_state][subdir] = contrib

projects[field_default_token][version] = "1.3"
projects[field_default_token][subdir] = contrib

projects[field_group][version] = "1.5"
projects[field_group][subdir] = contrib

projects[field_permissions][version] = "1.0"
projects[field_permissions][subdir] = contrib

projects[field_slideshow][version] = "1.82"
projects[field_slideshow][subdir] = contrib
projects[field_slideshow][patch][2326155] = "https://www.drupal.org/files/issues/field_slideshow-swipe-2326155-1.patch"

projects[file_entity][version] = "2.0-beta3"
projects[file_entity][subdir] = contrib
projects[file_entity][patch][2097261] = "https://www.drupal.org/files/issues/file_entity-download_link_i18n-2097261-4.patch"

projects[flag][version] = "3.9"
projects[flag][subdir] = contrib

projects[globalredirect][version] = "1.5"
projects[globalredirect][subdir] = contrib
projects[globalredirect][patch][2810609] = "https://www.drupal.org/files/language_redirect_view_node-1399506-2.patch"

projects[gmap][version] = "2.11"
projects[gmap][subdir] = contrib

projects[google_analytics][version] = "2.3"
projects[google_analytics][subdir] = contrib

projects[google_tag][version] = "1.1"
projects[google_tag][subdir] = contrib

projects[hierarchical_select][version] = "3.0-beta8"
projects[hierarchical_select][subdir] = contrib

projects[honeypot][version] = "1.22"
projects[honeypot][subdir] = contrib

projects[html5_tools][version] = "1.3"
projects[html5_tools][subdir] = contrib

projects[i18n][version] = "1.15"
projects[i18n][subdir] = contrib

projects[i18nviews][version] = "3.0-alpha1"
projects[i18nviews][subdir] = contrib

projects[imagecache_actions][version] = "1.7"
projects[imagecache_actions][subdir] = contrib

projects[inline_entity_form][version] = "1.8"
projects[inline_entity_form][subdir] = contrib

projects[imce][version] = "1.10"
projects[imce][subdir] = contrib

projects[imce_mkdir][version] = "1.0"
projects[imce_mkdir][subdir] = contrib

projects[job_scheduler][version] = "2.0-alpha3"
projects[job_scheduler][subdir] = contrib

projects[jquery_plugin][version] = "1.0"
projects[jquery_plugin][subdir] = contrib

projects[jquery_update][version] = "2.7"
projects[jquery_update][subdir] = contrib

projects[l10n_client][version] = "1.3"
projects[l10n_client][subdir] = contrib

projects[l10n_update][version] = "2.1"
projects[l10n_update][subdir] = contrib

projects[language_cookie][version] = "2.0"
projects[language_cookie][subdir] = contrib

projects[language_selection_page][version] = "2.0"
projects[language_selection_page][subdir] = contrib

projects[lexicon][version] = "1.10"
projects[lexicon][subdir] = contrib

projects[libraries][version] = "2.3"
projects[libraries][subdir] = contrib

projects[link][version] = "1.4"
projects[link][subdir] = contrib

projects[location][version] = "3.8-beta2"
projects[location][subdir] = contrib

projects[logintoboggan][version] = "1.5"
projects[logintoboggan][subdir] = contrib
projects[logintoboggan][patch][1142808] = "https://www.drupal.org/files/logintoboggan-minpasswordlength-1142808-9.patch"

projects[m4032404][version] = "1.0-beta2"
projects[m4032404][subdir] = contrib

projects[media][version] = "2.0-rc5"
projects[media][subdir] = contrib
projects[media][patch][2612190] = "https://www.drupal.org/files/issues/media-array_merge_error_in_update_7208-2612190-3-D7.patch"

projects[media_soundcloud][version] = "2.1"
projects[media_soundcloud][subdir] = contrib

projects[media_vimeo][version] = "2.1"
projects[media_vimeo][subdir] = contrib

projects[media_youtube][version] = "3.0"
projects[media_youtube][patch][2129317] = "https://www.drupal.org/files/issues/2129317-13.patch"
projects[media_youtube][subdir] = contrib

projects[menu_attributes][version] = "1.0"
projects[menu_attributes][subdir] = contrib

projects[menu_block][version] = "2.7"
projects[menu_block][subdir] = contrib
projects[menu_block][patch][2882825] = "https://www.drupal.org/files/issues/menu_block_27.patch"

projects[menu_firstchild][version] = "1.1"
projects[menu_firstchild][subdir] = contrib

projects[menu_link_weight][version] = "1.4"
projects[menu_link_weight][subdir] = contrib

projects[menu_node][version] = "1.2"
projects[menu_node][subdir] = contrib

projects[menu_position][version] = "1.2"
projects[menu_position][subdir] = contrib

projects[menu_to_taxonomy][version] = "1.0-beta9"
projects[menu_to_taxonomy][subdir] = contrib

projects[module_filter][version] = "2.0"
projects[module_filter][subdir] = contrib

projects[metatag][version] = "1.21"
projects[metatag][subdir] = contrib

projects[multiple_node_menu][version] = "1.0-beta2"
projects[multiple_node_menu][subdir] = contrib

projects[multiselect][version] = "1.12"
projects[multiselect][subdir] = contrib

projects[navigation404][version] = "1.0"
projects[navigation404][subdir] = contrib
projects[navigation404][patch][1844830] = "https://www.drupal.org/files/navigation404-undefined_index_site_404-1844830-0.patch"

projects[node_edit_redirect][version] = "1.0-rc2"
projects[node_edit_redirect][subdir] = contrib

projects[override_node_options][version] = "1.13"
projects[override_node_options][subdir] = contrib

projects[panels][version] = "3.9"
projects[panels][subdir] = contrib

projects[panels_extra_layouts][version] = "2.0"
projects[panels_extra_layouts][subdir] = contrib

projects[partial_date][version] = "1.0-beta1"
projects[partial_date][subdir] = contrib

projects[path_breadcrumbs][version] = "3.3"
projects[path_breadcrumbs][subdir] = contrib

projects[pathauto][version] = "1.3"
projects[pathauto][subdir] = contrib
projects[pathauto][patch][290421] = "https://www.drupal.org/files/issues/pathauto-support_localized_and_entity_translated_taxonomy-290421-156-d7.patch"
projects[pathauto][patch][1993462] = "https://www.drupal.org/files/pathauto-path_alias_for_taxonomy_terms_always_created_in_default_language-1993462-0.patch"

projects[print][version] = "2.0"
projects[print][subdir] = contrib
projects[print][patch][2446693] = "https://www.drupal.org/files/issues/print-2446939-1.patch"

projects[quiz][version] = "4.0-rc7"
projects[quiz][subdir] = contrib

projects[redirect][version] = "1.0-rc3"
projects[redirect][subdir] = contrib

projects[registration][version] = "1.6"
projects[registration][subdir] = contrib

projects[role_delegation][version] = "1.1"
projects[role_delegation][subdir] = contrib
projects[role_delegation][patch][1156414] = "https://www.drupal.org/files/issues/1156414-prevent-editing-of-certain-users-16.patch"

projects[rules][version] = "2.9"
projects[rules][subdir] = contrib
projects[rules][patch][2738525] = "https://www.drupal.org/files/issues/rules-2449513-24.patch"

projects[scheduler][version] = "1.5"
projects[scheduler][subdir] = contrib

projects[search_config][version] = "1.1"
projects[search_config][subdir] = contrib

projects[seckit][version] = "1.9"
projects[seckit][subdir] = contrib
projects[seckit][patch][2281315] = "https://www.drupal.org/files/issues/seckit-disable_autocomplete-2281315-13.patch"

projects[securelogin][version] = "1.6"
projects[securelogin][subdir] = contrib

projects[security_review][version] = "1.2"
projects[security_review][subdir] = contrib

projects[sharethis][version] = "2.13"
projects[sharethis][subdir] = contrib
projects[sharethis][patch][2353369] = "https://www.drupal.org/files/issues/1289054-72.patch"

projects[simple_gmap][version] = "1.4"
projects[simple_gmap][subdir] = contrib

projects[site_map][version] = "1.3"
projects[site_map][subdir] = contrib

projects[site_verify][version] = "1.1"
projects[site_verify][subdir] = contrib

projects[smart_trim][version] = "1.5"
projects[smart_trim][subdir] = contrib

projects[special_menu_items][version] = "2.0"
projects[special_menu_items][subdir] = contrib

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = contrib

projects[table_altrow][version] = "1.2"
projects[table_altrow][subdir] = contrib

projects[termstatus][version] = "1.2"
projects[termstatus][subdir] = contrib

projects[text_resize][version] = "1.9"
projects[text_resize][subdir] = contrib

projects[title][version] = "1.0-alpha9"
projects[title][subdir] = contrib

projects[token][version] = "1.7"
projects[token][subdir] = contrib

projects[translation_helpers][version] = "1.0"
projects[translation_helpers][subdir] = contrib

projects[translation_overview][version] = "2.0-beta2"
projects[translation_overview][subdir] = contrib

projects[translation_table][version] = "1.0-beta1"
projects[translation_table][subdir] = contrib

projects[transliteration][version] = "3.2"
projects[transliteration][subdir] = contrib

projects[twitter_block][version] = "2.3"
projects[twitter_block][subdir] = contrib
projects[twitter_block][patch][2858500] = "https://www.drupal.org/files/issues/twitter_block-2751845-5.patch"

projects[username_enumeration_prevention][version] = "1.2"
projects[username_enumeration_prevention][subdir] = contrib

projects[variable][version] = "2.5"
projects[variable][subdir] = contrib

projects[view_unpublished][version] = "1.2"
projects[view_unpublished][subdir] = contrib

projects[views][version] = "3.17"
projects[views][subdir] = contrib

projects[views_data_export][version] = "3.1"
projects[views_data_export][subdir] = contrib

projects[views_bulk_operations][version] = "3.4"
projects[views_bulk_operations][subdir] = contrib

projects[views_slideshow][version] = "3.6"
projects[views_slideshow][subdir] = contrib

projects[views_tree][version] = "2.0"
projects[views_tree][subdir] = contrib

projects[webform][version] = "4.14"
projects[webform][subdir] = contrib

projects[webform_clear][version] = "2.0"
projects[webform_clear][subdir] = contrib
projects[webform_clear][patch][2250027] = "https://www.drupal.org/files/issues/webform_clear-2250027-testfix-2.patch"

projects[webform_rules][version] = "1.6"
projects[webform_rules][subdir] = contrib

projects[weight][version] = "2.5"
projects[weight][subdir] = contrib

projects[workbench_moderation][download][type] = git
projects[workbench_moderation][download][branch] = "7.x-1.x"
projects[workbench_moderation][download][revision] = 2c91211
projects[workbench_moderation][subdir] = contrib
projects[workbench_moderation][patch][1372500] = "https://www.drupal.org/files/issues/workbench_moderation_sync_infinite_loop-1372500-16.patch"
projects[workbench_moderation][patch][2855262] = "https://www.drupal.org/files/issues/upgrade_from_1x3_to_3x_fails-2428371-45.patch"

projects[xmlsitemap][version] = "2.3"
projects[xmlsitemap][subdir] = contrib
