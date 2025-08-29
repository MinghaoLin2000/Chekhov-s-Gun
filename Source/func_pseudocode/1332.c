-[DeviceModeMediaViewController loadSettingsFromCurrentDevice]
void __cdecl -[DeviceModeMediaViewController loadSettingsFromCurrentDevice](
        DeviceModeMediaViewController *self,
        SEL a2)
{
  id v3; // x20
  id v4; // x20
  id v5; // x20
  DeviceHeaderViewController *v6; // x20
  NSButton *v7; // x21
  NSView *v8; // x20
  id v9; // x20
  id v10; // x20
  AMPDevice *v11; // x21
  _QWORD v12[5]; // [xsp+8h] [xbp-48h] BYREF

  v3 = objc_alloc_init((Class)&OBJC_CLASS___AMPDeviceInfo);
  -[DeviceViewController setDeviceInfo:](self, "setDeviceInfo:", v3);
  objc_release(v3);
  v4 = objc_alloc_init((Class)&OBJC_CLASS___AMPDeviceSyncPrefs);
  -[DeviceViewController setDeviceSyncPrefs:](self, "setDeviceSyncPrefs:", v4);
  objc_release(v4);
  v5 = objc_alloc_init((Class)&OBJC_CLASS___AMPDeviceSyncPrefs);
  -[DeviceModeMediaViewController setOriginalSyncPrefs:](self, "setOriginalSyncPrefs:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController headerViewController](self, "headerViewController"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController syncSettingsButton](v6, "syncSettingsButton"));
  -[NSButton setEnabled:](v7, "setEnabled:", 0LL);
  objc_release(v7);
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController autofillPlacardViewContainer](self, "autofillPlacardViewContainer"));
  -[NSView setHidden:](v8, "setHidden:", 1LL);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController devicesClient](self, "devicesClient"));
  objc_msgSend(v9, "addListener:", self);
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceModeMediaViewController devicesClient](self, "devicesClient"));
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 3254779904LL;
  v12[2] = sub_10002CD2C;
  v12[3] = &unk_1000B9490;
  v12[4] = self;
  objc_msgSend(v10, "fetchSettingsForDevice:withReply:", v11, v12);
  objc_release(v11);
  objc_release(v10);
}