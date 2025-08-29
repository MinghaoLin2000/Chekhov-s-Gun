-[DeviceSettingsInfoViewController viewControllers]
id __cdecl -[DeviceSettingsInfoViewController viewControllers](DeviceSettingsInfoViewController *self, SEL a2)
{
  void *v3; // x19
  DeviceSettingsViewController *v4; // x21
  DeviceSettingsViewController *v5; // x21
  DeviceSettingsViewController *v6; // x21
  DeviceSettingsViewController *v7; // x21
  DeviceSettingsViewController *v8; // x21
  DeviceSettingsViewController *v9; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController contactsViewController](self, "contactsViewController"));
  objc_release(v4);
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController contactsViewController](self, "contactsViewController"));
    objc_msgSend(v3, "addObject:", v5);
    objc_release(v5);
  }
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController calendarsViewController](self, "calendarsViewController"));
  objc_release(v6);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController calendarsViewController](self, "calendarsViewController"));
    objc_msgSend(v3, "addObject:", v7);
    objc_release(v7);
  }
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController advancedViewController](self, "advancedViewController"));
  objc_release(v8);
  if ( v8 )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController advancedViewController](self, "advancedViewController"));
    objc_msgSend(v3, "addObject:", v9);
    objc_release(v9);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}