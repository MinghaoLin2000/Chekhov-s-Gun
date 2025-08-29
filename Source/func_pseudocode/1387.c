-[DeviceSettingsMoviesViewController movieUpdateModeFromTag:]
unsigned __int64 __cdecl -[DeviceSettingsMoviesViewController movieUpdateModeFromTag:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        signed __int64 a3)
{
  if ( !a3 )
    return 1LL;
  if ( -[DeviceSettingsMoviesViewController isUnwatchedTag:](self, "isUnwatchedTag:") )
    return 4LL;
  return 3LL;
}