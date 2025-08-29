-[DeviceFinderTabContainerViewController setupViewController:]
void __cdecl -[DeviceFinderTabContainerViewController setupViewController:](
        DeviceFinderTabContainerViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  AMPDevice *v5; // x21
  AMPDeviceInfo *v6; // x21
  AMPDeviceSyncPrefs *v7; // x21
  AMPDevicesClient *v8; // x21
  ITLibrary *v9; // x21
  OS_dispatch_queue *v10; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  objc_msgSend(v4, "setDevice:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  objc_msgSend(v4, "setDeviceInfo:", v6);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  objc_msgSend(v4, "setDeviceSyncPrefs:", v7);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  objc_msgSend(v4, "setDevicesClient:", v8);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
  objc_msgSend(v4, "setItLibrary:", v9);
  objc_release(v9);
  if ( (objc_opt_respondsToSelector(v4, "queue") & 1) != 0 )
  {
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController queue](self, "queue"));
    objc_msgSend(v4, "setQueue:", v10);
    objc_release(v10);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}