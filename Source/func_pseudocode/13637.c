-[SFUDataRepresentation cgDataProvider]
CGDataProvider *__cdecl -[SFUDataRepresentation cgDataProvider](SFUDataRepresentation *self, SEL a2)
{
  id v2; // x19
  __int64 v3; // x20
  void *v4; // x21

  v2 = objc_retain(-[SFUDataRepresentation inputStream](self, "inputStream"));
  if ( ((unsigned int)objc_msgSend(v2, "canSeek") & 1) == 0 )
  {
    v3 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DF798);
    v4 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100174D38(v3, v4);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUDataRepresentation cgDataProvider]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUDataRepresentation.m"),
      229LL,
      0LL,
      "Need a seekable input stream for -cgDataProvider");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  return CGDataProviderCreateSequential(v2, (const CGDataProviderSequentialCallbacks *)&unk_1001DF7B8);
}