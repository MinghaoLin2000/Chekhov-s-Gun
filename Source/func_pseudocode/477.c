-[DeviceSettingsTVShowsViewController selectedTabContentViewController]
DeviceSettingsDetailsTabContentViewController *__cdecl -[DeviceSettingsTVShowsViewController selectedTabContentViewController](
        DeviceSettingsTVShowsViewController *self,
        SEL a2)
{
  NSTabView *v2; // x19
  NSTabViewItem *v3; // x20
  NSViewController *v4; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController tabView](self, "tabView"));
  v3 = objc_retainAutoreleasedReturnValue(-[NSTabView selectedTabViewItem](v2, "selectedTabViewItem"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSTabViewItem viewController](v3, "viewController"));
  objc_release(v3);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (DeviceSettingsDetailsTabContentViewController *)objc_autoreleaseReturnValue(v4);
}