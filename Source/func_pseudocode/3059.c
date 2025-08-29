-[DeviceSetupViewController bodyDataWithBoundary:parameters:]
id __cdecl -[DeviceSetupViewController bodyDataWithBoundary:parameters:](
        DeviceSetupViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x20
  id v6; // x22
  void *v7; // x21
  id v8; // x19
  NSString *v9; // x20
  NSData *v10; // x22
  void *v11; // x20
  id v12; // x21
  _QWORD v14[4]; // [xsp+10h] [xbp-50h] BYREF
  id v15; // [xsp+30h] [xbp-30h]
  id v16; // [xsp+38h] [xbp-28h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 3254779904LL;
  v14[2] = sub_10006F9E4;
  v14[3] = &unk_1000BA140;
  v7 = objc_retain(objc_retainAutoreleasedReturnValue(+[NSMutableData data](&OBJC_CLASS___NSMutableData, "data")));
  v15 = v7;
  v16 = v5;
  v8 = objc_retain(v5);
  objc_msgSend(v6, "enumerateKeysAndObjectsUsingBlock:", v14);
  objc_release(v6);
  v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("--%@--\r\n"), v8));
  v10 = objc_retainAutoreleasedReturnValue(-[NSString dataUsingEncoding:](v9, "dataUsingEncoding:", 4LL));
  objc_msgSend(v7, "appendData:", v10);
  objc_release(v10);
  objc_release(v9);
  v11 = v16;
  v12 = objc_retainAutoreleaseReturnValue(v7);
  objc_release(v11);
  objc_release(v15);
  objc_release(v12);
  objc_release(v8);
  return v12;
}