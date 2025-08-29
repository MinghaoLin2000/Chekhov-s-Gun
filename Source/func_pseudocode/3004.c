-[DeviceChooseBackupViewController popUpSelectionChanged:]
void __cdecl -[DeviceChooseBackupViewController popUpSelectionChanged:](
        DeviceChooseBackupViewController *self,
        SEL a2,
        id a3)
{
  NSPopUpButton *v4; // x21
  unsigned __int64 v5; // x20
  NSArray *v6; // x21
  NSUInteger v7; // x22
  NSArray *v8; // x21
  id v9; // x20
  void *v10; // x21
  id v11; // x22
  NSTextField *v12; // x23
  void *v13; // x23
  unsigned int v14; // w24
  NSSecureTextField *v15; // x25
  NSTextField *v16; // x26
  NSSecureTextField *v17; // x26
  _BOOL8 v18; // x27
  NSButton *v19; // x19
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController backupsListPopUpButton](self, "backupsListPopUpButton", a3));
  v5 = -[NSPopUpButton indexOfSelectedItem](v4, "indexOfSelectedItem");
  objc_release(v4);
  if ( (v5 & 0x8000000000000000LL) == 0 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController backups](self, "backups"));
    v7 = -[NSArray count](v6, "count");
    objc_release(v6);
    if ( v5 < v7 )
    {
      v8 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController backups](self, "backups"));
      v9 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v8, "objectAtIndexedSubscript:", v5));
      objc_release(v8);
      -[DeviceChooseBackupViewController setCurrentBackup:](self, "setCurrentBackup:", v9);
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", AMPDeviceBackupLastBackupDateKey));
      v11 = objc_retainAutoreleasedReturnValue(+[NSString displayStringForDate:](&OBJC_CLASS___NSString, "displayStringForDate:", v10));
      if ( v11 )
      {
        v12 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController dateAndTimeOfBackupTextField](self, "dateAndTimeOfBackupTextField"));
        -[NSTextField setStringValue:](v12, "setStringValue:", v11);
        objc_release(v12);
      }
      v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", AMPDeviceBackupIsEncryptedKey));
      v14 = (unsigned int)objc_msgSend(v13, "boolValue");
      v15 = (NSSecureTextField *)(v14 ^ 1);
      v16 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController passwordPromptTextField](self, "passwordPromptTextField"));
      -[NSTextField setHidden:](v16, "setHidden:", v15);
      objc_release(v16);
      v17 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController passwordEntryTextField](self, "passwordEntryTextField"));
      -[NSSecureTextField setHidden:](v17, "setHidden:", v15);
      objc_release(v17);
      if ( (((unsigned __int8)v14 ^ 1) & 1) != 0 )
      {
        v18 = 1LL;
      }
      else
      {
        v15 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController passwordEntryTextField](self, "passwordEntryTextField"));
        v17 = objc_retainAutoreleasedReturnValue(-[NSSecureTextField stringValue](v15, "stringValue"));
        v18 = -[NSSecureTextField length](v17, "length") != 0LL;
      }
      v19 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController restoreButton](self, "restoreButton"));
      -[NSButton setEnabled:](v19, "setEnabled:", v18);
      objc_release(v19);
      if ( v14 )
      {
        objc_release(v17);
        objc_release(v15);
      }
      objc_release(v13);
      objc_release(v11);
      objc_release(v10);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      objc_release(v9);
    }
  }
}