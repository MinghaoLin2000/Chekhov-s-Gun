-[DeviceModeFinderViewController didCompleteManualSoftwareUpdateCheckForDeviceWithIdentifier:withError:]
void __cdecl -[DeviceModeFinderViewController didCompleteManualSoftwareUpdateCheckForDeviceWithIdentifier:withError:](
        DeviceModeFinderViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x20
  AMPDevice *v6; // x21
  void *v7; // x22
  unsigned int v8; // w23
  DeviceFooterViewController *v9; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v7 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v6, "deviceIdentifier"));
  v8 = (unsigned int)objc_msgSend(v5, "isEqualToString:", v7);
  objc_release(v5);
  objc_release(v7);
  objc_release(v6);
  if ( v8 )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
    -[DeviceFooterViewController stopProgressDisplayWithProgressDisplayType:](
      v9,
      "stopProgressDisplayWithProgressDisplayType:",
      3LL);
    objc_release(v9);
    -[DeviceModeFinderViewController updateHeaderState](self, "updateHeaderState");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceModeFinderViewController updateFooterButtonStates](self, "updateFooterButtonStates");
  }
}