-[SFUFileDataRepresentation initWithPath:sharedFileDescriptor:cryptoKey:dataLength:]
SFUFileDataRepresentation *__cdecl -[SFUFileDataRepresentation initWithPath:sharedFileDescriptor:cryptoKey:dataLength:](
        SFUFileDataRepresentation *self,
        SEL a2,
        id a3,
        int a4,
        id a5,
        signed __int64 a6)
{
  __int64 v11; // x24
  void *v12; // x25
  SFUFileDataRepresentation *v13; // x23
  SFUCryptoKey *v14; // x0

  if ( !a3 )
  {
    v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE398);
    v12 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100171DE4(v11, v12);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUFileDataRepresentation initWithPath:sharedFileDescriptor:cryptoKey:dataLength:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUFileDataRepresentation.m"),
      48LL,
      0LL,
      "Invalid parameter not satisfying: %{public}s",
      "path != nil");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v13 = -[SFUFileDataRepresentation init](self, "init");
  if ( v13 )
  {
    v13->mPath = (NSString *)objc_retain(a3);
    v14 = (SFUCryptoKey *)objc_retain(a5);
    v13->mCryptoKey = v14;
    if ( v14 )
      v13->mPlaintextDataLength = a6;
    v13->mSharedFd = a4;
    -[SFUFileDataRepresentation path](v13, "path");
  }
  return v13;
}