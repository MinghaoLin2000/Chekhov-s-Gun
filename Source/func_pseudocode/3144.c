-[DeviceSettingsMusicViewController revert]
void __cdecl -[DeviceSettingsMusicViewController revert](DeviceSettingsMusicViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[DeviceSettingsMusicViewController revertCheckedItemsModel](self, "revertCheckedItemsModel");
  -[DeviceSettingsViewController revertCheckBoxesForTabView](self, "revertCheckBoxesForTabView");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsMusicViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}