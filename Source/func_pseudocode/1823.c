-[DeviceHeaderViewController didChangeBatteryInfo:forDeviceWithIdentifier:]
void __cdecl -[DeviceHeaderViewController didChangeBatteryInfo:forDeviceWithIdentifier:](
        DeviceHeaderViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x21
  AMPDevice *v8; // x22
  void *v9; // x23
  unsigned int v10; // w24
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v9 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v8, "deviceIdentifier"));
  v10 = (unsigned int)objc_msgSend(v9, "isEqualToString:", v7);
  objc_release(v7);
  objc_release(v9);
  objc_release(v8);
  if ( v10 )
    -[DeviceHeaderViewController setDeviceBatteryInfo:](self, "setDeviceBatteryInfo:", v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}