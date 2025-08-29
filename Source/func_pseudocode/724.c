-[DeviceModeUnpairedViewController readyForPairing]
void __cdecl -[DeviceModeUnpairedViewController readyForPairing](DeviceModeUnpairedViewController *self, SEL a2)
{
  NSButton *v3; // x20
  id v4; // x20
  NSTextField *v5; // x21
  NSTextField *v6; // x20
  NSBundle *v7; // x20
  NSString *v8; // x22
  AMPDevice *v9; // x23
  void *v10; // x24
  NSString *v11; // x21
  NSTextField *v12; // x25
  NSTextField *v13; // x19
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController pairButton](self, "pairButton"));
  -[NSButton setEnabled:](v3, "setEnabled:", 1LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(
         -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("To sync this Mac with your %@, click Trust, then tap Trust on the device.")));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController pairLabel](self, "pairLabel"));
  -[NSTextField setStringValue:](v5, "setStringValue:", v4);
  objc_release(v5);
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController pairLabel](self, "pairLabel"));
  -[NSTextField setHidden:](v6, "setHidden:", 0LL);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v8 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v7,
           "localizedStringForKey:value:table:",
           CFSTR("Trust “%@”?"),
           &stru_1000BA220,
           0LL));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v10 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v9, "deviceName"));
  v11 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v8, v10));
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController pairTitleLabel](self, "pairTitleLabel"));
  -[NSTextField setStringValue:](v12, "setStringValue:", v11);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController pairTitleLabel](self, "pairTitleLabel"));
  -[NSTextField setHidden:](v13, "setHidden:", 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v13);
}