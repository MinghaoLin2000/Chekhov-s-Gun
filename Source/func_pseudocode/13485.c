-[NSString tsu_stringByRemovingCharactersInSet:options:]
id __cdecl -[NSString tsu_stringByRemovingCharactersInSet:options:](NSString *self, SEL a2, id a3, unsigned int a4)
{
  id v6; // x19
  NSString *v7; // x20
  NSString *v8; // x21
  __int64 v9; // x21
  void *v10; // x22
  NSString *v11; // x22
  NSString *v12; // x23
  NSUInteger v13; // x0
  NSUInteger v14; // x22
  char *v15; // x24
  __int64 v16; // x23
  NSUInteger v17; // x5
  char *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x26
  char *v21; // x27
  NSString *v22; // x24
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v6 = objc_retain(a3);
  if ( v6 )
  {
    v7 = objc_retain(self);
    if ( -[NSString rangeOfCharacterFromSet:](v7, "rangeOfCharacterFromSet:", v6) == (void *)0x7FFFFFFFFFFFFFFFLL )
    {
      v8 = v7;
    }
    else
    {
      v8 = objc_retainAutoreleasedReturnValue(+[NSMutableString string](&OBJC_CLASS___NSMutableString, "string"));
      v13 = -[NSString length](v7, "length");
      if ( v13 )
      {
        v14 = v13;
        v15 = 0LL;
        v16 = a4 & 0xFFFFFFFB;
        v17 = v13;
        do
        {
          v18 = (char *)-[NSString rangeOfCharacterFromSet:options:range:](
                          v7,
                          "rangeOfCharacterFromSet:options:range:",
                          v6,
                          v16,
                          v15,
                          v17);
          if ( v18 == (char *)0x7FFFFFFFFFFFFFFFLL )
            v20 = 0LL;
          else
            v20 = v19;
          if ( v18 == (char *)0x7FFFFFFFFFFFFFFFLL )
            v21 = (char *)v14;
          else
            v21 = v18;
          v22 = objc_retainAutoreleasedReturnValue(-[NSString substringWithRange:](v7, "substringWithRange:", v15, v21 - v15));
          -[NSString appendString:](v8, "appendString:", v22);
          objc_release(v22);
          v15 = &v21[v20];
          v17 = v14 - (_QWORD)&v21[v20];
        }
        while ( (char *)v14 != &v21[v20] );
      }
      objc_release(v7);
    }
  }
  else
  {
    v9 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DF358);
    v10 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100174670(v9, v10);
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[NSString(TSUAdditions) tsu_stringByRemovingCharactersInSet:options:]"));
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/NSString_TSUAdditions.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v11,
      v12,
      313LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "charSet");
    objc_release(v12);
    objc_release(v11);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    v8 = objc_retain(self);
  }
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}