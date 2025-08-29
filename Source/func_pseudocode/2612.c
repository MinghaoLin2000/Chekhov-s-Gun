-[DeviceSettingsContactsViewController clickDefaultGroupCheckBox:]
void __cdecl -[DeviceSettingsContactsViewController clickDefaultGroupCheckBox:](
        DeviceSettingsContactsViewController *self,
        SEL a2,
        id a3)
{
  NSButton *v4; // x20
  NSControlStateValue v5; // x21
  NSMutableDictionary *v6; // x21
  void *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController defaultGroupCheckBox](self, "defaultGroupCheckBox", a3));
  v5 = -[NSButton state](v4, "state");
  objc_release(v4);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
    v7 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v6, "objectForKeyedSubscript:", CFSTR("Groups")));
    objc_release(v6);
    if ( objc_msgSend(v7, "count") )
      -[DeviceSettingsContactsViewController setDeviceDefaultContactGroup:](self, "setDeviceDefaultContactGroup:", 0LL);
    objc_release(v7);
  }
  else
  {
    -[DeviceSettingsContactsViewController setDeviceDefaultContactGroup:](
      self,
      "setDeviceDefaultContactGroup:",
      0x7FFFFFFFFFFFFFFFLL);
  }
  -[DeviceSettingsContactsViewController updateDefaultContactGroupUI](self, "updateDefaultContactGroupUI");
  -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
}