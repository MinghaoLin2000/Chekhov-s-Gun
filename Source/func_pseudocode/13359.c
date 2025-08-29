-[TSUZipWriter prepareWriteChannelWithCloseCompletionHandler:]
id __cdecl __noreturn -[TSUZipWriter prepareWriteChannelWithCloseCompletionHandler:](TSUZipWriter *self, SEL a2, id a3)
{
  id v4; // x0
  unsigned int v5; // w21
  void *v6; // x22
  os_log_s *v7; // x22
  objc_class *v8; // x0
  NSString *v9; // x23
  NSString *v10; // x22
  NSString *v11; // x23
  objc_class *v12; // x0
  NSString *v13; // x24
  objc_class *v14; // x0
  NSString *v15; // x19
  NSString *v16; // x20
  NSException *v17; // x21
  uint8_t buf[4]; // [xsp+10h] [xbp-80h] BYREF
  unsigned int v19; // [xsp+14h] [xbp-7Ch]
  __int16 v20; // [xsp+18h] [xbp-78h]
  const char *v21; // [xsp+1Ah] [xbp-76h]
  __int16 v22; // [xsp+22h] [xbp-6Eh]
  const char *v23; // [xsp+24h] [xbp-6Ch]
  __int16 v24; // [xsp+2Ch] [xbp-64h]
  int v25; // [xsp+2Eh] [xbp-62h]
  __int16 v26; // [xsp+32h] [xbp-5Eh]
  NSString *v27; // [xsp+34h] [xbp-5Ch]

  v4 = objc_retain(a3);
  v5 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001DEEC8);
  v6 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
  {
    v7 = objc_retain(v6);
    v8 = (objc_class *)objc_opt_class(self);
    v9 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v8));
    *(_DWORD *)buf = 67110146;
    v19 = v5;
    v20 = 2082;
    v21 = "-[TSUZipWriter prepareWriteChannelWithCloseCompletionHandler:]";
    v22 = 2082;
    v23 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/utility/TSUZipWriter.m";
    v24 = 1024;
    v25 = 783;
    v26 = 2114;
    v27 = v9;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      v7,
      OS_LOG_TYPE_ERROR,
      "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Abstract method not overridden by %{public}@",
      buf,
      0x2Cu);
    objc_release(v9);
    objc_release(v7);
  }
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "-[TSUZipWriter prepareWriteChannelWithCloseCompletionHandler:]"));
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/utility/TSUZipWriter.m"));
  v12 = (objc_class *)objc_opt_class(self);
  v13 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v12));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v10,
    v11,
    783LL,
    0LL,
    "Abstract method not overridden by %{public}@",
    v13);
  objc_release(v13);
  objc_release(v11);
  objc_release(v10);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  v14 = (objc_class *)objc_opt_class(self);
  v15 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v14));
  v16 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("Abstract method not overridden by %@: %s"),
            v15,
            "-[TSUZipWriter prepareWriteChannelWithCloseCompletionHandler:]"));
  v17 = objc_autorelease(
          objc_retainAutoreleasedReturnValue(
            +[NSException exceptionWithName:reason:userInfo:](
              &OBJC_CLASS___NSException,
              "exceptionWithName:reason:userInfo:",
              NSInternalInconsistencyException,
              v16,
              0LL)));
  objc_release(v16);
  objc_release(v15);
  objc_exception_throw(v17);
}