-[NSFileManager tsu_linkOrCopyItemAtURL:toURL:error:]
bool __cdecl -[NSFileManager tsu_linkOrCopyItemAtURL:toURL:error:](NSFileManager *self, SEL a2, id a3, id a4, id *a5)
{
  id v8; // x19
  id v9; // x0
  void *v10; // x20
  __int64 v11; // x23
  void *v12; // x24
  NSString *v13; // x24
  NSString *v14; // x25
  __int64 v15; // x23
  void *v16; // x24
  NSString *v17; // x24
  NSString *v18; // x25
  id v19; // x0
  bool v20; // w22
  id v22; // [xsp+8h] [xbp-48h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = v9;
  if ( v8 )
  {
    if ( v9 )
      goto LABEL_14;
    goto LABEL_9;
  }
  v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
          &OBJC_CLASS___TSUAssertionHandler,
          "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001DD7F0);
  v12 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_1001705A0(v11, v12);
  v13 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "-[NSFileManager(TSUAdditions) tsu_linkOrCopyItemAtURL:toURL:error:]"));
  v14 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/utility/NSFileManager_TSUAdditions.m"));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v13,
    v14,
    22LL,
    0LL,
    "Invalid parameter not satisfying: %{public}s",
    "srcURL");
  objc_release(v14);
  objc_release(v13);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  if ( !v10 )
  {
LABEL_9:
    v15 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD810);
    v16 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10017050C(v15, v16);
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[NSFileManager(TSUAdditions) tsu_linkOrCopyItemAtURL:toURL:error:]"));
    v18 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/NSFileManager_TSUAdditions.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v17,
      v18,
      23LL,
      0LL,
      "Invalid parameter not satisfying: %{public}s",
      "dstURL");
    objc_release(v18);
    objc_release(v17);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
LABEL_14:
  if ( -[NSFileManager tsu_canCloneItemAtURL:toURL:](self, "tsu_canCloneItemAtURL:toURL:", v8, v10)
    || !-[NSFileManager linkItemAtURL:toURL:error:](self, "linkItemAtURL:toURL:error:", v8, v10, 0LL) )
  {
    v22 = 0LL;
    v20 = -[NSFileManager copyItemAtURL:toURL:error:](self, "copyItemAtURL:toURL:error:", v8, v10, &v22);
    v19 = objc_retain(v22);
    if ( a5 && !v20 )
    {
      v19 = objc_retainAutorelease(v19);
      v20 = 0;
      *a5 = v19;
    }
  }
  else
  {
    v19 = 0LL;
    v20 = 1;
  }
  objc_release(v19);
  objc_release(v10);
  objc_release(v8);
  return v20;
}