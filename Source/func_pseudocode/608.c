-[DeviceSettingsBooksViewController removeMesssageTextFormat]
id __cdecl -[DeviceSettingsBooksViewController removeMesssageTextFormat](
        DeviceSettingsBooksViewController *self,
        SEL a2)
{
  return -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("ConfirmDisableSyncBooks %@"));
}