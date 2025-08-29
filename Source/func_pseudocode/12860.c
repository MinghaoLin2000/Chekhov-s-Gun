-[TSUDatabase setSchemaVersion:error:]
// local variable allocation has failed, the output may be wrong!
bool __cdecl -[TSUDatabase setSchemaVersion:error:](TSUDatabase *self, SEL a2, int a3, id *a4)
{
  __int64 v5; // x21
  __int64 v7; // x22
  void *v8; // x23

  v5 = *(_QWORD *)&a3;
  if ( a3 <= 0 )
  {
    v7 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD5F0);
    v8 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016FEF0(v7, v8);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[TSUDatabase setSchemaVersion:error:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/TSUDatabase.m"),
      134LL,
      0LL,
      "Use a positive version");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  return -[TSUDatabase executeUpdateWithSql:error:](
           self,
           "executeUpdateWithSql:error:",
           -[NSString UTF8String](
             +[NSString stringWithFormat:](
               &OBJC_CLASS___NSString,
               "stringWithFormat:",
               CFSTR("pragma user_version = %d"),
               v5),
             "UTF8String"),
           a4);
}