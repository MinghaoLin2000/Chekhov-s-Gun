-[DeviceSettingsBooksViewController revertBookAndPDFCheckedItemsModel]
void __cdecl -[DeviceSettingsBooksViewController revertBookAndPDFCheckedItemsModel](
        DeviceSettingsBooksViewController *self,
        SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  void *v4; // x21
  void *v5; // x22
  NSMutableDictionary *v6; // x19
  void *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v4 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedBookTrackIDs](v3, "selectedBookTrackIDs"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "allObjects"));
  objc_release(v4);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v7 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v6, "objectForKeyedSubscript:", CFSTR("Books")));
  objc_release(v6);
  objc_msgSend(v7, "removeAllObjects");
  objc_msgSend(v7, "addObjectsFromArray:", v5);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}