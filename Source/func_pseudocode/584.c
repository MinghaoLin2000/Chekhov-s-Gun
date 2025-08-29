-[DeviceSettingsCloudViewController setDeviceInfo:]
void __cdecl -[DeviceSettingsCloudViewController setDeviceInfo:](
        DeviceSettingsCloudViewController *self,
        SEL a2,
        id a3)
{
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___DeviceSettingsCloudViewController;
  -[DeviceViewController setDeviceInfo:](&v4, "setDeviceInfo:", a3);
  -[DeviceSettingsCloudViewController updateMessage](self, "updateMessage");
}