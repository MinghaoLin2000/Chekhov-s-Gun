-[DeviceSettingsTVShowsViewController viewDidLoad]
void __cdecl -[DeviceSettingsTVShowsViewController viewDidLoad](DeviceSettingsTVShowsViewController *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsTVShowsViewController;
  -[DeviceSettingsViewController viewDidLoad](&v3, "viewDidLoad");
  -[DeviceSettingsTVShowsViewController loadOutlinesColumnHeaderTitle](self, "loadOutlinesColumnHeaderTitle");
  -[DeviceSettingsTVShowsViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}