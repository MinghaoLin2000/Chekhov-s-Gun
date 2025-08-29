-[DeviceUIServiceViewController dealloc]
void __cdecl -[DeviceUIServiceViewController dealloc](DeviceUIServiceViewController *self, SEL a2)
{
  AMPDevicesClient *v3; // x20
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController devicesClient](self, "devicesClient"));
  -[AMPDevicesClient disconnect](v3, "disconnect");
  objc_release(v3);
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___DeviceUIServiceViewController;
  -[DeviceUIServiceViewController dealloc](&v4, "dealloc");
}