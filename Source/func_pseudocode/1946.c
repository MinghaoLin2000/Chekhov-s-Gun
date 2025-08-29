-[DeviceSettingsPodcastsViewController revert]
void __cdecl -[DeviceSettingsPodcastsViewController revert](DeviceSettingsPodcastsViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[DeviceSettingsPodcastsViewController revertCheckedItemsModel](self, "revertCheckedItemsModel");
  -[DeviceSettingsPodcastsViewController revertCheckBoxesForTabView](self, "revertCheckBoxesForTabView");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsPodcastsViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}