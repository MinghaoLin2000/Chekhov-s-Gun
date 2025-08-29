-[NSString tsu_stringByAddingCSVEscapesForLocale:]
id __cdecl -[NSString tsu_stringByAddingCSVEscapesForLocale:](NSString *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x23
  NSCharacterSet *v6; // x22
  void *v7; // x21
  NSCharacterSet *v8; // x22
  NSCharacterSet *v9; // x23
  void *v10; // x22
  __int64 v11; // x23
  void *v12; // x24
  NSString *v13; // x24
  NSString *v14; // x25
  id v15; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "localeSpecificStorageForKey:", CFSTR("stringByAddingCSVEscapes")));
  if ( !v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSCharacterSet whitespaceAndNewlineCharacterSet](
             &OBJC_CLASS___NSCharacterSet,
             "whitespaceAndNewlineCharacterSet"));
    v7 = -[NSCharacterSet mutableCopy](v6, "mutableCopy");
    objc_release(v6);
    v8 = objc_retainAutoreleasedReturnValue(+[NSCharacterSet whitespaceCharacterSet](&OBJC_CLASS___NSCharacterSet, "whitespaceCharacterSet"));
    v9 = objc_retainAutoreleasedReturnValue(-[NSCharacterSet invertedSet](v8, "invertedSet"));
    objc_msgSend(v7, "formIntersectionWithCharacterSet:", v9);
    objc_release(v9);
    objc_release(v8);
    objc_msgSend(v7, "addCharactersInString:", CFSTR("\""));
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "listSeparator"));
    if ( objc_msgSend(v10, "length") != (void *)1 )
    {
      v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001DF318);
      v12 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_100174540(v11, v12);
      v13 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[NSString(TSUAdditions) tsu_stringByAddingCSVEscapesForLocale:]"));
      v14 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/utility/NSString_TSUAdditions.m"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v13,
        v14,
        203LL,
        0LL,
        "The list separator is not a 1-char string");
      objc_release(v14);
      objc_release(v13);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    objc_msgSend(v7, "addCharactersInString:", v10);
    v5 = objc_msgSend(v7, "copy");
    objc_msgSend(v4, "setLocaleSpecificStorage:forKey:", v5, CFSTR("stringByAddingCSVEscapes"));
    objc_release(v10);
    objc_release(v7);
  }
  v15 = objc_retainAutoreleasedReturnValue(-[NSString tsu_stringQuotedIfContainsCharacterSet:](self, "tsu_stringQuotedIfContainsCharacterSet:", v5));
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}