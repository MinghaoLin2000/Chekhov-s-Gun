-[DeviceModeDisabledViewController viewDidLoad]
void __cdecl -[DeviceModeDisabledViewController viewDidLoad](DeviceModeDisabledViewController *self, SEL a2)
{
  AMPDevice *v3; // x20
  unsigned __int64 v4; // x21
  const __CFString *v5; // x2
  id v6; // x20
  NSTextField *v7; // x21
  NSTextField *v8; // x19
  objc_super v9; // [xsp+0h] [xbp-30h] BYREF

  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___DeviceModeDisabledViewController;
  -[DeviceModeDisabledViewController viewDidLoad](&v9, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v4 = (unsigned __int64)-[AMPDevice deviceType](v3, "deviceType");
  objc_release(v3);
  if ( (v4 & 0xFFFFFFFFFFFFFFFELL) == 8 )
    v5 = CFSTR("This connected %@ is open in another window.");
  else
    v5 = CFSTR("This %@ is open in another window.");
  v6 = objc_retainAutoreleasedReturnValue(
         -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           v5));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceModeDisabledViewController disabledLabel](self, "disabledLabel"));
  -[NSTextField setStringValue:](v7, "setStringValue:", v6);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceModeDisabledViewController disabledLabel](self, "disabledLabel"));
  -[NSTextField setHidden:](v8, "setHidden:", 0LL);
  objc_release(v8);
  objc_release(v6);
}