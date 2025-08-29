-[TSPDataCopyProviderConcrete inputStream]
NSInputStream *__cdecl -[TSPDataCopyProviderConcrete inputStream](TSPDataCopyProviderConcrete *self, SEL a2)
{
  NSInputStream *v2; // x0
  __int64 v4; // x19
  void *v5; // x20
  NSString *v6; // x20
  NSString *v7; // x19
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[TSPDataCopyProviderConcrete inputStreamInternal](self, "inputStreamInternal"));
  if ( !v2 )
  {
    v4 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D1C90);
    v5 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100169DF0(v4, v5);
    TSUSetCrashReporterInfo(
      "Fatal Assertion failure: %{public}s %{public}s:%d invalid nil value for '%{public}s'",
      "-[TSPDataCopyProviderConcrete inputStream]",
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/src/TSPDataCopyProvider.m",
      67LL,
      "inputStream");
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSPDataCopyProviderConcrete inputStream]"));
    v7 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/persistence/src/TSPDataCopyProvider.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v6,
      v7,
      67LL,
      1LL,
      "invalid nil value for '%{public}s'",
      "inputStream");
    objc_release(v7);
    objc_release(v6);
    TSUCrashBreakpoint();
    abort();
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}