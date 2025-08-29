-[DeviceSettingsCalendarsViewController loadDefaultCalendarPopUpButton]
void __cdecl -[DeviceSettingsCalendarsViewController loadDefaultCalendarPopUpButton](
        DeviceSettingsCalendarsViewController *self,
        SEL a2)
{
  NSPopUpButton *v3; // x20
  NSMutableDictionary *v4; // x22
  void *v5; // x20
  NSMutableDictionary *v6; // x22
  NSButton *v7; // x23
  void *v8; // x22
  id v9; // x23
  void *v10; // x0
  void *v11; // x24
  __int64 v12; // x20
  void *i; // x21
  void *v14; // x25
  void *v15; // x26
  unsigned int v16; // w27
  NSPopUpButton *v17; // x26
  void *v18; // x27
  void *v19; // x25
  void *v20; // x26
  NSPopUpButton *v21; // x27
  NSMenuItem *v22; // x28
  NSPopUpButton *v23; // x22
  unsigned __int8 v24; // w23
  NSPopUpButton *v25; // x22
  NSPopUpButton *v26; // x22
  void *v27; // [xsp+0h] [xbp-130h]
  id v28; // [xsp+8h] [xbp-128h]
  __int128 v29; // [xsp+10h] [xbp-120h] BYREF
  __int128 v30; // [xsp+20h] [xbp-110h]
  __int128 v31; // [xsp+30h] [xbp-100h]
  __int128 v32; // [xsp+40h] [xbp-F0h]
  _BYTE v33[128]; // [xsp+50h] [xbp-E0h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController defaultCalendarPopUpButton](self, "defaultCalendarPopUpButton"));
  -[NSPopUpButton removeAllItems](v3, "removeAllItems");
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  v5 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v4, "objectForKeyedSubscript:", CFSTR("Calendars")));
  objc_release(v4);
  if ( -[DeviceSettingsCalendarsViewController deviceDefaultCalendar](self, "deviceDefaultCalendar") != 0x7FFFFFFFFFFFFFFFLL
    && objc_msgSend(v5, "count") )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
    v28 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v6, "objectForKeyedSubscript:", CFSTR("Calendars")));
    objc_release(v6);
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController allRadioButton](self, "allRadioButton"));
    v8 = -[NSButton state](v7, "state");
    objc_release(v7);
    v31 = 0u;
    v32 = 0u;
    v29 = 0u;
    v30 = 0u;
    v27 = v5;
    v9 = objc_retain(v5);
    v10 = objc_msgSend(v9, "countByEnumeratingWithState:objects:count:", &v29, v33, 16LL);
    if ( v10 )
    {
      v11 = v10;
      v12 = *(_QWORD *)v30;
      do
      {
        for ( i = 0LL; i != v11; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v30 != v12 )
            objc_enumerationMutation(v9);
          v14 = *(void **)(*((_QWORD *)&v29 + 1) + 8LL * (_QWORD)i);
          if ( v8 != (void *)1 )
          {
            v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v29 + 1) + 8LL * (_QWORD)i), "persistentID"));
            v16 = (unsigned int)objc_msgSend(v28, "containsObject:", v15);
            objc_release(v15);
            if ( !v16 )
              continue;
          }
          v17 = objc_retainAutoreleasedReturnValue(
                  -[DeviceSettingsCalendarsViewController defaultCalendarPopUpButton](
                    self,
                    "defaultCalendarPopUpButton",
                    v27));
          v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "name"));
          -[NSPopUpButton addItemWithTitle:](v17, "addItemWithTitle:", v18);
          objc_release(v18);
          objc_release(v17);
          v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "persistentID"));
          v20 = objc_msgSend(v19, "integerValue");
          v21 = objc_retainAutoreleasedReturnValue(
                  -[DeviceSettingsCalendarsViewController defaultCalendarPopUpButton](
                    self,
                    "defaultCalendarPopUpButton"));
          v22 = objc_retainAutoreleasedReturnValue(-[NSPopUpButton lastItem](v21, "lastItem"));
          -[NSMenuItem setTag:](v22, "setTag:", v20);
          objc_release(v22);
          objc_release(v21);
          objc_release(v19);
        }
        v11 = objc_msgSend(v9, "countByEnumeratingWithState:objects:count:", &v29, v33, 16LL);
      }
      while ( v11 );
    }
    objc_release(v9);
    v23 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController defaultCalendarPopUpButton](self, "defaultCalendarPopUpButton"));
    v24 = -[NSPopUpButton selectItemWithTag:](
            v23,
            "selectItemWithTag:",
            -[DeviceSettingsCalendarsViewController deviceDefaultCalendar](self, "deviceDefaultCalendar"));
    objc_release(v23);
    if ( (v24 & 1) == 0 )
    {
      v25 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController defaultCalendarPopUpButton](self, "defaultCalendarPopUpButton"));
      -[NSPopUpButton selectItemAtIndex:](v25, "selectItemAtIndex:", 0LL);
      objc_release(v25);
      v26 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController defaultCalendarPopUpButton](self, "defaultCalendarPopUpButton"));
      -[DeviceSettingsCalendarsViewController setDeviceDefaultCalendar:](
        self,
        "setDeviceDefaultCalendar:",
        -[NSPopUpButton selectedTag](v26, "selectedTag"));
      objc_release(v26);
      if ( -[DeviceSettingsCalendarsViewController deviceDefaultCalendar](self, "deviceDefaultCalendar") == -1 )
        -[DeviceSettingsCalendarsViewController setDeviceDefaultCalendar:](
          self,
          "setDeviceDefaultCalendar:",
          0x7FFFFFFFFFFFFFFFLL);
    }
    objc_release(v28);
    v5 = v27;
  }
  objc_release(v5);
}