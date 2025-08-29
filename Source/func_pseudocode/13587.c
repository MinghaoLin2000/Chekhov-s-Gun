+[SFUCryptoUtils generatePassphraseVerifierForKey:verifierVersion:]
id __cdecl +[SFUCryptoUtils generatePassphraseVerifierForKey:verifierVersion:](
        id a1,
        SEL a2,
        id a3,
        unsigned __int16 a4)
{
  unsigned int v4; // w22
  __int64 v7; // x19
  void *v8; // x20
  void *v9; // x19
  SFUMemoryOutputStream *v10; // x20
  size_t v11; // x23
  __int64 v12; // x8
  char *v13; // x24
  SFUCryptor *v14; // x21
  void *v15; // x22
  void *v16; // x22
  __int64 v17; // x19
  void *v18; // x22
  __int64 v20; // [xsp+10h] [xbp-120h] BYREF
  CC_SHA256_CTX c; // [xsp+18h] [xbp-118h] BYREF
  unsigned int v22; // [xsp+80h] [xbp-B0h] BYREF
  __int16 v23; // [xsp+84h] [xbp-ACh] BYREF
  __int16 v24; // [xsp+86h] [xbp-AAh] BYREF
  id v25; // [xsp+88h] [xbp-A8h] BYREF
  unsigned __int8 md[32]; // [xsp+90h] [xbp-A0h] BYREF
  _BYTE bytes[32]; // [xsp+B0h] [xbp-80h] BYREF

  v4 = a4;
  if ( (unsigned int)objc_msgSend(a3, "keyType") )
  {
    v7 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DF5C8);
    v8 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100174908(v7, v8);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "+[SFUCryptoUtils generatePassphraseVerifierForKey:verifierVersion:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUCryptoUtils.mm"),
      91LL,
      0LL,
      "Unsupported key type");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    return 0LL;
  }
  else
  {
    v9 = +[NSMutableData data](&OBJC_CLASS___NSMutableData, "data");
    v25 = 0LL;
    v10 = -[SFUMemoryOutputStream initWithData:](objc_alloc(&OBJC_CLASS___SFUMemoryOutputStream), "initWithData:", v9);
    v24 = v4;
    v23 = 1;
    -[SFUMemoryOutputStream writeBuffer:size:](v10, "writeBuffer:size:", &v24, 2LL);
    -[SFUMemoryOutputStream writeBuffer:size:](v10, "writeBuffer:size:", &v23, 2LL);
    v22 = (unsigned int)objc_msgSend(a3, "iterationCount");
    -[SFUMemoryOutputStream writeBuffer:size:](v10, "writeBuffer:size:", &v22, 4LL);
    if ( v4 >= 2 )
      -[SFUMemoryOutputStream writeBuffer:size:](
        v10,
        "writeBuffer:size:",
        objc_msgSend(objc_msgSend(a3, "saltData"), "bytes"),
        objc_msgSend(objc_msgSend(a3, "saltData"), "length"));
    v11 = (unsigned int)objc_msgSend(a1, "ivLengthForKey:", a3);
    __chkstk_darwin();
    v13 = (char *)&v20 - v12;
    if ( SecRandomCopyBytes(kSecRandomDefault, v11, (char *)&v20 - v12) )
    {
      objc_release(v10);
      +[NSException raise:format:](
        &OBJC_CLASS___NSException,
        "raise:format:",
        NSGenericException,
        CFSTR("SFUCryptor failed to copy random bytes."));
      v10 = 0LL;
    }
    -[SFUMemoryOutputStream writeBuffer:size:](v10, "writeBuffer:size:", v13, v11);
    if ( SecRandomCopyBytes(kSecRandomDefault, 0x20uLL, bytes) )
    {
      objc_release(v10);
      +[NSException raise:format:](
        &OBJC_CLASS___NSException,
        "raise:format:",
        NSGenericException,
        CFSTR("SFUCryptor failed to copy random bytes."));
      v10 = 0LL;
    }
    v14 = -[SFUCryptor initWithKey:operation:iv:ivLength:usePKCS7Padding:](
            objc_alloc(&OBJC_CLASS___SFUCryptor),
            "initWithKey:operation:iv:ivLength:usePKCS7Padding:",
            a3,
            0LL,
            v13,
            v11,
            v4 == 1);
    if ( !-[SFUCryptor cryptDataFromBuffer:length:toStream:finished:error:](
            v14,
            "cryptDataFromBuffer:length:toStream:finished:error:",
            bytes,
            32LL,
            v10,
            0LL,
            &v25) )
    {
      objc_release(v14);
      objc_release(v10);
      v15 = objc_msgSend(v25, "localizedDescription");
      +[NSException raise:format:](
        &OBJC_CLASS___NSException,
        "raise:format:",
        NSGenericException,
        CFSTR("SFUCryptor failed. %@: %@"),
        v15,
        objc_msgSend(v25, "localizedFailureReason"));
      v10 = 0LL;
      v14 = 0LL;
    }
    if ( CC_SHA256_Init(&c) && CC_SHA256_Update(&c, bytes, 0x20u) && CC_SHA256_Final(md, &c) )
    {
      if ( !-[SFUCryptor cryptDataFromBuffer:length:toStream:finished:error:](
              v14,
              "cryptDataFromBuffer:length:toStream:finished:error:",
              md,
              32LL,
              v10,
              1LL,
              &v25) )
      {
        objc_release(v14);
        objc_release(v10);
        v16 = objc_msgSend(v25, "localizedDescription");
        +[NSException raise:format:](
          &OBJC_CLASS___NSException,
          "raise:format:",
          NSGenericException,
          CFSTR("SFUCryptor failed. %@: %@"),
          v16,
          objc_msgSend(v25, "localizedFailureReason"));
        v14 = 0LL;
        v10 = 0LL;
      }
    }
    else
    {
      v17 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001DF5E8);
      v18 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_100174880(v17, v18);
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "+[SFUCryptoUtils generatePassphraseVerifierForKey:verifierVersion:]"),
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/utility/sf/SFUCryptoUtils.mm"),
        154LL,
        0LL,
        "CC_SHA256 failed");
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
      v9 = 0LL;
    }
    objc_release(v14);
    objc_release(v10);
  }
  return v9;
}