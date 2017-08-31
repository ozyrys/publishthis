ADDEMAR EXPORT
==============

This submodule allows for scheduled exporting of content from XML feeds
into Addemar, using the add-on "Content Profiles" service from Addemar
(used by, among others, FPS Health).

In order to set this up, create an XML feed for every language using the
following format:

<?xml version="1.0" encoding="UTF-8" ?>
<items>
  <item>
    <title><![CDATA[Foo bar]]></title>
    <profile><![CDATA[foo]]></profile>
    <image><![CDATA[<img src="http://example.com/foo.jpg" alt="foo" />]]></image>
    <body><![CDATA[<p>test</p>]]></body>
    <article_url><![CDATA[http://example.com/foo]]></article_url>
  </item>
</items>

This can be achieved using either:
 a) custom code which generates the input Feed XML files, or
 b) by exporting the relevant content using the Views and Views Data Export
modules.

The input Feed URLs can then be configured at admin/config/services/addemar_export.

By default, weekly exports will be performed every Monday at 1:00am. If you wish
to perform these exports at other times/intervals, set the "addemar_export_crontab"
variable to a valid crontab value in the settings screen.

If your newsletter is sent out weekly, and you do not want to repeat news
messages from one newsletter to the next one, make sure the feeds contain only
content created in the last week.

Every periodic export overrides the previous export, so to protect against the
edge case of a periodic export failing (and the old, stale content remaining
in the Addemar system), you can use the "Valid until" setting. Make sure this
period is shorter than the interval between newsletters; so if the newsletter
is weekly, a setting like "+2 days" is OK.

We recommend exports to be scheduled shortly before the periodic newsletter is
sent out, so the newsletter content is as fresh as possible.
