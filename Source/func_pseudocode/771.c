-[DeviceSettingsInfoViewController setDeviceSyncPrefs:]
void __cdecl -[DeviceSettingsInfoViewController setDeviceSyncPrefs:](
        DeviceSettingsInfoViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x21
  DeviceSettingsViewController *v5; // x20
  DeviceSettingsViewController *v6; // x20
  DeviceSettingsViewController *v7; // x19
  objc_super v8; // [xsp+0h] [xbp-30h] BYREF

  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___DeviceSettingsInfoViewController;
  v4 = objc_retain(a3);
  -[DeviceSettingsViewController setDeviceSyncPrefs:](&v8, "setDeviceSyncPrefs:", v4);
  v5 = objc_retainAutoreleasedReturnValue(
         -[DeviceSettingsInfoViewController contactsViewController](
           self,
           "contactsViewController",
           v8.receiver,
           v8.super_class));
  -[DeviceSettingsViewController setDeviceSyncPrefs:](v5, "setDeviceSyncPrefs:", v4);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController calendarsViewController](self, "calendarsViewController"));
  -[DeviceSettingsViewController setDeviceSyncPrefs:](v6, "setDeviceSyncPrefs:", v4);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController advancedViewController](self, "advancedViewController"));
  -[DeviceSettingsViewController setDeviceSyncPrefs:](v7, "setDeviceSyncPrefs:", v4);
  objc_release(v4);
  objc_release(v7);
}