-[TSUZipWriter p_writeChannel]
id __cdecl -[TSUZipWriter p_writeChannel](TSUZipWriter *self, SEL a2)
{
  TSURandomWriteChannel *writeChannel; // x0
  OS_dispatch_semaphore *v4; // x0
  OS_dispatch_semaphore *writeChannelCompletionSemaphore; // x8
  TSURandomWriteChannel *v6; // x0
  TSURandomWriteChannel *v7; // x8
  __int64 v9; // x19
  void *v10; // x20
  NSString *v11; // x20
  NSString *v12; // x19
  __int64 v13; // x0
  _QWORD v14[4]; // [xsp+20h] [xbp-50h] BYREF
  id v15; // [xsp+40h] [xbp-30h] BYREF
  id location; // [xsp+48h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+78h] [xbp+8h]

  writeChannel = self->_writeChannel;
  if ( !writeChannel )
  {
    if ( self->_writeChannelCompletionSemaphore )
    {
      v9 = +[TSUAssertionHandler _atomicIncrementAssertCount](
             &OBJC_CLASS___TSUAssertionHandler,
             "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001DEB48);
      v10 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_100173558(v9, v10);
      TSUSetCrashReporterInfo(
        "Fatal Assertion failure: %{public}s %{public}s:%d Write channel semaphore should not be initialized.",
        "-[TSUZipWriter p_writeChannel]",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/TSUZipWriter.m",
        110LL);
      v11 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSUZipWriter p_writeChannel]"));
      v12 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/utility/TSUZipWriter.m"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v11,
        v12,
        110LL,
        1LL,
        "Write channel semaphore should not be initialized.");
      objc_release(v12);
      objc_release(v11);
      TSUCrashBreakpoint(v13);
      abort();
    }
    v4 = (OS_dispatch_semaphore *)dispatch_semaphore_create(0LL);
    writeChannelCompletionSemaphore = self->_writeChannelCompletionSemaphore;
    self->_writeChannelCompletionSemaphore = v4;
    objc_release(writeChannelCompletionSemaphore);
    objc_initWeak(&location, self);
    v14[0] = _NSConcreteStackBlock;
    v14[1] = 3254779904LL;
    v14[2] = sub_100152354;
    v14[3] = &unk_1001DEB68;
    objc_copyWeak(&v15, &location);
    v6 = (TSURandomWriteChannel *)objc_retainAutoreleasedReturnValue(
                                    -[TSUZipWriter prepareWriteChannelWithCloseCompletionHandler:](
                                      self,
                                      "prepareWriteChannelWithCloseCompletionHandler:",
                                      v14));
    v7 = self->_writeChannel;
    self->_writeChannel = v6;
    objc_release(v7);
    objc_destroyWeak(&v15);
    objc_destroyWeak(&location);
    writeChannel = self->_writeChannel;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(writeChannel);
}