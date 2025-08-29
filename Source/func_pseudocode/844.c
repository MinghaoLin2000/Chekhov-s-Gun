-[DeviceSettingsViewController setDeviceSyncPrefs:]
void __cdecl -[DeviceSettingsViewController setDeviceSyncPrefs:](DeviceSettingsViewController *self, SEL a2, id a3)
{
  id v4; // x20
  AMPDeviceSyncPrefs *v5; // x21
  objc_super v6; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  objc_release(v5);
  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___DeviceSettingsViewController;
  -[DeviceViewController setDeviceSyncPrefs:](&v6, "setDeviceSyncPrefs:", v4);
  objc_release(v4);
  if ( v5 )
    -[DeviceViewController revert](self, "revert");
  -[DeviceSettingsViewController setWarnedAutomaticUpdate:](self, "setWarnedAutomaticUpdate:", 0LL);
}