-[MediaConversionQueue copyConversionOutput:toRequestDestination:requestIdentifier:error:]
bool __cdecl -[MediaConversionQueue copyConversionOutput:toRequestDestination:requestIdentifier:error:](
        MediaConversionQueue *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id *a6)
{
  id v9; // x19
  id v10; // x21
  id v11; // x22
  NSFileManager *v12; // x23
  id v13; // x21
  id v14; // x22
  NSFileManager *v15; // x23
  int v16; // w8
  bool v17; // w20
  _QWORD v19[4]; // [xsp+8h] [xbp-D8h] BYREF
  id v20; // [xsp+28h] [xbp-B8h]
  id v21; // [xsp+30h] [xbp-B0h]
  id v22; // [xsp+38h] [xbp-A8h]
  __int64 *v23; // [xsp+40h] [xbp-A0h]
  __int64 *v24; // [xsp+48h] [xbp-98h]
  __int64 v25; // [xsp+50h] [xbp-90h] BYREF
  __int64 *v26; // [xsp+58h] [xbp-88h]
  __int64 v27; // [xsp+60h] [xbp-80h]
  __int64 (__fastcall *v28)(); // [xsp+68h] [xbp-78h]
  __int64 (__fastcall *v29)(); // [xsp+70h] [xbp-70h]
  id v30; // [xsp+78h] [xbp-68h]
  __int64 v31; // [xsp+80h] [xbp-60h] BYREF
  __int64 *v32; // [xsp+88h] [xbp-58h]
  __int64 v33; // [xsp+90h] [xbp-50h]
  char v34; // [xsp+98h] [xbp-48h]

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v11 = objc_retain(a5);
  v31 = 0LL;
  v32 = &v31;
  v33 = 0x2020000000LL;
  v34 = 1;
  v25 = 0LL;
  v26 = &v25;
  v27 = 0x3032000000LL;
  v28 = sub_10000D020;
  v29 = sub_10000D030;
  v30 = 0LL;
  v12 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v19[0] = _NSConcreteStackBlock;
  v19[1] = 3254779904LL;
  v19[2] = sub_10000EE98;
  v19[3] = &unk_100041250;
  v13 = objc_retain(v10);
  v20 = v13;
  v14 = objc_retain(v11);
  v21 = v14;
  v23 = &v31;
  v24 = &v25;
  v15 = objc_retain(v12);
  v22 = v15;
  objc_msgSend(v9, "enumerateResourceURLs:", v19);
  v16 = *((unsigned __int8 *)v32 + 24);
  if ( a6 && !*((_BYTE *)v32 + 24) )
  {
    *a6 = objc_retainAutorelease((id)v26[5]);
    v16 = *((unsigned __int8 *)v32 + 24);
  }
  v17 = v16 != 0;
  objc_release(v22);
  objc_release(v21);
  objc_release(v20);
  objc_release(v15);
  _Block_object_dispose(&v25, 8);
  objc_release(v30);
  _Block_object_dispose(&v31, 8);
  objc_release(v14);
  objc_release(v13);
  objc_release(v9);
  return v17;
}