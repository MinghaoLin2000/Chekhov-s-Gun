-[DeviceModeFinderViewController setDeviceName:]
void __cdecl -[DeviceModeFinderViewController setDeviceName:](DeviceModeFinderViewController *self, SEL a2, id a3)
{
  NSString *v4; // x20
  NSString *v5; // x20
  DeviceHeaderViewController *v6; // x19
  NSTextField *v7; // x21
  objc_super v8; // [xsp+0h] [xbp-30h] BYREF

  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___DeviceModeFinderViewController;
  -[DeviceViewController setDeviceName:](&v8, "setDeviceName:", a3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceName](self, "deviceName"));
  objc_release(v4);
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceName](self, "deviceName"));
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController headerViewController](self, "headerViewController"));
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceNameLabel](v6, "deviceNameLabel"));
    -[NSTextField setStringValue:](v7, "setStringValue:", v5);
    objc_release(v7);
    objc_release(v6);
    objc_release(v5);
  }
}