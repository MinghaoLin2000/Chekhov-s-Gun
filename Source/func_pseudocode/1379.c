-[DeviceSettingsMoviesViewController revert]
void __cdecl -[DeviceSettingsMoviesViewController revert](DeviceSettingsMoviesViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[DeviceSettingsMoviesViewController revertCheckedItemsModel](self, "revertCheckedItemsModel");
  -[DeviceSettingsMoviesViewController revertRentalsModel](self, "revertRentalsModel");
  -[DeviceSettingsViewController revertCheckBoxesForTabView](self, "revertCheckBoxesForTabView");
  -[DeviceSettingsMoviesViewController revertRentalsView](self, "revertRentalsView");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsMoviesViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}