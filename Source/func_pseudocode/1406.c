-[DeviceSettingsMoviesViewController revertCheckedItemsModel]
void __cdecl -[DeviceSettingsMoviesViewController revertCheckedItemsModel](
        DeviceSettingsMoviesViewController *self,
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
  NSMutableDictionary *v15; // x20
  void *v16; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v4 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedMovieTrackIDs](v3, "selectedMovieTrackIDs"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "allObjects"));
  objc_release(v4);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v7 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v6, "objectForKeyedSubscript:", CFSTR("Movies")));
  objc_msgSend(v7, "removeAllObjects");
  objc_release(v7);
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v9 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v8, "objectForKeyedSubscript:", CFSTR("Movies")));
  objc_msgSend(v9, "addObjectsFromArray:", v5);
  objc_release(v9);
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v11 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedMoviePlaylistIDs](v10, "selectedMoviePlaylistIDs"));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "allObjects"));
  objc_release(v11);
  objc_release(v10);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v14 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v13, "objectForKeyedSubscript:", CFSTR("Playlists")));
  objc_msgSend(v14, "removeAllObjects");
  objc_release(v14);
  objc_release(v13);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v16 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v15, "objectForKeyedSubscript:", CFSTR("Playlists")));
  objc_msgSend(v16, "addObjectsFromArray:", v12);
  objc_release(v16);
  objc_release(v15);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}