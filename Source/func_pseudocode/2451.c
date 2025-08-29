-[DeviceSettingsAdvancedViewController viewDidLoad]
void __cdecl -[DeviceSettingsAdvancedViewController viewDidLoad](DeviceSettingsAdvancedViewController *self, SEL a2)
{
  id v3; // x20
  NSTextField *v4; // x21
  objc_super v5; // [xsp+0h] [xbp-30h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___DeviceSettingsAdvancedViewController;
  -[DeviceSettingsViewController viewDidLoad](&v5, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(
         -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("Advanced explanation %@")));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAdvancedViewController advancedSubtitleTextField](self, "advancedSubtitleTextField"));
  -[NSTextField setStringValue:](v4, "setStringValue:", v3);
  objc_release(v4);
  objc_release(v3);
  -[DeviceSettingsAdvancedViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}