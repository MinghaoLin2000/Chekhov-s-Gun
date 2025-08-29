-[DeviceBackUpSettingsViewController updateButtonStates]
void __cdecl -[DeviceBackUpSettingsViewController updateButtonStates](DeviceBackUpSettingsViewController *self, SEL a2)
{
  AMPDevicesClient *v3; // x21
  AMPDevice *v4; // x22
  void *v5; // x20
  NSButton *v6; // x21
  NSButton *v7; // x21
  NSButton *v8; // x21
  __int64 v9; // x22
  NSButton *v10; // x23
  _BOOL8 v11; // x22
  NSButton *v12; // x23
  _BOOL8 v13; // x22
  NSButton *v14; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v5 = -[AMPDevicesClient isSyncEnabledForDevice:](v3, "isSyncEnabledForDevice:", v4);
  objc_release(v4);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backUpToCloudRadio](self, "backUpToCloudRadio"));
  -[NSButton setEnabled:](v6, "setEnabled:", v5);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backUpToComputerRadio](self, "backUpToComputerRadio"));
  -[NSButton setEnabled:](v7, "setEnabled:", v5);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController encryptBackupCheckBox](self, "encryptBackupCheckBox"));
  -[NSButton setEnabled:](v8, "setEnabled:", v5);
  objc_release(v8);
  if ( (_DWORD)v5 )
  {
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v9 = (unsigned int)-[NSButton disableBackup](v8, "disableBackup") ^ 1;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backUpNowButton](self, "backUpNowButton"));
  -[NSButton setEnabled:](v10, "setEnabled:", v9);
  objc_release(v10);
  if ( (_DWORD)v5 )
  {
    objc_release(v8);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v11 = ((unsigned int)-[NSButton disableRestoreFromBackup](v8, "disableRestoreFromBackup") & 1) == 0
       && -[DeviceBackUpSettingsViewController cachedHasLocalBackups](self, "cachedHasLocalBackups");
  }
  else
  {
    v11 = 0LL;
  }
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController restoreBackUpButton](self, "restoreBackUpButton"));
  -[NSButton setEnabled:](v12, "setEnabled:", v11);
  objc_release(v12);
  if ( (_DWORD)v5 )
  {
    objc_release(v8);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController encryptBackupCheckBox](self, "encryptBackupCheckBox"));
    v13 = (void *)-[NSButton state](v8, "state") == (void *)1;
  }
  else
  {
    v13 = 0LL;
  }
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController changePasswordButton](self, "changePasswordButton"));
  -[NSButton setEnabled:](v14, "setEnabled:", v13);
  objc_release(v14);
  if ( (_DWORD)v5 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v8);
  }
}