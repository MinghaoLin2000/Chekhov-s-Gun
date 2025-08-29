-[TSUFileIOChannel flushWithCompletion:]
void __cdecl -[TSUFileIOChannel flushWithCompletion:](TSUFileIOChannel *self, SEL a2, id a3)
{
  id v4; // x20
  unsigned __int8 v5; // w8
  __int64 v6; // x21
  void *v7; // x22
  NSString *v8; // x22
  NSString *v9; // x23
  OS_dispatch_io *channel; // x21
  id v11; // x19
  _QWORD v12[5]; // [xsp+0h] [xbp-60h] BYREF
  id v13; // [xsp+28h] [xbp-38h]

  v4 = objc_retain(a3);
  v5 = atomic_load((unsigned __int8 *)&self->_isClosed);
  if ( (v5 & 1) != 0 )
  {
    v6 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DEA28);
    v7 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100173238(v6, v7);
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSUFileIOChannel flushWithCompletion:]"));
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/utility/TSUFileIOChannel.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v8,
      v9,
      305LL,
      0LL,
      "Channel is closed");
    objc_release(v9);
    objc_release(v8);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  channel = self->_channel;
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 3254779904LL;
  v12[2] = sub_10014F734;
  v12[3] = &unk_1001D19E0;
  v12[4] = self;
  v13 = v4;
  v11 = objc_retain(v4);
  dispatch_io_barrier((dispatch_io_t)channel, v12);
  objc_release(v13);
  objc_release(v11);
}