-[DeviceSettingsMoviesViewController libraryChangedNotification:]
// attributes: thunk
void __cdecl -[DeviceSettingsMoviesViewController libraryChangedNotification:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceSettingsViewController reloadModelAndUpdateUIAsync](self, "reloadModelAndUpdateUIAsync", a3);
}