-[DeviceViewController deviceTypeStringValue]
id __cdecl -[DeviceViewController deviceTypeStringValue](DeviceViewController *self, SEL a2)
{
  void *v3; // x20
  AMPDevice *v4; // x19
  void *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = (void *)objc_opt_class(self);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "stringValueForDeviceType:", -[AMPDevice deviceType](v4, "deviceType")));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}