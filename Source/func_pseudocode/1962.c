-[DeviceSettingsPodcastsViewController episodeActionFromTag:]
unsigned __int64 __cdecl -[DeviceSettingsPodcastsViewController episodeActionFromTag:](
        DeviceSettingsPodcastsViewController *self,
        SEL a2,
        signed __int64 a3)
{
  if ( -[DeviceSettingsPodcastsViewController isUnplayedTag:](self, "isUnplayedTag:") )
    return 4LL;
  if ( -[DeviceSettingsPodcastsViewController isNewTag:](self, "isNewTag:", a3) )
    return 3LL;
  return 0LL;
}