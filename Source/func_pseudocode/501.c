-[DeviceSettingsTVShowsViewController updateTabView]
void __cdecl -[DeviceSettingsTVShowsViewController updateTabView](DeviceSettingsTVShowsViewController *self, SEL a2)
{
  DeviceSettingsDetailsTabContentViewController *v3; // x19
  NSTabViewItem *v4; // x21
  id v5; // x22
  unsigned __int8 v6; // w23
  NSPopUpButton *v7; // x21
  void *v8; // x24
  NSPopUpButton *v9; // x21
  void *v10; // x23
  unsigned __int64 v11; // x22
  signed __int64 v12; // x23
  unsigned __int64 v13; // x21
  NSButton *v14; // x24
  NSControlStateValue v15; // x25
  id v16; // x22
  void *v17; // x26
  NSMutableDictionary *v18; // x27
  void *v19; // x25
  NSMutableDictionary *v20; // x28
  NSMutableSet *v21; // x24
  NSMutableDictionary *v22; // [xsp+8h] [xbp-58h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(
         -[DeviceSettingsTVShowsViewController selectedTabContentViewController](
           self,
           "selectedTabContentViewController"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController tabViewItem](v3, "tabViewItem"));
  v5 = objc_retainAutoreleasedReturnValue(-[NSTabViewItem identifier](v4, "identifier"));
  v6 = (unsigned __int8)objc_msgSend(v5, "isEqualToString:", CFSTR("Playlists"));
  objc_release(v5);
  objc_release(v4);
  if ( (v6 & 1) == 0 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludeTrailingPopUpButton](self, "autoIncludeTrailingPopUpButton"));
    v8 = -[NSPopUpButton selectedTag](v7, "selectedTag");
    objc_release(v7);
    -[DeviceSettingsDetailsTabContentViewController setLeadingCellsAreTextFields:](
      v3,
      "setLeadingCellsAreTextFields:",
      v8 == (void *)1000);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
    v10 = -[NSPopUpButton selectedTag](v9, "selectedTag");
    objc_release(v9);
    v11 = -[DeviceSettingsTVShowsViewController episodeActionFromTag:](self, "episodeActionFromTag:", v10);
    v12 = -[DeviceSettingsTVShowsViewController episodeCountFromTag:](self, "episodeCountFromTag:", v10);
    v13 = -[DeviceSettingsTVShowsViewController updateModeWithTag:](self, "updateModeWithTag:", v8);
    v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludeCheckBox](self, "autoIncludeCheckBox"));
    v15 = -[NSButton state](v14, "state");
    objc_release(v14);
    if ( v15 )
    {
      if ( v11 || v12 || v13 != 1 )
      {
        v22 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
        v17 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v22, "objectForKeyedSubscript:", CFSTR("Shows")));
        v18 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
        v19 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v18, "objectForKeyedSubscript:", CFSTR("Shows")));
        v20 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController detailsModelDict](self, "detailsModelDict"));
        v21 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController detailsCheckedItems](self, "detailsCheckedItems"));
        v16 = objc_retainAutoreleasedReturnValue(
                -[DeviceSettingsTVShowsViewController selectDisableAndCheckItemsForUpdateMode:episodeCount:episodeAction:nodes:checkedItems:detailsModel:detailsCheckedItems:](
                  self,
                  "selectDisableAndCheckItemsForUpdateMode:episodeCount:episodeAction:nodes:checkedItems:detailsModel:det"
                  "ailsCheckedItems:",
                  v13,
                  v12,
                  v11,
                  v17,
                  v19,
                  v20,
                  v21));
        objc_release(v21);
        objc_release(v20);
        objc_release(v19);
        objc_release(v18);
        objc_release(v17);
        objc_release(v22);
        -[DeviceSettingsDetailsTabContentViewController setDisableAndCheckSelectedDetailItems:](
          v3,
          "setDisableAndCheckSelectedDetailItems:",
          v16);
        -[DeviceSettingsDetailsTabContentViewController setDisableAndCheckAllDetailItems:](
          v3,
          "setDisableAndCheckAllDetailItems:",
          0LL);
        goto LABEL_10;
      }
      -[DeviceSettingsDetailsTabContentViewController setDisableAndCheckAllDetailItems:](
        v3,
        "setDisableAndCheckAllDetailItems:",
        1LL);
      -[DeviceSettingsDetailsTabContentViewController setDisableAndCheckSelectedDetailItems:](
        v3,
        "setDisableAndCheckSelectedDetailItems:",
        0LL);
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
    v16 = 0LL;
LABEL_10:
    -[DeviceSettingsTVShowsViewController refreshDetailCheckBoxStatesWithDimNodes:updateMode:](
      self,
      "refreshDetailCheckBoxStatesWithDimNodes:updateMode:",
      v16,
      v13);
    objc_release(v16);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}