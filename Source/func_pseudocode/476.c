-[DeviceSettingsTVShowsViewController revertCheckedItemsModel]
void __cdecl -[DeviceSettingsTVShowsViewController revertCheckedItemsModel](
        DeviceSettingsTVShowsViewController *self,
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
  NSMutableSet *v13; // x22
  NSMutableSet *v14; // x22
  AMPDeviceSyncPrefs *v15; // x23
  void *v16; // x24
  void *v17; // x22
  NSMutableDictionary *v18; // x23
  void *v19; // x25
  NSMutableDictionary *v20; // x20
  void *v21; // x23
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v4 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedTVShowNames](v3, "selectedTVShowNames"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "allObjects"));
  objc_release(v4);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v7 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v6, "objectForKeyedSubscript:", CFSTR("Shows")));
  objc_msgSend(v7, "removeAllObjects");
  objc_release(v7);
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v9 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v8, "objectForKeyedSubscript:", CFSTR("Shows")));
  objc_msgSend(v9, "addObjectsFromArray:", v5);
  objc_release(v9);
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v11 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedTVShowTrackIDs](v10, "selectedTVShowTrackIDs"));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "allObjects"));
  objc_release(v11);
  objc_release(v10);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController detailsCheckedItems](self, "detailsCheckedItems"));
  -[NSMutableSet removeAllObjects](v13, "removeAllObjects");
  objc_release(v13);
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController detailsCheckedItems](self, "detailsCheckedItems"));
  -[NSMutableSet addObjectsFromArray:](v14, "addObjectsFromArray:", v12);
  objc_release(v14);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v16 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedTVShowPlaylistIDs](v15, "selectedTVShowPlaylistIDs"));
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "allObjects"));
  objc_release(v16);
  objc_release(v15);
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v19 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v18, "objectForKeyedSubscript:", CFSTR("Playlists")));
  objc_msgSend(v19, "removeAllObjects");
  objc_release(v19);
  objc_release(v18);
  v20 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v21 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v20, "objectForKeyedSubscript:", CFSTR("Playlists")));
  objc_msgSend(v21, "addObjectsFromArray:", v17);
  objc_release(v21);
  objc_release(v20);
  objc_release(v17);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}