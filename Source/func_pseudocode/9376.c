-[TSPDatabase setDocumentVersion:error:]
bool __cdecl -[TSPDatabase setDocumentVersion:error:](
        TSPDatabase *self,
        SEL a2,
        $7DEDF3842AEFB7F1E6DF5AF62E424A02 a3,
        id *a4)
{
  sqlite3_int64 var1; // x22
  sqlite3_int64 var0; // x23
  __int64 v9; // x0
  __int64 v10; // x0
  unsigned int v11; // w24
  int v12; // w0
  __int64 v13; // x20
  void *v14; // x21
  NSString *v15; // x20
  NSString *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x0
  bool v19; // w21
  sqlite3_stmt *v21; // [xsp+8h] [xbp-38h] BYREF

  var1 = a3.var1;
  var0 = a3.var0;
  v21 = 0LL;
  if ( -[TSUDatabase prepareStatement:sql:error:](
         self,
         "prepareStatement:sql:error:",
         &v21,
         "update document set version=?, compatibleVersion=? where 1=1")
    && (v9 = sqlite3_bind_int64(v21, 1, var0), (unsigned int)TSUHandleSqlite(v9, a4, 1LL, self, a2, 440LL, 0LL))
    && (v10 = sqlite3_bind_int64(v21, 2, var1), (unsigned int)TSUHandleSqlite(v10, a4, 1LL, self, a2, 441LL, 0LL)) )
  {
    v11 = -[TSUDatabase executeUpdate:shouldFinalize:error:](self, "executeUpdate:shouldFinalize:error:", v21, 1LL, a4);
  }
  else
  {
    v11 = 0;
  }
  v12 = sqlite3_changes(self->super._db);
  if ( v12 )
  {
    if ( v12 >= 2 )
    {
      v13 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D2CA0);
      v14 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016BDA4(v13, v14);
      v15 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSPDatabase setDocumentVersion:error:]"));
      v16 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPDatabase.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v15,
        v16,
        453LL,
        0LL,
        "Updated more than one row when setting the document version. Expecting this table to contain a maximum of one row");
      objc_release(v16);
      objc_release(v15);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
      if ( (v11 & 1) == 0 )
        goto LABEL_22;
      return 1;
    }
    if ( (v11 & 1) != 0 )
      return 1;
LABEL_22:
    sub_100027CD4(a4);
    return 0;
  }
  v21 = 0LL;
  if ( !v11 )
    goto LABEL_22;
  if ( !-[TSUDatabase prepareStatement:sql:error:](
          self,
          "prepareStatement:sql:error:",
          &v21,
          "insert into document (version, compatibleVersion) values (?, ?)",
          a4) )
    goto LABEL_22;
  v17 = sqlite3_bind_int64(v21, 1, var0);
  if ( !(unsigned int)TSUHandleSqlite(v17, a4, 1LL, self, a2, 449LL, 0LL) )
    goto LABEL_22;
  v18 = sqlite3_bind_int64(v21, 2, var1);
  if ( !(unsigned int)TSUHandleSqlite(v18, a4, 1LL, self, a2, 450LL, 0LL) )
    goto LABEL_22;
  v19 = 1;
  if ( !-[TSUDatabase executeUpdate:shouldFinalize:error:](self, "executeUpdate:shouldFinalize:error:", v21, 1LL, a4) )
    goto LABEL_22;
  return v19;
}