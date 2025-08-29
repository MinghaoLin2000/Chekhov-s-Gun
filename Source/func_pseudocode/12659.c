-[TSUZipFileArchive copyToTemporaryLocationRelativeToURL:error:]
bool __cdecl -[TSUZipFileArchive copyToTemporaryLocationRelativeToURL:error:](
        TSUZipFileArchive *self,
        SEL a2,
        id a3,
        id *a4)
{
  id v6; // x0
  dispatch_queue_s *accessQueue; // x21
  id v8; // x20
  void *v9; // x0
  id v10; // x0
  char v11; // w19
  void **v13; // [xsp+0h] [xbp-C0h] BYREF
  __int64 v14; // [xsp+8h] [xbp-B8h]
  __int64 (__fastcall *v15)(); // [xsp+10h] [xbp-B0h]
  void *v16; // [xsp+18h] [xbp-A8h]
  TSUZipFileArchive *v17; // [xsp+20h] [xbp-A0h]
  id v18; // [xsp+28h] [xbp-98h]
  __int64 *v19; // [xsp+30h] [xbp-90h]
  __int64 *v20; // [xsp+38h] [xbp-88h]
  __int64 v21; // [xsp+40h] [xbp-80h] BYREF
  __int64 *v22; // [xsp+48h] [xbp-78h]
  __int64 v23; // [xsp+50h] [xbp-70h]
  __int64 (__fastcall *v24)(); // [xsp+58h] [xbp-68h]
  __int64 (__fastcall *v25)(); // [xsp+60h] [xbp-60h]
  id v26; // [xsp+68h] [xbp-58h]
  __int64 v27; // [xsp+70h] [xbp-50h] BYREF
  __int64 *v28; // [xsp+78h] [xbp-48h]
  __int64 v29; // [xsp+80h] [xbp-40h]
  char v30; // [xsp+88h] [xbp-38h]

  v6 = objc_retain(a3);
  v27 = 0LL;
  v28 = &v27;
  v29 = 0x2020000000LL;
  v30 = 0;
  v21 = 0LL;
  v22 = &v21;
  v23 = 0x3032000000LL;
  v24 = sub_10012810C;
  v25 = sub_10012811C;
  v26 = 0LL;
  accessQueue = (dispatch_queue_s *)self->_accessQueue;
  v13 = _NSConcreteStackBlock;
  v14 = 3254779904LL;
  v15 = sub_1001291BC;
  v16 = &unk_1001DCA58;
  v17 = self;
  v8 = objc_retain(v6);
  v18 = v8;
  v19 = &v21;
  v20 = &v27;
  dispatch_sync(accessQueue, &v13);
  if ( a4 && !*((_BYTE *)v28 + 24) )
  {
    v9 = (void *)v22[5];
    if ( v9 )
    {
      *a4 = objc_retainAutorelease(v9);
    }
    else
    {
      v10 = objc_retainAutorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileReadUnknownErrorWithUserInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileReadUnknownErrorWithUserInfo:",
                  0LL,
                  v13,
                  v14,
                  v15,
                  v16,
                  v17)));
      *a4 = v10;
      objc_release(v10);
    }
  }
  v11 = *((_BYTE *)v28 + 24);
  objc_release(v18);
  _Block_object_dispose(&v21, 8);
  objc_release(v26);
  _Block_object_dispose(&v27, 8);
  objc_release(v8);
  return v11;
}