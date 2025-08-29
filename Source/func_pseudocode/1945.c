-[DeviceSettingsPodcastsViewController isDirty]
bool __cdecl -[DeviceSettingsPodcastsViewController isDirty](DeviceSettingsPodcastsViewController *self, SEL a2)
{
  NSButton *v3; // x21
  void *v4; // x20
  AMPDeviceSyncPrefs *v5; // x21
  char v6; // w22
  NSButton *v7; // x20
  void *v8; // x21
  NSPopUpButton *v9; // x21
  unsigned __int64 v10; // x20
  AMPDeviceSyncPrefs *v11; // x21
  void *v12; // x22
  NSPopUpButton *v13; // x20
  unsigned __int64 v14; // x21
  AMPDeviceSyncPrefs *v15; // x20
  void *v16; // x22
  NSPopUpButton *v17; // x20
  signed __int64 v18; // x21
  AMPDeviceSyncPrefs *v19; // x20
  void *v20; // x22
  NSMutableDictionary *v21; // x21
  void *v22; // x20
  AMPDeviceSyncPrefs *v23; // x21
  void *v24; // x22
  unsigned int v25; // w23
  AMPDeviceSyncPrefs *v26; // x21
  void *v27; // x22
  id v28; // x23
  unsigned int v29; // w24
  NSMutableDictionary *v30; // x21
  void *v31; // x22
  AMPDeviceSyncPrefs *v32; // x19
  void *v33; // x21
  unsigned __int8 v34; // w23
  char v35; // w19

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  v4 = -[NSButton state](v3, "state");
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v6 = (v4 == (void *)1) ^ (unsigned __int8)-[AMPDeviceSyncPrefs updatePodcasts](v5, "updatePodcasts");
  objc_release(v5);
  if ( (v6 & 1) != 0 )
    return 1;
  if ( v4 == (void *)1 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController autoIncludeCheckBox](self, "autoIncludeCheckBox"));
    v8 = -[NSButton state](v7, "state");
    objc_release(v7);
    if ( v8 == (void *)1 )
    {
      v9 = objc_retainAutoreleasedReturnValue(
             -[DeviceSettingsPodcastsViewController autoIncludeTrailingPopUpButton](
               self,
               "autoIncludeTrailingPopUpButton"));
      v10 = -[DeviceSettingsPodcastsViewController updateModeWithTag:](
              self,
              "updateModeWithTag:",
              -[NSPopUpButton selectedTag](v9, "selectedTag"));
      objc_release(v9);
    }
    else
    {
      v10 = 4LL;
    }
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v12 = -[AMPDeviceSyncPrefs podcastUpdateMode](v11, "podcastUpdateMode");
    objc_release(v11);
    if ( v12 != (void *)v10 )
      return 1;
  }
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
  v14 = -[DeviceSettingsPodcastsViewController episodeActionFromTag:](
          self,
          "episodeActionFromTag:",
          -[NSPopUpButton selectedTag](v13, "selectedTag"));
  objc_release(v13);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v16 = -[AMPDeviceSyncPrefs podcastEpisodeAction](v15, "podcastEpisodeAction");
  objc_release(v15);
  if ( v16 != (void *)v14 )
    return 1;
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
  v18 = -[DeviceSettingsPodcastsViewController episodeCountFromTag:](
          self,
          "episodeCountFromTag:",
          -[NSPopUpButton selectedTag](v17, "selectedTag"));
  objc_release(v17);
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v20 = -[AMPDeviceSyncPrefs podcastEpisodeCount](v19, "podcastEpisodeCount");
  objc_release(v19);
  if ( v20 != (void *)v18 )
    return 1;
  v21 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v22 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v21, "objectForKeyedSubscript:", CFSTR("Playlists")));
  objc_release(v21);
  v23 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v24 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedPodcastPlaylistIDs](v23, "selectedPodcastPlaylistIDs"));
  v25 = (unsigned int)objc_msgSend(v24, "isEqualToSet:", v22);
  objc_release(v24);
  objc_release(v23);
  if ( v25
    && (v26 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs")),
        v27 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedPodcastTrackIDs](v26, "selectedPodcastTrackIDs")),
        v28 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController selectedPodcastTrackIDs](self, "selectedPodcastTrackIDs")),
        v29 = (unsigned int)objc_msgSend(v27, "isEqualToSet:", v28),
        objc_release(v28),
        objc_release(v27),
        objc_release(v26),
        v29) )
  {
    v30 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
    v31 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v30, "objectForKeyedSubscript:", CFSTR("Podcasts")));
    objc_release(v30);
    v32 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v33 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedPodcastChannelIDs](v32, "selectedPodcastChannelIDs"));
    v34 = (unsigned __int8)objc_msgSend(v33, "isEqualToSet:", v31);
    objc_release(v33);
    objc_release(v32);
    v35 = v34 ^ 1;
    objc_release(v31);
  }
  else
  {
    v35 = 1;
  }
  objc_release(v22);
  return v35;
}