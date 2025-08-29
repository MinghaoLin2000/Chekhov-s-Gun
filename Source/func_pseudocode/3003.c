-[DeviceChooseBackupViewController clickRestoreButton:]
void __cdecl -[DeviceChooseBackupViewController clickRestoreButton:](
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
  NSSecureTextField *v11; // x22
  void *v12; // x23
  void *v13; // x19
  void *v14; // x22
  void *v15; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  -[DeviceChooseBackupViewController setBackupPassword:](self, "setBackupPassword:", 0LL);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController backupsListPopUpButton](self, "backupsListPopUpButton"));
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
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", AMPDeviceBackupIsEncryptedKey));
      if ( (unsigned int)objc_msgSend(v10, "boolValue") )
      {
        v11 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController passwordEntryTextField](self, "passwordEntryTextField"));
        v12 = objc_retainAutoreleasedReturnValue(-[NSSecureTextField stringValue](v11, "stringValue"));
        -[DeviceChooseBackupViewController setBackupPassword:](self, "setBackupPassword:", v12);
        objc_release(v12);
        objc_release(v11);
      }
      v13 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController view](self, "view"));
      v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "window"));
      objc_release(v13);
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "sheetParent"));
      objc_msgSend(v15, "endSheet:returnCode:", v14, 1LL);
      objc_release(v15);
      objc_release(v14);
      objc_release(v10);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      objc_release(v9);
    }
  }
}