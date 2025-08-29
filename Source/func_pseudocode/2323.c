-[DeviceModeFinderViewController loadFinderTabContainerViewController]
void __cdecl -[DeviceModeFinderViewController loadFinderTabContainerViewController](
        DeviceModeFinderViewController *self,
        SEL a2)
{
  void *v3; // x20
  AMPDevice *v4; // x20
  DeviceFinderTabContainerViewController *v5; // x21
  id v6; // x20
  DeviceFinderTabContainerViewController *v7; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = (void *)objc_opt_new(&OBJC_CLASS___DeviceFinderTabContainerViewController, a2);
  -[DeviceModeFinderViewController setFinderTabContainerViewController:](
    self,
    "setFinderTabContainerViewController:",
    v3);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController finderTabContainerViewController](self, "finderTabContainerViewController"));
  -[DeviceFinderTabContainerViewController setDevice:](v5, "setDevice:", v4);
  objc_release(v5);
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController devicesClient](self, "devicesClient"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController finderTabContainerViewController](self, "finderTabContainerViewController"));
  -[DeviceFinderTabContainerViewController setDevicesClient:](v7, "setDevicesClient:", v6);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}