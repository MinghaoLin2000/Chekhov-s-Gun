-[DeviceSettingsMoviesViewController removeMesssageTextFormat]
id __cdecl -[DeviceSettingsMoviesViewController removeMesssageTextFormat](
        DeviceSettingsMoviesViewController *self,
        SEL a2)
{
  return -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("ConfirmDisableSyncMovies %@"));
}