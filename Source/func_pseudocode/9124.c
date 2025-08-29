-[TSPDirectoryPackage packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:]
id __cdecl -[TSPDirectoryPackage packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:](
        TSPDirectoryPackage *self,
        SEL a2,
        id a3,
        bool a4)
{
  _BOOL4 v4; // w21
  id v6; // x0
  void *v7; // x19
  __int64 v8; // x21
  void *v9; // x22
  NSString *v10; // x21
  NSString *v11; // x23
  TSPFileCoordinatorDelegate *v12; // x21
  void *v13; // x0
  id v14; // x8
  id v15; // x20
  objc_super v17; // [xsp+10h] [xbp-A0h] BYREF
  _QWORD v18[4]; // [xsp+20h] [xbp-90h] BYREF
  id v19; // [xsp+40h] [xbp-70h]
  __int64 *v20; // [xsp+48h] [xbp-68h]
  __int64 v21; // [xsp+50h] [xbp-60h] BYREF
  __int64 *v22; // [xsp+58h] [xbp-58h]
  __int64 v23; // [xsp+60h] [xbp-50h]
  __int64 (__fastcall *v24)(); // [xsp+68h] [xbp-48h]
  __int64 (__fastcall *v25)(); // [xsp+70h] [xbp-40h]
  id v26; // [xsp+78h] [xbp-38h]
  __int64 vars8; // [xsp+B8h] [xbp+8h]

  v4 = a4;
  v6 = objc_retain(a3);
  v7 = v6;
  v21 = 0LL;
  v22 = &v21;
  v23 = 0x3032000000LL;
  v24 = sub_10000E010;
  v25 = sub_10000E020;
  v26 = 0LL;
  if ( v4 )
  {
    if ( !v6 )
    {
      v8 = +[TSUAssertionHandler _atomicIncrementAssertCount](
             &OBJC_CLASS___TSUAssertionHandler,
             "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D1770);
      v9 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_1001699D8(v8, v9);
      v10 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSPDirectoryPackage packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:]"));
      v11 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPDirectoryPackage.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v10,
        v11,
        59LL,
        0LL,
        "Invalid parameter not satisfying: %{public}s",
        "locator");
      objc_release(v11);
      objc_release(v10);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    v12 = objc_retainAutoreleasedReturnValue(-[TSPPackage fileCoordinatorDelegate](self, "fileCoordinatorDelegate"));
    v18[0] = _NSConcreteStackBlock;
    v18[1] = 3254779904LL;
    v18[2] = sub_10000E074;
    v18[3] = &unk_1001D17B0;
    v19 = objc_retain(v7);
    v20 = &v21;
    -[TSPFileCoordinatorDelegate performReadUsingAccessor:](v12, "performReadUsingAccessor:", v18);
    objc_release(v12);
    v13 = v19;
  }
  else
  {
    v17.receiver = self;
    v17.super_class = (Class)&OBJC_CLASS___TSPDirectoryPackage;
    v14 = objc_retainAutoreleasedReturnValue(
            -[TSPPackage packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:](
              &v17,
              "packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:",
              v6,
              0LL));
    v13 = (void *)v22[5];
    v22[5] = (__int64)v14;
  }
  objc_release(v13);
  v15 = objc_retain((id)v22[5]);
  _Block_object_dispose(&v21, 8);
  objc_release(v26);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}