-[TSPCompressionComponentWriteChannel dealloc]
void __cdecl -[TSPCompressionComponentWriteChannel dealloc](TSPCompressionComponentWriteChannel *self, SEL a2)
{
  __int64 v3; // x20
  void *v4; // x21
  NSString *v5; // x21
  NSString *v6; // x22
  objc_super v7; // [xsp+0h] [xbp-40h] BYREF

  if ( self->_writeChannel )
  {
    v3 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D5308);
    v4 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016D54C(v3, v4);
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSPCompressionComponentWriteChannel dealloc]"));
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/persistence/src/TSPCompressionComponentWriteChannel.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v5,
      v6,
      29LL,
      0LL,
      "Failed to close write channel prior to dealloc");
    objc_release(v6);
    objc_release(v5);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___TSPCompressionComponentWriteChannel;
  -[TSPCompressionComponentWriteChannel dealloc](&v7, "dealloc");
}