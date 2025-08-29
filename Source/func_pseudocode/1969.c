-[DeviceSettingsPodcastsViewController switchHomeLibraryMessageTextFormat]
id __cdecl -[DeviceSettingsPodcastsViewController switchHomeLibraryMessageTextFormat](
        DeviceSettingsPodcastsViewController *self,
        SEL a2)
{
  return -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("SwitchPodcastHomeLibraryPrompt %@"));
}