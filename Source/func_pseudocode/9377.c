-[TSPDatabase setClosedCleanlyToken:error:]
bool __cdecl -[TSPDatabase setClosedCleanlyToken:error:](TSPDatabase *self, SEL a2, signed __int64 a3, id *a4)
{
  __int64 v8; // x0
  unsigned int v9; // w20
  int v10; // w0
  __int64 v11; // x21
  void *v12; // x22
  NSString *v13; // x21
  NSString *v14; // x23
  __int64 v15; // x0
  bool v16; // w20
  sqlite3_stmt *v18; // [xsp+8h] [xbp-38h] BYREF

  v18 = 0LL;
  if ( -[TSUDatabase prepareStatement:sql:error:](
         self,
         "prepareStatement:sql:error:",
         &v18,
         "update document set closedCleanly=? where 1=1",
         a4)
    && (v8 = sqlite3_bind_int64(v18, 1, a3), (unsigned int)TSUHandleSqlite(v8, a4, 1LL, self, a2, 462LL, 0LL)) )
  {
    v9 = -[TSUDatabase executeUpdate:shouldFinalize:error:](self, "executeUpdate:shouldFinalize:error:", v18, 1LL, a4);
  }
  else
  {
    v9 = 0;
  }
  v10 = sqlite3_changes(self->super._db);
  if ( v10 )
  {
    if ( v10 >= 2 )
    {
      v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D2CC0);
      v12 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016BE2C(v11, v12);
      v13 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSPDatabase setClosedCleanlyToken:error:]"));
      v14 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPDatabase.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v13,
        v14,
        472LL,
        0LL,
        "Updated more than one row when setting the document version. Expecting this table to contain a maximum of one row");
      objc_release(v14);
      objc_release(v13);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
      if ( (v9 & 1) == 0 )
        goto LABEL_20;
      return 1;
    }
    if ( (v9 & 1) != 0 )
      return 1;
LABEL_20:
    sub_100027CD4(a4);
    return 0;
  }
  v18 = 0LL;
  if ( !v9 )
    goto LABEL_20;
  if ( !-[TSUDatabase prepareStatement:sql:error:](
          self,
          "prepareStatement:sql:error:",
          &v18,
          "insert into document (closedCleanly) values (?)",
          a4) )
    goto LABEL_20;
  v15 = sqlite3_bind_int64(v18, 1, a3);
  if ( !(unsigned int)TSUHandleSqlite(v15, a4, 1LL, self, a2, 469LL, 0LL) )
    goto LABEL_20;
  v16 = 1;
  if ( !-[TSUDatabase executeUpdate:shouldFinalize:error:](self, "executeUpdate:shouldFinalize:error:", v18, 1LL, a4) )
    goto LABEL_20;
  return v16;
}