-[DeviceSettingsMusicViewController saveToDeviceSyncPrefs:]
void __cdecl -[DeviceSettingsMusicViewController saveToDeviceSyncPrefs:](
        DeviceSettingsMusicViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSMutableDictionary *v5; // x22
  void *v6; // x23
  NSSet *v7; // x21
  NSMutableDictionary *v8; // x22
  void *v9; // x23
  NSSet *v10; // x21
  NSMutableDictionary *v11; // x22
  void *v12; // x23
  NSSet *v13; // x21
  NSMutableDictionary *v14; // x22
  void *v15; // x23
  NSSet *v16; // x21
  NSButton *v17; // x21
  void *v18; // x22
  NSButton *v19; // x21
  void *v20; // x22
  __int64 v21; // x2
  NSButton *v22; // x21
  NSButton *v23; // x21
  NSButton *v24; // x21
  NSButton *v25; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v5, "objectForKeyedSubscript:", CFSTR("Artists")));
  v7 = objc_retainAutoreleasedReturnValue(+[NSSet setWithSet:](&OBJC_CLASS___NSSet, "setWithSet:", v6));
  objc_msgSend(v4, "setSelectedMusicArtistIDs:", v7);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v9 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v8, "objectForKeyedSubscript:", CFSTR("Albums")));
  v10 = objc_retainAutoreleasedReturnValue(+[NSSet setWithSet:](&OBJC_CLASS___NSSet, "setWithSet:", v9));
  objc_msgSend(v4, "setSelectedMusicAlbumIDs:", v10);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v12 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v11, "objectForKeyedSubscript:", CFSTR("Genres")));
  v13 = objc_retainAutoreleasedReturnValue(+[NSSet setWithSet:](&OBJC_CLASS___NSSet, "setWithSet:", v12));
  objc_msgSend(v4, "setSelectedMusicGenreNames:", v13);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v15 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v14, "objectForKeyedSubscript:", CFSTR("Playlists")));
  v16 = objc_retainAutoreleasedReturnValue(+[NSSet setWithSet:](&OBJC_CLASS___NSSet, "setWithSet:", v15));
  objc_msgSend(v4, "setSelectedMusicPlaylistIDs:", v16);
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  v18 = -[NSButton state](v17, "state");
  objc_release(v17);
  if ( v18 == (void *)1 )
  {
    objc_msgSend(v4, "setUpdateMusic:", 1LL);
    objc_msgSend(v4, "setAutomaticUpdateMode:", 1LL);
  }
  else
  {
    objc_msgSend(v4, "setUpdateMusic:", 0LL);
  }
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController allRadioButton](self, "allRadioButton"));
  v20 = -[NSButton state](v19, "state");
  objc_release(v19);
  if ( v20 == (void *)1 )
    v21 = 1LL;
  else
    v21 = 2LL;
  objc_msgSend(v4, "setMusicUpdateMode:", v21);
  v22 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController includeMusicVideosCheckBox](self, "includeMusicVideosCheckBox"));
  objc_msgSend(v4, "setSyncMusicVideosWithMusic:", (void *)-[NSButton state](v22, "state") == (void *)1);
  objc_release(v22);
  v23 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController includeDigitalBookletsCheckBox](self, "includeDigitalBookletsCheckBox"));
  objc_msgSend(v4, "setSyncMusicBooklets:", (void *)-[NSButton state](v23, "state") == (void *)1);
  objc_release(v23);
  v24 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController includeVoiceMemosCheckBox](self, "includeVoiceMemosCheckBox"));
  objc_msgSend(v4, "setSyncVoiceMemosWithMusic:", (void *)-[NSButton state](v24, "state") == (void *)1);
  objc_release(v24);
  v25 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController autoFillFreeSpaceCheckBox](self, "autoFillFreeSpaceCheckBox"));
  objc_msgSend(v4, "setAutofillFreeSpaceWithMusic:", (void *)-[NSButton state](v25, "state") == (void *)1);
  objc_release(v25);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}