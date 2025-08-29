-[TSUZipArchive newArchiveReadChannel]
id __cdecl __noreturn -[TSUZipArchive newArchiveReadChannel](TSUZipArchive *self, SEL a2)
{
  unsigned int v3; // w21
  void *v4; // x22
  os_log_s *v5; // x22
  objc_class *v6; // x0
  NSString *v7; // x23
  NSString *v8; // x22
  NSString *v9; // x23
  objc_class *v10; // x0
  NSString *v11; // x24
  objc_class *v12; // x0
  NSString *v13; // x19
  NSString *v14; // x20
  NSException *v15; // x21
  uint8_t buf[4]; // [xsp+10h] [xbp-80h] BYREF
  unsigned int v17; // [xsp+14h] [xbp-7Ch]
  __int16 v18; // [xsp+18h] [xbp-78h]
  const char *v19; // [xsp+1Ah] [xbp-76h]
  __int16 v20; // [xsp+22h] [xbp-6Eh]
  const char *v21; // [xsp+24h] [xbp-6Ch]
  __int16 v22; // [xsp+2Ch] [xbp-64h]
  int v23; // [xsp+2Eh] [xbp-62h]
  __int16 v24; // [xsp+32h] [xbp-5Eh]
  NSString *v25; // [xsp+34h] [xbp-5Ch]

  v3 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001DD298);
  v4 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
  {
    v5 = objc_retain(v4);
    v6 = (objc_class *)objc_opt_class(self);
    v7 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v6));
    *(_DWORD *)buf = 67110146;
    v17 = v3;
    v18 = 2082;
    v19 = "-[TSUZipArchive newArchiveReadChannel]";
    v20 = 2082;
    v21 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/utility/TSUZipArchive.m";
    v22 = 1024;
    v23 = 923;
    v24 = 2114;
    v25 = v7;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      v5,
      OS_LOG_TYPE_ERROR,
      "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Abstract method not overridden by %{public}@",
      buf,
      0x2Cu);
    objc_release(v7);
    objc_release(v5);
  }
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "-[TSUZipArchive newArchiveReadChannel]"));
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/i"
           "WorkXPC/shared/utility/TSUZipArchive.m"));
  v10 = (objc_class *)objc_opt_class(self);
  v11 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v10));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v8,
    v9,
    923LL,
    0LL,
    "Abstract method not overridden by %{public}@",
    v11);
  objc_release(v11);
  objc_release(v9);
  objc_release(v8);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  v12 = (objc_class *)objc_opt_class(self);
  v13 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v12));
  v14 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("Abstract method not overridden by %@: %s"),
            v13,
            "-[TSUZipArchive newArchiveReadChannel]"));
  v15 = objc_autorelease(
          objc_retainAutoreleasedReturnValue(
            +[NSException exceptionWithName:reason:userInfo:](
              &OBJC_CLASS___NSException,
              "exceptionWithName:reason:userInfo:",
              NSInternalInconsistencyException,
              v14,
              0LL)));
  objc_release(v14);
  objc_release(v13);
  objc_exception_throw(v15);
}