-[DeviceSettingsCalendarsViewController revertCheckedItemsModel]
void __cdecl -[DeviceSettingsCalendarsViewController revertCheckedItemsModel](
        DeviceSettingsCalendarsViewController *self,
        SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  void *v4; // x21
  void *v5; // x22
  NSMutableDictionary *v6; // x20
  void *v7; // x23
  NSMutableDictionary *v8; // x19
  void *v9; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v4 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedCalendars](v3, "selectedCalendars"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "allObjects"));
  objc_release(v4);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v7 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v6, "objectForKeyedSubscript:", CFSTR("Calendars")));
  objc_msgSend(v7, "removeAllObjects");
  objc_release(v7);
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v9 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v8, "objectForKeyedSubscript:", CFSTR("Calendars")));
  objc_msgSend(v9, "addObjectsFromArray:", v5);
  objc_release(v9);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}