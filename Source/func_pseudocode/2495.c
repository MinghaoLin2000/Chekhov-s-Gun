-[DeviceBackUpSettingsViewController isDirty]
bool __cdecl -[DeviceBackUpSettingsViewController isDirty](DeviceBackUpSettingsViewController *self, SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  unsigned __int8 v4; // w21
  NSButton *v5; // x19
  bool v6; // w22

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v4 = (unsigned __int8)-[AMPDeviceSyncPrefs backupToCloud](v3, "backupToCloud");
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backUpToCloudRadio](self, "backUpToCloudRadio"));
  v6 = (void *)-[NSButton state](v5, "state") == (void *)1;
  objc_release(v5);
  objc_release(v3);
  return v4 ^ v6;
}