-[DeviceSoftwareUpdatesViewController viewDidLoad]
void __cdecl -[DeviceSoftwareUpdatesViewController viewDidLoad](DeviceSoftwareUpdatesViewController *self, SEL a2)
{
  NSButton *v3; // x20
  NSBundle *v4; // x21
  NSString *v5; // x22
  NSString *v6; // x20
  NSButton *v7; // x23
  NSTextField *v8; // x20
  NSButton *v9; // x20
  NSButton *v10; // x20
  NSTextField *v11; // x20
  NSProgressIndicator *v12; // x20
  NSStackView *v13; // x20
  NSBox *v14; // x19
  objc_super v15; // [xsp+0h] [xbp-40h] BYREF

  v15.receiver = self;
  v15.super_class = (Class)&OBJC_CLASS___DeviceSoftwareUpdatesViewController;
  -[DeviceSoftwareUpdatesViewController viewDidLoad](&v15, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSoftwareUpdatesViewController softwareVersionButton](self, "softwareVersionButton"));
  -[NSButton setIdentifier:](v3, "setIdentifier:", CFSTR("Software Version"));
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v5 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v4,
           "localizedStringForKey:value:table:",
           CFSTR("Loading…"),
           &stru_1000BA220,
           0LL));
  v6 = objc_retainAutoreleasedReturnValue(+[NSString localizedStringWithFormat:](&OBJC_CLASS___NSString, "localizedStringWithFormat:", v5));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSoftwareUpdatesViewController softwareVersionButton](self, "softwareVersionButton"));
  -[NSButton setTitle:](v7, "setTitle:", v6);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSoftwareUpdatesViewController softwareStatusLabel](self, "softwareStatusLabel"));
  -[NSTextField setHidden:](v8, "setHidden:", 1LL);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSoftwareUpdatesViewController updateButton](self, "updateButton"));
  -[NSButton setHidden:](v9, "setHidden:", 1LL);
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSoftwareUpdatesViewController restoreButton](self, "restoreButton"));
  -[NSButton setHidden:](v10, "setHidden:", 1LL);
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSoftwareUpdatesViewController updateRestoreProgressMessage](self, "updateRestoreProgressMessage"));
  -[NSTextField setHidden:](v11, "setHidden:", 1LL);
  objc_release(v11);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSoftwareUpdatesViewController updateRestoreProgressBar](self, "updateRestoreProgressBar"));
  -[NSProgressIndicator setHidden:](v12, "setHidden:", 1LL);
  objc_release(v12);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceSoftwareUpdatesViewController statusStackView](self, "statusStackView"));
  -[NSStackView setHidden:](v13, "setHidden:", 1LL);
  objc_release(v13);
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceSoftwareUpdatesViewController statusHorizontalLine](self, "statusHorizontalLine"));
  -[NSBox setHidden:](v14, "setHidden:", 1LL);
  objc_release(v14);
}