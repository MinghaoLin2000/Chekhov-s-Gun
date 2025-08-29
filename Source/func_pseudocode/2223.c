-[DeviceSettingsCalendarsViewController saveToDeviceSyncPrefs:]
void __cdecl -[DeviceSettingsCalendarsViewController saveToDeviceSyncPrefs:](
        DeviceSettingsCalendarsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSButton *v5; // x21
  NSButton *v6; // x21
  NSSet *v7; // x22
  void *v8; // x24
  NSSet *v9; // x23
  NSTextField *v10; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  objc_msgSend(v4, "setSyncCalendars:", (void *)-[NSButton state](v5, "state") == (void *)1);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController allRadioButton](self, "allRadioButton"));
  if ( (void *)-[NSButton state](v6, "state") == (void *)1 )
  {
    v7 = objc_retainAutoreleasedReturnValue(+[NSSet set](&OBJC_CLASS___NSSet, "set"));
    objc_msgSend(v4, "setSelectedCalendars:", v7);
  }
  else
  {
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
    v8 = objc_retainAutoreleasedReturnValue(-[NSSet objectForKeyedSubscript:](v7, "objectForKeyedSubscript:", CFSTR("Calendars")));
    v9 = objc_retainAutoreleasedReturnValue(+[NSSet setWithSet:](&OBJC_CLASS___NSSet, "setWithSet:", v8));
    objc_msgSend(v4, "setSelectedCalendars:", v9);
    objc_release(v9);
    objc_release(v8);
  }
  objc_release(v7);
  objc_release(v6);
  objc_msgSend(
    v4,
    "setDeviceDefaultCalendar:",
    -[DeviceSettingsCalendarsViewController deviceDefaultCalendar](self, "deviceDefaultCalendar"));
  objc_msgSend(
    v4,
    "setDeleteExistingCalendars:",
    -[DeviceSettingsCalendarsViewController deleteExistingCalendars](self, "deleteExistingCalendars"));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController syncDaysLimitTextField](self, "syncDaysLimitTextField"));
  objc_msgSend(v4, "setCalendarSyncDaysLimit:", -[NSTextField integerValue](v10, "integerValue"));
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}