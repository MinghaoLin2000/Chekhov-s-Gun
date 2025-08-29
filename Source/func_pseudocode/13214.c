-[SFUFileOutputStream writeBuffer:size:]
void __cdecl -[SFUFileOutputStream writeBuffer:size:](
        SFUFileOutputStream *self,
        SEL a2,
        const char *a3,
        unsigned __int64 a4)
{
  FILE *mFile; // x3
  __int64 v8; // x22
  void *v9; // x23

  mFile = self->mFile;
  if ( !mFile )
  {
    v8 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE6F8);
    v9 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100172934(v8, v9);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUFileOutputStream writeBuffer:size:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUFileOutputStream.m"),
      55LL,
      0LL,
      "Using a closed stream");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    mFile = self->mFile;
  }
  if ( fwrite(a3, 1uLL, a4, mFile) != a4 )
    +[NSException sfu_errnoRaise:format:](
      &OBJC_CLASS___NSException,
      "sfu_errnoRaise:format:",
      CFSTR("SFUFileWriteError"),
      CFSTR("Could not write"));
}