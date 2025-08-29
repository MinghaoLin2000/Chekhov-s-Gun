-[DeviceModeFinderViewController loadEraseProgressViewController]
void __cdecl -[DeviceModeFinderViewController loadEraseProgressViewController](
        DeviceModeFinderViewController *self,
        SEL a2)
{
  NSBundle *v3; // x21
  NSString *v4; // x22
  AMPDevice *v5; // x23
  void *v6; // x24
  NSString *v7; // x20
  id v8; // x22
  AMPDevice *v9; // x23
  void *v10; // x24
  _QWORD v11[4]; // [xsp+10h] [xbp-60h] BYREF
  id v12; // [xsp+30h] [xbp-40h] BYREF
  id location; // [xsp+38h] [xbp-38h] BYREF

  objc_initWeak(&location, self);
  v3 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v4 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v3,
           "localizedStringForKey:value:table:",
           CFSTR("Erasing “%@”…"),
           &stru_1000BA220,
           0LL));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v6 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v5, "deviceName"));
  v7 = objc_retainAutoreleasedReturnValue(+[NSString localizedStringWithFormat:](&OBJC_CLASS___NSString, "localizedStringWithFormat:", v4, v6));
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController devicesClient](self, "devicesClient"));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_1000553A4;
  v11[3] = &unk_1000B8ED8;
  objc_copyWeak(&v12, &location);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "registerForEraseProgressForDevice:withReply:", v9, v11));
  objc_release(v9);
  objc_release(v8);
  -[DeviceModeFinderViewController loadProgressViewController:progress:](
    self,
    "loadProgressViewController:progress:",
    v7,
    v10);
  objc_release(v10);
  objc_destroyWeak(&v12);
  objc_release(v7);
  objc_destroyWeak(&location);
}