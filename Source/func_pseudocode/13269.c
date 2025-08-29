-[TSUFileIOChannel writeData:offset:handler:]
void __cdecl -[TSUFileIOChannel writeData:offset:handler:](
        TSUFileIOChannel *self,
        SEL a2,
        id a3,
        signed __int64 a4,
        id a5)
{
  dispatch_data_s *v8; // x19
  id v9; // x21
  unsigned __int8 v10; // w8
  __int64 v11; // x23
  void *v12; // x24
  NSString *v13; // x24
  NSString *v14; // x25
  dispatch_data_s *v15; // x0
  size_t size; // x0
  dispatch_queue_s *ioQueue; // x22
  dispatch_io_s *v18; // x23
  OS_dispatch_queue **p_ioQueue; // t2
  id v20; // x21
  _QWORD io_handler[4]; // [xsp+8h] [xbp-98h] BYREF
  id v22; // [xsp+28h] [xbp-78h]
  _QWORD *v23; // [xsp+30h] [xbp-70h]
  size_t v24; // [xsp+38h] [xbp-68h]
  _QWORD v25[4]; // [xsp+40h] [xbp-60h] BYREF

  v8 = (dispatch_data_s *)objc_retain(a3);
  v9 = objc_retain(a5);
  v10 = atomic_load((unsigned __int8 *)&self->_isClosed);
  if ( (v10 & 1) != 0 )
  {
    v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE938);
    v12 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100172E60(v11, v12);
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSUFileIOChannel writeData:offset:handler:]"));
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUFileIOChannel.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v13,
      v14,
      237LL,
      0LL,
      "Channel is closed");
    objc_release(v14);
    objc_release(v13);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  if ( !v8 )
  {
    v8 = &_dispatch_data_empty;
    v15 = objc_retain(&_dispatch_data_empty);
  }
  size = dispatch_data_get_size(v8);
  v25[0] = 0LL;
  v25[1] = v25;
  v25[2] = 0x2020000000LL;
  v25[3] = 0LL;
  p_ioQueue = &self->_ioQueue;
  ioQueue = (dispatch_queue_s *)self->_ioQueue;
  v18 = (dispatch_io_s *)p_ioQueue[1];
  io_handler[0] = _NSConcreteStackBlock;
  io_handler[1] = 3254779904LL;
  io_handler[2] = sub_10014EC94;
  io_handler[3] = &unk_1001DE958;
  v23 = v25;
  v24 = size;
  v22 = v9;
  v20 = objc_retain(v9);
  dispatch_io_write(v18, a4, v8, ioQueue, io_handler);
  objc_release(v22);
  objc_release(v20);
  _Block_object_dispose(v25, 8);
  objc_release(v8);
}