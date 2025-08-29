-[DeviceSettingsInfoViewController loadContactsViewController]
void __cdecl -[DeviceSettingsInfoViewController loadContactsViewController](
        DeviceSettingsInfoViewController *self,
        SEL a2)
{
  AMPDeviceInfo *v3; // x20
  unsigned int v4; // w21
  __int64 v5; // x1
  __objc2_class **v6; // x8
  void *v7; // x20
  DeviceSettingsViewController *v8; // x20
  DeviceSettingsViewController *v9; // x20
  DeviceSettingsViewController *v10; // x20
  void *v11; // x21
  NSView *v12; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v4 = (unsigned int)-[AMPDeviceInfo syncingContactsOverTheAir](v3, "syncingContactsOverTheAir");
  objc_release(v3);
  v6 = off_1000B8690;
  if ( !v4 )
    v6 = &off_1000B8698;
  v7 = (void *)objc_opt_new(*v6, v5);
  -[DeviceSettingsInfoViewController setContactsViewController:](self, "setContactsViewController:", v7);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController contactsViewController](self, "contactsViewController"));
  -[DeviceSettingsViewController setIdentifier:](v8, "setIdentifier:", CFSTR("Contacts"));
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController contactsViewController](self, "contactsViewController"));
  -[DeviceViewController loadPropertiesForViewController:](self, "loadPropertiesForViewController:", v9);
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController contactsViewController](self, "contactsViewController"));
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController view](v10, "view"));
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController contactsContainerView](self, "contactsContainerView"));
  sub_10002ABA4((int)v11, v12);
  objc_release(v12);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v10);
}