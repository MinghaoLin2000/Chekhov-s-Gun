-[DeviceSettingsMusicViewController isDirty]
bool __cdecl -[DeviceSettingsMusicViewController isDirty](DeviceSettingsMusicViewController *self, SEL a2)
{
  NSButton *v3; // x20
  int v4; // w22
  AMPDeviceSyncPrefs *v5; // x20
  unsigned int v6; // w21
  NSButton *v7; // x21
  bool v8; // w20
  __int64 v9; // x23
  AMPDeviceSyncPrefs *v10; // x21
  void *v11; // x22
  NSButton *v12; // x20
  int v13; // w22
  AMPDeviceSyncPrefs *v14; // x20
  unsigned int v15; // w21
  NSButton *v16; // x20
  int v17; // w22
  AMPDeviceSyncPrefs *v18; // x20
  unsigned int v19; // w21
  NSButton *v20; // x20
  int v21; // w22
  AMPDeviceSyncPrefs *v22; // x20
  unsigned int v23; // w21
  NSButton *v24; // x20
  int v25; // w22
  AMPDeviceSyncPrefs *v26; // x20
  unsigned int v27; // w21
  AMPDeviceSyncPrefs *v28; // x20
  void *v29; // x21
  NSMutableDictionary *v30; // x22
  void *v31; // x23
  unsigned int v32; // w24
  AMPDeviceSyncPrefs *v33; // x20
  void *v34; // x21
  NSMutableDictionary *v35; // x22
  void *v36; // x23
  unsigned int v37; // w24
  AMPDeviceSyncPrefs *v38; // x20
  void *v39; // x21
  NSMutableDictionary *v40; // x22
  void *v41; // x23
  unsigned int v42; // w24
  AMPDeviceSyncPrefs *v43; // x20
  void *v44; // x21
  NSMutableDictionary *v45; // x19
  void *v46; // x22
  unsigned __int8 v47; // w23

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  v4 = (void *)-[NSButton state](v3, "state") != (void *)1;
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v6 = (unsigned int)-[AMPDeviceSyncPrefs updateMusic](v5, "updateMusic");
  objc_release(v5);
  if ( v4 == v6 )
    return 1;
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController allRadioButton](self, "allRadioButton"));
  v8 = 1;
  if ( (void *)-[NSButton state](v7, "state") == (void *)1 )
    v9 = 1LL;
  else
    v9 = 2LL;
  objc_release(v7);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v11 = -[AMPDeviceSyncPrefs musicUpdateMode](v10, "musicUpdateMode");
  objc_release(v10);
  if ( v11 == (void *)v9 )
  {
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController includeMusicVideosCheckBox](self, "includeMusicVideosCheckBox"));
    v13 = (void *)-[NSButton state](v12, "state") != (void *)1;
    objc_release(v12);
    v14 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v15 = (unsigned int)-[AMPDeviceSyncPrefs syncMusicVideosWithMusic](v14, "syncMusicVideosWithMusic");
    objc_release(v14);
    if ( v13 != v15 )
    {
      v16 = objc_retainAutoreleasedReturnValue(
              -[DeviceSettingsMusicViewController includeDigitalBookletsCheckBox](
                self,
                "includeDigitalBookletsCheckBox"));
      v17 = (void *)-[NSButton state](v16, "state") != (void *)1;
      objc_release(v16);
      v18 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
      v19 = (unsigned int)-[AMPDeviceSyncPrefs syncMovieBooklets](v18, "syncMovieBooklets");
      objc_release(v18);
      if ( v17 != v19 )
      {
        v20 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController includeVoiceMemosCheckBox](self, "includeVoiceMemosCheckBox"));
        v21 = (void *)-[NSButton state](v20, "state") != (void *)1;
        objc_release(v20);
        v22 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
        v23 = (unsigned int)-[AMPDeviceSyncPrefs syncVoiceMemosWithMusic](v22, "syncVoiceMemosWithMusic");
        objc_release(v22);
        if ( v21 != v23 )
        {
          v24 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController autoFillFreeSpaceCheckBox](self, "autoFillFreeSpaceCheckBox"));
          v25 = (void *)-[NSButton state](v24, "state") != (void *)1;
          objc_release(v24);
          v26 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
          v27 = (unsigned int)-[AMPDeviceSyncPrefs autofillFreeSpaceWithMusic](v26, "autofillFreeSpaceWithMusic");
          objc_release(v26);
          if ( v25 != v27 )
          {
            v28 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
            v29 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedMusicArtistIDs](v28, "selectedMusicArtistIDs"));
            v30 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
            v31 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v30, "objectForKeyedSubscript:", CFSTR("Artists")));
            v32 = (unsigned int)objc_msgSend(v29, "isEqualToSet:", v31);
            objc_release(v31);
            objc_release(v30);
            objc_release(v29);
            objc_release(v28);
            if ( v32 )
            {
              v33 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
              v34 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedMusicAlbumIDs](v33, "selectedMusicAlbumIDs"));
              v35 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
              v36 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v35, "objectForKeyedSubscript:", CFSTR("Albums")));
              v37 = (unsigned int)objc_msgSend(v34, "isEqualToSet:", v36);
              objc_release(v36);
              objc_release(v35);
              objc_release(v34);
              objc_release(v33);
              if ( v37 )
              {
                v38 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
                v39 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedMusicGenreNames](v38, "selectedMusicGenreNames"));
                v40 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
                v41 = objc_retainAutoreleasedReturnValue(
                        -[NSMutableDictionary objectForKeyedSubscript:](
                          v40,
                          "objectForKeyedSubscript:",
                          CFSTR("Genres")));
                v42 = (unsigned int)objc_msgSend(v39, "isEqualToSet:", v41);
                objc_release(v41);
                objc_release(v40);
                objc_release(v39);
                objc_release(v38);
                if ( v42 )
                {
                  v43 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
                  v44 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedMusicPlaylistIDs](v43, "selectedMusicPlaylistIDs"));
                  v45 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
                  v46 = objc_retainAutoreleasedReturnValue(
                          -[NSMutableDictionary objectForKeyedSubscript:](
                            v45,
                            "objectForKeyedSubscript:",
                            CFSTR("Playlists")));
                  v47 = (unsigned __int8)objc_msgSend(v44, "isEqualToSet:", v46);
                  objc_release(v46);
                  objc_release(v45);
                  objc_release(v44);
                  objc_release(v43);
                  return v47 ^ 1;
                }
              }
            }
          }
        }
      }
    }
    return 1;
  }
  return v8;
}