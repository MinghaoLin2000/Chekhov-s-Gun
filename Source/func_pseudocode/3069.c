-[DeviceSetupViewController startSetupAssistant]
void __cdecl -[DeviceSetupViewController startSetupAssistant](DeviceSetupViewController *self, SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  unsigned int v4; // w21
  id v5; // x20
  NSImageView *v6; // x21
  AMPDevicesClient *v7; // x20
  AMPDevice *v8; // x19
  id *v9; // x21
  AMPDeviceSyncPrefs *v10; // x20
  unsigned int v11; // w21
  id v12; // x0
  AMPDeviceSyncPrefs *v13; // x20
  int v14; // w21
  _QWORD v15[4]; // [xsp+8h] [xbp-78h] BYREF
  id v16; // [xsp+28h] [xbp-58h] BYREF
  _QWORD v17[4]; // [xsp+30h] [xbp-50h] BYREF
  id v18; // [xsp+50h] [xbp-30h] BYREF
  id location; // [xsp+58h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v4 = (unsigned int)-[AMPDeviceSyncPrefs needsSetupAssistant](v3, "needsSetupAssistant");
  objc_release(v3);
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController imageForDeviceType](self, "imageForDeviceType"));
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController deviceImageView](self, "deviceImageView"));
    -[NSImageView setImage:](v6, "setImage:", v5);
    objc_release(v6);
    objc_release(v5);
    objc_initWeak(&location, self);
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    v17[0] = _NSConcreteStackBlock;
    v17[1] = 3254779904LL;
    v17[2] = sub_100070CCC;
    v17[3] = &unk_1000BA190;
    v9 = &v18;
    objc_copyWeak(&v18, &location);
    -[AMPDevicesClient fetchSetupInfoForDevice:withReply:](v7, "fetchSetupInfoForDevice:withReply:", v8, v17);
LABEL_5:
    objc_release(v8);
    objc_release(v7);
    objc_destroyWeak(v9);
    objc_destroyWeak(&location);
    return;
  }
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v11 = (unsigned int)-[AMPDeviceSyncPrefs needsRestoreFromBackup](v10, "needsRestoreFromBackup");
  objc_release(v10);
  if ( v11 )
  {
    objc_initWeak(&location, self);
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    v15[0] = _NSConcreteStackBlock;
    v15[1] = 3254779904LL;
    v15[2] = sub_100070E84;
    v15[3] = &unk_1000B8ED8;
    v9 = &v16;
    objc_copyWeak(&v16, &location);
    v12 = objc_unsafeClaimAutoreleasedReturnValue(
            -[AMPDevicesClient completeRestoreFromBackupForDevice:withReply:](
              v7,
              "completeRestoreFromBackupForDevice:withReply:",
              v8,
              v15));
    goto LABEL_5;
  }
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v14 = (unsigned __int8)-[AMPDeviceSyncPrefs configured](v13, "configured");
  objc_release(v13);
  if ( (v14 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceSetupViewController setupAssistantComplete](self, "setupAssistantComplete");
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceSetupViewController startConfigure](self, "startConfigure");
  }
}