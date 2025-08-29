-[DeviceMoreIdentifiersViewController setUpViews]
void __cdecl -[DeviceMoreIdentifiersViewController setUpViews](DeviceMoreIdentifiersViewController *self, SEL a2)
{
  NSView *v3; // x20
  NSView *v4; // x20
  AMPDevice *v5; // x20
  AMPDeviceInfo *v6; // x20
  NSTextField *v7; // x21
  void *v8; // x20
  id v9; // x21
  NSTextField *v10; // x22
  AMPDevice *v11; // x21
  void *v12; // x22
  NSView *v13; // x21
  NSView *v14; // x21
  AMPDeviceInfo *v15; // x22
  void *v16; // x21
  AMPDeviceInfo *v17; // x23
  void *v18; // x22
  NSTextField *v19; // x23
  NSBundle *v20; // x23
  NSString *v21; // x24
  NSTextField *v22; // x25
  NSView *v23; // x0
  NSTextField *v24; // x23
  NSTextField *v25; // x23
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController phoneNumber1Container](self, "phoneNumber1Container"));
  -[NSView setHidden:](v3, "setHidden:", 1LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController phoneNumber2Container](self, "phoneNumber2Container"));
  -[NSView setHidden:](v4, "setHidden:", 1LL);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  objc_release(v5);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    objc_release(v6);
    if ( v6 )
    {
      v7 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController aboutThisDeviceTextField](self, "aboutThisDeviceTextField"));
      v8 = objc_retainAutoreleasedReturnValue(-[NSTextField stringValue](v7, "stringValue"));
      objc_release(v7);
      if ( v8 )
      {
        v9 = objc_retainAutoreleasedReturnValue(
               -[DeviceViewController deviceStringForStringParameterizedKey:](
                 self,
                 "deviceStringForStringParameterizedKey:",
                 v8));
        v10 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController aboutThisDeviceTextField](self, "aboutThisDeviceTextField"));
        -[NSTextField setStringValue:](v10, "setStringValue:", v9);
        objc_release(v10);
        objc_release(v9);
      }
      v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
      v12 = -[AMPDevice deviceType](v11, "deviceType");
      objc_release(v11);
      if ( v12 == (void *)3 )
      {
        v13 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController phoneNumber2Container](self, "phoneNumber2Container"));
        -[NSView setHidden:](v13, "setHidden:", 0LL);
        objc_release(v13);
        v14 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController phoneNumber2Container](self, "phoneNumber2Container"));
        -[NSView setHidden:](v14, "setHidden:", 0LL);
        objc_release(v14);
        v15 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
        v16 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo phoneNumber2](v15, "phoneNumber2"));
        objc_release(v15);
        v17 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
        v18 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo phoneNumber](v17, "phoneNumber"));
        objc_release(v17);
        if ( v16 )
        {
          v19 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController phoneNumberValue2](self, "phoneNumberValue2"));
          -[NSTextField setStringValue:](v19, "setStringValue:", v16);
        }
        else
        {
          v20 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
          v21 = objc_retainAutoreleasedReturnValue(
                  -[NSBundle localizedStringForKey:value:table:](
                    v20,
                    "localizedStringForKey:value:table:",
                    CFSTR("Phone Number:"),
                    &stru_1000BA220,
                    0LL));
          v22 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController phoneNumberPrompt1](self, "phoneNumberPrompt1"));
          -[NSTextField setStringValue:](v22, "setStringValue:", v21);
          objc_release(v22);
          objc_release(v21);
          objc_release(v20);
          v19 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController phoneNumber2Container](self, "phoneNumber2Container"));
          -[NSTextField setHidden:](v19, "setHidden:", 1LL);
        }
        objc_release(v19);
        v23 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController phoneNumber1Container](self, "phoneNumber1Container"));
        v24 = (NSTextField *)v23;
        if ( v18 )
        {
          -[NSView setHidden:](v23, "setHidden:", 0LL);
          objc_release(v24);
          v25 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController phoneNumberValue1](self, "phoneNumberValue1"));
          -[NSTextField setHidden:](v25, "setHidden:", 0LL);
          objc_release(v25);
          v24 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController phoneNumberValue1](self, "phoneNumberValue1"));
          -[NSTextField setStringValue:](v24, "setStringValue:", v18);
        }
        else
        {
          -[NSView setHidden:](v23, "setHidden:", 1LL);
        }
        objc_release(v24);
        objc_release(v18);
        objc_release(v16);
      }
      -[DeviceMoreIdentifiersViewController setSerialNumberFieldDisplayType:](
        self,
        "setSerialNumberFieldDisplayType:",
        0LL);
      -[DeviceMoreIdentifiersViewController updateSerialNumberFieldValues](self, "updateSerialNumberFieldValues");
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      objc_release(v8);
    }
  }
}