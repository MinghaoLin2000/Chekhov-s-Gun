-[DeviceSetupViewController popUpSelectionChanged:]
void __cdecl -[DeviceSetupViewController popUpSelectionChanged:](DeviceSetupViewController *self, SEL a2, id a3)
{
  NSPopUpButton *v4; // x21
  unsigned __int64 v5; // x20
  NSArray *v6; // x21
  NSUInteger v7; // x22
  NSArray *v8; // x21
  id v9; // x20
  NSDictionary *v10; // x21
  id v11; // x20
  id v12; // x21
  NSBundle *v13; // x23
  NSString *v14; // x24
  NSString *v15; // x22
  NSTextField *v16; // x19
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController backupsListPopUpButton](self, "backupsListPopUpButton", a3));
  v5 = -[NSPopUpButton indexOfSelectedItem](v4, "indexOfSelectedItem");
  objc_release(v4);
  if ( (v5 & 0x8000000000000000LL) == 0 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController backups](self, "backups"));
    v7 = -[NSArray count](v6, "count");
    objc_release(v6);
    if ( v5 < v7 )
    {
      v8 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController backups](self, "backups"));
      v9 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v8, "objectAtIndexedSubscript:", v5));
      -[DeviceSetupViewController setCurrentBackup:](self, "setCurrentBackup:", v9);
      objc_release(v9);
      objc_release(v8);
      v10 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController currentBackup](self, "currentBackup"));
      v11 = objc_retainAutoreleasedReturnValue(
              -[NSDictionary objectForKeyedSubscript:](
                v10,
                "objectForKeyedSubscript:",
                AMPDeviceBackupLastBackupDateKey));
      objc_release(v10);
      if ( v11 )
      {
        v12 = objc_retainAutoreleasedReturnValue(+[NSString displayStringForDate:](&OBJC_CLASS___NSString, "displayStringForDate:", v11));
        if ( v12 )
        {
          v13 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
          v14 = objc_retainAutoreleasedReturnValue(
                  -[NSBundle localizedStringForKey:value:table:](
                    v13,
                    "localizedStringForKey:value:table:",
                    CFSTR("Last Backed Up: %@"),
                    &stru_1000BA220,
                    0LL));
          v15 = objc_retainAutoreleasedReturnValue(+[NSString localizedStringWithFormat:](&OBJC_CLASS___NSString, "localizedStringWithFormat:", v14, v12));
          objc_release(v14);
          objc_release(v13);
          v16 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController dateAndTimeOfLastBackUpLabel](self, "dateAndTimeOfLastBackUpLabel"));
          -[NSTextField setStringValue:](v16, "setStringValue:", v15);
          objc_release(v16);
          objc_release(v15);
        }
        objc_release(v12);
      }
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      objc_release(v11);
    }
  }
}