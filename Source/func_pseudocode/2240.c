-[DeviceSettingsCalendarsViewController clickDefaultCalendarPopUpButton:]
void __cdecl -[DeviceSettingsCalendarsViewController clickDefaultCalendarPopUpButton:](
        DeviceSettingsCalendarsViewController *self,
        SEL a2,
        id a3)
{
  NSPopUpButton *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController defaultCalendarPopUpButton](self, "defaultCalendarPopUpButton", a3));
  -[DeviceSettingsCalendarsViewController setDeviceDefaultCalendar:](
    self,
    "setDeviceDefaultCalendar:",
    -[NSPopUpButton selectedTag](v4, "selectedTag"));
  objc_release(v4);
  -[DeviceSettingsCalendarsViewController updateDefaultCalendarUI](self, "updateDefaultCalendarUI");
  -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
}