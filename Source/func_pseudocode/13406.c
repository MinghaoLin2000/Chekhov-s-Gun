-[TSUTemporaryDirectory init]
TSUTemporaryDirectory *__cdecl __noreturn -[TSUTemporaryDirectory init](TSUTemporaryDirectory *self, SEL a2)
{
  unsigned int v2; // w21
  os_log_s *v3; // x20
  NSString *v4; // x21
  NSString *v5; // x22
  NSString *v6; // x19
  NSException *v7; // x20
  uint8_t buf[4]; // [xsp+10h] [xbp-70h] BYREF
  unsigned int v9; // [xsp+14h] [xbp-6Ch]
  __int16 v10; // [xsp+18h] [xbp-68h]
  const char *v11; // [xsp+1Ah] [xbp-66h]
  __int16 v12; // [xsp+22h] [xbp-5Eh]
  const char *v13; // [xsp+24h] [xbp-5Ch]
  __int16 v14; // [xsp+2Ch] [xbp-54h]
  int v15; // [xsp+2Eh] [xbp-52h]

  v2 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001DF048);
  v3 = (os_log_s *)TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 67109890;
    v9 = v2;
    v10 = 2082;
    v11 = "-[TSUTemporaryDirectory init]";
    v12 = 2082;
    v13 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/utility/TSUTemporaryDirectory.m";
    v14 = 1024;
    v15 = 26;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      v3,
      OS_LOG_TYPE_ERROR,
      "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Do not call method",
      buf,
      0x22u);
  }
  v4 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "-[TSUTemporaryDirectory init]"));
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/i"
           "WorkXPC/shared/utility/TSUTemporaryDirectory.m"));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v4,
    v5,
    26LL,
    0LL,
    "Do not call method");
  objc_release(v5);
  objc_release(v4);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%s: %s"),
           "Do not call method",
           "-[TSUTemporaryDirectory init]"));
  v7 = objc_autorelease(
         objc_retainAutoreleasedReturnValue(
           +[NSException exceptionWithName:reason:userInfo:](
             &OBJC_CLASS___NSException,
             "exceptionWithName:reason:userInfo:",
             NSInternalInconsistencyException,
             v6,
             0LL)));
  objc_release(v6);
  objc_exception_throw(v7);
}