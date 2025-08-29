-[TSUDatabase executeUpdate:shouldFinalize:error:]
bool __cdecl -[TSUDatabase executeUpdate:shouldFinalize:error:](
        TSUDatabase *self,
        SEL a2,
        sqlite3_stmt *a3,
        bool a4,
        id *a5)
{
  _BOOL4 v6; // w22
  __int64 v9; // x23
  void *v10; // x24
  __int64 v11; // x23
  char v12; // w23
  const char *v13; // x0
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x7
  __int64 v17; // x0
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x7
  const __CFString *v21; // x6
  const char *v23; // [xsp+0h] [xbp-50h]

  v6 = a4;
  if ( !a3 )
  {
    v9 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD630);
    v10 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100170000(v9, v10);
    v23 = "statement != NULL";
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[TSUDatabase executeUpdate:shouldFinalize:error:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/TSUDatabase.m"),
      161LL,
      0LL,
      "Invalid parameter not satisfying: %{public}s");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  if ( self->_readonly )
  {
    v11 = 8LL;
  }
  else
  {
    v11 = sqlite3_step(a3);
    if ( (_DWORD)v11 == 101 )
    {
      v12 = 1;
      goto LABEL_12;
    }
  }
  v13 = sqlite3_sql(a3);
  TSUHandleSqlite(v11, a5, 1, self, v14, v15, (__int64)CFSTR("Executing statement \"%s\""), v16, (__int64)v13);
  v12 = 0;
LABEL_12:
  if ( v6 )
  {
    v17 = sqlite3_finalize(a3);
    v21 = CFSTR("Finalizing statement");
  }
  else
  {
    v17 = sqlite3_reset(a3);
    v21 = CFSTR("Resetting statement");
  }
  return v12 & TSUHandleSqlite(v17, a5, 1, self, v18, v19, (__int64)v21, v20, (__int64)v23);
}