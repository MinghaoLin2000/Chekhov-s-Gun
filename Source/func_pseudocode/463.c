-[DeviceSettingsTVShowsViewController loadUIFromPrefs]
void __cdecl -[DeviceSettingsTVShowsViewController loadUIFromPrefs](DeviceSettingsTVShowsViewController *self, SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  __int64 v4; // x21
  NSButton *v5; // x22
  AMPDeviceSyncPrefs *v6; // x20
  _BOOL8 v7; // x21
  NSButton *v8; // x22
  AMPDeviceSyncPrefs *v9; // x20
  _BOOL8 v10; // x21
  AMPDeviceSyncPrefs *v11; // x20
  signed __int64 v12; // x21
  NSPopUpButton *v13; // x20
  AMPDeviceSyncPrefs *v14; // x20
  signed __int64 v15; // x21
  NSPopUpButton *v16; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (unsigned int)-[DeviceSettingsTVShowsViewController isViewLoaded](self, "isViewLoaded") )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v4 = (unsigned int)-[AMPDeviceSyncPrefs updateTVShows](v3, "updateTVShows");
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
    -[NSButton setState:](v5, "setState:", v4);
    objc_release(v5);
    objc_release(v3);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v7 = -[AMPDeviceSyncPrefs tvShowUpdateMode](v6, "tvShowUpdateMode") != (void *)4;
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludeCheckBox](self, "autoIncludeCheckBox"));
    -[NSButton setState:](v8, "setState:", v7);
    objc_release(v8);
    objc_release(v6);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v10 = -[AMPDeviceSyncPrefs tvShowEpisodeAction](v9, "tvShowEpisodeAction") == (void *)1;
    objc_release(v9);
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v12 = -[DeviceSettingsTVShowsViewController tagWithEpisodeCount:unwatched:](
            self,
            "tagWithEpisodeCount:unwatched:",
            -[AMPDeviceSyncPrefs tvShowEpisodeCount](v11, "tvShowEpisodeCount"),
            v10);
    objc_release(v11);
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
    -[NSPopUpButton selectItemWithTag:](v13, "selectItemWithTag:", v12);
    objc_release(v13);
    v14 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v15 = -[DeviceSettingsTVShowsViewController tagWithUpdateMode:](
            self,
            "tagWithUpdateMode:",
            -[AMPDeviceSyncPrefs tvShowUpdateMode](v14, "tvShowUpdateMode"));
    objc_release(v14);
    v16 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsTVShowsViewController autoIncludeTrailingPopUpButton](
              self,
              "autoIncludeTrailingPopUpButton"));
    -[NSPopUpButton selectItemWithTag:](v16, "selectItemWithTag:", v15);
    objc_release(v16);
    -[DeviceSettingsTVShowsViewController updateTrailingTextField](self, "updateTrailingTextField");
    -[DeviceSettingsTVShowsViewController updateTabView](self, "updateTabView");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  }
}