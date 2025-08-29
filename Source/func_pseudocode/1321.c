-[DeviceModeMediaViewController shouldShowAutofillPlacard]
bool __cdecl -[DeviceModeMediaViewController shouldShowAutofillPlacard](DeviceModeMediaViewController *self, SEL a2)
{
  NSString *v3; // x19
  unsigned int v4; // w21
  AMPDeviceInfo *v5; // x19
  AMPDeviceInfo *v6; // x21
  unsigned int v7; // w20
  AMPDeviceSyncPrefs *v8; // x22

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController viewMode](self, "viewMode"));
  v4 = -[NSString isEqualToString:](v3, "isEqualToString:", AMPDeviceViewModeMusic);
  objc_release(v3);
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    if ( (unsigned int)-[AMPDeviceInfo supportsAutofill](v5, "supportsAutofill") )
    {
      v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      if ( ((unsigned int)-[AMPDeviceInfo supportsFlashUIForShuffle](v6, "supportsFlashUIForShuffle") & 1) != 0 )
      {
        LOBYTE(v7) = 1;
      }
      else
      {
        v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
        v7 = (unsigned int)-[AMPDeviceSyncPrefs automaticUpdateMode](v8, "automaticUpdateMode") ^ 1;
        objc_release(v8);
      }
      objc_release(v6);
    }
    else
    {
      LOBYTE(v7) = 0;
    }
    objc_release(v5);
  }
  else
  {
    LOBYTE(v7) = 0;
  }
  return v7;
}