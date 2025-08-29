-[DeviceModeFinderViewController didStartManualSoftwareUpdateCheckForDeviceWithIdentifier:]
void __cdecl -[DeviceModeFinderViewController didStartManualSoftwareUpdateCheckForDeviceWithIdentifier:](
        DeviceModeFinderViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  AMPDevice *v5; // x21
  void *v6; // x22
  unsigned int v7; // w23
  id v8; // x20
  AMPDevice *v9; // x21
  void *v10; // x22
  DeviceFooterViewController *v11; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v6 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v5, "deviceIdentifier"));
  v7 = (unsigned int)objc_msgSend(v4, "isEqualToString:", v6);
  objc_release(v4);
  objc_release(v6);
  objc_release(v5);
  if ( v7 )
  {
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController devicesClient](self, "devicesClient"));
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "registerForSoftwareUpdateCheckProgressForDevice:withReply:", v9, &stru_1000B9A10));
    objc_release(v9);
    objc_release(v8);
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
    -[DeviceFooterViewController startProgressDisplay:withProgressDisplayType:](
      v11,
      "startProgressDisplay:withProgressDisplayType:",
      v10,
      3LL);
    objc_release(v11);
    -[DeviceModeFinderViewController updateHeaderState](self, "updateHeaderState");
    -[DeviceModeFinderViewController updateFooterButtonStates](self, "updateFooterButtonStates");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v10);
  }
}