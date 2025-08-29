-[DeviceSettingsCalendarsViewController loadUIFromPrefs]
void __cdecl -[DeviceSettingsCalendarsViewController loadUIFromPrefs](
        DeviceSettingsCalendarsViewController *self,
        SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  __int64 v4; // x21
  NSButton *v5; // x22
  NSMutableDictionary *v6; // x20
  void *v7; // x21
  void *v8; // x0
  _BOOL8 v9; // x22
  _BOOL8 v10; // x23
  NSButton *v11; // x20
  NSButton *v12; // x20
  AMPDeviceSyncPrefs *v13; // x20
  AMPDeviceSyncPrefs *v14; // x20
  AMPDeviceSyncPrefs *v15; // x21
  NSString *v16; // x20
  NSTextField *v17; // x22
  AMPDeviceSyncPrefs *v18; // x20
  _BOOL8 v19; // x21
  NSButton *v20; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  if ( (unsigned int)-[DeviceSettingsCalendarsViewController isViewLoaded](self, "isViewLoaded") )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v4 = (unsigned int)-[AMPDeviceSyncPrefs syncCalendars](v3, "syncCalendars");
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
    -[NSButton setState:](v5, "setState:", v4);
    objc_release(v5);
    objc_release(v3);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
    v7 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v6, "objectForKeyedSubscript:", CFSTR("Calendars")));
    v8 = objc_msgSend(v7, "count");
    v9 = v8 != 0LL;
    v10 = v8 == 0LL;
    objc_release(v7);
    objc_release(v6);
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController allRadioButton](self, "allRadioButton"));
    -[NSButton setState:](v11, "setState:", v10);
    objc_release(v11);
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController updateSelectedRadioButton](self, "updateSelectedRadioButton"));
    -[NSButton setState:](v12, "setState:", v9);
    objc_release(v12);
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    -[DeviceSettingsCalendarsViewController setDeviceDefaultCalendar:](
      self,
      "setDeviceDefaultCalendar:",
      -[AMPDeviceSyncPrefs deviceDefaultCalendar](v13, "deviceDefaultCalendar"));
    objc_release(v13);
    v14 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    -[DeviceSettingsCalendarsViewController setDeleteExistingCalendars:](
      self,
      "setDeleteExistingCalendars:",
      -[AMPDeviceSyncPrefs deleteExistingCalendars](v14, "deleteExistingCalendars"));
    objc_release(v14);
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("%u"),
              -[AMPDeviceSyncPrefs calendarSyncDaysLimit](v15, "calendarSyncDaysLimit")));
    v17 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController syncDaysLimitTextField](self, "syncDaysLimitTextField"));
    -[NSTextField setStringValue:](v17, "setStringValue:", v16);
    objc_release(v17);
    objc_release(v16);
    objc_release(v15);
    v18 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v19 = -[AMPDeviceSyncPrefs calendarSyncDaysLimit](v18, "calendarSyncDaysLimit") != 0LL;
    v20 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController syncDaysLimitCheckBox](self, "syncDaysLimitCheckBox"));
    -[NSButton setState:](v20, "setState:", v19);
    objc_release(v20);
    objc_release(v18);
    -[DeviceSettingsCalendarsViewController updateDefaultCalendarUI](self, "updateDefaultCalendarUI");
    -[DeviceSettingsCalendarsViewController updateTabView](self, "updateTabView");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  }
}