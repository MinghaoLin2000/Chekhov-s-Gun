-[TSPPackageWriter dealloc]
void __cdecl -[TSPPackageWriter dealloc](TSPPackageWriter *self, SEL a2)
{
  __int64 v2; // x19
  void *v3; // x20
  NSString *v4; // x19
  NSString *v5; // x22
  objc_super v6; // [xsp+30h] [xbp-30h] BYREF

  if ( self->_isOpened )
  {
    v2 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D1208);
    v3 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100168F30(v2, v3);
    TSUSetCrashReporterInfo(
      "Fatal Assertion failure: %{public}s %{public}s:%d Didn't close",
      "-[TSPPackageWriter dealloc]",
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/src/TSPPackageWriter.mm",
      229LL);
    v4 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSPPackageWriter dealloc]"));
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/persistence/src/TSPPackageWriter.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v4,
      v5,
      229LL,
      1LL,
      "Didn't close");
    objc_release(v5);
    objc_release(v4);
    TSUCrashBreakpoint();
    abort();
  }
  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___TSPPackageWriter;
  -[TSPPackageWriter dealloc](&v6, "dealloc");
}