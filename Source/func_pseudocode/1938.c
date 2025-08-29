-[DeviceSettingsPodcastsViewController viewDidLoad]
void __cdecl -[DeviceSettingsPodcastsViewController viewDidLoad](DeviceSettingsPodcastsViewController *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsPodcastsViewController;
  -[DeviceSettingsViewController viewDidLoad](&v3, "viewDidLoad");
  -[DeviceSettingsPodcastsViewController loadOutlinesColumnHeaderTitle](self, "loadOutlinesColumnHeaderTitle");
  -[DeviceSettingsPodcastsViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}