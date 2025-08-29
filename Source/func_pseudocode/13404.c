-[NSException tsu_error]
id __cdecl -[NSException tsu_error](NSException *self, SEL a2)
{
  id v2; // x19
  __int64 v3; // x0
  int v4; // w20
  os_log_s *v5; // x21

  v2 = -[NSDictionary objectForKey:](
         -[NSException userInfo](self, "userInfo"),
         "objectForKey:",
         CFSTR("TSUErrorExceptionUserInfoKey"));
  v3 = objc_opt_class(&OBJC_CLASS___NSError);
  if ( (objc_opt_isKindOfClass(v2, v3) & 1) == 0 && v2 )
  {
    v4 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DF028);
    v5 = (os_log_s *)TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100173EF8((int)v2, v4, v5);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[NSException(TSUAdditions) tsu_error]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/NSException_TSUAdditions.m"),
      31LL,
      0LL,
      "Unexpected NSException value for TSUErrorExceptionUserInfoKey: %@",
      v2);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    return 0LL;
  }
  return v2;
}