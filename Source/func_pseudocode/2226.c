-[DeviceSettingsCalendarsViewController revert]
void __cdecl -[DeviceSettingsCalendarsViewController revert](DeviceSettingsCalendarsViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[DeviceSettingsCalendarsViewController revertCheckedItemsModel](self, "revertCheckedItemsModel");
  -[DeviceSettingsViewController revertCheckBoxesForTabView](self, "revertCheckBoxesForTabView");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsCalendarsViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}