    <table align="center" border="0" cellpadding="0" cellspacing="0" class="devicewidth" width="600">
        <tbody>
            <tr>
                <td bgcolor="#FFFFFF" style="border-bottom:2px solid #e0e0e0; border-right:1px solid #e0e0e0;text-align:left;color: #716e6e;font-family:Arial, 'Helvetica Neue', Helvetica, sans-serif; font-size: 14px; ">
                    <table align="left" border="0" cellpadding="0" cellspacing="0" class="devicewidth" width="200">
                        <tbody>
                            <tr>
                                <td align="center" class="devicewidth" width="200">
                                  <?php print str_replace('<img ', '<img class="full_responsive" style="display:block; border:none; outline:none; text-decoration:none;" ', $image); ?>
                                </td>
                            </tr>
                        </tbody>
                    </table>

                    <table align="right" border="0" cellpadding="0" cellspacing="0" class="devicewidthmob" width="380">
                        <tbody>
                            <tr>
                                <td align="left" class="padding-top-right20" style="padding-right:20px;padding-top:20px;text-align:left;font-family:Arial, 'Helvetica Neue', Helvetica, sans-serif;color:#413d3d;font-size:21px;font-weight:bold">
                                  <?php print $title; ?>
                                </td>
                            </tr>
                            <tr>
                                <td align="left" class="padding-right20" style="padding-right:20px;padding-top:10px;padding-bottom:10px;font-family:Arial, 'Helvetica Neue', Helvetica, sans-serif">
                                  <?php print $body; ?>
                                  <p><?php print l(t('Read more', array(), array('langcode' => $langcode)), $article_url); ?></p>
                                </td>
                            </tr>
                        </tbody>
                    </table>
                </td>
            </tr>
            <tr>
                <td bgcolor="#fafafa" height="40"></td>
            </tr>
        </tbody>
    </table>
