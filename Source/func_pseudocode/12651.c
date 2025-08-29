+[TSUZipFileArchive zipArchiveFromURL:options:error:]
id __cdecl +[TSUZipFileArchive zipArchiveFromURL:options:error:](id a1, SEL a2, id a3, unsigned __int64 a4, id *a5)
{
  id v8; // x19
  unsigned int v9; // w23
  dispatch_semaphore_t v10; // x24
  dispatch_queue_global_s *v11; // x23
  dispatch_semaphore_s *v12; // x24
  void *v13; // x0
  id v14; // x0
  id v15; // x20
  _QWORD v17[4]; // [xsp+0h] [xbp-D0h] BYREF
  id v18; // [xsp+20h] [xbp-B0h]
  __int64 *v19; // [xsp+28h] [xbp-A8h]
  __int64 *v20; // [xsp+30h] [xbp-A0h]
  id obj; // [xsp+38h] [xbp-98h] BYREF
  __int64 v22; // [xsp+40h] [xbp-90h] BYREF
  __int64 *v23; // [xsp+48h] [xbp-88h]
  __int64 v24; // [xsp+50h] [xbp-80h]
  __int64 (__fastcall *v25)(); // [xsp+58h] [xbp-78h]
  __int64 (__fastcall *v26)(); // [xsp+60h] [xbp-70h]
  id v27; // [xsp+68h] [xbp-68h] BYREF
  __int64 v28; // [xsp+70h] [xbp-60h] BYREF
  __int64 *v29; // [xsp+78h] [xbp-58h]
  __int64 v30; // [xsp+80h] [xbp-50h]
  __int64 (__fastcall *v31)(); // [xsp+88h] [xbp-48h]
  __int64 (__fastcall *v32)(); // [xsp+90h] [xbp-40h]
  id v33; // [xsp+98h] [xbp-38h]
  __int64 vars8; // [xsp+D8h] [xbp+8h]

  v8 = objc_retain(a3);
  v28 = 0LL;
  v29 = &v28;
  v30 = 0x3032000000LL;
  v31 = sub_10012810C;
  v32 = sub_10012811C;
  v33 = 0LL;
  v22 = 0LL;
  v23 = &v22;
  v24 = 0x3032000000LL;
  v25 = sub_10012810C;
  v26 = sub_10012811C;
  v27 = 0LL;
  obj = 0LL;
  v9 = (unsigned int)objc_msgSend(a1, "isZipArchiveAtURL:error:", v8, &obj);
  objc_storeStrong(&v27, obj);
  if ( v9 )
  {
    v10 = dispatch_semaphore_create(0LL);
    v11 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
    v17[0] = _NSConcreteStackBlock;
    v17[1] = 3254779904LL;
    v17[2] = sub_100128124;
    v17[3] = &unk_1001DC878;
    v19 = &v28;
    v20 = &v22;
    v12 = objc_retain(v10);
    v18 = v12;
    objc_msgSend(a1, "readArchiveFromURL:options:queue:completion:", v8, a4, v11, v17);
    dispatch_semaphore_wait(v12, 0xFFFFFFFFFFFFFFFFLL);
    objc_release(v18);
    objc_release(v11);
    objc_release(v12);
  }
  if ( a5 && !v29[5] )
  {
    v13 = (void *)v23[5];
    if ( v13 )
    {
      *a5 = objc_retainAutorelease(v13);
    }
    else
    {
      v14 = objc_retainAutorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileReadUnknownErrorWithUserInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileReadUnknownErrorWithUserInfo:",
                  0LL)));
      *a5 = v14;
      objc_release(v14);
    }
  }
  v15 = objc_retain((id)v29[5]);
  _Block_object_dispose(&v22, 8);
  objc_release(v27);
  _Block_object_dispose(&v28, 8);
  objc_release(v33);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}