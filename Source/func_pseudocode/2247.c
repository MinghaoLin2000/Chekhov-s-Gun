-[DeviceSettingsCalendarsViewController setTopViewEnabled:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceSettingsCalendarsViewController setTopViewEnabled:](
        DeviceSettingsCalendarsViewController *self,
        SEL a2,
        bool a3)
{
  _BOOL8 v3; // x19
  NSButton *v5; // x21
  NSMutableDictionary *v6; // x23
  void *v7; // x21
  void *v8; // x23
  NSButton *v9; // x0
  NSButton *v10; // x24
  _BOOL8 v11; // x2
  void *v12; // x24
  NSButton *v13; // x0
  NSTextField *v14; // x23
  _BOOL8 v15; // x24
  NSTextField *v16; // x23
  NSTextField *v17; // x25
  NSTextField *v18; // x23
  NSColor *v19; // x0
  NSTextField *v20; // x23
  NSColor *v21; // x23
  NSTextField *v22; // x24
  NSButton *v23; // x23
  void *v24; // x24
  NSMutableDictionary *v25; // x23
  NSPopUpButton *v26; // x22
  _BOOL8 v27; // x23
  _BOOL8 v28; // x23
  NSButton *v29; // x24
  _BOOL8 v30; // x23
  NSPopUpButton *v31; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = a3;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController allRadioButton](self, "allRadioButton"));
  -[NSButton setEnabled:](v5, "setEnabled:", v3);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  v7 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v6, "objectForKeyedSubscript:", CFSTR("Calendars")));
  objc_release(v6);
  v8 = objc_msgSend(v7, "count");
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController updateSelectedRadioButton](self, "updateSelectedRadioButton"));
  v10 = v9;
  if ( v8 )
    v11 = v3;
  else
    v11 = 0LL;
  -[NSButton setEnabled:](v9, "setEnabled:", v11);
  objc_release(v10);
  v12 = objc_msgSend(v7, "count");
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController syncDaysLimitCheckBox](self, "syncDaysLimitCheckBox"));
  v14 = (NSTextField *)v13;
  if ( v12 )
  {
    -[NSButton setEnabled:](v13, "setEnabled:", v3);
    objc_release(v14);
    if ( v3 )
    {
      v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController syncDaysLimitTextField](self, "syncDaysLimitTextField"));
      v15 = -[NSTextField integerValue](v14, "integerValue") != 0LL;
    }
    else
    {
      v15 = 0LL;
    }
    v17 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController syncDaysLimitTextField](self, "syncDaysLimitTextField"));
    -[NSTextField setEnabled:](v17, "setEnabled:", v15);
    objc_release(v17);
    if ( v3 )
    {
      objc_release(v14);
      v18 = objc_retainAutoreleasedReturnValue(
              -[DeviceSettingsCalendarsViewController syncDaysLimitTrailingTextField](
                self,
                "syncDaysLimitTrailingTextField"));
      -[NSTextField setEnabled:](v18, "setEnabled:", 1LL);
      objc_release(v18);
      v19 = objc_retainAutoreleasedReturnValue(+[NSColor controlTextColor](&OBJC_CLASS___NSColor, "controlTextColor"));
      goto LABEL_12;
    }
  }
  else
  {
    -[NSButton setEnabled:](v13, "setEnabled:", 0LL);
    objc_release(v14);
    v16 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController syncDaysLimitTextField](self, "syncDaysLimitTextField"));
    -[NSTextField setEnabled:](v16, "setEnabled:", 0LL);
    objc_release(v16);
  }
  v20 = objc_retainAutoreleasedReturnValue(
          -[DeviceSettingsCalendarsViewController syncDaysLimitTrailingTextField](
            self,
            "syncDaysLimitTrailingTextField"));
  -[NSTextField setEnabled:](v20, "setEnabled:", 0LL);
  objc_release(v20);
  v19 = objc_retainAutoreleasedReturnValue(+[NSColor disabledControlTextColor](&OBJC_CLASS___NSColor, "disabledControlTextColor"));
LABEL_12:
  v21 = v19;
  v22 = objc_retainAutoreleasedReturnValue(
          -[DeviceSettingsCalendarsViewController syncDaysLimitTrailingTextField](
            self,
            "syncDaysLimitTrailingTextField"));
  -[NSTextField setTextColor:](v22, "setTextColor:", v21);
  objc_release(v22);
  objc_release(v21);
  v23 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController updateSelectedRadioButton](self, "updateSelectedRadioButton"));
  v24 = -[NSButton state](v23, "state");
  objc_release(v23);
  if ( v24 == (void *)1 )
  {
    v25 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
    v26 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v25, "objectForKeyedSubscript:", CFSTR("Calendars")));
    objc_release(v25);
    v27 = v3 && -[NSPopUpButton count](v26, "count") != 0LL;
    v29 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController defaultCalendarCheckBox](self, "defaultCalendarCheckBox"));
    -[NSButton setEnabled:](v29, "setEnabled:", v27);
    objc_release(v29);
  }
  else
  {
    v28 = v3 && objc_msgSend(v7, "count") != 0LL;
    v26 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController defaultCalendarCheckBox](self, "defaultCalendarCheckBox"));
    -[NSPopUpButton setEnabled:](v26, "setEnabled:", v28);
  }
  objc_release(v26);
  if ( v3 )
  {
    v26 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController defaultCalendarPopUpButton](self, "defaultCalendarPopUpButton"));
    v30 = -[NSPopUpButton numberOfItems](v26, "numberOfItems") > 0;
  }
  else
  {
    v30 = 0LL;
  }
  v31 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController defaultCalendarPopUpButton](self, "defaultCalendarPopUpButton"));
  -[NSPopUpButton setEnabled:](v31, "setEnabled:", v30);
  objc_release(v31);
  if ( v3 )
    objc_release(v26);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}