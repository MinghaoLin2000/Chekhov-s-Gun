-[DeviceModeUnpairedViewController waitingForUnlock]
void __cdecl -[DeviceModeUnpairedViewController waitingForUnlock](DeviceModeUnpairedViewController *self, SEL a2)
{
  NSButton *v3; // x20
  NSButton *v4; // x20
  id v5; // x20
  NSTextField *v6; // x21
  NSTextField *v7; // x20
  NSTextField *v8; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController pairButton](self, "pairButton"));
  -[NSButton setEnabled:](v3, "setEnabled:", 0LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController pairButton](self, "pairButton"));
  -[NSButton setHidden:](v4, "setHidden:", 1LL);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(
         -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("Unlock your %@ to use it with this Mac.")));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController pairLabel](self, "pairLabel"));
  -[NSTextField setStringValue:](v6, "setStringValue:", v5);
  objc_release(v6);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController pairTitleLabel](self, "pairTitleLabel"));
  -[NSTextField setHidden:](v7, "setHidden:", 1LL);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController errorLabel](self, "errorLabel"));
  -[NSTextField setHidden:](v8, "setHidden:", 1LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}