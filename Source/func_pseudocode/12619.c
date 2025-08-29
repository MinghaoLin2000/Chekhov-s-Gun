-[SFUOffsetInputStream offset]
signed __int64 __cdecl -[SFUOffsetInputStream offset](SFUOffsetInputStream *self, SEL a2)
{
  void *v3; // x20
  signed __int64 mInitialOffset; // x8
  __int64 v5; // x21
  void *v6; // x22

  v3 = -[SFUInputStream offset](self->mInputStream, "offset");
  mInitialOffset = self->mInitialOffset;
  if ( (__int64)v3 < mInitialOffset )
  {
    v5 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DC7A8);
    v6 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016E6F8(v5, v6);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUOffsetInputStream offset]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUOffsetInputStream.m"),
      42LL,
      0LL,
      "SFUOffsetInputStream points before its offset");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    mInitialOffset = self->mInitialOffset;
  }
  return (signed __int64)v3 - mInitialOffset;
}