-[DeviceSettingsViewController setDevicesClient:]
void __cdecl -[DeviceSettingsViewController setDevicesClient:](DeviceSettingsViewController *self, SEL a2, id a3)
{
  id v4; // x20
  AMPDevicesClient *v5; // x22
  AMPDevicesClient *v6; // x21
  objc_super v7; // [xsp+0h] [xbp-60h] BYREF
  objc_super v8; // [xsp+10h] [xbp-50h] BYREF
  objc_super v9; // [xsp+20h] [xbp-40h] BYREF

  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___DeviceSettingsViewController;
  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](&v9, "devicesClient"));
  objc_release(v5);
  if ( v5 )
  {
    v8.receiver = self;
    v8.super_class = (Class)&OBJC_CLASS___DeviceSettingsViewController;
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](&v8, "devicesClient"));
    -[AMPDevicesClient removeListener:](v6, "removeListener:", self);
    objc_release(v6);
  }
  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___DeviceSettingsViewController;
  -[DeviceViewController setDevicesClient:](&v7, "setDevicesClient:", v4);
  objc_msgSend(v4, "addListener:", self);
  objc_release(v4);
}