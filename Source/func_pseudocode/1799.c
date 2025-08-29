-[DeviceHeaderViewController setDevicesClient:]
void __cdecl -[DeviceHeaderViewController setDevicesClient:](DeviceHeaderViewController *self, SEL a2, id a3)
{
  AMPDevicesClient *v4; // x19
  AMPDevicesClient *v5; // x21
  objc_super v6; // [xsp+0h] [xbp-40h] BYREF
  objc_super v7; // [xsp+10h] [xbp-30h] BYREF

  v4 = (AMPDevicesClient *)objc_retain(a3);
  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___DeviceHeaderViewController;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](&v7, "devicesClient"));
  objc_release(v5);
  if ( v5 != v4 )
  {
    v6.receiver = self;
    v6.super_class = (Class)&OBJC_CLASS___DeviceHeaderViewController;
    -[DeviceViewController setDevicesClient:](&v6, "setDevicesClient:", v4);
    -[AMPDevicesClient addListener:](v4, "addListener:", self);
    -[DeviceHeaderViewController updateDeviceDetailsLabelLine](self, "updateDeviceDetailsLabelLine");
    -[DeviceHeaderViewController fetchDeviceDetails](self, "fetchDeviceDetails");
  }
  objc_release(v4);
}