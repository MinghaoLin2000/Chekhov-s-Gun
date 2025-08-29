-[MediaConversionRequestTracker copyDuplicateRequestOutputFromOriginalRequestTracker:error:]
bool __cdecl -[MediaConversionRequestTracker copyDuplicateRequestOutputFromOriginalRequestTracker:error:](
        MediaConversionRequestTracker *self,
        SEL a2,
        id a3,
        id *a4)
{
  id v6; // x20
  PAMediaConversionServiceResourceURLCollection *v7; // x21
  NSFileManager *v8; // x24
  void *v9; // x23
  PAMediaConversionServiceResourceURLCollection *v10; // x21
  id v11; // x20
  NSFileManager *v12; // x22
  int v13; // w8
  bool v14; // w19
  _QWORD v16[4]; // [xsp+0h] [xbp-D0h] BYREF
  id v17; // [xsp+20h] [xbp-B0h]
  id v18; // [xsp+28h] [xbp-A8h]
  MediaConversionRequestTracker *v19; // [xsp+30h] [xbp-A0h]
  id v20; // [xsp+38h] [xbp-98h]
  __int64 *v21; // [xsp+40h] [xbp-90h]
  __int64 *v22; // [xsp+48h] [xbp-88h]
  __int64 v23; // [xsp+50h] [xbp-80h] BYREF
  __int64 *v24; // [xsp+58h] [xbp-78h]
  __int64 v25; // [xsp+60h] [xbp-70h]
  __int64 (__fastcall *v26)(); // [xsp+68h] [xbp-68h]
  __int64 (__fastcall *v27)(); // [xsp+70h] [xbp-60h]
  id v28; // [xsp+78h] [xbp-58h]
  __int64 v29; // [xsp+80h] [xbp-50h] BYREF
  __int64 *v30; // [xsp+88h] [xbp-48h]
  __int64 v31; // [xsp+90h] [xbp-40h]
  char v32; // [xsp+98h] [xbp-38h]

  v6 = objc_retain(a3);
  v29 = 0LL;
  v30 = &v29;
  v31 = 0x2020000000LL;
  v32 = 1;
  v7 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker destinationURLCollection](self, "destinationURLCollection"));
  v23 = 0LL;
  v24 = &v23;
  v25 = 0x3032000000LL;
  v26 = sub_1000264B0;
  v27 = sub_1000264C0;
  v28 = 0LL;
  v8 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "destinationURLCollection"));
  v16[0] = _NSConcreteStackBlock;
  v16[1] = 3254779904LL;
  v16[2] = sub_1000264C8;
  v16[3] = &unk_100041830;
  v10 = objc_retain(v7);
  v17 = v10;
  v11 = objc_retain(v6);
  v18 = v11;
  v19 = self;
  v21 = &v29;
  v22 = &v23;
  v12 = objc_retain(v8);
  v20 = v12;
  objc_msgSend(v9, "enumerateResourceURLs:", v16);
  objc_release(v9);
  v13 = *((unsigned __int8 *)v30 + 24);
  if ( a4 && !*((_BYTE *)v30 + 24) )
  {
    *a4 = objc_retainAutorelease((id)v24[5]);
    v13 = *((unsigned __int8 *)v30 + 24);
  }
  v14 = v13 != 0;
  objc_release(v20);
  objc_release(v18);
  objc_release(v17);
  objc_release(v12);
  _Block_object_dispose(&v23, 8);
  objc_release(v28);
  objc_release(v10);
  _Block_object_dispose(&v29, 8);
  objc_release(v11);
  return v14;
}