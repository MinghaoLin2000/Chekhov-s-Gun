-[DeviceModeUnpairedViewController loadHeaderViewController]
void __cdecl -[DeviceModeUnpairedViewController loadHeaderViewController](
        DeviceModeUnpairedViewController *self,
        SEL a2)
{
  void *v3; // x20
  AMPDevice *v4; // x20
  DeviceHeaderViewController *v5; // x21
  AMPDevicesClient *v6; // x20
  DeviceHeaderViewController *v7; // x21
  DeviceHeaderViewController *v8; // x20
  void *v9; // x21
  NSView *v10; // x22
  DeviceHeaderViewController *v11; // x20
  NSButton *v12; // x21
  DeviceHeaderViewController *v13; // x20
  NSButton *v14; // x21
  DeviceHeaderViewController *v15; // x19
  NSButton *v16; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = (void *)objc_opt_new(&OBJC_CLASS___DeviceHeaderViewController, a2);
  -[DeviceModeUnpairedViewController setHeaderViewController:](self, "setHeaderViewController:", v3);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController headerViewController](self, "headerViewController"));
  -[DeviceHeaderViewController setDevice:](v5, "setDevice:", v4);
  objc_release(v5);
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController headerViewController](self, "headerViewController"));
  -[DeviceHeaderViewController setDevicesClient:](v7, "setDevicesClient:", v6);
  objc_release(v7);
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController headerViewController](self, "headerViewController"));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController view](v8, "view"));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController headerViewContainer](self, "headerViewContainer"));
  sub_10002ABA4((int)v9, v10);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController headerViewController](self, "headerViewController"));
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController syncButton](v11, "syncButton"));
  -[NSButton setHidden:](v12, "setHidden:", 1LL);
  objc_release(v12);
  objc_release(v11);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController headerViewController](self, "headerViewController"));
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController syncSettingsButton](v13, "syncSettingsButton"));
  -[NSButton setHidden:](v14, "setHidden:", 1LL);
  objc_release(v14);
  objc_release(v13);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController headerViewController](self, "headerViewController"));
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController manageStorageButton](v15, "manageStorageButton"));
  -[NSButton setHidden:](v16, "setHidden:", 1LL);
  objc_release(v16);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v15);
}