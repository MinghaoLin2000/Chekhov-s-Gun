-[DeviceUIServiceViewController canAcceptDrag:]
bool __cdecl -[DeviceUIServiceViewController canAcceptDrag:](DeviceUIServiceViewController *self, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x20
  AMPDevicesClient *v6; // x21
  AMPDevice *v7; // x22
  char v8; // w21
  _QWORD v10[5]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v11; // [xsp+30h] [xbp-40h] BYREF
  __int64 *v12; // [xsp+38h] [xbp-38h]
  __int64 v13; // [xsp+40h] [xbp-30h]
  char v14; // [xsp+48h] [xbp-28h]

  v4 = objc_retain(a3);
  v11 = 0LL;
  v12 = &v11;
  v13 = 0x2020000000LL;
  v14 = 0;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController fileURLsForDrag:](self, "fileURLsForDrag:", v4));
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController devicesClient](self, "devicesClient"));
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController device](self, "device"));
    v10[0] = _NSConcreteStackBlock;
    v10[1] = 3254779904LL;
    v10[2] = sub_10000356C;
    v10[3] = &unk_1000B89E8;
    v10[4] = &v11;
    -[AMPDevicesClient synchronousCanAcceptFiles:forDevice:withReply:](
      v6,
      "synchronousCanAcceptFiles:forDevice:withReply:",
      v5,
      v7,
      v10);
    objc_release(v7);
    objc_release(v6);
  }
  v8 = *((_BYTE *)v12 + 24);
  objc_release(v5);
  _Block_object_dispose(&v11, 8);
  objc_release(v4);
  return v8;
}