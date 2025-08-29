-[DeviceAutofillSettingsViewController viewDidLoad]
void __cdecl -[DeviceAutofillSettingsViewController viewDidLoad](DeviceAutofillSettingsViewController *self, SEL a2)
{
  NSButton *v3; // x20
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___DeviceAutofillSettingsViewController;
  -[DeviceAutofillSettingsViewController viewDidLoad](&v4, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController helpButton](self, "helpButton"));
  -[NSButton setHidden:](v3, "setHidden:", 1LL);
  objc_release(v3);
  -[DeviceAutofillSettingsViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}