-[NSDictionary tsu_invertedCopy]
id __cdecl -[NSDictionary tsu_invertedCopy](NSDictionary *self, SEL a2)
{
  NSUInteger v3; // x0
  void *v4; // x19
  void *v5; // x21
  __int64 v6; // x19
  void *v7; // x20
  NSString *v8; // x20
  NSString *v9; // x21
  void *v10; // x19
  _QWORD v12[4]; // [xsp+8h] [xbp-48h] BYREF
  id v13; // [xsp+28h] [xbp-28h]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = -[NSDictionary count](self, "count");
  if ( v3 )
  {
    v4 = (void *)v3;
    v12[0] = _NSConcreteStackBlock;
    v12[1] = 3254779904LL;
    v12[2] = sub_10013AD34;
    v12[3] = &unk_1001DD900;
    v5 = objc_retain(objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary), "initWithCapacity:", v3));
    v13 = v5;
    -[NSDictionary enumerateKeysAndObjectsUsingBlock:](self, "enumerateKeysAndObjectsUsingBlock:", v12);
    if ( v4 == objc_msgSend(v5, "count") )
    {
      objc_release(v13);
      if ( v5 )
        goto LABEL_11;
    }
    else
    {
      objc_release(v5);
      objc_release(v13);
    }
  }
  v6 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001DD930);
  v7 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_100170754(v6, v7);
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "-[NSDictionary(TSUAdditions) tsu_invertedCopy]"));
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/i"
           "WorkXPC/shared/utility/NSDictionaryAdditions.m"));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v8,
    v9,
    41LL,
    0LL,
    "Source dictionary is not invertible.");
  objc_release(v9);
  objc_release(v8);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  v5 = 0LL;
LABEL_11:
  v10 = objc_msgSend(v5, "copy");
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}