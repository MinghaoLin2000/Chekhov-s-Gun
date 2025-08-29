-[DeviceSettingsPodcastsViewController updateTabView]
void __cdecl -[DeviceSettingsPodcastsViewController updateTabView](DeviceSettingsPodcastsViewController *self, SEL a2)
{
  DeviceSettingsDetailsTabContentViewController *v3; // x19
  NSTabViewItem *v4; // x21
  id v5; // x22
  unsigned __int8 v6; // w23
  NSPopUpButton *v7; // x21
  void *v8; // x23
  NSPopUpButton *v9; // x21
  void *v10; // x22
  unsigned __int64 v11; // x21
  signed __int64 v12; // x22
  unsigned __int64 v13; // x23
  NSButton *v14; // x24
  NSControlStateValue v15; // x25
  void *v16; // x26
  NSMutableDictionary *v17; // x27
  void *v18; // x25
  NSMutableDictionary *v19; // x28
  NSMutableSet *v20; // x24
  id v21; // x20
  NSMutableDictionary *v22; // [xsp+8h] [xbp-58h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(
         -[DeviceSettingsPodcastsViewController selectedTabContentViewController](
           self,
           "selectedTabContentViewController"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController tabViewItem](v3, "tabViewItem"));
  v5 = objc_retainAutoreleasedReturnValue(-[NSTabViewItem identifier](v4, "identifier"));
  v6 = (unsigned __int8)objc_msgSend(v5, "isEqualToString:", CFSTR("Playlists"));
  objc_release(v5);
  objc_release(v4);
  if ( (v6 & 1) == 0 )
  {
    v7 = objc_retainAutoreleasedReturnValue(
           -[DeviceSettingsPodcastsViewController autoIncludeTrailingPopUpButton](
             self,
             "autoIncludeTrailingPopUpButton"));
    v8 = -[NSPopUpButton selectedTag](v7, "selectedTag");
    objc_release(v7);
    -[DeviceSettingsDetailsTabContentViewController setLeadingCellsAreTextFields:](
      v3,
      "setLeadingCellsAreTextFields:",
      v8 == (void *)1000);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
    v10 = -[NSPopUpButton selectedTag](v9, "selectedTag");
    objc_release(v9);
    v11 = -[DeviceSettingsPodcastsViewController episodeActionFromTag:](self, "episodeActionFromTag:", v10);
    v12 = -[DeviceSettingsPodcastsViewController episodeCountFromTag:](self, "episodeCountFromTag:", v10);
    v13 = -[DeviceSettingsPodcastsViewController updateModeWithTag:](self, "updateModeWithTag:", v8);
    v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController autoIncludeCheckBox](self, "autoIncludeCheckBox"));
    v15 = -[NSButton state](v14, "state");
    objc_release(v14);
    if ( v15 )
    {
      if ( v11 || v12 || v13 != 1 )
      {
        v22 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
        v16 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v22, "objectForKeyedSubscript:", CFSTR("Podcasts")));
        v17 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
        v18 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v17, "objectForKeyedSubscript:", CFSTR("Podcasts")));
        v19 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController detailsModelDict](self, "detailsModelDict"));
        v20 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController detailsCheckedItems](self, "detailsCheckedItems"));
        v21 = objc_retainAutoreleasedReturnValue(
                -[DeviceSettingsPodcastsViewController selectDisableAndCheckItemsForUpdateMode:episodeCount:episodeAction:nodes:checkedItems:detailsModel:detailsCheckedItems:](
                  self,
                  "selectDisableAndCheckItemsForUpdateMode:episodeCount:episodeAction:nodes:checkedItems:detailsModel:det"
                  "ailsCheckedItems:",
                  v13,
                  v12,
                  v11,
                  v16,
                  v18,
                  v19,
                  v20));
        objc_release(v20);
        objc_release(v19);
        objc_release(v18);
        objc_release(v17);
        objc_release(v16);
        objc_release(v22);
        -[DeviceSettingsDetailsTabContentViewController setDisableAndCheckSelectedDetailItems:](
          v3,
          "setDisableAndCheckSelectedDetailItems:",
          v21);
        -[DeviceSettingsDetailsTabContentViewController setDisableAndCheckAllDetailItems:](
          v3,
          "setDisableAndCheckAllDetailItems:",
          0LL);
        objc_release(v21);
      }
      else
      {
        -[DeviceSettingsDetailsTabContentViewController setDisableAndCheckAllDetailItems:](
          v3,
          "setDisableAndCheckAllDetailItems:",
          1LL);
        -[DeviceSettingsDetailsTabContentViewController setDisableAndCheckSelectedDetailItems:](
          v3,
          "setDisableAndCheckSelectedDetailItems:",
          0LL);
      }
    }
    else
    {
      -[DeviceSettingsDetailsTabContentViewController setDisableAndCheckAllDetailItems:](
        v3,
        "setDisableAndCheckAllDetailItems:",
        0LL);
      -[DeviceSettingsDetailsTabContentViewController setDisableAndCheckSelectedDetailItems:](
        v3,
        "setDisableAndCheckSelectedDetailItems:",
        0LL);
      -[DeviceSettingsDetailsTabContentViewController setLeadingCellsAreTextFields:](
        v3,
        "setLeadingCellsAreTextFields:",
        1LL);
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}