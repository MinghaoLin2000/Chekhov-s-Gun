-[TSPPackageWriterComponentWriteChannel writeData:]
void __cdecl -[TSPPackageWriterComponentWriteChannel writeData:](
        TSPPackageWriterComponentWriteChannel *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  unsigned __int8 v5; // w8
  __int64 v6; // x20
  void *v7; // x21
  NSString *v8; // x20
  NSString *v9; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = atomic_load((unsigned __int8 *)&self->_isClosed);
  if ( (v5 & 1) != 0 )
  {
    v6 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D2220);
    v7 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016AE08(v6, v7);
    TSUSetCrashReporterInfo(
      "Fatal Assertion failure: %{public}s %{public}s:%d Channel is closed",
      "-[TSPPackageWriterComponentWriteChannel writeData:]",
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/src/TSPPackageWriterComponentWriteChannel.mm",
      30LL);
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSPPackageWriterComponentWriteChannel writeData:]"));
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/persistence/src/TSPPackageWriterComponentWriteChannel.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v8,
      v9,
      30LL,
      1LL,
      "Channel is closed");
    objc_release(v9);
    objc_release(v8);
    TSUCrashBreakpoint();
    abort();
  }
  -[TSUZipWriter addData:](self->_archiveWriter, "addData:", v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}