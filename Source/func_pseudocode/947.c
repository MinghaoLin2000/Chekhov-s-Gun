-[DeviceSettingsAudiobooksViewController revertAudiobookCheckedItemsModel]
void __cdecl -[DeviceSettingsAudiobooksViewController revertAudiobookCheckedItemsModel](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2)
{
  NSMutableDictionary *v3; // x20
  void *v4; // x21
  AMPDeviceSyncPrefs *v5; // x20
  void *v6; // x21
  void *v7; // x22
  NSMutableSet *v8; // x20
  NSMutableSet *v9; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v3, "objectForKeyedSubscript:", CFSTR("Audiobooks")));
  objc_msgSend(v4, "removeAllObjects");
  objc_release(v4);
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v6 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedAudiobookTrackIDs](v5, "selectedAudiobookTrackIDs"));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "allObjects"));
  objc_release(v6);
  objc_release(v5);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAudiobooksViewController audiobooksDetailsCheckedItems](self, "audiobooksDetailsCheckedItems"));
  -[NSMutableSet removeAllObjects](v8, "removeAllObjects");
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAudiobooksViewController audiobooksDetailsCheckedItems](self, "audiobooksDetailsCheckedItems"));
  -[NSMutableSet addObjectsFromArray:](v9, "addObjectsFromArray:", v7);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}