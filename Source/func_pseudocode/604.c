-[DeviceSettingsBooksViewController revert]
void __cdecl -[DeviceSettingsBooksViewController revert](DeviceSettingsBooksViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[DeviceSettingsBooksViewController revertBookAndPDFCheckedItemsModel](self, "revertBookAndPDFCheckedItemsModel");
  -[DeviceSettingsViewController revertCheckBoxesForTabView](self, "revertCheckBoxesForTabView");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsBooksViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}