-[DeviceSettingsCalendarsViewController viewDidLoad]
void __cdecl -[DeviceSettingsCalendarsViewController viewDidLoad](DeviceSettingsCalendarsViewController *self, SEL a2)
{
  NSTextField *v3; // x20
  CalenderLimitFormatter *v4; // x20
  NSTextField *v5; // x21
  NSStackView *v6; // x20
  id v7; // x20
  NSButton *v8; // x21
  objc_super v9; // [xsp+0h] [xbp-30h] BYREF

  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___DeviceSettingsCalendarsViewController;
  -[DeviceSettingsViewController viewDidLoad](&v9, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController syncDaysLimitTextField](self, "syncDaysLimitTextField"));
  -[NSTextField setDelegate:](v3, "setDelegate:", self);
  objc_release(v3);
  v4 = objc_alloc_init(&OBJC_CLASS___CalenderLimitFormatter);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController syncDaysLimitTextField](self, "syncDaysLimitTextField"));
  -[NSTextField setFormatter:](v5, "setFormatter:", v4);
  objc_release(v5);
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController defaultCalendarStackView](self, "defaultCalendarStackView"));
  -[NSStackView setHidden:](v6, "setHidden:", 1LL);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(
         -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("Put new events created on this %@ into the calendar:")));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCalendarsViewController defaultCalendarCheckBox](self, "defaultCalendarCheckBox"));
  -[NSButton setTitle:](v8, "setTitle:", v7);
  objc_release(v8);
  objc_release(v7);
  -[DeviceSettingsCalendarsViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}