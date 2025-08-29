-[DeviceSettingsAdvancedViewController isDirty]
bool __cdecl -[DeviceSettingsAdvancedViewController isDirty](DeviceSettingsAdvancedViewController *self, SEL a2)
{
  NSButton *v3; // x20
  int v4; // w22
  AMPDeviceSyncPrefs *v5; // x20
  unsigned int v6; // w21
  NSButton *v7; // x20
  bool v8; // w21
  AMPDeviceSyncPrefs *v9; // x19

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAdvancedViewController overwriteContactsCheckBox](self, "overwriteContactsCheckBox"));
  v4 = (void *)-[NSButton state](v3, "state") != (void *)1;
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v6 = (unsigned int)-[AMPDeviceSyncPrefs resetContacts](v5, "resetContacts");
  objc_release(v5);
  if ( v4 == v6 )
    return 1;
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAdvancedViewController overwriteCalendarsCheckBox](self, "overwriteCalendarsCheckBox"));
  v8 = (void *)-[NSButton state](v7, "state") == (void *)1;
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  LOBYTE(v7) = (unsigned __int8)-[AMPDeviceSyncPrefs resetCalendars](v9, "resetCalendars");
  objc_release(v9);
  return v8 ^ (unsigned __int8)v7;
}