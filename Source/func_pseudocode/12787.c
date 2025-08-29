+[NSError tsu_errorWithCode:userInfo:]
id __cdecl +[NSError tsu_errorWithCode:userInfo:](id a1, SEL a2, signed __int64 a3, id a4)
{
  id v6; // x19
  __int64 v7; // x22
  void *v8; // x23
  NSString *v9; // x23
  NSString *v10; // x24
  void *v11; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v6 = objc_retain(a4);
  if ( (unsigned __int64)a3 >= 3 )
  {
    v7 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD3C0);
    v8 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016FA04(v7, v8);
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "+[NSError(TSUAdditions) tsu_errorWithCode:userInfo:]"));
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/NSError_TSUAdditions.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v9,
      v10,
      46LL,
      0LL,
      "Bad error code");
    objc_release(v10);
    objc_release(v9);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "errorWithDomain:code:userInfo:", CFSTR("com.apple.iWork.TSUtility"), a3, v6));
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}