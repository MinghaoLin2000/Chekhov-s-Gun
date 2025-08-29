_TSPMutableCryptoInfoForTranscodingToKey
TSPMutableCryptoInfoInternal *__fastcall UnsafePointer(void *a1, __int64 a2)
{
  id v3; // x0
  void *v4; // x19
  __int64 v5; // x21
  void *v6; // x22
  NSString *v7; // x21
  NSString *v8; // x23
  TSPMutableCryptoInfoInternal *v9; // x0
  TSPMutableCryptoInfoInternal *v10; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retain(a1);
  v4 = v3;
  if ( !v3 || a2 == -1 )
  {
    v9 = (TSPMutableCryptoInfoInternal *)objc_retain(v3);
  }
  else
  {
    if ( !a2 )
    {
      v5 = +[TSUAssertionHandler _atomicIncrementAssertCount](
             &OBJC_CLASS___TSUAssertionHandler,
             "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D36C8);
      v6 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016CED8(v5, v6);
      v7 = objc_retainAutoreleasedReturnValue(
             +[NSString stringWithUTF8String:](
               &OBJC_CLASS___NSString,
               "stringWithUTF8String:",
               "id<TSPMutableCryptoInfo>  _Nonnull TSPMutableCryptoInfoForTranscodingToKey(SFUCryptoKey * _Nonnull __strong, size_t)"));
      v8 = objc_retainAutoreleasedReturnValue(
             +[NSString stringWithUTF8String:](
               &OBJC_CLASS___NSString,
               "stringWithUTF8String:",
               "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sourc"
               "es/iWorkXPC/shared/persistence/src/TSPCryptoInfo.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v7,
        v8,
        178LL,
        0LL,
        "Preferred block size cannot be zero.");
      objc_release(v8);
      objc_release(v7);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    v9 = -[TSPMutableCryptoInfoInternal initWithCryptoKey:preferredBlockSize:blockInfos:decodedLength:](
           objc_alloc(&OBJC_CLASS___TSPMutableCryptoInfoInternal),
           "initWithCryptoKey:preferredBlockSize:blockInfos:decodedLength:",
           v4,
           a2,
           0LL,
           0LL);
  }
  v10 = v9;
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}