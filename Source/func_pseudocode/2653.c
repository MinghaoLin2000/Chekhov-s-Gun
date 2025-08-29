-[DeviceAutofillPlacardViewController clickAutofillPopUpButton:]
void __cdecl -[DeviceAutofillPlacardViewController clickAutofillPopUpButton:](
        DeviceAutofillPlacardViewController *self,
        SEL a2,
        id a3)
{
  NSPopUpButton *v4; // x20
  NSMenuItem *v5; // x19
  void *v6; // x20
  void *v7; // x22
  void *v8; // x23
  AMPDeviceAutoFillPrefs *v9; // x22
  AMPDevicesClient *v10; // x22
  AMPDeviceAutoFillPrefs *v11; // x23
  AMPDevice *v12; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillPlacardViewController autofillPopUpButton](self, "autofillPopUpButton", a3));
  v5 = objc_retainAutoreleasedReturnValue(-[NSPopUpButton selectedItem](v4, "selectedItem"));
  objc_release(v4);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[NSMenuItem node](v5, "node"));
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "persistentID"));
    v8 = objc_msgSend(v7, "unsignedLongLongValue");
    objc_release(v7);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillPlacardViewController autoFillPrefs](self, "autoFillPrefs"));
    -[AMPDeviceAutoFillPrefs setAutoFillSourcePlaylistID:](v9, "setAutoFillSourcePlaylistID:", v8);
    objc_release(v9);
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillPlacardViewController devicesClient](self, "devicesClient"));
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillPlacardViewController autoFillPrefs](self, "autoFillPrefs"));
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillPlacardViewController device](self, "device"));
    -[AMPDevicesClient setAutoFillPrefs:forDevice:withReply:](
      v10,
      "setAutoFillPrefs:forDevice:withReply:",
      v11,
      v12,
      &stru_1000B9D58);
    objc_release(v12);
    objc_release(v11);
    objc_release(v10);
    objc_release(v6);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}