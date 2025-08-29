-[DeviceSettingsCloudViewController viewDidLoad]
void __cdecl -[DeviceSettingsCloudViewController viewDidLoad](DeviceSettingsCloudViewController *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsCloudViewController;
  -[DeviceSettingsViewController viewDidLoad](&v3, "viewDidLoad");
  -[DeviceSettingsCloudViewController updateMessage](self, "updateMessage");
}