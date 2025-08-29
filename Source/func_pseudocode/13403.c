+[NSException tsu_raiseWithError:]
void __cdecl +[NSException tsu_raiseWithError:](id a1, SEL a2, id a3)
{
  __int64 v4; // x20
  void *v5; // x21
  const __CFString *v6; // x20
  const __CFString *v7; // x0
  const __CFString *v8; // [xsp+8h] [xbp-48h] BYREF
  id v9; // [xsp+10h] [xbp-40h] BYREF

  if ( !a3 )
  {
    v4 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DF008);
    v5 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100173E3C(v4, v5);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "+[NSException(TSUAdditions) tsu_raiseWithError:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/NSException_TSUAdditions.m"),
      17LL,
      0LL,
      "Invalid parameter not satisfying: %{public}s",
      "error != nil");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v6 = (const __CFString *)objc_msgSend(a3, "localizedFailureReason");
  if ( !v6 )
  {
    v7 = (const __CFString *)objc_msgSend(a3, "localizedDescription");
    if ( v7 )
      v6 = v7;
    else
      v6 = CFSTR("NSError exception");
  }
  v8 = CFSTR("TSUErrorExceptionUserInfoKey");
  v9 = a3;
  -[NSException raise](
    +[NSException exceptionWithName:reason:userInfo:](
      &OBJC_CLASS___NSException,
      "exceptionWithName:reason:userInfo:",
      CFSTR("TSUErrorException"),
      v6,
      +[NSDictionary dictionaryWithObjects:forKeys:count:](
        &OBJC_CLASS___NSDictionary,
        "dictionaryWithObjects:forKeys:count:",
        &v9,
        &v8,
        1LL)),
    "raise");
}