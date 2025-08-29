-[DeviceSettingsTVShowsViewController removeMesssageTextFormat]
id __cdecl -[DeviceSettingsTVShowsViewController removeMesssageTextFormat](
        DeviceSettingsTVShowsViewController *self,
        SEL a2)
{
  return -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("ConfirmDisableSyncTVShows %@"));
}