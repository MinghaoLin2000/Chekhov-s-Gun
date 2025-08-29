-[DeviceSettingsPodcastsViewController clickAutoIncludeCheckBox:]
void __cdecl -[DeviceSettingsPodcastsViewController clickAutoIncludeCheckBox:](
        DeviceSettingsPodcastsViewController *self,
        SEL a2,
        id a3)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[DeviceSettingsPodcastsViewController updateTabView](self, "updateTabView", a3);
  -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
}