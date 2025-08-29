-[DeviceModeMediaViewController didChangeSyncAllowedState:forDeviceWithIdentifier:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceModeMediaViewController didChangeSyncAllowedState:forDeviceWithIdentifier:](
        DeviceModeMediaViewController *self,
        SEL a2,
        bool a3,
        id a4)
{
  _BOOL8 v4; // x19
  id v6; // x21
  AMPDevice *v7; // x22
  void *v8; // x23
  unsigned int v9; // w24
  DeviceFooterViewController *v10; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = a3;
  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v8 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v7, "deviceIdentifier"));
  v9 = (unsigned int)objc_msgSend(v6, "isEqualToString:", v8);
  objc_release(v6);
  objc_release(v8);
  objc_release(v7);
  if ( v9 )
  {
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController footerViewController](self, "footerViewController"));
    -[DeviceFooterViewController setEnabledPrimaryButton:](v10, "setEnabledPrimaryButton:", v4);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v10);
  }
}