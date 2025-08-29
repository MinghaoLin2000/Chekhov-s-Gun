-[TSUKVOToken init]
TSUKVOToken *__cdecl __noreturn -[TSUKVOToken init](TSUKVOToken *self, SEL a2)
{
  unsigned int v2; // w21
  os_log_s *v3; // x20
  uint8_t buf[4]; // [xsp+10h] [xbp-60h] BYREF
  unsigned int v5; // [xsp+14h] [xbp-5Ch]
  __int16 v6; // [xsp+18h] [xbp-58h]
  const char *v7; // [xsp+1Ah] [xbp-56h]
  __int16 v8; // [xsp+22h] [xbp-4Eh]
  const char *v9; // [xsp+24h] [xbp-4Ch]
  __int16 v10; // [xsp+2Ch] [xbp-44h]
  int v11; // [xsp+2Eh] [xbp-42h]

  v2 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001DC398);
  v3 = (os_log_s *)TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 67109890;
    v5 = v2;
    v6 = 2082;
    v7 = "-[TSUKVOToken init]";
    v8 = 2082;
    v9 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWo"
         "rkXPC/shared/utility/NSObject_TSUAdditions.m";
    v10 = 1024;
    v11 = 249;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      v3,
      OS_LOG_TYPE_ERROR,
      "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Do not call method",
      buf,
      0x22u);
  }
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", "-[TSUKVOToken init]"),
    +[NSString stringWithUTF8String:](
      &OBJC_CLASS___NSString,
      "stringWithUTF8String:",
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/utility/NSObject_TSUAdditions.m"),
    249LL,
    0LL,
    "Do not call method");
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  objc_exception_throw(
    +[NSException exceptionWithName:reason:userInfo:](
      &OBJC_CLASS___NSException,
      "exceptionWithName:reason:userInfo:",
      NSInternalInconsistencyException,
      +[NSString stringWithFormat:](
        &OBJC_CLASS___NSString,
        "stringWithFormat:",
        CFSTR("%s: %s"),
        "Do not call method",
        "-[TSUKVOToken init]"),
      0LL));
}