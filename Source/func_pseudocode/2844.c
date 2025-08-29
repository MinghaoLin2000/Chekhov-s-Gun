-[DeviceOptionsViewController clickConfigureAccessibility:]
void __cdecl -[DeviceOptionsViewController clickConfigureAccessibility:](
        DeviceOptionsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  __int64 v5; // x1
  void *v6; // x20
  AMPDeviceAccessibilityPrefs *v7; // x22
  void *v8; // x23
  AMPDevice *v9; // x22
  AMPDeviceInfo *v10; // x22
  NSWindow *v11; // x22
  void *v12; // x23
  void *v13; // x24
  _QWORD v14[4]; // [xsp+10h] [xbp-60h] BYREF
  id v15; // [xsp+30h] [xbp-40h]
  DeviceOptionsViewController *v16; // [xsp+38h] [xbp-38h]

  v4 = objc_retain(a3);
  v6 = (void *)objc_opt_new(&OBJC_CLASS___DeviceConfigureAccessibilityViewController, v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController deviceAccessibilityPrefs](self, "deviceAccessibilityPrefs"));
  v8 = -[AMPDeviceAccessibilityPrefs copy](v7, "copy");
  objc_msgSend(v6, "setDeviceAccessibilityPrefs:", v8);
  objc_release(v8);
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  objc_msgSend(v6, "setDevice:", v9);
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  objc_msgSend(v6, "setDeviceInfo:", v10);
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(+[NSWindow windowWithContentViewController:](&OBJC_CLASS___NSWindow, "windowWithContentViewController:", v6));
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController view](self, "view"));
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "window"));
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 3254779904LL;
  v14[2] = sub_1000678D8;
  v14[3] = &unk_1000B8E48;
  v15 = objc_retain(v6);
  v16 = self;
  objc_msgSend(v13, "beginSheet:completionHandler:", v11, v14);
  objc_release(v13);
  objc_release(v12);
  objc_release(v15);
  objc_release(v11);
  objc_release(v6);
  objc_release(v4);
}