-[DeviceSoftwareUpdatesViewController setDevicesClient:]
void __cdecl -[DeviceSoftwareUpdatesViewController setDevicesClient:](
        DeviceSoftwareUpdatesViewController *self,
        SEL a2,
        id a3)
{
  AMPDevicesClient *v4; // x20
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___DeviceSoftwareUpdatesViewController;
  -[DeviceViewController setDevicesClient:](&v5, "setDevicesClient:", a3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  -[AMPDevicesClient addListener:](v4, "addListener:", self);
  objc_release(v4);
  -[DeviceSoftwareUpdatesViewController fetchDeviceSoftwareInfo](self, "fetchDeviceSoftwareInfo");
}