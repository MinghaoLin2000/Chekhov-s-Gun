-[TSPDatabase numberOfDatabaseObjects:error:]
bool __cdecl -[TSPDatabase numberOfDatabaseObjects:error:](TSPDatabase *self, SEL a2, unsigned __int64 *a3, id *a4)
{
  __int64 v7; // x22
  void *v8; // x23
  NSString *v9; // x22
  NSString *v10; // x24
  int v11; // w22
  unsigned int v12; // w0
  sqlite3_stmt *v14; // [xsp+8h] [xbp-48h] BYREF

  if ( !a3 )
  {
    v7 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D2C40);
    v8 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016BC44(v7, v8);
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSPDatabase numberOfDatabaseObjects:error:]"));
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPDatabase.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v9,
      v10,
      132LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "numberOfObjects");
    objc_release(v10);
    objc_release(v9);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v14 = 0LL;
  if ( -[TSUDatabase prepareStatement:sql:error:](
         self,
         "prepareStatement:sql:error:",
         &v14,
         "select count(*) from objects",
         a4)
    && -[TSUDatabase startSingleResultQuery:error:](self, "startSingleResultQuery:error:", v14, a4) )
  {
    v11 = sqlite3_column_int(v14, 0);
    v12 = -[TSUDatabase endSingleResultQuery:shouldFinalize:error:](
            self,
            "endSingleResultQuery:shouldFinalize:error:",
            v14,
            1LL,
            a4);
    if ( a3 && v12 )
    {
      *a3 = v11;
      return 1;
    }
    if ( (v12 & 1) != 0 )
      return 1;
  }
  sub_100027CD4(a4);
  return 0;
}