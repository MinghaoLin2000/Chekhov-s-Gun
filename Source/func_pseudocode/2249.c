-[DeviceSettingsCalendarsViewController controlTextDidEndEditing:]
void __cdecl -[DeviceSettingsCalendarsViewController controlTextDidEndEditing:](
        DeviceSettingsCalendarsViewController *self,
        SEL a2,
        id a3)
{
  NSTextField *v4; // x20
  void *v5; // x21
  NSButton *v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController syncDaysLimitTextField](self, "syncDaysLimitTextField", a3));
  v5 = -[NSTextField integerValue](v4, "integerValue");
  objc_release(v4);
  if ( !v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController syncDaysLimitCheckBox](self, "syncDaysLimitCheckBox"));
    -[NSButton setState:](v6, "setState:", 0LL);
    objc_release(v6);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  }
}