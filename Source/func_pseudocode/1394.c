-[DeviceSettingsMoviesViewController shouldWarnAboutRemove]
bool __cdecl -[DeviceSettingsMoviesViewController shouldWarnAboutRemove](
        DeviceSettingsMoviesViewController *self,
        SEL a2)
{
  NSButton *v3; // x20
  NSControlStateValue v4; // x21
  AMPDeviceSyncPrefs *v6; // x19
  unsigned __int8 v7; // w20

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  v4 = -[NSButton state](v3, "state");
  objc_release(v3);
  if ( v4 )
    return 0;
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v7 = (unsigned __int8)-[AMPDeviceSyncPrefs hasSyncedMovies](v6, "hasSyncedMovies");
  objc_release(v6);
  return v7;
}