-[DeviceModeFinderViewController didChangeDeviceTotals:forDeviceWithIdentifier:]
void __cdecl -[DeviceModeFinderViewController didChangeDeviceTotals:forDeviceWithIdentifier:](
        DeviceModeFinderViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x20
  AMPDevice *v6; // x19
  void *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a4);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v7 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v6, "deviceIdentifier"));
  objc_msgSend(v5, "isEqualToString:", v7);
  objc_release(v5);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}