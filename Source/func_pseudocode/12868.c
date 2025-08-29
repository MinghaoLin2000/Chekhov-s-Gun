-[TSUDatabase _upgradeSchemaWithError:]
bool __cdecl -[TSUDatabase _upgradeSchemaWithError:](TSUDatabase *self, SEL a2, id *a3)
{
  _BOOL4 v5; // w0
  __int64 v6; // x21
  __int64 v7; // x21
  void *v8; // x22
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x7
  __int64 v13; // [xsp+0h] [xbp-40h]
  sqlite3_stmt *v14; // [xsp+8h] [xbp-38h] BYREF

  v14 = 0LL;
  v5 = -[TSUDatabase prepareStatement:sql:error:](self, "prepareStatement:sql:error:", &v14, "pragma user_version", a3);
  if ( v5 )
  {
    v5 = -[TSUDatabase startSingleResultQuery:error:](self, "startSingleResultQuery:error:", v14, a3);
    if ( v5 )
    {
      v6 = sqlite3_column_int(v14, 0);
      if ( -[TSUDatabase needsUpgradeFromSchemaVersion:](self, "needsUpgradeFromSchemaVersion:", v6) && self->_readonly )
      {
        v7 = +[TSUAssertionHandler _atomicIncrementAssertCount](
               &OBJC_CLASS___TSUAssertionHandler,
               "_atomicIncrementAssertCount");
        if ( TSUAssertCat_init_token != -1 )
          dispatch_once(&TSUAssertCat_init_token, &stru_1001DD6B0);
        v8 = TSUAssertCat_log_t;
        if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
          sub_10017025C(v7, v8);
        +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
          &OBJC_CLASS___TSUAssertionHandler,
          "handleFailureInFunction:file:lineNumber:isFatal:description:",
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "-[TSUDatabase _upgradeSchemaWithError:]"),
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/utility/TSUDatabase.m"),
          302LL,
          0LL,
          "Readonly database needs schema upgrade.");
        +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
        TSUHandleSqlite(8LL, a3, 1, self, v9, v10, (__int64)CFSTR("Readonly database needs schema upgrade."), v11, v13);
        LOBYTE(v5) = 0;
      }
      else
      {
        v5 = -[TSUDatabase endSingleResultQuery:shouldFinalize:error:](
               self,
               "endSingleResultQuery:shouldFinalize:error:",
               v14,
               1LL,
               a3);
        if ( v5 )
          LOBYTE(v5) = -[TSUDatabase upgradeFromSchemaVersion:error:](self, "upgradeFromSchemaVersion:error:", v6, a3);
      }
    }
  }
  return v5;
}