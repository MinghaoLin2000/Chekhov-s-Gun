-[DeviceSettingsBooksViewController libraryChangedNotification:]
// attributes: thunk
void __cdecl -[DeviceSettingsBooksViewController libraryChangedNotification:](
        DeviceSettingsBooksViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceSettingsViewController reloadModelAndUpdateUIAsync](self, "reloadModelAndUpdateUIAsync", a3);
}