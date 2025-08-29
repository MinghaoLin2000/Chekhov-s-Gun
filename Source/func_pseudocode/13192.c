-[SFUCryptor initWithKey:operation:iv:ivLength:usePKCS7Padding:]
SFUCryptor *__cdecl -[SFUCryptor initWithKey:operation:iv:ivLength:usePKCS7Padding:](
        SFUCryptor *self,
        SEL a2,
        id a3,
        int a4,
        const char *a5,
        unsigned __int64 a6,
        bool a7)
{
  CCOptions v7; // w22
  SFUCryptor *v12; // x19
  __int64 v13; // x24
  void *v14; // x26
  char *v15; // x0
  __int64 v16; // x26
  void *v17; // x27
  __int64 v18; // x25
  void *v19; // x26
  __int64 v20; // x0
  __int64 v21; // x21
  int v22; // w20
  os_log_s *v23; // x22
  __int64 v24; // x20
  void *v25; // x21
  objc_super v27; // [xsp+10h] [xbp-60h] BYREF

  v7 = a7;
  v27.receiver = self;
  v27.super_class = (Class)&OBJC_CLASS___SFUCryptor;
  v12 = -[SFUCryptor init](&v27, "init");
  if ( !v12 )
    return v12;
  if ( !a3 )
  {
    v13 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE558);
    v14 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_1001724CC(v13, v14);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUCryptor initWithKey:operation:iv:ivLength:usePKCS7Padding:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUCryptor.m"),
      48LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "key");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  if ( !(unsigned int)objc_msgSend(a3, "keyType") )
  {
    if ( a6 != 16 )
    {
      v16 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001DE578);
      v17 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10017241C(v16, a6, v17);
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "-[SFUCryptor initWithKey:operation:iv:ivLength:usePKCS7Padding:]"),
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/utility/sf/SFUCryptor.m"),
        62LL,
        0LL,
        "Incorrect iv length (%lu, should be %d)",
        a6,
        16LL);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    if ( !a5 )
    {
      v18 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001DE598);
      v19 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10017236C(v18, v19);
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "-[SFUCryptor initWithKey:operation:iv:ivLength:usePKCS7Padding:]"),
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/utility/sf/SFUCryptor.m"),
        63LL,
        0LL,
        "invalid nil value for '%{public}s'",
        "iv");
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    v20 = CCCryptorCreate(
            a4 == 1,
            0,
            v7,
            objc_msgSend(a3, "keyData"),
            (size_t)objc_msgSend(a3, "keyLength"),
            a5,
            &v12->mCryptor);
    if ( (_DWORD)v20 )
    {
      v21 = v20;
      v22 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001DE5B8);
      v23 = (os_log_s *)TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_1001722B4(v22, v21, v23);
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "-[SFUCryptor initWithKey:operation:iv:ivLength:usePKCS7Padding:]"),
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/utility/sf/SFUCryptor.m"),
        67LL,
        0LL,
        "CCCryptorCreate() failed: %d",
        v21);
      goto LABEL_35;
    }
    v12->mBlockSize = 16LL;
  }
  if ( !v12->mCryptor )
  {
    v24 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE5D8);
    v25 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10017222C(v24, v25);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUCryptor initWithKey:operation:iv:ivLength:usePKCS7Padding:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUCryptor.m"),
      79LL,
      0LL,
      "Failed to initialize SFUCommonCryptoCryptor.");
LABEL_35:
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    objc_release(v12);
    return 0LL;
  }
  v12->mOperation = a4;
  v15 = (char *)malloc_type_malloc(0x20000uLL, 0x310EC0B9uLL);
  v12->mOutputBuffer = v15;
  v12->mOutputBufferPos = v15;
  if ( v12->mOperation == 1 )
    v12->mDecryptionInputBuffer = (char *)malloc_type_malloc(0x20000uLL, 0x2D77EB7EuLL);
  return v12;
}