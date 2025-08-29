-[DeviceDragHandler canAcceptObjects:]
bool __cdecl -[DeviceDragHandler canAcceptObjects:](DeviceDragHandler *self, SEL a2, id a3)
{
  id v4; // x19
  AMPDevicesClient *v5; // x20
  AMPDevice *v6; // x21
  bool v7; // w20
  _QWORD v9[5]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v10; // [xsp+30h] [xbp-40h] BYREF
  __int64 *v11; // [xsp+38h] [xbp-38h]
  __int64 v12; // [xsp+40h] [xbp-30h]
  char v13; // [xsp+48h] [xbp-28h]

  v4 = objc_retain(a3);
  v10 = 0LL;
  v11 = &v10;
  v12 = 0x2020000000LL;
  v13 = 0;
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceDragHandler devicesClient](self, "devicesClient"));
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceDragHandler device](self, "device"));
    v9[0] = _NSConcreteStackBlock;
    v9[1] = 3254779904LL;
    v9[2] = sub_100042F60;
    v9[3] = &unk_1000B89E8;
    v9[4] = &v10;
    -[AMPDevicesClient synchronousCanAcceptObjects:forDevice:withReply:](
      v5,
      "synchronousCanAcceptObjects:forDevice:withReply:",
      v4,
      v6,
      v9);
    objc_release(v6);
    objc_release(v5);
    v7 = *((_BYTE *)v11 + 24) != 0;
  }
  else
  {
    v7 = 0;
  }
  _Block_object_dispose(&v10, 8);
  objc_release(v4);
  return v7;
}