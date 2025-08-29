_SFUHashWithSeed
__int64 __fastcall SFUHashWithSeed(char *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // t1
  __int64 v5; // x20
  void *v6; // x21

  if ( a2 )
  {
    do
    {
      v4 = *a1++;
      a3 = (16777619 * (_DWORD)a3) ^ v4;
      --a2;
    }
    while ( a2 );
  }
  else
  {
    v5 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE538);
    v6 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100172180(v5, v6);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "unsigned int SFUHashWithSeed(const char *, size_t, unsigned int)"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUHash.m"),
      25LL,
      0LL,
      "SFUHash must have at least one byte of input.");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  return a3;
}