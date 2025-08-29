-[DeviceSettingsMoviesViewController tagWithMovieUpdateCount:unwatched:]
signed __int64 __cdecl -[DeviceSettingsMoviesViewController tagWithMovieUpdateCount:unwatched:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        signed __int64 a3,
        bool a4)
{
  __int64 v4; // x8

  v4 = -100LL;
  if ( a3 >= 0 )
    v4 = 100LL;
  if ( !a4 )
    v4 = 0LL;
  return v4 + a3;
}