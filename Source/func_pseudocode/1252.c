-[DeviceViewController deviceStringForStringParameterizedKey:]
id __cdecl -[DeviceViewController deviceStringForStringParameterizedKey:](DeviceViewController *self, SEL a2, id a3)
{
  id v4; // x20
  void *v5; // x21
  AMPDevice *v6; // x19
  void *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = (void *)objc_opt_class(self);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v7 = objc_retainAutoreleasedReturnValue(
         objc_msgSend(
           v5,
           "deviceStringForDeviceType:forStringParameterizedKey:",
           -[AMPDevice deviceType](v6, "deviceType"),
           v4));
  objc_release(v4);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}