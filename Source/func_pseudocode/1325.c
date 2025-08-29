-[DeviceModeMediaViewController devicesClient]
id __cdecl -[DeviceModeMediaViewController devicesClient](DeviceModeMediaViewController *self, SEL a2)
{
  AMPDevicesClient *v3; // x21
  __int64 v4; // x1
  void *v5; // x21
  AMPDevicesClient *v6; // x0
  objc_super v8; // [xsp+0h] [xbp-50h] BYREF
  objc_super v9; // [xsp+10h] [xbp-40h] BYREF
  objc_super v10; // [xsp+20h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___DeviceModeMediaViewController;
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](&v10, "devicesClient"));
  objc_release(v3);
  if ( !v3 )
  {
    v5 = (void *)objc_opt_new(&OBJC_CLASS___AMPDevicesClient, v4);
    v9.receiver = self;
    v9.super_class = (Class)&OBJC_CLASS___DeviceModeMediaViewController;
    -[DeviceViewController setDevicesClient:](&v9, "setDevicesClient:", v5);
    objc_release(v5);
  }
  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___DeviceModeMediaViewController;
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](&v8, "devicesClient"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}