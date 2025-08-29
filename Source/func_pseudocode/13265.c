-[TSUFileIOChannel readFromOffset:length:handler:]
void __cdecl -[TSUFileIOChannel readFromOffset:length:handler:](
        TSUFileIOChannel *self,
        SEL a2,
        signed __int64 a3,
        unsigned __int64 a4,
        id a5)
{
  id v8; // x21
  unsigned __int8 v9; // w8
  __int64 v10; // x23
  void *v11; // x24
  NSString *v12; // x24
  NSString *v13; // x25
  dispatch_queue_s *ioQueue; // x22
  dispatch_io_s *v15; // x23
  OS_dispatch_queue **p_ioQueue; // t2
  id v17; // x21
  _QWORD io_handler[4]; // [xsp+8h] [xbp-68h] BYREF
  id v19; // [xsp+28h] [xbp-48h]

  v8 = objc_retain(a5);
  v9 = atomic_load((unsigned __int8 *)&self->_isClosed);
  if ( (v9 & 1) != 0 )
  {
    v10 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE8E8);
    v11 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100172DD8(v10, v11);
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSUFileIOChannel readFromOffset:length:handler:]"));
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUFileIOChannel.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v12,
      v13,
      215LL,
      0LL,
      "Channel is closed");
    objc_release(v13);
    objc_release(v12);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  p_ioQueue = &self->_ioQueue;
  ioQueue = (dispatch_queue_s *)self->_ioQueue;
  v15 = (dispatch_io_s *)p_ioQueue[1];
  io_handler[0] = _NSConcreteStackBlock;
  io_handler[1] = 3254779904LL;
  io_handler[2] = sub_10014E958;
  io_handler[3] = &unk_1001DE908;
  v19 = v8;
  v17 = objc_retain(v8);
  dispatch_io_read(v15, a3, a4, ioQueue, io_handler);
  objc_release(v19);
  objc_release(v17);
}