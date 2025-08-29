-[DeviceSettingsPodcastsViewController tagWithEpisodeCount:unplayed:newer:]
signed __int64 __cdecl -[DeviceSettingsPodcastsViewController tagWithEpisodeCount:unplayed:newer:](
        DeviceSettingsPodcastsViewController *self,
        SEL a2,
        signed __int64 a3,
        bool a4,
        bool a5)
{
  __int64 v5; // x8
  __int64 v6; // x9

  v5 = -200LL;
  if ( a3 >= 0 )
    v5 = 200LL;
  if ( !a5 )
    v5 = 0LL;
  v6 = -100LL;
  if ( a3 >= 0 )
    v6 = 100LL;
  if ( a4 )
    v5 = v6;
  return v5 + a3;
}