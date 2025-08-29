-[TSUBufferedReadChannelHelper initWithBufferedReadChannel:]
TSUBufferedReadChannelHelper *__cdecl -[TSUBufferedReadChannelHelper initWithBufferedReadChannel:](
        TSUBufferedReadChannelHelper *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  TSUBufferedReadChannelHelper *v5; // x20
  __int64 v6; // x21
  void *v7; // x22
  NSString *v8; // x22
  NSString *v9; // x23
  objc_super v11; // [xsp+10h] [xbp-40h] BYREF

  v4 = objc_retain(a3);
  v11.receiver = self;
  v11.super_class = (Class)&OBJC_CLASS___TSUBufferedReadChannelHelper;
  v5 = -[TSUBufferedReadChannelHelper init](&v11, "init");
  if ( v5 )
  {
    if ( !v4 )
    {
      v6 = +[TSUAssertionHandler _atomicIncrementAssertCount](
             &OBJC_CLASS___TSUAssertionHandler,
             "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001DDBF0);
      v7 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10017110C(v6, v7);
      v8 = objc_retainAutoreleasedReturnValue(
             +[NSString stringWithUTF8String:](
               &OBJC_CLASS___NSString,
               "stringWithUTF8String:",
               "-[TSUBufferedReadChannelHelper initWithBufferedReadChannel:]"));
      v9 = objc_retainAutoreleasedReturnValue(
             +[NSString stringWithUTF8String:](
               &OBJC_CLASS___NSString,
               "stringWithUTF8String:",
               "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sourc"
               "es/iWorkXPC/shared/utility/TSUBufferedReadChannel.m"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v8,
        v9,
        378LL,
        0LL,
        "invalid nil value for '%{public}s'",
        "bufferedReadChannel");
      objc_release(v9);
      objc_release(v8);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    objc_storeWeak((id *)&v5->_bufferedReadChannel, v4);
  }
  objc_release(v4);
  return v5;
}