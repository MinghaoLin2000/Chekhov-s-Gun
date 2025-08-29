-[SFUFileOutputStream offset]
signed __int64 __cdecl -[SFUFileOutputStream offset](SFUFileOutputStream *self, SEL a2)
{
  FILE *mFile; // x0
  __int64 v4; // x20
  void *v5; // x21
  off_t v6; // x19

  mFile = self->mFile;
  if ( !mFile )
  {
    v4 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE718);
    v5 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_1001729BC(v4, v5);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUFileOutputStream offset]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUFileOutputStream.m"),
      60LL,
      0LL,
      "Using a closed stream");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    mFile = self->mFile;
  }
  v6 = ftello(mFile);
  if ( v6 == -1 )
    +[NSException sfu_errnoRaise:format:](
      &OBJC_CLASS___NSException,
      "sfu_errnoRaise:format:",
      CFSTR("SFUFileTellError"),
      CFSTR("Could not tell"));
  return v6;
}