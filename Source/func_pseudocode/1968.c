-[DeviceSettingsPodcastsViewController shouldWarnAboutSwitchHomeLibrary]
bool __cdecl -[DeviceSettingsPodcastsViewController shouldWarnAboutSwitchHomeLibrary](
        DeviceSettingsPodcastsViewController *self,
        SEL a2)
{
  NSButton *v3; // x19
  AMPDeviceInfo *v4; // x20
  AMPDeviceSyncPrefs *v5; // x19
  unsigned __int8 v6; // w21
  unsigned __int8 v7; // w22
  AMPDeviceSyncPrefs *v8; // x23
  AMPDeviceSyncPrefs *v9; // x24

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  v4 = -[NSButton state](v3, "state");
  objc_release(v3);
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v6 = (unsigned __int8)-[AMPDeviceSyncPrefs automaticUpdateMode](v5, "automaticUpdateMode");
    if ( (v6 & 1) != 0
      || (v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo")),
          ((unsigned int)-[AMPDeviceInfo supportsManualMode](v4, "supportsManualMode") & 1) == 0) )
    {
      v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
      if ( ((unsigned int)-[AMPDeviceSyncPrefs isHomePodcastLibrary](v8, "isHomePodcastLibrary") & 1) != 0 )
      {
        objc_release(v8);
        v7 = 0;
        if ( (v6 & 1) != 0 )
          goto LABEL_11;
      }
      else
      {
        v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
        v7 = (unsigned __int8)-[AMPDeviceSyncPrefs hasSyncedPodcasts](v9, "hasSyncedPodcasts");
        objc_release(v9);
        objc_release(v8);
        if ( (v6 & 1) != 0 )
        {
LABEL_11:
          objc_release(v5);
          return v7;
        }
      }
    }
    else
    {
      v7 = 0;
    }
    objc_release(v4);
    goto LABEL_11;
  }
  return 0;
}