-[DeviceModeFinderViewController updateHeaderState]
void __cdecl -[DeviceModeFinderViewController updateHeaderState](DeviceModeFinderViewController *self, SEL a2)
{
  id v3; // x20
  AMPDevice *v4; // x21
  void *v5; // x22
  DeviceHeaderViewController *v6; // x19
  NSTextField *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController devicesClient](self, "devicesClient"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v5 = objc_msgSend(v3, "isSyncEnabledForDevice:", v4);
  objc_release(v4);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController headerViewController](self, "headerViewController"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceNameLabel](v6, "deviceNameLabel"));
  -[NSTextField setEditable:](v7, "setEditable:", v5);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}