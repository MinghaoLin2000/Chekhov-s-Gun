-[DeviceSettingsAdvancedViewController loadUIFromPrefs]
void __cdecl -[DeviceSettingsAdvancedViewController loadUIFromPrefs](
        DeviceSettingsAdvancedViewController *self,
        SEL a2)
{
  AMPDeviceInfo *v3; // x20
  __int64 v4; // x21
  NSButton *v5; // x22
  AMPDeviceInfo *v6; // x20
  __int64 v7; // x21
  NSButton *v8; // x22
  NSButton *v9; // x20
  NSButton *v10; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (unsigned int)-[DeviceSettingsAdvancedViewController isViewLoaded](self, "isViewLoaded") )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v4 = (unsigned int)-[AMPDeviceInfo syncingContactsOverTheAir](v3, "syncingContactsOverTheAir") ^ 1;
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAdvancedViewController overwriteContactsCheckBox](self, "overwriteContactsCheckBox"));
    -[NSButton setEnabled:](v5, "setEnabled:", v4);
    objc_release(v5);
    objc_release(v3);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v7 = (unsigned int)-[AMPDeviceInfo syncingCalendarsOverTheAir](v6, "syncingCalendarsOverTheAir") ^ 1;
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAdvancedViewController overwriteCalendarsCheckBox](self, "overwriteCalendarsCheckBox"));
    -[NSButton setEnabled:](v8, "setEnabled:", v7);
    objc_release(v8);
    objc_release(v6);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAdvancedViewController overwriteContactsCheckBox](self, "overwriteContactsCheckBox"));
    -[NSButton setState:](v9, "setState:", 0LL);
    objc_release(v9);
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAdvancedViewController overwriteCalendarsCheckBox](self, "overwriteCalendarsCheckBox"));
    -[NSButton setState:](v10, "setState:", 0LL);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v10);
  }
}