-[SFUCryptoKey incrementDecodedLengthBy:]
void __cdecl -[SFUCryptoKey incrementDecodedLengthBy:](SFUCryptoKey *self, SEL a2, unsigned __int64 a3)
{
  __int64 v3; // x19
  void *v4; // x20
  NSString *v5; // x19
  NSString *v6; // x21

  v3 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount",
         a3);
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001D36A8);
  v4 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_10016CE50(v3, v4);
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "-[SFUCryptoKey(TSPCryptoInfo) incrementDecodedLengthBy:]"));
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/i"
           "WorkXPC/shared/persistence/src/TSPCryptoInfo.mm"));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v5,
    v6,
    144LL,
    0LL,
    "This is not a mutable crypto info.");
  objc_release(v6);
  objc_release(v5);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
}