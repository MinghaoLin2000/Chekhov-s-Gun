+[TSUContainedZipArchive zipArchiveFromEntry:zipArchive:options:error:]
id __cdecl +[TSUContainedZipArchive zipArchiveFromEntry:zipArchive:options:error:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5,
        id *a6)
{
  id v10; // x19
  id v11; // x20
  void *v12; // x22
  dispatch_semaphore_t v13; // x24
  dispatch_queue_global_s *v14; // x23
  dispatch_semaphore_s *v15; // x24
  void *v16; // x0
  id v17; // x0
  id v18; // x21
  _QWORD v20[4]; // [xsp+8h] [xbp-C8h] BYREF
  id v21; // [xsp+28h] [xbp-A8h]
  __int64 *v22; // [xsp+30h] [xbp-A0h]
  __int64 *v23; // [xsp+38h] [xbp-98h]
  __int64 v24; // [xsp+40h] [xbp-90h] BYREF
  __int64 *v25; // [xsp+48h] [xbp-88h]
  __int64 v26; // [xsp+50h] [xbp-80h]
  __int64 (__fastcall *v27)(); // [xsp+58h] [xbp-78h]
  __int64 (__fastcall *v28)(); // [xsp+60h] [xbp-70h]
  id v29; // [xsp+68h] [xbp-68h]
  __int64 v30; // [xsp+70h] [xbp-60h] BYREF
  __int64 *v31; // [xsp+78h] [xbp-58h]
  __int64 v32; // [xsp+80h] [xbp-50h]
  __int64 (__fastcall *v33)(); // [xsp+88h] [xbp-48h]
  __int64 (__fastcall *v34)(); // [xsp+90h] [xbp-40h]
  id v35; // [xsp+98h] [xbp-38h]
  __int64 vars8; // [xsp+D8h] [xbp+8h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v30 = 0LL;
  v31 = &v30;
  v32 = 0x3032000000LL;
  v33 = sub_10014FFE0;
  v34 = sub_10014FFF0;
  v35 = 0LL;
  v24 = 0LL;
  v25 = &v24;
  v26 = 0x3032000000LL;
  v27 = sub_10014FFE0;
  v28 = sub_10014FFF0;
  v29 = 0LL;
  v12 = objc_msgSend(objc_alloc((Class)a1), "initWithEntry:zipArchive:options:", v10, v11, a5);
  if ( v12 )
  {
    v13 = dispatch_semaphore_create(0LL);
    v14 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
    v20[0] = _NSConcreteStackBlock;
    v20[1] = 3254779904LL;
    v20[2] = sub_10014FFF8;
    v20[3] = &unk_1001DEAD8;
    v22 = &v30;
    v23 = &v24;
    v15 = objc_retain(v13);
    v21 = v15;
    objc_msgSend(v12, "readArchiveWithQueue:completion:", v14, v20);
    dispatch_semaphore_wait(v15, 0xFFFFFFFFFFFFFFFFLL);
    objc_release(v21);
    objc_release(v14);
    objc_release(v15);
  }
  if ( a6 && !v31[5] )
  {
    v16 = (void *)v25[5];
    if ( v16 )
    {
      *a6 = objc_retainAutorelease(v16);
    }
    else
    {
      v17 = objc_retainAutorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileReadUnknownErrorWithUserInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileReadUnknownErrorWithUserInfo:",
                  0LL)));
      *a6 = v17;
      objc_release(v17);
    }
  }
  v18 = objc_retain((id)v31[5]);
  objc_release(v12);
  _Block_object_dispose(&v24, 8);
  objc_release(v29);
  _Block_object_dispose(&v30, 8);
  objc_release(v35);
  objc_release(v11);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v18);
}