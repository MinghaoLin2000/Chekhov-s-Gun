-[DeviceSettingsPodcastsViewController isUnplayedTag:]
bool __cdecl -[DeviceSettingsPodcastsViewController isUnplayedTag:](
        DeviceSettingsPodcastsViewController *self,
        SEL a2,
        signed __int64 a3)
{
  signed __int64 v3; // x8

  if ( a3 >= 0 )
    v3 = a3;
  else
    v3 = -a3;
  return (unsigned __int64)(v3 - 100) < 0x64;
}