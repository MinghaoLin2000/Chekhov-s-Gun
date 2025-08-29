-[TSPPackage newRawDataReadChannelAtRelativePath:]
id __cdecl __noreturn -[TSPPackage newRawDataReadChannelAtRelativePath:](TSPPackage *self, SEL a2, id a3)
{
  id v4; // x0
  unsigned int v5; // w22
  void *v6; // x21
  objc_class *v7; // x0
  NSString *v8; // x23
  NSString *v9; // x22
  NSString *v10; // x23
  objc_class *v11; // x0
  NSString *v12; // x25
  objc_class *v13; // x0
  NSString *v14; // x22
  NSString *v15; // x21
  NSException *v16; // x20
  uint8_t buf[4]; // [xsp+10h] [xbp-90h] BYREF
  unsigned int v18; // [xsp+14h] [xbp-8Ch]
  __int16 v19; // [xsp+18h] [xbp-88h]
  const char *v20; // [xsp+1Ah] [xbp-86h]
  __int16 v21; // [xsp+22h] [xbp-7Eh]
  const char *v22; // [xsp+24h] [xbp-7Ch]
  __int16 v23; // [xsp+2Ch] [xbp-74h]
  int v24; // [xsp+2Eh] [xbp-72h]
  __int16 v25; // [xsp+32h] [xbp-6Eh]
  NSString *v26; // [xsp+34h] [xbp-6Ch]

  v4 = objc_retain(a3);
  v5 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001D3370);
  v6 = objc_retain(TSUAssertCat_log_t);
  if ( os_log_type_enabled((os_log_t)v6, OS_LOG_TYPE_ERROR) )
  {
    v7 = (objc_class *)objc_opt_class(self);
    v8 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v7));
    *(_DWORD *)buf = 67110146;
    v18 = v5;
    v19 = 2082;
    v20 = "-[TSPPackage newRawDataReadChannelAtRelativePath:]";
    v21 = 2082;
    v22 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/src/TSPPackage.mm";
    v23 = 1024;
    v24 = 740;
    v25 = 2114;
    v26 = v8;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)v6,
      OS_LOG_TYPE_ERROR,
      "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Abstract method not overridden by %{public}@",
      buf,
      0x2Cu);
    objc_release(v8);
  }
  objc_release(v6);
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "-[TSPPackage newRawDataReadChannelAtRelativePath:]"));
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/persistence/src/TSPPackage.mm"));
  v11 = (objc_class *)objc_opt_class(self);
  v12 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v11));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v9,
    v10,
    740LL,
    0LL,
    "Abstract method not overridden by %{public}@",
    v12);
  objc_release(v12);
  objc_release(v10);
  objc_release(v9);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  v13 = (objc_class *)objc_opt_class(self);
  v14 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v13));
  v15 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("Abstract method not overridden by %@: %s"),
            v14,
            "-[TSPPackage newRawDataReadChannelAtRelativePath:]"));
  v16 = objc_autorelease(
          objc_retainAutoreleasedReturnValue(
            +[NSException exceptionWithName:reason:userInfo:](
              &OBJC_CLASS___NSException,
              "exceptionWithName:reason:userInfo:",
              NSInternalInconsistencyException,
              v15,
              0LL)));
  objc_release(v15);
  objc_release(v14);
  objc_exception_throw(v16);
}