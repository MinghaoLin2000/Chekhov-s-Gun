-[DeviceSettingsTVShowsViewController revert]
void __cdecl -[DeviceSettingsTVShowsViewController revert](DeviceSettingsTVShowsViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[DeviceSettingsTVShowsViewController revertCheckedItemsModel](self, "revertCheckedItemsModel");
  -[DeviceSettingsTVShowsViewController revertCheckBoxesForTabView](self, "revertCheckBoxesForTabView");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsTVShowsViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}