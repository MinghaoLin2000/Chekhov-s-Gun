-[TSUNoCopyDictionary setObject:forUncopiedKey:]
void __cdecl -[TSUNoCopyDictionary setObject:forUncopiedKey:](TSUNoCopyDictionary *self, SEL a2, id a3, id a4)
{
  __CFDictionary *mDictionary; // x0
  __int64 v8; // x20
  void *v9; // x21
  __int64 vars8; // [xsp+48h] [xbp+8h]

  if ( a3 )
  {
    if ( a4 )
    {
LABEL_3:
      mDictionary = self->mDictionary;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      CFDictionarySetValue(mDictionary, a4, a3);
      return;
    }
  }
  else
  {
    +[NSException raise:format:](
      &OBJC_CLASS___NSException,
      "raise:format:",
      NSInvalidArgumentException,
      CFSTR("Attempt to insert nil value into %@"),
      objc_opt_class(self));
    if ( a4 )
      goto LABEL_3;
  }
  v8 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001DE2F8);
  v9 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_100171C30(a3, v8, v9);
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    +[NSString stringWithUTF8String:](
      &OBJC_CLASS___NSString,
      "stringWithUTF8String:",
      "-[TSUNoCopyDictionary setObject:forUncopiedKey:]"),
    +[NSString stringWithUTF8String:](
      &OBJC_CLASS___NSString,
      "stringWithUTF8String:",
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/utility/TSUNoCopyDictionary.m"),
    75LL,
    0LL,
    "Attempt to insert into no-copy dictionary a value of type %{public}@ with a nil key",
    objc_opt_class(a3));
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
}