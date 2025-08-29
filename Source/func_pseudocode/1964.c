-[DeviceSettingsPodcastsViewController episodeCountFromTag:]
signed __int64 __cdecl -[DeviceSettingsPodcastsViewController episodeCountFromTag:](
        DeviceSettingsPodcastsViewController *self,
        SEL a2,
        signed __int64 a3)
{
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x10
  __int64 v6; // x11

  v3 = -200LL;
  v4 = -100LL;
  v5 = 200LL;
  v6 = 100LL;
  if ( a3 >= -100 )
    v6 = 0LL;
  if ( a3 >= -200 )
    v5 = v6;
  if ( a3 <= 99 )
    v4 = v5;
  if ( a3 <= 199 )
    v3 = v4;
  return v3 + a3;
}