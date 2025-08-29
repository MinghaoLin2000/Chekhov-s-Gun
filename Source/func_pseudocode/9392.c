-[TSPZipFileWriteChannel flushWithCompletion:]
void __cdecl -[TSPZipFileWriteChannel flushWithCompletion:](TSPZipFileWriteChannel *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 v5; // x21
  void *v6; // x22
  NSString *v7; // x21
  NSString *v8; // x23
  id v9; // x21
  _QWORD v10[4]; // [xsp+8h] [xbp-58h] BYREF
  id v11; // [xsp+28h] [xbp-38h]

  v4 = objc_retain(a3);
  v5 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001D2DD0);
  v6 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_10016C104(v5, v6);
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "-[TSPZipFileWriteChannel flushWithCompletion:]"));
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/i"
           "WorkXPC/shared/persistence/src/TSPZipFileWriteChannel.mm"));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v7,
    v8,
    57LL,
    0LL,
    "Flushing ZIP write channel only adds a barrier.");
  objc_release(v8);
  objc_release(v7);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_10002B610;
  v10[3] = &unk_1001D1890;
  v9 = objc_retain(v4);
  v11 = v9;
  -[TSPZipFileWriteChannel addBarrier:](self, "addBarrier:", v10);
  objc_release(v11);
  objc_release(v9);
}