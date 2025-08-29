-[DeviceSettingsCalendarsViewController isDirty]
bool __cdecl -[DeviceSettingsCalendarsViewController isDirty](DeviceSettingsCalendarsViewController *self, SEL a2)
{
  NSButton *v3; // x20
  int v4; // w22
  AMPDeviceSyncPrefs *v5; // x20
  unsigned int v6; // w21
  AMPDeviceSyncPrefs *v7; // x20
  void *v8; // x21
  signed __int64 v9; // x22
  AMPDeviceSyncPrefs *v10; // x20
  unsigned int v11; // w21
  unsigned int v12; // w22
  AMPDeviceSyncPrefs *v13; // x20
  void *v14; // x21
  NSTextField *v15; // x22
  void *v16; // x23
  NSMutableDictionary *v17; // x20
  void *v18; // x21
  AMPDeviceSyncPrefs *v19; // x19
  void *v20; // x20
  unsigned __int8 v21; // w22
  char v22; // w19

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  v4 = (void *)-[NSButton state](v3, "state") != (void *)1;
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v6 = (unsigned int)-[AMPDeviceSyncPrefs syncCalendars](v5, "syncCalendars");
  objc_release(v5);
  if ( v4 == v6 )
    return 1;
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v8 = -[AMPDeviceSyncPrefs deviceDefaultCalendar](v7, "deviceDefaultCalendar");
  v9 = -[DeviceSettingsCalendarsViewController deviceDefaultCalendar](self, "deviceDefaultCalendar");
  objc_release(v7);
  if ( v8 != (void *)v9 )
    return 1;
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v11 = (unsigned int)-[AMPDeviceSyncPrefs deleteExistingCalendars](v10, "deleteExistingCalendars");
  v12 = -[DeviceSettingsCalendarsViewController deleteExistingCalendars](self, "deleteExistingCalendars");
  objc_release(v10);
  if ( v11 != v12 )
    return 1;
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v14 = -[AMPDeviceSyncPrefs calendarSyncDaysLimit](v13, "calendarSyncDaysLimit");
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController syncDaysLimitTextField](self, "syncDaysLimitTextField"));
  v16 = -[NSTextField integerValue](v15, "integerValue");
  objc_release(v15);
  objc_release(v13);
  if ( v14 != v16 )
    return 1;
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v18 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v17, "objectForKeyedSubscript:", CFSTR("Calendars")));
  objc_release(v17);
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v20 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedCalendars](v19, "selectedCalendars"));
  v21 = (unsigned __int8)objc_msgSend(v20, "isEqualToSet:", v18);
  objc_release(v20);
  objc_release(v19);
  v22 = v21 ^ 1;
  objc_release(v18);
  return v22;
}