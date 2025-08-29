-[DeviceSettingsContactsViewController revert]
void __cdecl -[DeviceSettingsContactsViewController revert](DeviceSettingsContactsViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[DeviceSettingsContactsViewController revertCheckedItemsModel](self, "revertCheckedItemsModel");
  -[DeviceSettingsViewController revertCheckBoxesForTabView](self, "revertCheckBoxesForTabView");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsContactsViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}