-[NSFileManager tsu_canCloneItemAtURL:toURL:]
bool __cdecl -[NSFileManager tsu_canCloneItemAtURL:toURL:](NSFileManager *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x0
  void *v7; // x20
  __int64 v8; // x21
  void *v9; // x22
  NSString *v10; // x22
  NSString *v11; // x23
  __int64 v12; // x21
  void *v13; // x22
  NSString *v14; // x22
  NSString *v15; // x23
  unsigned __int8 v16; // w21

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = v6;
  if ( v5 )
  {
    if ( v6 )
      goto LABEL_14;
    goto LABEL_9;
  }
  v8 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001DD7B0);
  v9 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_100170478(v8, v9);
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "-[NSFileManager(TSUAdditions) tsu_canCloneItemAtURL:toURL:]"));
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/utility/NSFileManager_TSUAdditions.m"));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v10,
    v11,
    15LL,
    0LL,
    "Invalid parameter not satisfying: %{public}s",
    "srcURL");
  objc_release(v11);
  objc_release(v10);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  if ( !v7 )
  {
LABEL_9:
    v12 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD7D0);
    v13 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_1001703E4(v12, v13);
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[NSFileManager(TSUAdditions) tsu_canCloneItemAtURL:toURL:]"));
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/NSFileManager_TSUAdditions.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v14,
      v15,
      16LL,
      0LL,
      "Invalid parameter not satisfying: %{public}s",
      "dstURL");
    objc_release(v15);
    objc_release(v14);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
LABEL_14:
  if ( (unsigned int)objc_msgSend(v5, "tsu_volumeSupportsCloning") )
    v16 = (unsigned __int8)objc_msgSend(v5, "tsu_isOnSameVolumeAs:", v7);
  else
    v16 = 0;
  objc_release(v7);
  objc_release(v5);
  return v16;
}