-[DeviceSettingsMusicViewController viewDidLoad]
void __cdecl -[DeviceSettingsMusicViewController viewDidLoad](DeviceSettingsMusicViewController *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsMusicViewController;
  -[DeviceSettingsViewController viewDidLoad](&v3, "viewDidLoad");
  -[DeviceSettingsMusicViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}