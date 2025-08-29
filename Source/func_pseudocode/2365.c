-[DeviceModeFinderViewController didStartFileSharingOperationForDeviceWithIdentifier:withProgress:]
void __cdecl -[DeviceModeFinderViewController didStartFileSharingOperationForDeviceWithIdentifier:withProgress:](
        DeviceModeFinderViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x20
  id v7; // x21
  AMPDevice *v8; // x22
  void *v9; // x23
  unsigned int v10; // w24
  DeviceFooterViewController *v11; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_retain(a3);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v9 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v8, "deviceIdentifier"));
  v10 = (unsigned int)objc_msgSend(v7, "isEqualToString:", v9);
  objc_release(v7);
  objc_release(v9);
  objc_release(v8);
  if ( v10 )
  {
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
    -[DeviceFooterViewController startProgressDisplay:withProgressDisplayType:](
      v11,
      "startProgressDisplay:withProgressDisplayType:",
      v6,
      6LL);
    objc_release(v11);
    -[DeviceModeFinderViewController updateFooterButtonStates](self, "updateFooterButtonStates");
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}