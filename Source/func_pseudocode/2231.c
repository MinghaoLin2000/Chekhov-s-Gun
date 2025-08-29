-[DeviceSettingsCalendarsViewController loadViewControllerForTabViewItem:]
void __cdecl -[DeviceSettingsCalendarsViewController loadViewControllerForTabViewItem:](
        DeviceSettingsCalendarsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x21
  DeviceSettingsInfoTabContentViewController *v5; // x20
  void *v6; // x19
  DeviceSettingsInfoTabContentViewController *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_alloc(&OBJC_CLASS___DeviceSettingsInfoTabContentViewController);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController nibBundle](self, "nibBundle"));
  v7 = -[DeviceSettingsInfoTabContentViewController initWithNibName:bundle:](
         v5,
         "initWithNibName:bundle:",
         CFSTR("DeviceSettingsInfoTabContent"),
         v6);
  objc_release(v6);
  objc_msgSend(v4, "setViewController:", v7);
  -[DeviceSettingsTabContentViewController setTabViewItem:](v7, "setTabViewItem:", v4);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}