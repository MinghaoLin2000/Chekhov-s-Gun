-[TSUZipFileWriter prepareWriteChannelWithCloseCompletionHandler:]
id __cdecl -[TSUZipFileWriter prepareWriteChannelWithCloseCompletionHandler:](TSUZipFileWriter *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 v5; // x21
  void *v6; // x22
  NSString *v7; // x22
  NSString *v8; // x23
  void *v9; // x0
  id writeChannelCompletionHandler; // x8
  TSURandomWriteChannel *writeChannel; // x0
  __int64 v12; // x21
  void *v13; // x22
  NSString *v14; // x22
  NSString *v15; // x23
  TSURandomWriteChannel *v16; // x20

  v4 = objc_retain(a3);
  if ( self->_writeChannelCompletionHandler )
  {
    v5 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DCD08);
    v6 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016F188(v5, v6);
    v7 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSUZipFileWriter prepareWriteChannelWithCloseCompletionHandler:]"));
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/utility/TSUZipFileWriter.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v7,
      v8,
      177LL,
      0LL,
      "expected nil value for '%{public}s'",
      "_writeChannelCompletionHandler");
    objc_release(v8);
    objc_release(v7);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v9 = objc_msgSend(v4, "copy");
  writeChannelCompletionHandler = self->_writeChannelCompletionHandler;
  self->_writeChannelCompletionHandler = v9;
  objc_release(writeChannelCompletionHandler);
  writeChannel = self->_writeChannel;
  if ( !writeChannel )
  {
    v12 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DCD28);
    v13 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016F0F4(v12, v13);
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSUZipFileWriter prepareWriteChannelWithCloseCompletionHandler:]"));
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUZipFileWriter.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v14,
      v15,
      180LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "_writeChannel");
    objc_release(v15);
    objc_release(v14);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    writeChannel = self->_writeChannel;
  }
  v16 = objc_retainAutoreleaseReturnValue(writeChannel);
  objc_release(v4);
  return v16;
}