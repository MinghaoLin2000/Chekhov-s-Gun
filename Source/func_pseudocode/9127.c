-[TSPDirectoryPackage packageEntryInfoAtRelativePath:error:]
id __cdecl -[TSPDirectoryPackage packageEntryInfoAtRelativePath:error:](
        TSPDirectoryPackage *self,
        SEL a2,
        id a3,
        id *a4)
{
  id v6; // x19
  __int64 v7; // x22
  void *v8; // x23
  NSString *v9; // x22
  NSString *v10; // x24
  TSPFileCoordinatorDelegate *v11; // x22
  id v12; // x21
  void *v13; // x0
  id v14; // x19
  _QWORD v16[4]; // [xsp+8h] [xbp-D8h] BYREF
  id v17; // [xsp+28h] [xbp-B8h]
  __int64 *v18; // [xsp+30h] [xbp-B0h]
  __int64 *v19; // [xsp+38h] [xbp-A8h]
  __int64 v20; // [xsp+40h] [xbp-A0h] BYREF
  __int64 *v21; // [xsp+48h] [xbp-98h]
  __int64 v22; // [xsp+50h] [xbp-90h]
  __int64 (__fastcall *v23)(); // [xsp+58h] [xbp-88h]
  __int64 (__fastcall *v24)(); // [xsp+60h] [xbp-80h]
  id v25; // [xsp+68h] [xbp-78h]
  __int64 v26; // [xsp+70h] [xbp-70h] BYREF
  __int64 *v27; // [xsp+78h] [xbp-68h]
  __int64 v28; // [xsp+80h] [xbp-60h]
  __int64 (__fastcall *v29)(); // [xsp+88h] [xbp-58h]
  __int64 (__fastcall *v30)(); // [xsp+90h] [xbp-50h]
  id v31; // [xsp+98h] [xbp-48h]
  __int64 vars8; // [xsp+E8h] [xbp+8h]

  v6 = objc_retain(a3);
  if ( !v6 )
  {
    v7 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D1930);
    v8 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100169C34(v7, v8);
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSPDirectoryPackage packageEntryInfoAtRelativePath:error:]"));
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPDirectoryPackage.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v9,
      v10,
      180LL,
      0LL,
      "Invalid parameter not satisfying: %{public}s",
      "path");
    objc_release(v10);
    objc_release(v9);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v26 = 0LL;
  v27 = &v26;
  v28 = 0x3032000000LL;
  v29 = sub_10000E010;
  v30 = sub_10000E020;
  v31 = 0LL;
  v20 = 0LL;
  v21 = &v20;
  v22 = 0x3032000000LL;
  v23 = sub_10000E010;
  v24 = sub_10000E020;
  v25 = 0LL;
  v11 = objc_retainAutoreleasedReturnValue(-[TSPPackage fileCoordinatorDelegate](self, "fileCoordinatorDelegate"));
  v16[0] = _NSConcreteStackBlock;
  v16[1] = 3254779904LL;
  v16[2] = sub_10000FBF4;
  v16[3] = &unk_1001D1820;
  v12 = objc_retain(v6);
  v17 = v12;
  v18 = &v20;
  v19 = &v26;
  -[TSPFileCoordinatorDelegate performReadUsingAccessor:](v11, "performReadUsingAccessor:", v16);
  objc_release(v11);
  v13 = (void *)v27[5];
  if ( a4 && !v13 )
  {
    *a4 = objc_retainAutorelease((id)v21[5]);
    v13 = (void *)v27[5];
  }
  v14 = objc_retain(v13);
  objc_release(v17);
  _Block_object_dispose(&v20, 8);
  objc_release(v25);
  _Block_object_dispose(&v26, 8);
  objc_release(v31);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v14);
}