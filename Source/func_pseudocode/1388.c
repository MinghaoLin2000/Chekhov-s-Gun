-[DeviceSettingsMoviesViewController movieUpdateCountFromTag:]
signed __int64 __cdecl -[DeviceSettingsMoviesViewController movieUpdateCountFromTag:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        signed __int64 a3)
{
  __int64 v3; // x8
  __int64 v4; // x9
  signed __int64 v5; // x8

  v3 = 100LL;
  if ( a3 > -100 )
    v3 = 0LL;
  v4 = -100LL;
  if ( a3 < 100 )
    v4 = 0LL;
  if ( a3 >= 0 )
    v3 = v4;
  v5 = v3 + a3;
  if ( a3 == 100 )
    v5 = 0LL;
  if ( a3 )
    return v5;
  else
    return 0LL;
}