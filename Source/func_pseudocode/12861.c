-[TSUDatabase prepareStatement:sql:error:]
bool __cdecl -[TSUDatabase prepareStatement:sql:error:](
        TSUDatabase *self,
        SEL a2,
        sqlite3_stmt **a3,
        const char *a4,
        id *a5)
{
  __int64 v9; // x23
  void *v10; // x24
  bool v11; // w22
  __int64 v12; // x0
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x7
  const char *v17; // [xsp+0h] [xbp-50h]

  if ( !self->_db )
  {
    v9 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD610);
    v10 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016FF78(v9, v10);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[TSUDatabase prepareStatement:sql:error:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/TSUDatabase.m"),
      142LL,
      0LL,
      "Trying to use a closed database");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  if ( *a3 )
    return 1;
  v12 = sqlite3_prepare_v2(self->_db, a4, -1, a3, 0LL);
  v17 = a4;
  v11 = 1;
  if ( !TSUHandleSqlite(v12, a5, 1, self, v13, v14, (__int64)CFSTR("Preparing SQL \"%s\""), v15, (__int64)v17) )
  {
    sqlite3_finalize(*a3);
    v11 = 0;
    *a3 = 0LL;
  }
  return v11;
}