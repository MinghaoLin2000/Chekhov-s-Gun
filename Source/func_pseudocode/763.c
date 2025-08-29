-[DeviceSettingsInfoViewController reloadUI]
void __cdecl -[DeviceSettingsInfoViewController reloadUI](DeviceSettingsInfoViewController *self, SEL a2)
{
  DeviceSettingsViewController *v3; // x20
  void *v4; // x21
  DeviceSettingsViewController *v5; // x20
  void *v6; // x21
  DeviceSettingsViewController *v7; // x20
  void *v8; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController contactsViewController](self, "contactsViewController"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController view](v3, "view"));
  objc_msgSend(v4, "removeFromSuperview");
  objc_release(v4);
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController calendarsViewController](self, "calendarsViewController"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController view](v5, "view"));
  objc_msgSend(v6, "removeFromSuperview");
  objc_release(v6);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController advancedViewController](self, "advancedViewController"));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController view](v7, "view"));
  objc_msgSend(v8, "removeFromSuperview");
  objc_release(v8);
  objc_release(v7);
  -[DeviceSettingsInfoViewController loadContactsViewController](self, "loadContactsViewController");
  -[DeviceSettingsInfoViewController loadCalendarViewController](self, "loadCalendarViewController");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsInfoViewController loadAdvancedViewController](self, "loadAdvancedViewController");
}