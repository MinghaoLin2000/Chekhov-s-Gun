-[TSUZipWriter truncateToOffsetImpl:completion:]
void __cdecl __noreturn -[TSUZipWriter truncateToOffsetImpl:completion:](
        TSUZipWriter *self,
        SEL a2,
        signed __int64 a3,
        id a4)
{
  id v5; // x0
  unsigned int v6; // w21
  void *v7; // x22
  os_log_s *v8; // x22
  objc_class *v9; // x0
  NSString *v10; // x23
  NSString *v11; // x22
  NSString *v12; // x23
  objc_class *v13; // x0
  NSString *v14; // x24
  objc_class *v15; // x0
  NSString *v16; // x19
  NSString *v17; // x20
  NSException *v18; // x21
  uint8_t buf[4]; // [xsp+10h] [xbp-80h] BYREF
  unsigned int v20; // [xsp+14h] [xbp-7Ch]
  __int16 v21; // [xsp+18h] [xbp-78h]
  const char *v22; // [xsp+1Ah] [xbp-76h]
  __int16 v23; // [xsp+22h] [xbp-6Eh]
  const char *v24; // [xsp+24h] [xbp-6Ch]
  __int16 v25; // [xsp+2Ch] [xbp-64h]
  int v26; // [xsp+2Eh] [xbp-62h]
  __int16 v27; // [xsp+32h] [xbp-5Eh]
  NSString *v28; // [xsp+34h] [xbp-5Ch]

  v5 = objc_retain(a4);
  v6 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001DEF48);
  v7 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
  {
    v8 = objc_retain(v7);
    v9 = (objc_class *)objc_opt_class(self);
    v10 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v9));
    *(_DWORD *)buf = 67110146;
    v20 = v6;
    v21 = 2082;
    v22 = "-[TSUZipWriter truncateToOffsetImpl:completion:]";
    v23 = 2082;
    v24 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/utility/TSUZipWriter.m";
    v25 = 1024;
    v26 = 920;
    v27 = 2114;
    v28 = v10;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      v8,
      OS_LOG_TYPE_ERROR,
      "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Abstract method not overridden by %{public}@",
      buf,
      0x2Cu);
    objc_release(v10);
    objc_release(v8);
  }
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "-[TSUZipWriter truncateToOffsetImpl:completion:]"));
  v12 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/utility/TSUZipWriter.m"));
  v13 = (objc_class *)objc_opt_class(self);
  v14 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v13));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v11,
    v12,
    920LL,
    0LL,
    "Abstract method not overridden by %{public}@",
    v14);
  objc_release(v14);
  objc_release(v12);
  objc_release(v11);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  v15 = (objc_class *)objc_opt_class(self);
  v16 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v15));
  v17 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("Abstract method not overridden by %@: %s"),
            v16,
            "-[TSUZipWriter truncateToOffsetImpl:completion:]"));
  v18 = objc_autorelease(
          objc_retainAutoreleasedReturnValue(
            +[NSException exceptionWithName:reason:userInfo:](
              &OBJC_CLASS___NSException,
              "exceptionWithName:reason:userInfo:",
              NSInternalInconsistencyException,
              v17,
              0LL)));
  objc_release(v17);
  objc_release(v16);
  objc_exception_throw(v18);
}