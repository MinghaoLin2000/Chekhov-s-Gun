+[SFUCryptoUtils sha256HashFromData:]
id __cdecl +[SFUCryptoUtils sha256HashFromData:](id a1, SEL a2, id a3)
{
  int v4; // w20
  __int64 v5; // x21
  void *v6; // x22
  CC_SHA256_CTX v8; // [xsp+0h] [xbp-C0h] BYREF
  unsigned __int8 md[32]; // [xsp+68h] [xbp-58h] BYREF

  v4 = CC_SHA256_Init(&v8);
  if ( (unsigned __int64)objc_msgSend(a3, "length") >> 32 )
  {
    v5 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DF608);
    v6 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100174990(v5, v6);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "+[SFUCryptoUtils sha256HashFromData:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUCryptoUtils.mm"),
      414LL,
      0LL,
      "overflow  in sha256HashFromData");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  if ( v4
    && CC_SHA256_Update(&v8, objc_msgSend(a3, "bytes"), (CC_LONG)objc_msgSend(a3, "length"))
    && CC_SHA256_Final(md, &v8) )
  {
    return +[NSData dataWithBytes:length:](&OBJC_CLASS___NSData, "dataWithBytes:length:", md, 32LL);
  }
  else
  {
    return 0LL;
  }
}