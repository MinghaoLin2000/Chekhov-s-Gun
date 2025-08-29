-[TSPDatabase insertDataStateWithSize:identifier:error:]
bool __cdecl -[TSPDatabase insertDataStateWithSize:identifier:error:](
        TSPDatabase *self,
        SEL a2,
        int a3,
        signed __int64 *a4,
        id *a5)
{
  __int64 v10; // x24
  void *v11; // x25
  NSString *v12; // x24
  NSString *v13; // x26
  sqlite3_stmt **p_insertDataStateStatement; // x24
  __int64 v15; // x0

  if ( !a4 )
  {
    v10 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D2D20);
    v11 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016BFDC(v10, v11);
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPDatabase insertDataStateWithSize:identifier:error:]"));
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPDatabase.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v12,
      v13,
      539LL,
      0LL,
      "Invalid parameter not satisfying: %{public}s",
      "identifier != NULL");
    objc_release(v13);
    objc_release(v12);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  p_insertDataStateStatement = &self->_insertDataStateStatement;
  if ( -[TSUDatabase prepareStatement:sql:error:](
         self,
         "prepareStatement:sql:error:",
         &self->_insertDataStateStatement,
         "insert into dataStates (state) values (?)",
         a5)
    && (v15 = sqlite3_bind_zeroblob(*p_insertDataStateStatement, 1, a3),
        (unsigned int)TSUHandleSqlite(v15, a5, 1LL, self, a2, 543LL, 0LL))
    && -[TSUDatabase executeUpdate:shouldFinalize:error:](
         self,
         "executeUpdate:shouldFinalize:error:",
         *p_insertDataStateStatement,
         0LL,
         a5) )
  {
    *a4 = sqlite3_last_insert_rowid(self->super._db);
    return 1;
  }
  else
  {
    sub_100027CD4(a5);
    return 0;
  }
}