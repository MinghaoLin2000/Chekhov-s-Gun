-[DeviceHeaderViewController controlTextDidEndEditing:]
void __cdecl -[DeviceHeaderViewController controlTextDidEndEditing:](DeviceHeaderViewController *self, SEL a2, id a3)
{
  id v4; // x19
  NSTextField *v5; // x20
  void *v6; // x23
  AMPDevice *v7; // x21
  void *v8; // x20
  NSCharacterSet *v9; // x24
  void *v10; // x21
  NSTextField *v11; // x22
  AMPDevicesClient *v12; // x23
  AMPDevice *v13; // x22
  _QWORD v14[4]; // [xsp+8h] [xbp-68h] BYREF
  id v15; // [xsp+28h] [xbp-48h]
  id v16; // [xsp+30h] [xbp-40h] BYREF
  id location; // [xsp+38h] [xbp-38h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceNameLabel](self, "deviceNameLabel"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSTextField stringValue](v5, "stringValue"));
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v8 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v7, "deviceName"));
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(+[NSCharacterSet whitespaceCharacterSet](&OBJC_CLASS___NSCharacterSet, "whitespaceCharacterSet"));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "stringByTrimmingCharactersInSet:", v9));
  objc_release(v6);
  objc_release(v9);
  if ( v10 && !(unsigned int)objc_msgSend(v10, "isEqualToString:", &stru_1000BA220) )
  {
    if ( ((unsigned int)objc_msgSend(v10, "isEqualToString:", v8) & 1) == 0 )
    {
      objc_initWeak(&location, self);
      v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
      v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
      v14[0] = _NSConcreteStackBlock;
      v14[1] = 3254779904LL;
      v14[2] = sub_100041170;
      v14[3] = &unk_1000B95F8;
      objc_copyWeak(&v16, &location);
      v15 = objc_retain(v8);
      -[AMPDevicesClient setName:forDevice:withReply:](v12, "setName:forDevice:withReply:", v10, v13, v14);
      objc_release(v13);
      objc_release(v12);
      objc_release(v15);
      objc_destroyWeak(&v16);
      objc_destroyWeak(&location);
    }
  }
  else
  {
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceNameLabel](self, "deviceNameLabel"));
    -[NSTextField setStringValue:](v11, "setStringValue:", v8);
    objc_release(v11);
  }
  objc_release(v8);
  objc_release(v10);
  objc_release(v4);
}