-[DeviceModeMediaViewController loadDeviceLibrary]
void __cdecl -[DeviceModeMediaViewController loadDeviceLibrary](DeviceModeMediaViewController *self, SEL a2)
{
  AMPDevice *v3; // x21
  void *v4; // x22
  ITLibrary *v5; // x23
  id v6; // x19
  ITLibrary *v7; // x21
  _QWORD v8[4]; // [xsp+0h] [xbp-70h] BYREF
  id v9; // [xsp+20h] [xbp-50h]
  id v10; // [xsp+28h] [xbp-48h] BYREF
  id location; // [xsp+30h] [xbp-40h] BYREF
  id v12; // [xsp+38h] [xbp-38h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v4 = objc_retainAutoreleasedReturnValue(-[AMPDevice uniqueIdentifier](v3, "uniqueIdentifier"));
  v12 = 0LL;
  v5 = objc_retainAutoreleasedReturnValue(+[ITLibrary libraryWithDeviceID:error:](&OBJC_CLASS___ITLibrary, "libraryWithDeviceID:error:", v4, &v12));
  v6 = objc_retain(v12);
  objc_release(v4);
  objc_release(v3);
  objc_initWeak(&location, self);
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_10002B66C;
  v8[3] = &unk_1000B8EA8;
  objc_copyWeak(&v10, &location);
  v9 = v5;
  v7 = objc_retain(v5);
  dispatch_async(&_dispatch_main_q, v8);
  objc_release(v9);
  objc_release(v7);
  objc_destroyWeak(&v10);
  objc_destroyWeak(&location);
  objc_release(v6);
}