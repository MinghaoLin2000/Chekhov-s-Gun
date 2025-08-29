-[TSUDatabase endSingleResultQuery:shouldFinalize:error:]
bool __cdecl -[TSUDatabase endSingleResultQuery:shouldFinalize:error:](
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
  const char *v12; // x0
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x7
  __int64 v16; // x0
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x7
  const __CFString *v20; // x6
  bool result; // w0
  const char *v22; // [xsp+0h] [xbp-50h]

  v6 = a4;
  if ( !a3 )
  {
    v9 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD670);
    v10 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100170138(v9, v10);
    v22 = "statement != NULL";
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[TSUDatabase endSingleResultQuery:shouldFinalize:error:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/TSUDatabase.m"),
      213LL,
      0LL,
      "Invalid parameter not satisfying: %{public}s");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v11 = sqlite3_step(a3);
  if ( (_DWORD)v11 != 101 )
  {
    v12 = sqlite3_sql(a3);
    TSUHandleSqlite(v11, a5, 1, self, v13, v14, (__int64)CFSTR("Executing statement \"%s\""), v15, (__int64)v12);
  }
  if ( v6 )
  {
    v16 = sqlite3_finalize(a3);
    v20 = CFSTR("Finalizing statement");
  }
  else
  {
    v16 = sqlite3_reset(a3);
    v20 = CFSTR("Resetting statement");
  }
  result = TSUHandleSqlite(v16, a5, 1, self, v17, v18, (__int64)v20, v19, (__int64)v22);
  if ( (_DWORD)v11 != 101 )
    return 0;
  return result;
}