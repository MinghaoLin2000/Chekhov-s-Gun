-[TSPDatabase documentVersion:closedCleanlyToken:error:]
bool __cdecl -[TSPDatabase documentVersion:closedCleanlyToken:error:](
        TSPDatabase *self,
        SEL a2,
        $7DEDF3842AEFB7F1E6DF5AF62E424A02 *a3,
        signed __int64 *a4,
        id *a5)
{
  __int64 v9; // x23
  void *v10; // x24
  NSString *v11; // x23
  NSString *v12; // x25
  __int64 v13; // x23
  void *v14; // x24
  NSString *v15; // x23
  NSString *v16; // x25
  bool v17; // w23
  sqlite3_stmt *v19; // [xsp+8h] [xbp-48h] BYREF

  if ( a3 )
  {
    if ( a4 )
      goto LABEL_14;
    goto LABEL_9;
  }
  v9 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001D2CE0);
  v10 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_10016BF48(v9, v10);
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "-[TSPDatabase documentVersion:closedCleanlyToken:error:]"));
  v12 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/persistence/src/TSPDatabase.mm"));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v11,
    v12,
    479LL,
    0LL,
    "invalid nil value for '%{public}s'",
    "version");
  objc_release(v12);
  objc_release(v11);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  if ( !a4 )
  {
LABEL_9:
    v13 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D2D00);
    v14 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016BEB4(v13, v14);
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPDatabase documentVersion:closedCleanlyToken:error:]"));
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPDatabase.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v15,
      v16,
      480LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "closedCleanlyToken");
    objc_release(v16);
    objc_release(v15);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
LABEL_14:
  v19 = 0LL;
  if ( -[TSUDatabase prepareStatement:sql:error:](
         self,
         "prepareStatement:sql:error:",
         &v19,
         "select version, compatibleVersion, closedCleanly from document",
         a5) )
  {
    if ( -[TSUDatabase startSingleResultQuery:error:](self, "startSingleResultQuery:error:", v19, a5) )
    {
      a3->var0 = sqlite3_column_int64(v19, 0);
      v17 = 1;
      a3->var1 = sqlite3_column_int64(v19, 1);
      *a4 = sqlite3_column_int64(v19, 2);
      if ( -[TSUDatabase endSingleResultQuery:shouldFinalize:error:](
             self,
             "endSingleResultQuery:shouldFinalize:error:",
             v19,
             1LL,
             a5) )
      {
        return v17;
      }
    }
    else if ( a5 )
    {
      *a5 = objc_autorelease(objc_retainAutoreleasedReturnValue(+[NSError tsp_errorWithCode:](&OBJC_CLASS___NSError, "tsp_errorWithCode:", 6LL)));
    }
  }
  sub_100027CD4(a5);
  return 0;
}