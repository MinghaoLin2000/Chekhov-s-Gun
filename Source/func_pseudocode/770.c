-[DeviceSettingsInfoViewController setDevicesClient:]
void __cdecl -[DeviceSettingsInfoViewController setDevicesClient:](
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
  -[DeviceSettingsViewController setDevicesClient:](&v8, "setDevicesClient:", v4);
  v5 = objc_retainAutoreleasedReturnValue(
         -[DeviceSettingsInfoViewController contactsViewController](
           self,
           "contactsViewController",
           v8.receiver,
           v8.super_class));
  -[DeviceSettingsViewController setDevicesClient:](v5, "setDevicesClient:", v4);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController calendarsViewController](self, "calendarsViewController"));
  -[DeviceSettingsViewController setDevicesClient:](v6, "setDevicesClient:", v4);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController advancedViewController](self, "advancedViewController"));
  -[DeviceSettingsViewController setDevicesClient:](v7, "setDevicesClient:", v4);
  objc_release(v4);
  objc_release(v7);
}