-[DeviceSoftwareUpdatesViewController setDevice:]
void __cdecl -[DeviceSoftwareUpdatesViewController setDevice:](
        DeviceSoftwareUpdatesViewController *self,
        SEL a2,
        id a3)
{
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___DeviceSoftwareUpdatesViewController;
  -[DeviceViewController setDevice:](&v4, "setDevice:", a3);
  -[DeviceSoftwareUpdatesViewController fetchDeviceSoftwareInfo](self, "fetchDeviceSoftwareInfo");
}