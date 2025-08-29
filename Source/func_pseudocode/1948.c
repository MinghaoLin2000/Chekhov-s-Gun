-[DeviceSettingsPodcastsViewController loadUIFromPrefs]
void __cdecl -[DeviceSettingsPodcastsViewController loadUIFromPrefs](
        DeviceSettingsPodcastsViewController *self,
        SEL a2)
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
  _BOOL8 v12; // x22
  AMPDeviceSyncPrefs *v13; // x20
  signed __int64 v14; // x21
  NSPopUpButton *v15; // x20
  AMPDeviceSyncPrefs *v16; // x20
  signed __int64 v17; // x21
  NSPopUpButton *v18; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (unsigned int)-[DeviceSettingsPodcastsViewController isViewLoaded](self, "isViewLoaded") )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v4 = (unsigned int)-[AMPDeviceSyncPrefs updatePodcasts](v3, "updatePodcasts");
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
    -[NSButton setState:](v5, "setState:", v4);
    objc_release(v5);
    objc_release(v3);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v7 = -[AMPDeviceSyncPrefs podcastUpdateMode](v6, "podcastUpdateMode") != (void *)4;
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController autoIncludeCheckBox](self, "autoIncludeCheckBox"));
    -[NSButton setState:](v8, "setState:", v7);
    objc_release(v8);
    objc_release(v6);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v10 = -[AMPDeviceSyncPrefs podcastEpisodeAction](v9, "podcastEpisodeAction") == (void *)4;
    objc_release(v9);
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v12 = -[AMPDeviceSyncPrefs podcastEpisodeAction](v11, "podcastEpisodeAction") == (void *)3;
    objc_release(v11);
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v14 = -[DeviceSettingsPodcastsViewController tagWithEpisodeCount:unplayed:newer:](
            self,
            "tagWithEpisodeCount:unplayed:newer:",
            -[AMPDeviceSyncPrefs podcastEpisodeCount](v13, "podcastEpisodeCount"),
            v10,
            v12);
    objc_release(v13);
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
    -[NSPopUpButton selectItemWithTag:](v15, "selectItemWithTag:", v14);
    objc_release(v15);
    v16 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v17 = -[DeviceSettingsPodcastsViewController tagWithUpdateMode:](
            self,
            "tagWithUpdateMode:",
            -[AMPDeviceSyncPrefs podcastUpdateMode](v16, "podcastUpdateMode"));
    objc_release(v16);
    v18 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsPodcastsViewController autoIncludeTrailingPopUpButton](
              self,
              "autoIncludeTrailingPopUpButton"));
    -[NSPopUpButton selectItemWithTag:](v18, "selectItemWithTag:", v17);
    objc_release(v18);
    -[DeviceSettingsPodcastsViewController updateTrailingTextField](self, "updateTrailingTextField");
    -[DeviceSettingsPodcastsViewController updateTabView](self, "updateTabView");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  }
}