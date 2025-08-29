-[DeviceModeFinderViewController presentStorageManagementUI]
void __cdecl -[DeviceModeFinderViewController presentStorageManagementUI](DeviceModeFinderViewController *self, SEL a2)
{
  void *v3; // x19
  AMPDevice *v4; // x21
  id v5; // x21
  AMPDeviceInfo *v6; // x21
  AMPDeviceSyncPrefs *v7; // x21
  NSWindow *v8; // x21
  void *v9; // x20
  void *v10; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = (void *)objc_opt_new(&OBJC_CLASS___DeviceStorageManagementViewController, a2);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  objc_msgSend(v3, "setDevice:", v4);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController devicesClient](self, "devicesClient"));
  objc_msgSend(v3, "setDevicesClient:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  objc_msgSend(v3, "setDeviceInfo:", v6);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  objc_msgSend(v3, "setDeviceSyncPrefs:", v7);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(+[NSWindow windowWithContentViewController:](&OBJC_CLASS___NSWindow, "windowWithContentViewController:", v3));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController view](self, "view"));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "window"));
  objc_msgSend(v10, "beginSheet:completionHandler:", v8, &stru_1000B9990);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}