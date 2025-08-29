-[TSPDatabase documentVersion:error:]
bool __cdecl -[TSPDatabase documentVersion:error:](TSPDatabase *self, SEL a2, unsigned __int64 *a3, id *a4)
{
  __int64 v7; // x22
  void *v8; // x23
  NSString *v9; // x22
  NSString *v10; // x24
  bool v11; // w21
  sqlite3_stmt *v13; // [xsp+8h] [xbp-48h] BYREF

  if ( !a3 )
  {
    v7 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D2C00);
    v8 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016BB1C(v7, v8);
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSPDatabase documentVersion:error:]"));
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
      90LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "version");
    objc_release(v10);
    objc_release(v9);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v13 = 0LL;
  if ( -[TSUDatabase prepareStatement:sql:error:](
         self,
         "prepareStatement:sql:error:",
         &v13,
         "select version from document",
         a4) )
  {
    if ( -[TSUDatabase startSingleResultQuery:error:](self, "startSingleResultQuery:error:", v13, a4) )
    {
      *a3 = sqlite3_column_int64(v13, 0);
      v11 = 1;
      if ( -[TSUDatabase endSingleResultQuery:shouldFinalize:error:](
             self,
             "endSingleResultQuery:shouldFinalize:error:",
             v13,
             1LL,
             a4) )
      {
        return v11;
      }
    }
    else if ( a4 )
    {
      *a4 = objc_autorelease(objc_retainAutoreleasedReturnValue(+[NSError tsp_errorWithCode:](&OBJC_CLASS___NSError, "tsp_errorWithCode:", 6LL)));
    }
  }
  sub_100027CD4(a4);
  return 0;
}