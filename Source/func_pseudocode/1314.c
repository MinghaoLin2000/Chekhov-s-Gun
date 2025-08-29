-[DeviceModeMediaViewController showDeviceNotConfiguredView]
void __cdecl -[DeviceModeMediaViewController showDeviceNotConfiguredView](DeviceModeMediaViewController *self, SEL a2)
{
  DeviceHeaderViewController *v3; // x20
  NSButton *v4; // x21
  __int64 v5; // x1
  void *v6; // x20
  AMPDevice *v7; // x20
  DeviceNotConfiguredViewController *v8; // x21
  id v9; // x20
  DeviceNotConfiguredViewController *v10; // x21
  DeviceNotConfiguredViewController *v11; // x20
  void *v12; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  -[DeviceModeMediaViewController setAllowDevicesClientEventsUI:](self, "setAllowDevicesClientEventsUI:", 0LL);
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController headerViewController](self, "headerViewController"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController syncSettingsButton](v3, "syncSettingsButton"));
  -[NSButton setEnabled:](v4, "setEnabled:", 0LL);
  objc_release(v4);
  objc_release(v3);
  v6 = (void *)objc_opt_new(&OBJC_CLASS___DeviceNotConfiguredViewController, v5);
  -[DeviceModeMediaViewController setDeviceNotConfiguredViewController:](
    self,
    "setDeviceNotConfiguredViewController:",
    v6);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController deviceNotConfiguredViewController](self, "deviceNotConfiguredViewController"));
  -[DeviceViewController setDevice:](v8, "setDevice:", v7);
  objc_release(v8);
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController devicesClient](self, "devicesClient"));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController deviceNotConfiguredViewController](self, "deviceNotConfiguredViewController"));
  -[DeviceViewController setDevicesClient:](v10, "setDevicesClient:", v9);
  objc_release(v10);
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController deviceNotConfiguredViewController](self, "deviceNotConfiguredViewController"));
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceNotConfiguredViewController view](v11, "view"));
  -[DeviceModeMediaViewController setContentView:](self, "setContentView:", v12);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v11);
}