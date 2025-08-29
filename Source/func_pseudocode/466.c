-[DeviceSettingsTVShowsViewController saveToDeviceSyncPrefs:]
void __cdecl -[DeviceSettingsTVShowsViewController saveToDeviceSyncPrefs:](
        DeviceSettingsTVShowsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSMutableDictionary *v5; // x22
  void *v6; // x23
  NSSet *v7; // x21
  id v8; // x21
  NSMutableDictionary *v9; // x22
  void *v10; // x23
  NSSet *v11; // x21
  NSButton *v12; // x21
  void *v13; // x22
  NSButton *v14; // x21
  void *v15; // x22
  NSPopUpButton *v16; // x21
  NSPopUpButton *v17; // x21
  void *v18; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v5, "objectForKeyedSubscript:", CFSTR("Playlists")));
  v7 = objc_retainAutoreleasedReturnValue(+[NSSet setWithSet:](&OBJC_CLASS___NSSet, "setWithSet:", v6));
  objc_msgSend(v4, "setSelectedTVShowPlaylistIDs:", v7);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController selectedTVShowTrackIDs](self, "selectedTVShowTrackIDs"));
  objc_msgSend(v4, "setSelectedTVShowTrackIDs:", v8);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v10 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v9, "objectForKeyedSubscript:", CFSTR("Shows")));
  v11 = objc_retainAutoreleasedReturnValue(+[NSSet setWithSet:](&OBJC_CLASS___NSSet, "setWithSet:", v10));
  objc_msgSend(v4, "setSelectedTVShowNames:", v11);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  v13 = -[NSButton state](v12, "state");
  objc_release(v12);
  if ( v13 == (void *)1 )
  {
    objc_msgSend(v4, "setAutomaticUpdateMode:", 1LL);
    objc_msgSend(v4, "setUpdateTVShows:", 1LL);
    v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludeCheckBox](self, "autoIncludeCheckBox"));
    v15 = -[NSButton state](v14, "state");
    objc_release(v14);
    if ( v15 == (void *)1 )
    {
      v16 = objc_retainAutoreleasedReturnValue(
              -[DeviceSettingsTVShowsViewController autoIncludeTrailingPopUpButton](
                self,
                "autoIncludeTrailingPopUpButton"));
      objc_msgSend(
        v4,
        "setTvShowUpdateMode:",
        -[DeviceSettingsTVShowsViewController updateModeWithTag:](
          self,
          "updateModeWithTag:",
          -[NSPopUpButton selectedTag](v16, "selectedTag")));
      objc_release(v16);
    }
    else
    {
      objc_msgSend(v4, "setTvShowUpdateMode:", 4LL);
    }
  }
  else
  {
    objc_msgSend(v4, "setUpdateTVShows:", 0LL);
  }
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
  v18 = -[NSPopUpButton selectedTag](v17, "selectedTag");
  objc_release(v17);
  objc_msgSend(
    v4,
    "setTvShowEpisodeCount:",
    -[DeviceSettingsTVShowsViewController episodeCountFromTag:](self, "episodeCountFromTag:", v18));
  objc_msgSend(
    v4,
    "setTvShowEpisodeAction:",
    -[DeviceSettingsTVShowsViewController episodeActionFromTag:](self, "episodeActionFromTag:", v18));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}