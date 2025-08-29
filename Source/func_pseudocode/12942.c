-[SFUZipEntry setDataLength:]
void __cdecl -[SFUZipEntry setDataLength:](SFUZipEntry *self, SEL a2, signed __int64 a3)
{
  __int64 v3; // x19
  void *v4; // x20

  if ( self->mCryptoKey )
  {
    self->mHasEncodedLength = 0;
    self->mUncompressedSize = a3;
  }
  else
  {
    v3 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount",
           a3);
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DDA10);
    v4 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100170B58(v3, v4);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUZipEntry setDataLength:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUZipEntry.m"),
      294LL,
      0LL,
      "Tried to call -setDataLength: on an unencrypted zip entry.");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
}