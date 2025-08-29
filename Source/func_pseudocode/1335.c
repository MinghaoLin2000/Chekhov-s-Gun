-[DeviceModeMediaViewController didChangeDeviceSyncPrefs:forDeviceWithIdentifier:]
void __cdecl -[DeviceModeMediaViewController didChangeDeviceSyncPrefs:forDeviceWithIdentifier:](
        DeviceModeMediaViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x20
  id v7; // x21
  AMPDevice *v8; // x22
  void *v9; // x23
  unsigned int v10; // w24
  AMPDeviceSyncPrefs *v11; // x21
  unsigned __int8 v12; // w22
  AMPDeviceSyncPrefs *v13; // x21
  unsigned __int8 v14; // w22
  void *v15; // x21
  DeviceHeaderViewController *v16; // x21
  AMPDeviceSyncPrefs *v17; // x21
  unsigned int v18; // w22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v9 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v8, "deviceIdentifier"));
  v10 = (unsigned int)objc_msgSend(v7, "isEqualToString:", v9);
  objc_release(v7);
  objc_release(v9);
  objc_release(v8);
  if ( v10 )
  {
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v12 = (unsigned __int8)-[AMPDeviceSyncPrefs isEqual:](v11, "isEqual:", v6);
    objc_release(v11);
    if ( (v12 & 1) == 0 )
    {
      v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
      v14 = (unsigned __int8)-[AMPDeviceSyncPrefs configured](v13, "configured");
      objc_release(v13);
      -[DeviceViewController setDeviceSyncPrefs:](self, "setDeviceSyncPrefs:", v6);
      v15 = objc_msgSend(v6, "copy");
      -[DeviceModeMediaViewController setOriginalSyncPrefs:](self, "setOriginalSyncPrefs:", v15);
      objc_release(v15);
      v16 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController headerViewController](self, "headerViewController"));
      -[DeviceHeaderViewController setDeviceSyncPrefs:](v16, "setDeviceSyncPrefs:", v6);
      objc_release(v16);
      if ( (v14 & 1) == 0 )
      {
        v17 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
        v18 = (unsigned int)-[AMPDeviceSyncPrefs configured](v17, "configured");
        objc_release(v17);
        if ( v18 )
          -[DeviceModeMediaViewController showTrackListView](self, "showTrackListView");
      }
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}