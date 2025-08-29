-[NSDictionary tsu_onlyKeyForObject:]
id __cdecl -[NSDictionary tsu_onlyKeyForObject:](NSDictionary *self, SEL a2, id a3)
{
  NSArray *v3; // x19
  __int64 v4; // x20
  void *v5; // x21
  NSString *v6; // x21
  NSString *v7; // x22
  id v8; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[NSDictionary allKeysForObject:](self, "allKeysForObject:", a3));
  if ( -[NSArray count](v3, "count") >= 2 )
  {
    v4 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD950);
    v5 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_1001708A4(v4, v5);
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[NSDictionary(TSUAdditions) tsu_onlyKeyForObject:]"));
    v7 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/utility/NSDictionaryAdditions.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v6,
      v7,
      129LL,
      0LL,
      "tsu_onlyKeyForObject assumes that there's only one key for any object in the dictionary.");
    objc_release(v7);
    objc_release(v6);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v8 = objc_retainAutoreleasedReturnValue(-[NSArray firstObject](v3, "firstObject"));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}