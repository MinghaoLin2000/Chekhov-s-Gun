-[DeviceSummaryViewController classOptionsViewController]
Class __cdecl -[DeviceSummaryViewController classOptionsViewController](DeviceSummaryViewController *self, SEL a2)
{
  AMPDevice *v3; // x20
  void *v4; // x21
  AMPDevice *v5; // x19
  unsigned int v6; // w20
  __objc2_class **v7; // x8
  void *v8; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  objc_opt_class(&OBJC_CLASS___DeviceViewController);
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v4 = -[AMPDevice deviceType](v3, "deviceType");
  objc_release(v3);
  if ( v4 == (void *)1 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    v6 = (unsigned int)-[AMPDevice isIPodShuffleDeviceType](v5, "isIPodShuffleDeviceType");
    objc_release(v5);
    v7 = off_1000B8668;
    if ( v6 )
      v7 = &off_1000B8670;
  }
  else
  {
    v7 = off_1000B8660;
  }
  v8 = (void *)objc_opt_class(*v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (Class)objc_retainAutoreleaseReturnValue(v8);
}