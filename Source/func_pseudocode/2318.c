-[DeviceModeFinderViewController doStartSyncOrSetSyncPrefsAction]
void __cdecl -[DeviceModeFinderViewController doStartSyncOrSetSyncPrefsAction](
        DeviceModeFinderViewController *self,
        SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  AMPDeviceSyncPrefs *v4; // x21
  unsigned int v5; // w22
  AMPDeviceSyncPrefs *v6; // x20
  void *v7; // x21
  id v8; // x20
  AMPDeviceSyncPrefs *v9; // x21
  AMPDevice *v10; // x19
  void *v11; // x20
  unsigned __int64 v12; // x21
  __int64 v13; // x20
  id v14; // x21
  AMPDevice *v15; // x22
  void *v16; // x20
  DeviceFooterViewController *v17; // x19
  _QWORD v18[4]; // [xsp+8h] [xbp-58h] BYREF
  id v19; // [xsp+28h] [xbp-38h] BYREF
  id buf[2]; // [xsp+30h] [xbp-30h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController originalSyncPrefs](self, "originalSyncPrefs"));
  v5 = (unsigned int)-[AMPDeviceSyncPrefs isNotEqualTo:](v3, "isNotEqualTo:", v4);
  objc_release(v4);
  objc_release(v3);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v7 = -[AMPDeviceSyncPrefs copy](v6, "copy");
    -[DeviceModeFinderViewController setOriginalSyncPrefs:](self, "setOriginalSyncPrefs:", v7);
    objc_release(v7);
    objc_release(v6);
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      LOWORD(buf[0]) = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "prefs changed, sending to devicesd",
        (uint8_t *)buf,
        2u);
    }
    objc_initWeak(buf, self);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController devicesClient](self, "devicesClient"));
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    v18[0] = _NSConcreteStackBlock;
    v18[1] = 3254779904LL;
    v18[2] = sub_100053C14;
    v18[3] = &unk_1000B9940;
    objc_copyWeak(&v19, buf);
    objc_msgSend(v8, "setSyncPrefs:forDevice:withReply:", v9, v10, v18);
    objc_release(v10);
    objc_release(v9);
    objc_release(v8);
    objc_destroyWeak(&v19);
    objc_destroyWeak(buf);
  }
  else
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      LOWORD(buf[0]) = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "prefs not changed, starting sync",
        (uint8_t *)buf,
        2u);
    }
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(NSApp, "currentEvent"));
    v12 = (unsigned __int64)objc_msgSend(v11, "modifierFlags");
    objc_release(v11);
    v13 = (v12 >> 17) & 4;
    v14 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController devicesClient](self, "devicesClient"));
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "startSyncForDevice:withOptions:withReply:", v15, v13, &stru_1000B9970));
    objc_release(v15);
    objc_release(v14);
    v17 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
    -[DeviceFooterViewController startProgressDisplay:withProgressDisplayType:](
      v17,
      "startProgressDisplay:withProgressDisplayType:",
      v16,
      1LL);
    objc_release(v17);
    objc_release(v16);
  }
}