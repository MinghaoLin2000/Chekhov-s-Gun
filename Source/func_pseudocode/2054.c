-[DeviceConfigureAccessibilityViewController viewDidLoad]
void __cdecl -[DeviceConfigureAccessibilityViewController viewDidLoad](
        DeviceConfigureAccessibilityViewController *self,
        SEL a2)
{
  AMPDeviceAccessibilityPrefs *v3; // x20
  __int64 v4; // x21
  NSButton *v5; // x22
  AMPDeviceAccessibilityPrefs *v6; // x20
  __int64 v7; // x21
  NSButton *v8; // x22
  AMPDeviceAccessibilityPrefs *v9; // x20
  __int64 v10; // x21
  NSButton *v11; // x22
  AMPDeviceAccessibilityPrefs *v12; // x20
  __int64 v13; // x21
  NSButton *v14; // x22
  AMPDeviceAccessibilityPrefs *v15; // x20
  __int64 v16; // x21
  NSButton *v17; // x22
  AMPDeviceAccessibilityPrefs *v18; // x20
  __int64 v19; // x21
  NSButton *v20; // x22
  AMPDeviceAccessibilityPrefs *v21; // x20
  __int64 v22; // x21
  NSButton *v23; // x22
  AMPDevice *v24; // x20
  AMPDeviceInfo *v25; // x21
  unsigned int v26; // w22
  NSButton *v27; // x20
  NSButton *v28; // x20
  objc_super v29; // [xsp+0h] [xbp-30h] BYREF

  v29.receiver = self;
  v29.super_class = (Class)&OBJC_CLASS___DeviceConfigureAccessibilityViewController;
  -[DeviceConfigureAccessibilityViewController viewDidLoad](&v29, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController deviceAccessibilityPrefs](self, "deviceAccessibilityPrefs"));
  v4 = (unsigned int)-[AMPDeviceAccessibilityPrefs enableVoiceOver](v3, "enableVoiceOver");
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
  -[NSButton setState:](v5, "setState:", v4);
  objc_release(v5);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController deviceAccessibilityPrefs](self, "deviceAccessibilityPrefs"));
  v7 = (unsigned int)-[AMPDeviceAccessibilityPrefs enableZoom](v6, "enableZoom");
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController enableZoomCheckBox](self, "enableZoomCheckBox"));
  -[NSButton setState:](v8, "setState:", v7);
  objc_release(v8);
  objc_release(v6);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController deviceAccessibilityPrefs](self, "deviceAccessibilityPrefs"));
  v10 = (unsigned int)-[AMPDeviceAccessibilityPrefs invertDisplay](v9, "invertDisplay");
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController invertDisplayCheckBox](self, "invertDisplayCheckBox"));
  -[NSButton setState:](v11, "setState:", v10);
  objc_release(v11);
  objc_release(v9);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController deviceAccessibilityPrefs](self, "deviceAccessibilityPrefs"));
  v13 = (unsigned int)-[AMPDeviceAccessibilityPrefs speakAutofillText](v12, "speakAutofillText");
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController speakAutofillTextCheckBox](self, "speakAutofillTextCheckBox"));
  -[NSButton setState:](v14, "setState:", v13);
  objc_release(v14);
  objc_release(v12);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController deviceAccessibilityPrefs](self, "deviceAccessibilityPrefs"));
  v16 = (unsigned int)-[AMPDeviceAccessibilityPrefs useMonoAudio](v15, "useMonoAudio");
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController useMonoAudioCheckBox](self, "useMonoAudioCheckBox"));
  -[NSButton setState:](v17, "setState:", v16);
  objc_release(v17);
  objc_release(v15);
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController deviceAccessibilityPrefs](self, "deviceAccessibilityPrefs"));
  v19 = (unsigned int)-[AMPDeviceAccessibilityPrefs showClosedCaptions](v18, "showClosedCaptions");
  v20 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController showClosedCaptionsCheckBox](self, "showClosedCaptionsCheckBox"));
  -[NSButton setState:](v20, "setState:", v19);
  objc_release(v20);
  objc_release(v18);
  v21 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController deviceAccessibilityPrefs](self, "deviceAccessibilityPrefs"));
  v22 = (unsigned int)-[AMPDeviceAccessibilityPrefs closedCaptionsSupported](v21, "closedCaptionsSupported") ^ 1;
  v23 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController showClosedCaptionsCheckBox](self, "showClosedCaptionsCheckBox"));
  -[NSButton setHidden:](v23, "setHidden:", v22);
  objc_release(v23);
  objc_release(v21);
  v24 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  if ( -[AMPDevice deviceType](v24, "deviceType") == (void *)1 )
  {
    v25 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v26 = (unsigned int)-[AMPDeviceInfo supportsAccessibility](v25, "supportsAccessibility");
    objc_release(v25);
    objc_release(v24);
    if ( !v26 )
      return;
    v27 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController enableZoomCheckBox](self, "enableZoomCheckBox"));
    -[NSButton setHidden:](v27, "setHidden:", 1LL);
    objc_release(v27);
    v28 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController speakAutofillTextCheckBox](self, "speakAutofillTextCheckBox"));
    -[NSButton setHidden:](v28, "setHidden:", 1LL);
    objc_release(v28);
    v24 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController showClosedCaptionsCheckBox](self, "showClosedCaptionsCheckBox"));
    -[AMPDevice setHidden:](v24, "setHidden:", 1LL);
  }
  objc_release(v24);
}