-[DeviceSettingsAudiobooksViewController removeMesssageTextFormat]
id __cdecl -[DeviceSettingsAudiobooksViewController removeMesssageTextFormat](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2)
{
  return -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("ConfirmDisableSyncAudiobooks %@"));
}