-[DeviceSettingsPodcastsViewController clickAutoIncludePopUpButton:]
void __cdecl -[DeviceSettingsPodcastsViewController clickAutoIncludePopUpButton:](
        DeviceSettingsPodcastsViewController *self,
        SEL a2,
        id a3)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[DeviceSettingsPodcastsViewController updateTrailingTextField](self, "updateTrailingTextField", a3);
  -[DeviceSettingsPodcastsViewController updateTabView](self, "updateTabView");
  -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
}