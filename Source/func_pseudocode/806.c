-[DeviceSettingsViewController viewControllerForTabViewItemWithIdentifier:]
id __cdecl -[DeviceSettingsViewController viewControllerForTabViewItemWithIdentifier:](
        DeviceSettingsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  NSTabView *v5; // x19
  id v6; // x21
  void *v7; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController tabView](self, "tabView"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItemWithIdentifier:](v5, "tabViewItemWithIdentifier:", v4));
  objc_release(v4);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "viewController"));
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}