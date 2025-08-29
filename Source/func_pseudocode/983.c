-[DeviceNotConfiguredViewController viewDidLoad]
void __cdecl -[DeviceNotConfiguredViewController viewDidLoad](DeviceNotConfiguredViewController *self, SEL a2)
{
  NSBundle *v3; // x22
  NSString *v4; // x20
  AMPDevice *v5; // x23
  void *v6; // x24
  NSString *v7; // x22
  NSTextField *v8; // x25
  NSTextField *v9; // x22
  NSBundle *v10; // x22
  NSString *v11; // x21
  id v12; // x23
  NSString *v13; // x22
  NSTextField *v14; // x24
  NSTextField *v15; // x19
  objc_super v16; // [xsp+10h] [xbp-60h] BYREF

  v16.receiver = self;
  v16.super_class = (Class)&OBJC_CLASS___DeviceNotConfiguredViewController;
  -[DeviceNotConfiguredViewController viewDidLoad](&v16, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v4 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v3,
           "localizedStringForKey:value:table:",
           CFSTR("Set up %@"),
           &stru_1000BA220,
           0LL));
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v6 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v5, "deviceName"));
  v7 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v4, v6));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceNotConfiguredViewController titleLabel](self, "titleLabel"));
  -[NSTextField setStringValue:](v8, "setStringValue:", v7);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceNotConfiguredViewController titleLabel](self, "titleLabel"));
  -[NSTextField setHidden:](v9, "setHidden:", 0LL);
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v11 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v10,
            "localizedStringForKey:value:table:",
            CFSTR("Use Finder to finish setting up your %@."),
            &stru_1000BA220,
            0LL));
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceTypeStringValue](self, "deviceTypeStringValue"));
  v13 = objc_retainAutoreleasedReturnValue(+[NSString localizedStringWithFormat:](&OBJC_CLASS___NSString, "localizedStringWithFormat:", v11, v12));
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceNotConfiguredViewController label](self, "label"));
  -[NSTextField setStringValue:](v14, "setStringValue:", v13);
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceNotConfiguredViewController label](self, "label"));
  -[NSTextField setHidden:](v15, "setHidden:", 0LL);
  objc_release(v15);
  objc_release(v11);
  objc_release(v4);
}