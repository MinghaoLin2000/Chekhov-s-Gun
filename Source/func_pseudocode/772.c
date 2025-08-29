-[DeviceSettingsInfoViewController setDeviceInfo:]
void __cdecl -[DeviceSettingsInfoViewController setDeviceInfo:](DeviceSettingsInfoViewController *self, SEL a2, id a3)
{
  id v4; // x19
  AMPDeviceInfo *v5; // x22
  unsigned int v6; // w21
  AMPDeviceInfo *v7; // x23
  unsigned int v8; // w22
  DeviceSettingsViewController *v9; // x23
  DeviceSettingsViewController *v10; // x23
  DeviceSettingsViewController *v11; // x23
  objc_super v12; // [xsp+0h] [xbp-40h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v6 = (unsigned int)-[AMPDeviceInfo syncingContactsOverTheAir](v5, "syncingContactsOverTheAir");
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v8 = (unsigned int)-[AMPDeviceInfo syncingCalendarsOverTheAir](v7, "syncingCalendarsOverTheAir");
  objc_release(v7);
  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___DeviceSettingsInfoViewController;
  -[DeviceViewController setDeviceInfo:](&v12, "setDeviceInfo:", v4);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController contactsViewController](self, "contactsViewController"));
  -[DeviceViewController setDeviceInfo:](v9, "setDeviceInfo:", v4);
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController calendarsViewController](self, "calendarsViewController"));
  -[DeviceViewController setDeviceInfo:](v10, "setDeviceInfo:", v4);
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController advancedViewController](self, "advancedViewController"));
  -[DeviceViewController setDeviceInfo:](v11, "setDeviceInfo:", v4);
  objc_release(v11);
  if ( v6 != (unsigned int)objc_msgSend(v4, "syncingContactsOverTheAir")
    || v8 != (unsigned int)objc_msgSend(v4, "syncingCalendarsOverTheAir") )
  {
    -[DeviceSettingsViewController reloadModelAndUpdateUIAsync](self, "reloadModelAndUpdateUIAsync");
  }
  objc_release(v4);
}