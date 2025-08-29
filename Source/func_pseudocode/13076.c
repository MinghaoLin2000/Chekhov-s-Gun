-[SFUZipArchiveFileDataRepresentation dealloc]
void __cdecl -[SFUZipArchiveFileDataRepresentation dealloc](SFUZipArchiveFileDataRepresentation *self, SEL a2)
{
  int mFd; // w0
  __int64 v4; // x21
  void *v5; // x22
  objc_super v6; // [xsp+10h] [xbp-40h] BYREF

  objc_release(self->mFileRepresentation);
  mFd = self->mFd;
  if ( mFd != -1 && close(mFd) )
  {
    v4 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE318);
    v5 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100171D00(&self->mFd, v4, v5);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUZipArchiveFileDataRepresentation dealloc]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUZipArchiveFileDataRepresentation.m"),
      50LL,
      0LL,
      "close failed on fd = %d with errorno = %d",
      (unsigned int)self->mFd,
      (unsigned int)*__error());
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___SFUZipArchiveFileDataRepresentation;
  -[SFUZipArchiveFileDataRepresentation dealloc](&v6, "dealloc");
}