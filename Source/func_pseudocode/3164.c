-[DeviceSettingsMusicViewController libraryChangedNotification:]
// attributes: thunk
void __cdecl -[DeviceSettingsMusicViewController libraryChangedNotification:](
        DeviceSettingsMusicViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceSettingsViewController reloadModelAndUpdateUIAsync](self, "reloadModelAndUpdateUIAsync", a3);
}