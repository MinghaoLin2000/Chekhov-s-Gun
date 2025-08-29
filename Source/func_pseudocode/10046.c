+[TSPReadChannelUtils dataFromReadChannel:]
id __cdecl +[TSPReadChannelUtils dataFromReadChannel:](id a1, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  void *v6; // x1
  id v7; // x20
  _QWORD v9[7]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v10; // [xsp+40h] [xbp-70h] BYREF
  __int64 *v11; // [xsp+48h] [xbp-68h]
  __int64 v12; // [xsp+50h] [xbp-60h]
  __int64 (__fastcall *v13)(); // [xsp+58h] [xbp-58h]
  __int64 (__fastcall *v14)(); // [xsp+60h] [xbp-50h]
  id v15; // [xsp+68h] [xbp-48h]
  __int64 v16; // [xsp+70h] [xbp-40h] BYREF
  id *v17; // [xsp+78h] [xbp-38h]
  __int64 v18; // [xsp+80h] [xbp-30h]
  __int64 (__fastcall *v19)(); // [xsp+88h] [xbp-28h]
  __int64 (__fastcall *v20)(); // [xsp+90h] [xbp-20h]
  id v21; // [xsp+98h] [xbp-18h]
  __int64 vars8; // [xsp+B8h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  v16 = 0LL;
  v17 = (id *)&v16;
  v18 = 0x3032000000LL;
  v19 = sub_100057120;
  v20 = sub_100057130;
  v21 = 0LL;
  if ( v4 )
  {
    v10 = 0LL;
    v11 = &v10;
    v12 = 0x3032000000LL;
    v13 = sub_100057120;
    v14 = sub_100057130;
    v15 = 0LL;
    v9[0] = _NSConcreteStackBlock;
    v9[1] = 3254779904LL;
    v9[2] = sub_100057138;
    v9[3] = &unk_1001D52D8;
    v9[4] = &v10;
    v9[5] = &v16;
    v9[6] = a1;
    objc_msgSend(v4, "readWithHandlerAndWait:", v9);
    v6 = (void *)v11[5];
    if ( v6 )
      objc_storeStrong(v17 + 5, v6);
    _Block_object_dispose(&v10, 8);
    objc_release(v15);
    v4 = v17[5];
  }
  v7 = objc_retain(v4);
  _Block_object_dispose(&v16, 8);
  objc_release(v21);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}