-[DeviceSettingsContactsViewController clickDefaultGroupPopUpButton:]
void __cdecl -[DeviceSettingsContactsViewController clickDefaultGroupPopUpButton:](
        DeviceSettingsContactsViewController *self,
        SEL a2,
        id a3)
{
  NSPopUpButton *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController defaultGroupPopUpButton](self, "defaultGroupPopUpButton", a3));
  -[DeviceSettingsContactsViewController setDeviceDefaultContactGroup:](
    self,
    "setDeviceDefaultContactGroup:",
    -[NSPopUpButton selectedTag](v4, "selectedTag"));
  objc_release(v4);
  -[DeviceSettingsContactsViewController updateDefaultContactGroupUI](self, "updateDefaultContactGroupUI");
  -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
}