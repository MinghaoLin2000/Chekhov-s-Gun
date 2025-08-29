-[DeviceSettingsPhotosViewController dealloc]
void __cdecl -[DeviceSettingsPhotosViewController dealloc](DeviceSettingsPhotosViewController *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  sub_10004D4D8(self, a2);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsPhotosViewController;
  -[DeviceSettingsViewController dealloc](&v3, "dealloc");
}