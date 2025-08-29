-[DeviceModeFinderViewController loadSettingsFromCurrentDevice]
void __cdecl -[DeviceModeFinderViewController loadSettingsFromCurrentDevice](
        DeviceModeFinderViewController *self,
        SEL a2)
{
  id v3; // x20
  id v4; // x20
  id v5; // x20
  DeviceHeaderViewController *v6; // x20
  DeviceHeaderViewController *v7; // x20
  NSButton *v8; // x21
  id v9; // x20
  AMPDevice *v10; // x21
  _QWORD v11[5]; // [xsp+8h] [xbp-48h] BYREF

  v3 = objc_alloc_init((Class)&OBJC_CLASS___AMPDeviceInfo);
  -[DeviceModeFinderViewController setDeviceInfo:](self, "setDeviceInfo:", v3);
  objc_release(v3);
  v4 = objc_alloc_init((Class)&OBJC_CLASS___AMPDeviceSyncPrefs);
  -[DeviceModeFinderViewController setDeviceSyncPrefs:](self, "setDeviceSyncPrefs:", v4);
  objc_release(v4);
  v5 = objc_alloc_init((Class)&OBJC_CLASS___AMPDeviceSyncPrefs);
  -[DeviceModeFinderViewController setOriginalSyncPrefs:](self, "setOriginalSyncPrefs:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController headerViewController](self, "headerViewController"));
  -[DeviceHeaderViewController setButtonsEnabled:](v6, "setButtonsEnabled:", 0LL);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController headerViewController](self, "headerViewController"));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController manageStorageButton](v7, "manageStorageButton"));
  -[NSButton setHidden:](v8, "setHidden:", 1LL);
  objc_release(v8);
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController devicesClient](self, "devicesClient"));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_100054B14;
  v11[3] = &unk_1000B9490;
  v11[4] = self;
  objc_msgSend(v9, "fetchSettingsForDevice:withReply:", v10, v11);
  objc_release(v10);
  objc_release(v9);
}