-[NSURL tsp_embeddedUTI]
id __cdecl -[NSURL tsp_embeddedUTI](NSURL *self, SEL a2)
{
  __int64 v3; // x20
  void *v4; // x21
  NSString *v5; // x21
  NSString *v6; // x22
  NSString *v7; // x19
  char *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x22
  void *v12; // x23
  NSString *v13; // x23
  NSString *v14; // x24
  NSString *v15; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  if ( !-[NSURL tsp_isIWorkAVAssetURL](self, "tsp_isIWorkAVAssetURL") )
  {
    v3 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D14A8);
    v4 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100169428(v3, v4);
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[NSURL(TSPersistence) tsp_embeddedUTI]"));
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/persistence/src/NSURL_TSPersistence.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v5,
      v6,
      46LL,
      0LL,
      "UTIs only provided within iWork-internal URLs");
    objc_release(v6);
    objc_release(v5);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v7 = objc_retainAutoreleasedReturnValue(-[NSURL absoluteString](self, "absoluteString"));
  v8 = (char *)-[NSString rangeOfString:](v7, "rangeOfString:", CFSTR("uti="));
  v10 = v9;
  if ( !v9 )
  {
    v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D14C8);
    v12 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100169394(v11, v12);
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[NSURL(TSPersistence) tsp_embeddedUTI]"));
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/NSURL_TSPersistence.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v13,
      v14,
      49LL,
      0LL,
      "Expected UTI in iWork URL!");
    objc_release(v14);
    objc_release(v13);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v15 = objc_retainAutoreleasedReturnValue(-[NSString substringFromIndex:](v7, "substringFromIndex:", &v8[v10]));
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}