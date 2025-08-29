-[TSUDatabase dealloc]
void __cdecl -[TSUDatabase dealloc](TSUDatabase *self, SEL a2)
{
  __int64 v3; // x20
  void *v4; // x21
  objc_super v5; // [xsp+0h] [xbp-40h] BYREF

  if ( self->_db )
  {
    v3 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD590);
    v4 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016FCD0(v3, v4);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", "-[TSUDatabase dealloc]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/TSUDatabase.m"),
      69LL,
      0LL,
      "Database wasn't closed");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    -[TSUDatabase closeWithError:](self, "closeWithError:", 0LL);
  }
  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___TSUDatabase;
  -[TSUDatabase dealloc](&v5, "dealloc");
}