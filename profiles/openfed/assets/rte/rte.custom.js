/*
Copyright (c) 2003-2012, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
if(typeof(CKEDITOR) !== 'undefined') {
    CKEDITOR.addStylesSet('drupal',
    [
        /* Block Styles */
        { name : 'Summary', element : 'p', attributes : { 'class' : 'summary' } },
        { name : 'Paragraph', element : 'p' },
        { name : 'Heading 2', element : 'h2' },
        { name : 'Heading 3', element : 'h3' },
        { name : 'Heading 4', element : 'h4' },
        { name : 'Heading 5', element : 'h5' },
        { name : 'Heading 6', element : 'h6' },
        { name : 'Div', element : 'div' },
        { name : 'Message Status', element : 'div', attributes : { 'class' : 'messages status' } },
        { name : 'Message Warning', element : 'div', attributes : { 'class' : 'messages warning' } },
        { name : 'Message Error', element : 'div', attributes : { 'class' : 'messages error' } }
    ]);
}
