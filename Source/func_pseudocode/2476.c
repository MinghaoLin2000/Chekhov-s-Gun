-[DeviceBackUpSettingsViewController deviceSyncPrefsDidChange]
void __cdecl -[DeviceBackUpSettingsViewController deviceSyncPrefsDidChange](
        DeviceBackUpSettingsViewController *self,
        SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  unsigned int v4; // w21
  NSButton *v5; // x22
  NSButton *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v4 = (unsigned int)-[AMPDeviceSyncPrefs backupToCloud](v3, "backupToCloud");
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backUpToCloudRadio](self, "backUpToCloudRadio"));
  -[NSButton setState:](v5, "setState:", v4);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backUpToComputerRadio](self, "backUpToComputerRadio"));
  -[NSButton setState:](v6, "setState:", v4 ^ 1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}