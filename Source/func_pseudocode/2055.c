-[DeviceConfigureAccessibilityViewController save]
void __cdecl -[DeviceConfigureAccessibilityViewController save](
        DeviceConfigureAccessibilityViewController *self,
        SEL a2)
{
  NSButton *v3; // x20
  _BOOL8 v4; // x21
  AMPDeviceAccessibilityPrefs *v5; // x22
  NSButton *v6; // x20
  _BOOL8 v7; // x21
  AMPDeviceAccessibilityPrefs *v8; // x22
  NSButton *v9; // x20
  _BOOL8 v10; // x21
  AMPDeviceAccessibilityPrefs *v11; // x22
  NSButton *v12; // x20
  _BOOL8 v13; // x21
  AMPDeviceAccessibilityPrefs *v14; // x22
  NSButton *v15; // x20
  _BOOL8 v16; // x21
  AMPDeviceAccessibilityPrefs *v17; // x22
  NSButton *v18; // x20
  _BOOL8 v19; // x21
  AMPDeviceAccessibilityPrefs *v20; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
  v4 = (void *)-[NSButton state](v3, "state") == (void *)1;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController deviceAccessibilityPrefs](self, "deviceAccessibilityPrefs"));
  -[AMPDeviceAccessibilityPrefs setEnableVoiceOver:](v5, "setEnableVoiceOver:", v4);
  objc_release(v5);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController enableZoomCheckBox](self, "enableZoomCheckBox"));
  v7 = (void *)-[NSButton state](v6, "state") == (void *)1;
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController deviceAccessibilityPrefs](self, "deviceAccessibilityPrefs"));
  -[AMPDeviceAccessibilityPrefs setEnableZoom:](v8, "setEnableZoom:", v7);
  objc_release(v8);
  objc_release(v6);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController invertDisplayCheckBox](self, "invertDisplayCheckBox"));
  v10 = (void *)-[NSButton state](v9, "state") == (void *)1;
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController deviceAccessibilityPrefs](self, "deviceAccessibilityPrefs"));
  -[AMPDeviceAccessibilityPrefs setInvertDisplay:](v11, "setInvertDisplay:", v10);
  objc_release(v11);
  objc_release(v9);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController speakAutofillTextCheckBox](self, "speakAutofillTextCheckBox"));
  v13 = (void *)-[NSButton state](v12, "state") == (void *)1;
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController deviceAccessibilityPrefs](self, "deviceAccessibilityPrefs"));
  -[AMPDeviceAccessibilityPrefs setSpeakAutofillText:](v14, "setSpeakAutofillText:", v13);
  objc_release(v14);
  objc_release(v12);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController useMonoAudioCheckBox](self, "useMonoAudioCheckBox"));
  v16 = (void *)-[NSButton state](v15, "state") == (void *)1;
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController deviceAccessibilityPrefs](self, "deviceAccessibilityPrefs"));
  -[AMPDeviceAccessibilityPrefs setUseMonoAudio:](v17, "setUseMonoAudio:", v16);
  objc_release(v17);
  objc_release(v15);
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController showClosedCaptionsCheckBox](self, "showClosedCaptionsCheckBox"));
  v19 = (void *)-[NSButton state](v18, "state") == (void *)1;
  v20 = objc_retainAutoreleasedReturnValue(-[DeviceConfigureAccessibilityViewController deviceAccessibilityPrefs](self, "deviceAccessibilityPrefs"));
  -[AMPDeviceAccessibilityPrefs setShowClosedCaptions:](v20, "setShowClosedCaptions:", v19);
  objc_release(v20);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v18);
}