-[DeviceSettingsAudiobooksViewController libraryChangedNotification:]
// attributes: thunk
void __cdecl -[DeviceSettingsAudiobooksViewController libraryChangedNotification:](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2,
        id a3)
{
  -[DeviceSettingsViewController reloadModelAndUpdateUIAsync](self, "reloadModelAndUpdateUIAsync", a3);
}