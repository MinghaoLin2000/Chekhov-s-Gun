-[SFUZipEntry backingFilePath]
id __cdecl -[SFUZipEntry backingFilePath](SFUZipEntry *self, SEL a2)
{
  SFUZipArchiveDataRepresentation *mArchiveDataRepresentation; // x0
  __int64 v5; // x19
  void *v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( -[SFUZipEntry isBackedByFile](self, "isBackedByFile") )
  {
    mArchiveDataRepresentation = self->mArchiveDataRepresentation;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return -[SFUZipArchiveDataRepresentation path](mArchiveDataRepresentation, "path");
  }
  else
  {
    v5 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD9D0);
    v6 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100170A48(v5, v6);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUZipEntry backingFilePath]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUZipEntry.m"),
      227LL,
      0LL,
      "-[SFUZipEntry backingFilePath] called on an entry that is not backed by file.");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    return 0LL;
  }
}