-[DeviceModeMediaViewController loadAutofillPlacardViewControllerWithAutoFillPrefs:]
void __cdecl -[DeviceModeMediaViewController loadAutofillPlacardViewControllerWithAutoFillPrefs:](
        DeviceModeMediaViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  __int64 v5; // x1
  void *v6; // x21
  AMPDevice *v7; // x21
  DeviceAutofillPlacardViewController *v8; // x22
  id v9; // x21
  DeviceAutofillPlacardViewController *v10; // x22
  DeviceAutofillPlacardViewController *v11; // x21
  DeviceAutofillPlacardViewController *v12; // x20
  void *v13; // x21
  NSView *v14; // x22
  NSView *v15; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v6 = (void *)objc_opt_new(&OBJC_CLASS___DeviceAutofillPlacardViewController, v5);
  -[DeviceModeMediaViewController setAutofillPlacardViewController:](self, "setAutofillPlacardViewController:", v6);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController autofillPlacardViewController](self, "autofillPlacardViewController"));
  -[DeviceAutofillPlacardViewController setDevice:](v8, "setDevice:", v7);
  objc_release(v8);
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController devicesClient](self, "devicesClient"));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController autofillPlacardViewController](self, "autofillPlacardViewController"));
  -[DeviceAutofillPlacardViewController setDevicesClient:](v10, "setDevicesClient:", v9);
  objc_release(v10);
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController autofillPlacardViewController](self, "autofillPlacardViewController"));
  -[DeviceAutofillPlacardViewController setAutoFillPrefs:](v11, "setAutoFillPrefs:", v4);
  objc_release(v4);
  objc_release(v11);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController autofillPlacardViewController](self, "autofillPlacardViewController"));
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillPlacardViewController view](v12, "view"));
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController autofillPlacardViewContainer](self, "autofillPlacardViewContainer"));
  sub_10002ABA4((int)v13, v14);
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController autofillPlacardViewContainer](self, "autofillPlacardViewContainer"));
  -[NSView setHidden:](v15, "setHidden:", 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v15);
}