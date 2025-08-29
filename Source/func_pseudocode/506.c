-[DeviceSettingsTVShowsViewController libraryChangedNotification:]
// attributes: thunk
void __cdecl -[DeviceSettingsTVShowsViewController libraryChangedNotification:](
        DeviceSettingsTVShowsViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceSettingsViewController reloadModelAndUpdateUIAsync](self, "reloadModelAndUpdateUIAsync", a3);
}