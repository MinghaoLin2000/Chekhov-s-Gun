-[TSUFileIOChannel close]
void __cdecl -[TSUFileIOChannel close](TSUFileIOChannel *self, SEL a2)
{
  __int64 v3; // x20
  void *v4; // x21
  NSString *v5; // x21
  NSString *v6; // x22
  dispatch_semaphore_t v7; // x0
  OS_dispatch_io *channel; // x20
  dispatch_semaphore_s *v9; // x21
  _QWORD barrier[5]; // [xsp+10h] [xbp-60h] BYREF
  id v11; // [xsp+38h] [xbp-38h]

  if ( (atomic_exchange((atomic_uchar *volatile)&self->_isClosed, 1u) & 1) == 0 )
  {
    if ( self->_channel )
      goto LABEL_14;
    v3 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE988);
    v4 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100172EE8(v3, v4);
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSUFileIOChannel close]"));
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/utility/TSUFileIOChannel.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v5,
      v6,
      261LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "_channel");
    objc_release(v6);
    objc_release(v5);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    if ( self->_channel )
    {
LABEL_14:
      if ( +[TSUFileIOChannel shouldFullFsyncOnClose](&OBJC_CLASS___TSUFileIOChannel, "shouldFullFsyncOnClose") )
      {
        if ( (self->_oflag & 3) != 0 )
        {
          v7 = dispatch_semaphore_create(0LL);
          channel = self->_channel;
          barrier[0] = _NSConcreteStackBlock;
          barrier[1] = 3254779904LL;
          barrier[2] = sub_10014EFC4;
          barrier[3] = &unk_1001D53C8;
          barrier[4] = self;
          v9 = objc_retain(v7);
          v11 = v9;
          dispatch_io_barrier((dispatch_io_t)channel, barrier);
          dispatch_semaphore_wait(v9, 0xFFFFFFFFFFFFFFFFLL);
          objc_release(v11);
          objc_release(v9);
        }
      }
      dispatch_io_close((dispatch_io_t)self->_channel, 0LL);
    }
  }
}