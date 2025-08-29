-[DeviceSettingsViewController setPanelEnabled:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceSettingsViewController setPanelEnabled:](DeviceSettingsViewController *self, SEL a2, bool a3)
{
  _BOOL8 v3; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = a3;
  -[DeviceSettingsViewController setTopViewEnabled:](self, "setTopViewEnabled:");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsViewController setTabViewEnabled:](self, "setTabViewEnabled:", v3);
}