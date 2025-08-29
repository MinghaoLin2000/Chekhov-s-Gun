-[DeviceSetupViewController startActivation]
void __cdecl -[DeviceSetupViewController startActivation](DeviceSetupViewController *self, SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  unsigned int v4; // w21
  NSBundle *v5; // x20
  NSString *v6; // x21
  AMPDevice *v7; // x22
  void *v8; // x23
  NSString *v9; // x24
  ProgressViewController *v10; // x25
  NSTextField *v11; // x26
  AMPDevicesClient *v12; // x20
  AMPDevice *v13; // x19
  _QWORD v14[4]; // [xsp+10h] [xbp-70h] BYREF
  id v15; // [xsp+30h] [xbp-50h] BYREF
  id location; // [xsp+38h] [xbp-48h] BYREF

  -[DeviceSetupViewController setActivationInfo:](self, "setActivationInfo:", 0LL);
  -[DeviceSetupViewController setResponseHeaders:](self, "setResponseHeaders:", 0LL);
  -[DeviceSetupViewController setSessionError:](self, "setSessionError:", 0LL);
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v4 = (unsigned int)-[AMPDeviceSyncPrefs needsRestoreFromBackup](v3, "needsRestoreFromBackup");
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  if ( v4 )
  {
    v6 = objc_retainAutoreleasedReturnValue(
           -[NSBundle localizedStringForKey:value:table:](
             v5,
             "localizedStringForKey:value:table:",
             CFSTR("Activating “%@”…"),
             &stru_1000BA220,
             0LL));
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    v8 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v7, "deviceName"));
    v9 = objc_retainAutoreleasedReturnValue(+[NSString localizedStringWithFormat:](&OBJC_CLASS___NSString, "localizedStringWithFormat:", v6, v8));
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController progressViewController](self, "progressViewController"));
    v11 = objc_retainAutoreleasedReturnValue(-[ProgressViewController label](v10, "label"));
    -[NSTextField setStringValue:](v11, "setStringValue:", v9);
    objc_release(v11);
    objc_release(v10);
    objc_release(v9);
  }
  else
  {
    v6 = objc_retainAutoreleasedReturnValue(
           -[NSBundle localizedStringForKey:value:table:](
             v5,
             "localizedStringForKey:value:table:",
             CFSTR("Activating…"),
             &stru_1000BA220,
             0LL));
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController loadingViewController](self, "loadingViewController"));
    v8 = objc_retainAutoreleasedReturnValue(-[AMPDevice label](v7, "label"));
    objc_msgSend(v8, "setStringValue:", v6);
  }
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  -[DeviceSetupViewController setSessionState:](self, "setSessionState:", 2LL);
  objc_initWeak(&location, self);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 3254779904LL;
  v14[2] = sub_10006DDBC;
  v14[3] = &unk_1000B8ED8;
  objc_copyWeak(&v15, &location);
  -[AMPDevicesClient fetchActivationInfoForDevice:withReply:](v12, "fetchActivationInfoForDevice:withReply:", v13, v14);
  objc_release(v13);
  objc_release(v12);
  objc_destroyWeak(&v15);
  objc_destroyWeak(&location);
}