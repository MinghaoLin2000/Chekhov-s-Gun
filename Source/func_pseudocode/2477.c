-[DeviceBackUpSettingsViewController setDeviceSyncPrefs:]
void __cdecl -[DeviceBackUpSettingsViewController setDeviceSyncPrefs:](
        DeviceBackUpSettingsViewController *self,
        SEL a2,
        id a3)
{
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___DeviceBackUpSettingsViewController;
  -[DeviceViewController setDeviceSyncPrefs:](&v4, "setDeviceSyncPrefs:", a3);
  -[DeviceBackUpSettingsViewController deviceSyncPrefsDidChange](self, "deviceSyncPrefsDidChange");
}