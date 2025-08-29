-[DeviceSettingsContactsViewController viewDidLoad]
void __cdecl -[DeviceSettingsContactsViewController viewDidLoad](DeviceSettingsContactsViewController *self, SEL a2)
{
  id v3; // x20
  NSButton *v4; // x21
  objc_super v5; // [xsp+0h] [xbp-30h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___DeviceSettingsContactsViewController;
  -[DeviceSettingsViewController viewDidLoad](&v5, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(
         -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("Add new contacts from this %@ to:")));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController defaultGroupCheckBox](self, "defaultGroupCheckBox"));
  -[NSButton setTitle:](v4, "setTitle:", v3);
  objc_release(v4);
  objc_release(v3);
  -[DeviceSettingsContactsViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}