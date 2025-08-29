-[DeviceSettingsMoviesViewController tagWithMovieUpdateMode:movieCount:]
signed __int64 __cdecl -[DeviceSettingsMoviesViewController tagWithMovieUpdateMode:movieCount:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        unsigned __int64 a3,
        signed __int64 a4)
{
  if ( a3 != 3 )
  {
    if ( a3 == 4 )
      return -[DeviceSettingsMoviesViewController tagWithMovieUpdateCount:unwatched:](
               self,
               "tagWithMovieUpdateCount:unwatched:",
               a4,
               1LL);
    return 0LL;
  }
  return a4;
}