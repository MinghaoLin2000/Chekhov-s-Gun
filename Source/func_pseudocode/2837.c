-[DeviceOptionsViewController setDeviceInfo:]
void __cdecl -[DeviceOptionsViewController setDeviceInfo:](DeviceOptionsViewController *self, SEL a2, id a3)
{
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___DeviceOptionsViewController;
  -[DeviceViewController setDeviceInfo:](&v4, "setDeviceInfo:", a3);
  -[DeviceOptionsViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}