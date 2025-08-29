+[TSPFileManager copyDataFromReadChannel:decryptionInfo:size:toWriteChannel:encryptionInfo:encodedLength:error:]
bool __cdecl +[TSPFileManager copyDataFromReadChannel:decryptionInfo:size:toWriteChannel:encryptionInfo:encodedLength:error:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5,
        id a6,
        id a7,
        unsigned __int64 *a8,
        id *a9)
{
  id v15; // x19
  id v16; // x20
  id v17; // x21
  id v18; // x22
  void *v19; // x0
  bool v20; // w23
  _QWORD v22[6]; // [xsp+10h] [xbp-C0h] BYREF
  __int64 v23; // [xsp+40h] [xbp-90h] BYREF
  __int64 *v24; // [xsp+48h] [xbp-88h]
  __int64 v25; // [xsp+50h] [xbp-80h]
  __int64 (__fastcall *v26)(); // [xsp+58h] [xbp-78h]
  __int64 (__fastcall *v27)(); // [xsp+60h] [xbp-70h]
  id v28; // [xsp+68h] [xbp-68h]
  __int64 v29; // [xsp+70h] [xbp-60h] BYREF
  __int64 *v30; // [xsp+78h] [xbp-58h]
  __int64 v31; // [xsp+80h] [xbp-50h]
  __int64 v32; // [xsp+88h] [xbp-48h]

  v15 = objc_retain(a3);
  v16 = objc_retain(a4);
  v17 = objc_retain(a6);
  v18 = objc_retain(a7);
  v29 = 0LL;
  v30 = &v29;
  v31 = 0x2020000000LL;
  v32 = 0LL;
  v23 = 0LL;
  v24 = &v23;
  v25 = 0x3032000000LL;
  v26 = sub_100004E98;
  v27 = sub_100004EA8;
  v28 = 0LL;
  v22[0] = _NSConcreteStackBlock;
  v22[1] = 3254779904LL;
  v22[2] = sub_1000051E4;
  v22[3] = &unk_1001D1018;
  v22[4] = &v29;
  v22[5] = &v23;
  objc_msgSend(
    a1,
    "copyDataFromReadChannel:decryptionInfo:size:toWriteChannel:encryptionInfo:synchronous:completion:",
    v15,
    v16,
    a5,
    v17,
    v18,
    1LL,
    v22);
  if ( a8 )
    *a8 = v30[3];
  v19 = (void *)v24[5];
  if ( a9 && v19 )
  {
    *a9 = objc_retainAutorelease(v19);
    v19 = (void *)v24[5];
  }
  v20 = v19 == 0LL;
  _Block_object_dispose(&v23, 8);
  objc_release(v28);
  _Block_object_dispose(&v29, 8);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  return v20;
}