-[DeviceSettingsTVShowsViewController episodeCountFromTag:]
signed __int64 __cdecl -[DeviceSettingsTVShowsViewController episodeCountFromTag:](
        DeviceSettingsTVShowsViewController *self,
        SEL a2,
        signed __int64 a3)
{
  __int64 v3; // x8

  v3 = 100LL;
  if ( a3 >= -100 )
    v3 = 0LL;
  if ( a3 > 99 )
    v3 = -100LL;
  return v3 + a3;
}