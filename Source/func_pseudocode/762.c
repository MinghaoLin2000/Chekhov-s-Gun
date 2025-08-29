-[DeviceSettingsInfoViewController loadAdvancedViewController]
void __cdecl -[DeviceSettingsInfoViewController loadAdvancedViewController](
        DeviceSettingsInfoViewController *self,
        SEL a2)
{
  void *v3; // x20
  DeviceSettingsViewController *v4; // x20
  DeviceSettingsViewController *v5; // x20
  void *v6; // x21
  NSView *v7; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = (void *)objc_opt_new(&OBJC_CLASS___DeviceSettingsAdvancedViewController, a2);
  -[DeviceSettingsInfoViewController setAdvancedViewController:](self, "setAdvancedViewController:", v3);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController advancedViewController](self, "advancedViewController"));
  -[DeviceViewController loadPropertiesForViewController:](self, "loadPropertiesForViewController:", v4);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController advancedViewController](self, "advancedViewController"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController view](v5, "view"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController advancedContainerView](self, "advancedContainerView"));
  sub_10002ABA4((int)v6, v7);
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}