-[DeviceFinderTabContainerViewController isCloudEnabledForIdentifier:]
bool __cdecl -[DeviceFinderTabContainerViewController isCloudEnabledForIdentifier:](
        DeviceFinderTabContainerViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  AMPDeviceSyncPrefs *v5; // x20
  unsigned __int8 v6; // w0
  bool v7; // w21
  AMPDeviceInfo *v9; // x22
  AMPDeviceInfo *v10; // x23
  void *v11; // x24
  AMPDeviceInfo *v12; // x25

  v4 = objc_retain(a3);
  if ( (unsigned int)objc_msgSend(v4, "isEqualToString:", CFSTR("Music")) )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v6 = (unsigned __int8)-[AMPDeviceSyncPrefs disableMusic](v5, "disableMusic");
LABEL_5:
    v7 = v6;
    goto LABEL_6;
  }
  if ( (unsigned int)objc_msgSend(v4, "isEqualToString:", CFSTR("Photos")) )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v6 = (unsigned __int8)-[AMPDeviceSyncPrefs disablePhotos](v5, "disablePhotos");
    goto LABEL_5;
  }
  if ( !(unsigned int)objc_msgSend(v4, "isEqualToString:", CFSTR("Info")) )
  {
    v7 = 0;
    goto LABEL_7;
  }
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  if ( (unsigned int)-[AMPDeviceSyncPrefs syncingContactsOverTheAir](v5, "syncingContactsOverTheAir") )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    if ( (unsigned int)-[AMPDeviceInfo syncingCalendarsOverTheAir](v9, "syncingCalendarsOverTheAir") )
    {
      v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v11 = -[AMPDeviceInfo contactsOverTheAirSyncSource](v10, "contactsOverTheAirSyncSource");
      v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v7 = v11 == -[AMPDeviceInfo calendarsOverTheAirSyncSource](v12, "calendarsOverTheAirSyncSource");
      objc_release(v12);
      objc_release(v10);
    }
    else
    {
      v7 = 0;
    }
    objc_release(v9);
  }
  else
  {
    v7 = 0;
  }
LABEL_6:
  objc_release(v5);
LABEL_7:
  objc_release(v4);
  return v7;
}