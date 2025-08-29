-[DeviceSettingsBooksViewController viewDidLoad]
void __cdecl -[DeviceSettingsBooksViewController viewDidLoad](DeviceSettingsBooksViewController *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsBooksViewController;
  -[DeviceSettingsViewController viewDidLoad](&v3, "viewDidLoad");
  -[DeviceSettingsBooksViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}