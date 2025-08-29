-[TSUDatabase _initWithPath:readonly:error:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[TSUDatabase _initWithPath:readonly:error:](TSUDatabase *self, SEL a2, id a3, bool a4, id *a5)
{
  TSUDatabase *v5; // x19
  _BOOL4 v7; // w21
  TSUDatabase *v9; // x0
  int v10; // w23
  __int64 v11; // x0
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x7
  _BOOL4 v15; // w8
  sqlite3 *db; // x0
  __int64 v17; // x0
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x7
  unsigned int v21; // w0
  __int64 v22; // x20
  void *v23; // x21
  objc_super v25; // [xsp+0h] [xbp-40h] BYREF

  v5 = self;
  if ( !a3 )
  {
    v22 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount",
            0LL,
            a4,
            a5);
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD690);
    v23 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_1001701D4(v22, v23);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[TSUDatabase _initWithPath:readonly:error:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/TSUDatabase.m"),
      247LL,
      0LL,
      "No path");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    goto LABEL_20;
  }
  v7 = a4;
  v25.receiver = self;
  v25.super_class = (Class)&OBJC_CLASS___TSUDatabase;
  v9 = -[TSUDatabase init](&v25, "init");
  v5 = v9;
  if ( v9 )
  {
    v9->_readonly = v7;
    if ( v7 )
      v10 = 1;
    else
      v10 = 6;
    v11 = sqlite3_open_v2((const char *)objc_msgSend(a3, "fileSystemRepresentation"), &v9->_db, v10, 0LL);
    v15 = TSUHandleSqlite(v11, a5, 0, v5, v12, v13, (__int64)CFSTR("Opening database"), v14, (__int64)v25.receiver);
    db = v5->_db;
    if ( !v15 )
    {
      sqlite3_close(db);
      v5->_db = 0LL;
LABEL_20:
      objc_release(v5);
      return 0LL;
    }
    v17 = sqlite3_extended_result_codes(db, 1);
    if ( !TSUHandleSqlite(v17, a5, 0, v5, v18, v19, 0LL, v20, (__int64)v25.receiver) )
      goto LABEL_19;
    v21 = -[TSUDatabase _upgradeSchemaWithError:](v5, "_upgradeSchemaWithError:", a5);
    if ( !v7 && v21 )
    {
      if ( -[TSUDatabase executeUpdateWithSql:error:](v5, "executeUpdateWithSql:error:", "pragma fullfsync = true", a5) )
        return v5;
      goto LABEL_19;
    }
    if ( (v7 & v21 & 1) == 0 )
    {
LABEL_19:
      -[TSUDatabase closeWithError:](v5, "closeWithError:", 0LL);
      goto LABEL_20;
    }
  }
  return v5;
}