-[DeviceSettingsPodcastsViewController removeMesssageTextFormat]
id __cdecl -[DeviceSettingsPodcastsViewController removeMesssageTextFormat](
        DeviceSettingsPodcastsViewController *self,
        SEL a2)
{
  return -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("ConfirmDisableSyncPodcasts %@"));
}