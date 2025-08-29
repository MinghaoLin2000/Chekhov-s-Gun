-[DeviceSettingsPodcastsViewController libraryChangedNotification:]
// attributes: thunk
void __cdecl -[DeviceSettingsPodcastsViewController libraryChangedNotification:](
        DeviceSettingsPodcastsViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceSettingsViewController reloadModelAndUpdateUIAsync](self, "reloadModelAndUpdateUIAsync", a3);
}