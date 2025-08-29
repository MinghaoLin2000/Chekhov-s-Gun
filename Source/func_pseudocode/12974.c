+[TSUIOUtils newCGDataProviderForReadChannel:length:outInfo:outCallbacks:]
CGDataProvider *__cdecl +[TSUIOUtils newCGDataProviderForReadChannel:length:outInfo:outCallbacks:](
        id a1,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        void **a5,
        const CGDataProviderSequentialCallbacks **a6)
{
  id v10; // x24
  TSUReadChannelInputStreamAdapter *v11; // x19
  CGDataProvider *v12; // x20
  __int64 v13; // x20
  void *v14; // x21
  NSString *v15; // x21
  NSString *v16; // x22

  if ( !a3 )
    return 0LL;
  v10 = objc_retain(a3);
  v11 = -[TSUReadChannelInputStreamAdapter initWithReadChannel:length:](
          objc_alloc(&OBJC_CLASS___TSUReadChannelInputStreamAdapter),
          "initWithReadChannel:length:",
          v10,
          a4);
  objc_release(v10);
  if ( -[TSUReadChannelInputStreamAdapter canSeek](v11, "canSeek") )
  {
    v12 = (CGDataProvider *)objc_msgSend(a1, "newCGDataProviderForInputStream:outInfo:outCallbacks:", v11, a5, a6);
  }
  else
  {
    v13 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DDD28);
    v14 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_1001713F0(v13, v14);
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "+[TSUIOUtils newCGDataProviderForReadChannel:length:outInfo:outCallbacks:]"));
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUIOUtils.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v15,
      v16,
      160LL,
      0LL,
      "Need a seekable input stream for CGDataProvider");
    objc_release(v16);
    objc_release(v15);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    v12 = 0LL;
  }
  objc_release(v11);
  return v12;
}