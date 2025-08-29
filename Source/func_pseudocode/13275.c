-[TSUFileIOChannel truncateToLength:completion:]
void __cdecl -[TSUFileIOChannel truncateToLength:completion:](TSUFileIOChannel *self, SEL a2, signed __int64 a3, id a4)
{
  id v6; // x21
  unsigned __int8 v7; // w8
  __int64 v8; // x22
  void *v9; // x23
  NSString *v10; // x23
  NSString *v11; // x24
  OS_dispatch_io *channel; // x22
  id v13; // x19
  _QWORD barrier[5]; // [xsp+8h] [xbp-78h] BYREF
  id v15; // [xsp+30h] [xbp-50h]
  signed __int64 v16; // [xsp+38h] [xbp-48h]

  v6 = objc_retain(a4);
  v7 = atomic_load((unsigned __int8 *)&self->_isClosed);
  if ( (v7 & 1) != 0 )
  {
    v8 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DEA68);
    v9 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100173348(v8, v9);
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSUFileIOChannel truncateToLength:completion:]"));
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUFileIOChannel.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v10,
      v11,
      323LL,
      0LL,
      "Channel is closed");
    objc_release(v11);
    objc_release(v10);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  channel = self->_channel;
  barrier[0] = _NSConcreteStackBlock;
  barrier[1] = 3254779904LL;
  barrier[2] = sub_10014FB00;
  barrier[3] = &unk_1001DEAA8;
  v15 = v6;
  v16 = a3;
  barrier[4] = self;
  v13 = objc_retain(v6);
  dispatch_io_barrier((dispatch_io_t)channel, barrier);
  objc_release(v15);
  objc_release(v13);
}