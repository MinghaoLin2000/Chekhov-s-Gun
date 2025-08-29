-[DeviceSettingsMoviesViewController isUnwatchedTag:]
bool __cdecl -[DeviceSettingsMoviesViewController isUnwatchedTag:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        signed __int64 a3)
{
  unsigned __int64 v3; // x8

  if ( a3 >= 0 )
    v3 = a3;
  else
    v3 = -a3;
  return v3 > 0x63;
}