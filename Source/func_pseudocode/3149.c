-[DeviceSettingsMusicViewController shouldWarnAboutRemove]
bool __cdecl -[DeviceSettingsMusicViewController shouldWarnAboutRemove](
        DeviceSettingsMusicViewController *self,
        SEL a2)
{
  NSButton *v3; // x19
  NSControlStateValue v4; // x21
  unsigned __int8 v5; // w20
  AMPDeviceSyncPrefs *v6; // x19
  AMPDeviceSyncPrefs *v7; // x21

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMusicViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  v4 = -[NSButton state](v3, "state");
  objc_release(v3);
  if ( v4 )
    return 0;
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  if ( (unsigned int)-[AMPDeviceSyncPrefs hasSyncedMusic](v6, "hasSyncedMusic") )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v5 = (unsigned __int8)-[AMPDeviceSyncPrefs isHomeMusicLibrary](v7, "isHomeMusicLibrary");
    objc_release(v7);
  }
  else
  {
    v5 = 0;
  }
  objc_release(v6);
  return v5;
}