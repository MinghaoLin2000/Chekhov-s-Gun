-[TSPDirectoryPackage newRawReadChannelForComponentLocator:isStoredOutsideObjectArchive:error:]
id __cdecl -[TSPDirectoryPackage newRawReadChannelForComponentLocator:isStoredOutsideObjectArchive:error:](
        TSPDirectoryPackage *self,
        SEL a2,
        id a3,
        bool a4,
        id *a5)
{
  _BOOL4 v6; // w22
  id v8; // x0
  void *v9; // x19
  __int64 v10; // x22
  void *v11; // x23
  NSString *v12; // x22
  NSString *v13; // x24
  TSPFileCoordinatorDelegate *v14; // x21
  void *v15; // x0
  id v16; // x21
  void *v17; // x0
  id v18; // x20
  objc_super v20; // [xsp+10h] [xbp-F0h] BYREF
  id obj; // [xsp+20h] [xbp-E0h] BYREF
  _QWORD v22[4]; // [xsp+28h] [xbp-D8h] BYREF
  id v23; // [xsp+48h] [xbp-B8h]
  __int64 *v24; // [xsp+50h] [xbp-B0h]
  __int64 *v25; // [xsp+58h] [xbp-A8h]
  __int64 v26; // [xsp+60h] [xbp-A0h] BYREF
  __int64 *v27; // [xsp+68h] [xbp-98h]
  __int64 v28; // [xsp+70h] [xbp-90h]
  __int64 (__fastcall *v29)(); // [xsp+78h] [xbp-88h]
  __int64 (__fastcall *v30)(); // [xsp+80h] [xbp-80h]
  id v31; // [xsp+88h] [xbp-78h] BYREF
  __int64 v32; // [xsp+90h] [xbp-70h] BYREF
  __int64 *v33; // [xsp+98h] [xbp-68h]
  __int64 v34; // [xsp+A0h] [xbp-60h]
  __int64 (__fastcall *v35)(); // [xsp+A8h] [xbp-58h]
  __int64 (__fastcall *v36)(); // [xsp+B0h] [xbp-50h]
  id v37; // [xsp+B8h] [xbp-48h]

  v6 = a4;
  v8 = objc_retain(a3);
  v9 = v8;
  v32 = 0LL;
  v33 = &v32;
  v34 = 0x3032000000LL;
  v35 = sub_10000E010;
  v36 = sub_10000E020;
  v37 = 0LL;
  v26 = 0LL;
  v27 = &v26;
  v28 = 0x3032000000LL;
  v29 = sub_10000E010;
  v30 = sub_10000E020;
  v31 = 0LL;
  if ( v6 )
  {
    if ( !v8 )
    {
      v10 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D17E0);
      v11 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_100169A6C(v10, v11);
      v12 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSPDirectoryPackage newRawReadChannelForComponentLocator:isStoredOutsideObjectArchive:error:]"));
      v13 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPDirectoryPackage.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v12,
        v13,
        87LL,
        0LL,
        "invalid nil value for '%{public}s'",
        "locator");
      objc_release(v13);
      objc_release(v12);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    v14 = objc_retainAutoreleasedReturnValue(-[TSPPackage fileCoordinatorDelegate](self, "fileCoordinatorDelegate"));
    v22[0] = _NSConcreteStackBlock;
    v22[1] = 3254779904LL;
    v22[2] = sub_10000E7E8;
    v22[3] = &unk_1001D1820;
    v23 = objc_retain(v9);
    v24 = &v32;
    v25 = &v26;
    -[TSPFileCoordinatorDelegate performReadUsingAccessor:](v14, "performReadUsingAccessor:", v22);
    objc_release(v14);
    v15 = v23;
  }
  else
  {
    v20.receiver = self;
    v20.super_class = (Class)&OBJC_CLASS___TSPDirectoryPackage;
    obj = 0LL;
    v16 = -[TSPPackage newRawReadChannelForComponentLocator:isStoredOutsideObjectArchive:error:](
            &v20,
            "newRawReadChannelForComponentLocator:isStoredOutsideObjectArchive:error:",
            v8,
            0LL,
            &obj);
    objc_storeStrong(&v31, obj);
    v15 = (void *)v33[5];
    v33[5] = (__int64)v16;
  }
  objc_release(v15);
  v17 = (void *)v33[5];
  if ( a5 && !v17 )
  {
    *a5 = objc_retainAutorelease((id)v27[5]);
    v17 = (void *)v33[5];
  }
  v18 = objc_retain(v17);
  _Block_object_dispose(&v26, 8);
  objc_release(v31);
  _Block_object_dispose(&v32, 8);
  objc_release(v37);
  objc_release(v9);
  return v18;
}