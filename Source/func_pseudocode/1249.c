-[DeviceViewController loadPropertiesForViewController:]
void __cdecl -[DeviceViewController loadPropertiesForViewController:](DeviceViewController *self, SEL a2, id a3)
{
  id v4; // x20
  AMPDevice *v5; // x21
  AMPDevicesClient *v6; // x21
  AMPDeviceInfo *v7; // x21
  AMPDeviceSyncPrefs *v8; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  objc_msgSend(v4, "setDevice:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  objc_msgSend(v4, "setDevicesClient:", v6);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  objc_msgSend(v4, "setDeviceInfo:", v7);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  objc_msgSend(v4, "setDeviceSyncPrefs:", v8);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}