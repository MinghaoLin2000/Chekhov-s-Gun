+[NSPropertyListSerialization tsu_localizedPropertyListWithContentsOfURL:options:error:]
id __cdecl +[NSPropertyListSerialization tsu_localizedPropertyListWithContentsOfURL:options:error:](
        id a1,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id *a5)
{
  id v8; // x19
  __int64 v9; // x23
  void *v10; // x24
  NSString *v11; // x24
  NSString *v12; // x25
  void *v13; // x21
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v8 = objc_retain(a3);
  if ( a4 - 1 >= 2 )
  {
    v9 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DF2D8);
    v10 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_1001744A0(v9, v10);
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "+[NSPropertyListSerialization(TSUtility) tsu_localizedPropertyListWithContentsOfURL:options:error:]"));
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/NSPropertyListSerialization_TSUtility.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v11,
      v12,
      65LL,
      0LL,
      "Need mutable containers to process a localizable property list");
    objc_release(v12);
    objc_release(v11);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsu_propertyListWithContentsOfURL:options:error:", v8, a4, a5));
  objc_msgSend(a1, "tsu_processLocalizedPropertyList:", v13);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v13);
}