-[SFUFileInputStream readToBuffer:size:]
unsigned __int64 __cdecl -[SFUFileInputStream readToBuffer:size:](
        SFUFileInputStream *self,
        SEL a2,
        char *a3,
        unsigned __int64 a4)
{
  int mFd; // w22
  __int64 v8; // x22
  void *v9; // x23
  off_t mCurrentOffset; // x23
  size_t v11; // x26
  ssize_t v12; // x0
  ssize_t v13; // x27

  mFd = self->mFd;
  if ( mFd == -1 )
  {
    v8 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DEF68);
    v9 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100173CA4(v8, v9);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUFileInputStream readToBuffer:size:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUFileInputStream.m"),
      121LL,
      0LL,
      "Using a closed stream");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    mFd = self->mFd;
  }
  mCurrentOffset = self->mCurrentOffset;
  if ( self->mEndOffset - mCurrentOffset < a4 )
    a4 = self->mEndOffset - mCurrentOffset;
  v11 = a4;
  do
  {
    v12 = pread(mFd, a3, v11, mCurrentOffset);
    v13 = v12;
    if ( v12 < 0 || v11 && !v12 )
      +[NSException sfu_errnoRaise:format:](
        &OBJC_CLASS___NSException,
        "sfu_errnoRaise:format:",
        CFSTR("SFUPReadError"),
        CFSTR("Could not pread"));
    mCurrentOffset += v13;
    a3 += v13;
    v11 -= v13;
  }
  while ( v11 );
  self->mCurrentOffset += a4;
  return a4;
}