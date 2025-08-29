-[DeviceSettingsMusicViewController removeMesssageTextFormat]
id __cdecl -[DeviceSettingsMusicViewController removeMesssageTextFormat](
        DeviceSettingsMusicViewController *self,
        SEL a2)
{
  return -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("ConfirmDisableSyncMusic %@"));
}