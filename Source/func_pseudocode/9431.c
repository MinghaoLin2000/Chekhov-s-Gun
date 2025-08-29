-[TSPPackage newRawReadChannelForComponentLocator:isStoredOutsideObjectArchive:error:]
id __cdecl -[TSPPackage newRawReadChannelForComponentLocator:isStoredOutsideObjectArchive:error:](
        TSPPackage *self,
        SEL a2,
        id a3,
        bool a4,
        id *a5)
{
  _BOOL4 v6; // w22
  id v8; // x19
  __int64 v9; // x23
  void *v10; // x24
  NSString *v11; // x23
  NSString *v12; // x25
  __int64 v13; // x22
  void *v14; // x23
  NSString *v15; // x22
  NSString *v16; // x24
  TSUZipFileArchive *v17; // x21
  id v18; // x22
  id v19; // x23
  id v20; // x24
  id v21; // x25
  void *v22; // x24
  void *v23; // x24
  id v24; // x0

  v6 = a4;
  v8 = objc_retain(a3);
  if ( !v8 )
  {
    v9 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D31D0);
    v10 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016C728(v9, v10);
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPPackage newRawReadChannelForComponentLocator:isStoredOutsideObjectArchive:error:]"));
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPPackage.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v11,
      v12,
      568LL,
      0LL,
      "Invalid parameter not satisfying: %{public}s",
      "locator");
    objc_release(v12);
    objc_release(v11);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  if ( v6 )
  {
    v13 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D31F0);
    v14 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016C6A0(v13, v14);
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPPackage newRawReadChannelForComponentLocator:isStoredOutsideObjectArchive:error:]"));
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPPackage.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v15,
      v16,
      569LL,
      0LL,
      "Components outside the object archive are not supported");
    objc_release(v16);
    objc_release(v15);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v17 = objc_retainAutoreleasedReturnValue(-[TSPPackage componentZipArchive](self, "componentZipArchive"));
  v18 = objc_retainAutoreleasedReturnValue(
          +[TSPPackage objectArchiveEntryPathForPackageLocator:](
            &OBJC_CLASS___TSPPackage,
            "objectArchiveEntryPathForPackageLocator:",
            v8));
  v19 = objc_retainAutoreleasedReturnValue(-[TSUZipArchive entryForName:](v17, "entryForName:", v18));
  if ( v19 )
  {
    v20 = objc_retainAutoreleasedReturnValue(-[TSUZipArchive streamReadChannelForEntry:](v17, "streamReadChannelForEntry:", v19));
    if ( v20 )
    {
      v21 = 0LL;
      goto LABEL_27;
    }
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001D3210);
    v23 = TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016C638(v18, v23);
  }
  else
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001D3230);
    v22 = TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016C5D0(v18, v22);
  }
  v24 = objc_retainAutoreleasedReturnValue(
          +[NSError tsp_readCorruptedDocumentErrorWithUserInfo:](
            &OBJC_CLASS___NSError,
            "tsp_readCorruptedDocumentErrorWithUserInfo:",
            0LL));
  v21 = v24;
  if ( a5 )
  {
    v21 = objc_retainAutorelease(v24);
    v20 = 0LL;
    *a5 = v21;
  }
  else
  {
    v20 = 0LL;
  }
LABEL_27:
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  objc_release(v21);
  objc_release(v8);
  return v20;
}