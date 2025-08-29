+[NSData tsp_dataWithTranscoder:]
id __cdecl +[NSData tsp_dataWithTranscoder:](id a1, SEL a2, id a3)
{
  id v3; // x0
  void *v4; // x19
  id v5; // x0
  void *v6; // x8
  id v7; // x20
  _QWORD v9[5]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v10; // [xsp+30h] [xbp-40h] BYREF
  __int64 *v11; // [xsp+38h] [xbp-38h]
  __int64 v12; // [xsp+40h] [xbp-30h]
  __int64 (__fastcall *v13)(); // [xsp+48h] [xbp-28h]
  __int64 (__fastcall *v14)(); // [xsp+50h] [xbp-20h]
  id v15; // [xsp+58h] [xbp-18h]
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = v3;
  v10 = 0LL;
  v11 = &v10;
  v12 = 0x3032000000LL;
  v13 = sub_100058498;
  v14 = sub_1000584A8;
  v15 = 0LL;
  if ( v3 )
  {
    v5 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableData);
    v6 = (void *)v11[5];
    v11[5] = (__int64)v5;
    objc_release(v6);
    v9[0] = _NSConcreteStackBlock;
    v9[1] = 3254779904LL;
    v9[2] = sub_1000584B0;
    v9[3] = &unk_1001D5468;
    v9[4] = &v10;
    objc_msgSend(v4, "readWithHandlerAndWait:", v9);
    objc_msgSend(v4, "close");
    v3 = (id)v11[5];
  }
  v7 = objc_retain(v3);
  _Block_object_dispose(&v10, 8);
  objc_release(v15);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}