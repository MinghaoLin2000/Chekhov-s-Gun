-[DeviceSettingsViewController updatePanelUIState]
void __cdecl -[DeviceSettingsViewController updatePanelUIState](DeviceSettingsViewController *self, SEL a2)
{
  NSButton *v3; // x20
  void *v4; // x21
  _BOOL8 v5; // x2
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  v4 = -[NSButton state](v3, "state");
  objc_release(v3);
  if ( v4 == (void *)1 )
  {
    -[DeviceSettingsViewController setTopViewEnabled:](self, "setTopViewEnabled:", 1LL);
    v5 = -[DeviceSettingsViewController shouldTabViewBeEnabled](self, "shouldTabViewBeEnabled");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceSettingsViewController setTabViewEnabled:](self, "setTabViewEnabled:", v5);
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceSettingsViewController setPanelEnabled:](self, "setPanelEnabled:", 0LL);
  }
}