-[DeviceSettingsAudiobooksViewController viewDidLoad]
void __cdecl -[DeviceSettingsAudiobooksViewController viewDidLoad](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsAudiobooksViewController;
  -[DeviceSettingsViewController viewDidLoad](&v3, "viewDidLoad");
  -[DeviceSettingsAudiobooksViewController loadOutlinesColumnHeaderTitle](self, "loadOutlinesColumnHeaderTitle");
  -[DeviceSettingsAudiobooksViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}