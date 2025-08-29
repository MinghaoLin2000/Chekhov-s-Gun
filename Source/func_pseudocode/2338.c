-[DeviceModeFinderViewController updateFooterButtonStates]
void __cdecl -[DeviceModeFinderViewController updateFooterButtonStates](DeviceModeFinderViewController *self, SEL a2)
{
  id v3; // x20
  AMPDevice *v4; // x21
  void *v5; // x22
  DeviceFooterViewController *v6; // x20
  DeviceFooterViewController *v7; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController devicesClient](self, "devicesClient"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v5 = objc_msgSend(v3, "isSyncEnabledForDevice:", v4);
  objc_release(v4);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setEnabledPrimaryButton:](v6, "setEnabledPrimaryButton:", v5);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  -[DeviceFooterViewController setEnabledSecondaryButton:](v7, "setEnabledSecondaryButton:", v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}