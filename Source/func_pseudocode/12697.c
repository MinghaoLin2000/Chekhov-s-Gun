-[SFUMemoryOutputStream seekToOffset:whence:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[SFUMemoryOutputStream seekToOffset:whence:](
        SFUMemoryOutputStream *self,
        SEL a2,
        signed __int64 a3,
        int a4)
{
  __int64 v4; // x19
  void *v5; // x20

  v4 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount",
         a3,
         *(_QWORD *)&a4);
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001DCB58);
  v5 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_10016EE8C(v4, v5);
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    +[NSString stringWithUTF8String:](
      &OBJC_CLASS___NSString,
      "stringWithUTF8String:",
      "-[SFUMemoryOutputStream seekToOffset:whence:]"),
    +[NSString stringWithUTF8String:](
      &OBJC_CLASS___NSString,
      "stringWithUTF8String:",
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/utility/sf/SFUMemoryOutputStream.m"),
    42LL,
    0LL,
    "Not implemented");
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
}