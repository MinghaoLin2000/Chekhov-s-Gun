-[DeviceSettingsInfoViewController viewDidLoad]
void __cdecl -[DeviceSettingsInfoViewController viewDidLoad](DeviceSettingsInfoViewController *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceSettingsInfoViewController;
  -[DeviceSettingsViewController viewDidLoad](&v3, "viewDidLoad");
  -[DeviceSettingsInfoViewController loadContactsViewController](self, "loadContactsViewController");
  -[DeviceSettingsInfoViewController loadCalendarViewController](self, "loadCalendarViewController");
  -[DeviceSettingsInfoViewController loadAdvancedViewController](self, "loadAdvancedViewController");
}