-[DeviceSettingsBooksViewController shouldWarnAboutSwitchHomeLibrary]
bool __cdecl -[DeviceSettingsBooksViewController shouldWarnAboutSwitchHomeLibrary](
        DeviceSettingsBooksViewController *self,
        SEL a2)
{
  AMPDeviceInfo *v2; // x22
  NSButton *v4; // x19
  AMPDeviceSyncPrefs *v5; // x20
  AMPDeviceSyncPrefs *v6; // x19
  AMPDeviceSyncPrefs *v7; // x23
  char v8; // w26
  char v9; // w25
  AMPDeviceSyncPrefs *v10; // x24
  unsigned int v11; // w21

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsBooksViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  v5 = -[NSButton state](v4, "state");
  objc_release(v4);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v7 = (AMPDeviceSyncPrefs *)-[AMPDeviceSyncPrefs automaticUpdateMode](v6, "automaticUpdateMode");
    if ( ((unsigned __int8)v7 & 1) != 0
      || (v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs")),
          ((unsigned int)-[AMPDeviceSyncPrefs hasSyncedTracks](v5, "hasSyncedTracks") & 1) == 0) )
    {
      v2 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      if ( !(unsigned int)-[AMPDeviceInfo supportsManualMode](v2, "supportsManualMode") )
      {
        objc_release(v2);
        LOBYTE(v11) = 0;
        if ( ((unsigned __int8)v7 & 1) != 0 )
          goto LABEL_17;
        goto LABEL_16;
      }
      v9 = (unsigned __int8)v7 ^ 1;
      v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
      if ( !(unsigned int)-[AMPDeviceSyncPrefs hasSyncedBooks](v7, "hasSyncedBooks") )
      {
        LOBYTE(v11) = 0;
        goto LABEL_14;
      }
      v8 = 1;
    }
    else
    {
      v8 = 0;
      v9 = 1;
    }
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v11 = (unsigned int)-[AMPDeviceSyncPrefs updateBooks](v10, "updateBooks") ^ 1;
    objc_release(v10);
    if ( (v8 & 1) == 0 )
    {
LABEL_15:
      if ( (v9 & 1) == 0 )
      {
LABEL_17:
        objc_release(v6);
        return v11;
      }
LABEL_16:
      objc_release(v5);
      goto LABEL_17;
    }
LABEL_14:
    objc_release(v7);
    objc_release(v2);
    goto LABEL_15;
  }
  LOBYTE(v11) = 0;
  return v11;
}