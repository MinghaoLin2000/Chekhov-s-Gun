-[DeviceSetupViewController showGetStarted]
void __cdecl -[DeviceSetupViewController showGetStarted](DeviceSetupViewController *self, SEL a2)
{
  NSBundle *v3; // x22
  NSString *v4; // x23
  id v5; // x24
  NSString *v6; // x21
  NSTextField *v7; // x25
  NSBundle *v8; // x21
  NSString *v9; // x22
  NSTextField *v10; // x23
  NSView *v11; // x21
  NSButton *v12; // x21
  NSBundle *v13; // x21
  NSString *v14; // x20
  NSButton *v15; // x22
  NSView *v16; // x20
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v4 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v3,
           "localizedStringForKey:value:table:",
           CFSTR("Sync your %@"),
           &stru_1000BA220,
           0LL));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceTypeStringValue](self, "deviceTypeStringValue"));
  v6 = objc_retainAutoreleasedReturnValue(+[NSString localizedStringWithFormat:](&OBJC_CLASS___NSString, "localizedStringWithFormat:", v4, v5));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController welcomeLabel](self, "welcomeLabel"));
  -[NSTextField setStringValue:](v7, "setStringValue:", v6);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v9 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v8,
           "localizedStringForKey:value:table:",
           CFSTR("You can sync music, movies, TV shows, and more."),
           &stru_1000BA220,
           0LL));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController explanationLabel](self, "explanationLabel"));
  -[NSTextField setStringValue:](v10, "setStringValue:", v9);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController backupOptionsContainerView](self, "backupOptionsContainerView"));
  -[NSView setHidden:](v11, "setHidden:", 1LL);
  objc_release(v11);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController cancelButton](self, "cancelButton"));
  -[NSButton setHidden:](v12, "setHidden:", 1LL);
  objc_release(v12);
  v13 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v14 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v13,
            "localizedStringForKey:value:table:",
            CFSTR("Get Started"),
            &stru_1000BA220,
            0LL));
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController continueButton](self, "continueButton"));
  -[NSButton setTitle:](v15, "setTitle:", v14);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController setupAssistantView](self, "setupAssistantView"));
  -[DeviceSetupViewController setContentView:](self, "setContentView:", v16);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v16);
}