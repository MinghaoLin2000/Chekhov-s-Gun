-[TSPDataCopyProviderConcrete inputStreamForRange:]
id __cdecl -[TSPDataCopyProviderConcrete inputStreamForRange:](TSPDataCopyProviderConcrete *self, SEL a2, _NSRange a3)
{
  NSUInteger location; // x20
  NSUInteger v5; // x21
  TSUReadChannelInputStreamAdapter *v6; // x22
  TSUReadChannel *v7; // x23
  TSUReadChannelInputStreamAdapter *v8; // x19
  SFUOffsetInputStream *v9; // x20
  SFUReadChannelNSInputStreamAdaptor *v10; // x0
  SFUReadChannelNSInputStreamAdaptor *v11; // x20
  __int64 v13; // x19
  void *v14; // x20
  NSString *v15; // x20
  NSString *v16; // x19
  __int64 vars8; // [xsp+58h] [xbp+8h]

  location = a3.location;
  v5 = a3.location + a3.length;
  v6 = objc_alloc(&OBJC_CLASS___TSUReadChannelInputStreamAdapter);
  v7 = objc_retainAutoreleasedReturnValue(-[TSPDataCopyProviderConcrete readChannelInternal](self, "readChannelInternal"));
  v8 = -[TSUReadChannelInputStreamAdapter initWithReadChannel:length:closeChannelOnClose:](
         v6,
         "initWithReadChannel:length:closeChannelOnClose:",
         v7,
         v5,
         0LL);
  objc_release(v7);
  if ( location )
  {
    v9 = -[SFUOffsetInputStream initWithInputStream:initialOffset:](
           objc_alloc(&OBJC_CLASS___SFUOffsetInputStream),
           "initWithInputStream:initialOffset:",
           v8,
           location);
    objc_release(v8);
    v8 = (TSUReadChannelInputStreamAdapter *)v9;
  }
  v10 = -[SFUReadChannelNSInputStreamAdaptor initWithSFUInputStream:](
          objc_alloc(&OBJC_CLASS___SFUReadChannelNSInputStreamAdaptor),
          "initWithSFUInputStream:",
          v8);
  if ( !v10 )
  {
    v13 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D1CB0);
    v14 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100169E84(v13, v14);
    TSUSetCrashReporterInfo(
      "Fatal Assertion failure: %{public}s %{public}s:%d invalid nil value for '%{public}s'",
      "-[TSPDataCopyProviderConcrete inputStreamForRange:]",
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/src/TSPDataCopyProvider.m",
      83LL,
      "inputStream");
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPDataCopyProviderConcrete inputStreamForRange:]"));
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPDataCopyProvider.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v15,
      v16,
      83LL,
      1LL,
      "invalid nil value for '%{public}s'",
      "inputStream");
    objc_release(v16);
    objc_release(v15);
    TSUCrashBreakpoint();
    abort();
  }
  v11 = v10;
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}