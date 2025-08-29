-[DeviceSetupViewController imageForDeviceType]
id __cdecl -[DeviceSetupViewController imageForDeviceType](DeviceSetupViewController *self, SEL a2)
{
  NSBundle *v3; // x19
  AMPDevice *v4; // x20
  char *v5; // x21
  NSImage *v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSBundle bundleForClass:](&OBJC_CLASS___NSBundle, "bundleForClass:", objc_opt_class(self)));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v5 = (char *)-[AMPDevice deviceType](v4, "deviceType");
  objc_release(v4);
  if ( (unsigned __int64)(v5 - 1) > 3 )
    v6 = 0LL;
  else
    v6 = objc_retainAutoreleasedReturnValue(-[NSBundle imageForResource:](v3, "imageForResource:", *(&off_1000BA1C0 + (_QWORD)(v5 - 1))));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}