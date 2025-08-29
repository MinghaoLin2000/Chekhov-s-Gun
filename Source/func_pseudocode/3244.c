-[DeviceAutofillSettingsViewController viewWillAppear]
void __cdecl -[DeviceAutofillSettingsViewController viewWillAppear](DeviceAutofillSettingsViewController *self, SEL a2)
{
  NSBundle *v3; // x20
  NSString *v4; // x21
  void *v5; // x22
  void *v6; // x23
  void *v7; // x20
  double v8; // d2
  double v9; // d3
  objc_super v10; // [xsp+0h] [xbp-40h] BYREF

  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___DeviceAutofillSettingsViewController;
  -[DeviceAutofillSettingsViewController viewWillAppear](&v10, "viewWillAppear");
  v3 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v4 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v3,
           "localizedStringForKey:value:table:",
           CFSTR("Autofill Settings"),
           &stru_1000BA220,
           0LL));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController view](self, "view"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "window"));
  objc_msgSend(v6, "setTitle:", v4);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  -[DeviceAutofillSettingsViewController configureWindowButtons](self, "configureWindowButtons");
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController view](self, "view"));
  objc_msgSend(v7, "frame");
  -[DeviceAutofillSettingsViewController setPreferredContentSize:](self, "setPreferredContentSize:", v8, v9);
  objc_release(v7);
}