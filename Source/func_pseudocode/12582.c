-[SFUCryptoOutputStream inputStream]
id __cdecl -[SFUCryptoOutputStream inputStream](SFUCryptoOutputStream *self, SEL a2)
{
  __int64 v2; // x19
  void *v3; // x20

  v2 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001DC708);
  v3 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_10016E444(v2, v3);
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    +[NSString stringWithUTF8String:](
      &OBJC_CLASS___NSString,
      "stringWithUTF8String:",
      "-[SFUCryptoOutputStream inputStream]"),
    +[NSString stringWithUTF8String:](
      &OBJC_CLASS___NSString,
      "stringWithUTF8String:",
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/utility/sf/SFUCryptoOutputStream.mm"),
    133LL,
    0LL,
    "SFUCryptoOutputStream cannot create an input stream.");
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  return 0LL;
}