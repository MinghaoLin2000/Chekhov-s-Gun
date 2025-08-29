-[TSPCryptoComponentWriteChannel _resetBuffer]
bool __cdecl -[TSPCryptoComponentWriteChannel _resetBuffer](TSPCryptoComponentWriteChannel *self, SEL a2)
{
  OS_dispatch_semaphore *v3; // x19
  char *v4; // x0
  char *v5; // x21
  size_t bufferSize; // x22
  OS_dispatch_data *v7; // x0
  OS_dispatch_data *bufferDispatchData; // x8
  unsigned __int64 v9; // x8
  bool v10; // w20
  __int64 v11; // x20
  void *v12; // x21
  NSString *v13; // x20
  NSString *v14; // x22
  _QWORD v16[4]; // [xsp+0h] [xbp-60h] BYREF
  id v17; // [xsp+20h] [xbp-40h]
  char *v18; // [xsp+28h] [xbp-38h]

  v3 = objc_retain(self->_bufferSemaphore);
  dispatch_semaphore_wait((dispatch_semaphore_t)v3, 0xFFFFFFFFFFFFFFFFLL);
  v4 = (char *)malloc_type_malloc(self->_bufferSize, 0x8BFF41F4uLL);
  v5 = v4;
  if ( v4 )
  {
    self->_buffer = v4;
    bufferSize = self->_bufferSize;
    v16[0] = _NSConcreteStackBlock;
    v16[1] = 3254779904LL;
    v16[2] = sub_1000192FC;
    v16[3] = &unk_1001D2060;
    v18 = v4;
    v17 = objc_retain(v3);
    v7 = (OS_dispatch_data *)dispatch_data_create(v5, bufferSize, 0LL, v16);
    bufferDispatchData = self->_bufferDispatchData;
    self->_bufferDispatchData = v7;
    objc_release(bufferDispatchData);
    v9 = self->_bufferSize;
    self->_bufferPosition = 0LL;
    self->_remainingBufferSize = v9;
    v10 = self->_bufferDispatchData != 0LL;
    objc_release(v17);
  }
  else
  {
    dispatch_semaphore_signal((dispatch_semaphore_t)v3);
    v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D2040);
    v12 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016A7F8(v11, v12);
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPCryptoComponentWriteChannel _resetBuffer]"));
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPCryptoComponentWriteChannel.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v13,
      v14,
      85LL,
      0LL,
      "Failed to allocate space for encryption buffer");
    objc_release(v14);
    objc_release(v13);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    v10 = 0;
  }
  objc_release(v3);
  return v10;
}