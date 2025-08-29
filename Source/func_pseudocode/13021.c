-[TSUZipReadChannel addBarrier:]
void __cdecl -[TSUZipReadChannel addBarrier:](TSUZipReadChannel *self, SEL a2, id a3)
{
  id v4; // x19
  TSUReadChannel *archiveReadChannel; // x0
  __int64 v6; // x21
  void *v7; // x22
  NSString *v8; // x22
  NSString *v9; // x23

  v4 = objc_retain(a3);
  archiveReadChannel = self->_archiveReadChannel;
  if ( !archiveReadChannel )
  {
    v6 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE068);
    v7 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100171A58(v6, v7);
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSUZipReadChannel addBarrier:]"));
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/utility/TSUZipReadChannel.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v8,
      v9,
      315LL,
      0LL,
      "Already closed");
    objc_release(v9);
    objc_release(v8);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    archiveReadChannel = self->_archiveReadChannel;
  }
  -[TSUReadChannel addBarrier:](archiveReadChannel, "addBarrier:", v4);
  objc_release(v4);
}