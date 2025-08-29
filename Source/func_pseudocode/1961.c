-[DeviceSettingsPodcastsViewController isNewTag:]
bool __cdecl -[DeviceSettingsPodcastsViewController isNewTag:](
        DeviceSettingsPodcastsViewController *self,
        SEL a2,
        signed __int64 a3)
{
  unsigned __int64 v3; // x8

  if ( a3 >= 0 )
    v3 = a3;
  else
    v3 = -a3;
  return v3 > 0xC7;
}