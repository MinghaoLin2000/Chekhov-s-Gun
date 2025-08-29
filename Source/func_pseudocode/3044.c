-[DeviceSetupViewController setDevicesClient:]
void __cdecl -[DeviceSetupViewController setDevicesClient:](DeviceSetupViewController *self, SEL a2, id a3)
{
  AMPDevicesClient *v4; // x19
  AMPDevicesClient *v5; // x21
  AMPDevicesClient *v6; // x21
  objc_super v7; // [xsp+0h] [xbp-40h] BYREF
  objc_super v8; // [xsp+10h] [xbp-30h] BYREF

  v4 = (AMPDevicesClient *)objc_retain(a3);
  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___DeviceSetupViewController;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](&v8, "devicesClient"));
  objc_release(v5);
  if ( v5 != v4 )
  {
    v7.receiver = self;
    v7.super_class = (Class)&OBJC_CLASS___DeviceSetupViewController;
    -[DeviceViewController setDevicesClient:](&v7, "setDevicesClient:", v4);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
    -[AMPDevicesClient addListener:](v6, "addListener:", self);
    objc_release(v6);
  }
  objc_release(v4);
}