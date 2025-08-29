-[SFUCryptoKey addBlockInfo:]
void __cdecl -[SFUCryptoKey addBlockInfo:](SFUCryptoKey *self, SEL a2, id a3)
{
  __int64 v3; // x19
  void *v4; // x20
  NSString *v5; // x19
  NSString *v6; // x21

  if ( -[SFUCryptoKey preferredBlockSize](self, "preferredBlockSize", a3) == -1LL )
  {
    v3 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D3688);
    v4 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016CDC8(v3, v4);
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[SFUCryptoKey(TSPCryptoInfo) addBlockInfo:]"));
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/persistence/src/TSPCryptoInfo.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v5,
      v6,
      140LL,
      0LL,
      "We should not be adding a block info when the preferred block size is SIZE_T_MAX.");
    objc_release(v6);
    objc_release(v5);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
}