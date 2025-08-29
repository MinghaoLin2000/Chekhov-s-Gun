-[DeviceSettingsCalendarsViewController clickSyncDaysLimitCheckBox:]
void __cdecl -[DeviceSettingsCalendarsViewController clickSyncDaysLimitCheckBox:](
        DeviceSettingsCalendarsViewController *self,
        SEL a2,
        id a3)
{
  NSButton *v4; // x20
  void *v5; // x21
  NSBundle *v6; // x0
  NSBundle *v7; // x20
  const __CFString *v8; // x2
  NSString *v9; // x21
  NSTextField *v10; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController syncDaysLimitCheckBox](self, "syncDaysLimitCheckBox", a3));
  v5 = -[NSButton state](v4, "state");
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v7 = v6;
  if ( v5 == (void *)1 )
    v8 = CFSTR("30");
  else
    v8 = CFSTR("0");
  v9 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v6,
           "localizedStringForKey:value:table:",
           v8,
           &stru_1000BA220,
           0LL));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController syncDaysLimitTextField](self, "syncDaysLimitTextField"));
  -[NSTextField setStringValue:](v10, "setStringValue:", v9);
  objc_release(v10);
  objc_release(v9);
  objc_release(v7);
  -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
}