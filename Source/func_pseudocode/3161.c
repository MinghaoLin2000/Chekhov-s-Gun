-[DeviceSettingsMusicViewController revertCheckedItemsModel]
void __cdecl -[DeviceSettingsMusicViewController revertCheckedItemsModel](
        DeviceSettingsMusicViewController *self,
        SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x21
  void *v4; // x22
  void *v5; // x19
  NSMutableDictionary *v6; // x21
  void *v7; // x23
  NSMutableDictionary *v8; // x21
  void *v9; // x22
  AMPDeviceSyncPrefs *v10; // x22
  void *v11; // x23
  void *v12; // x21
  NSMutableDictionary *v13; // x22
  void *v14; // x24
  NSMutableDictionary *v15; // x22
  void *v16; // x23
  AMPDeviceSyncPrefs *v17; // x23
  void *v18; // x24
  void *v19; // x22
  NSMutableDictionary *v20; // x23
  void *v21; // x25
  NSMutableDictionary *v22; // x23
  void *v23; // x24
  AMPDeviceSyncPrefs *v24; // x24
  void *v25; // x25
  void *v26; // x23
  NSMutableDictionary *v27; // x24
  void *v28; // x26
  NSMutableDictionary *v29; // x20
  void *v30; // x24
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v4 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedMusicArtistIDs](v3, "selectedMusicArtistIDs"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "allObjects"));
  objc_release(v4);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v7 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v6, "objectForKeyedSubscript:", CFSTR("Artists")));
  objc_msgSend(v7, "removeAllObjects");
  objc_release(v7);
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v9 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v8, "objectForKeyedSubscript:", CFSTR("Artists")));
  objc_msgSend(v9, "addObjectsFromArray:", v5);
  objc_release(v9);
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v11 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedMusicAlbumIDs](v10, "selectedMusicAlbumIDs"));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "allObjects"));
  objc_release(v11);
  objc_release(v10);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v14 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v13, "objectForKeyedSubscript:", CFSTR("Albums")));
  objc_msgSend(v14, "removeAllObjects");
  objc_release(v14);
  objc_release(v13);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v16 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v15, "objectForKeyedSubscript:", CFSTR("Albums")));
  objc_msgSend(v16, "addObjectsFromArray:", v12);
  objc_release(v16);
  objc_release(v15);
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v18 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedMusicGenreNames](v17, "selectedMusicGenreNames"));
  v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "allObjects"));
  objc_release(v18);
  objc_release(v17);
  v20 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v21 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v20, "objectForKeyedSubscript:", CFSTR("Genres")));
  objc_msgSend(v21, "removeAllObjects");
  objc_release(v21);
  objc_release(v20);
  v22 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v23 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v22, "objectForKeyedSubscript:", CFSTR("Genres")));
  objc_msgSend(v23, "addObjectsFromArray:", v19);
  objc_release(v23);
  objc_release(v22);
  v24 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v25 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedMusicPlaylistIDs](v24, "selectedMusicPlaylistIDs"));
  v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v25, "allObjects"));
  objc_release(v25);
  objc_release(v24);
  v27 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v28 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v27, "objectForKeyedSubscript:", CFSTR("Playlists")));
  objc_msgSend(v28, "removeAllObjects");
  objc_release(v28);
  objc_release(v27);
  v29 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v30 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v29, "objectForKeyedSubscript:", CFSTR("Playlists")));
  objc_msgSend(v30, "addObjectsFromArray:", v26);
  objc_release(v30);
  objc_release(v29);
  objc_release(v26);
  objc_release(v19);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}