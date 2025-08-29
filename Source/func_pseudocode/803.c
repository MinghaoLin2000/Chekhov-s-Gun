-[DeviceSettingsViewController isDirty]
bool __cdecl -[DeviceSettingsViewController isDirty](DeviceSettingsViewController *self, SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  void *v4; // x21
  AMPDeviceSyncPrefs *v5; // x19
  char v6; // w19

  if ( !(unsigned int)-[DeviceSettingsViewController isViewLoaded](self, "isViewLoaded") )
    return 0;
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v4 = -[AMPDeviceSyncPrefs copy](v3, "copy");
  objc_release(v3);
  -[DeviceSettingsViewController saveToDeviceSyncPrefs:](self, "saveToDeviceSyncPrefs:", v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  LOBYTE(v3) = (unsigned __int8)objc_msgSend(v4, "isEqual:", v5);
  objc_release(v5);
  v6 = (unsigned __int8)v3 ^ 1;
  objc_release(v4);
  return v6;
}