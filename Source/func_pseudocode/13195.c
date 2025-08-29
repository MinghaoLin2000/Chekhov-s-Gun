-[SFUCryptor cryptDataFromBuffer:length:toStream:finished:crc32:error:]
bool __cdecl -[SFUCryptor cryptDataFromBuffer:length:toStream:finished:crc32:error:](
        SFUCryptor *self,
        SEL a2,
        const char *a3,
        unsigned __int64 a4,
        id a5,
        bool a6,
        unsigned int *a7,
        id *a8)
{
  id *v8; // x28
  _BOOL4 v10; // w23
  __int64 v15; // x26
  void *v16; // x27
  _CCCryptor *mCryptor; // x0
  size_t v18; // x26
  CCCryptorStatus v19; // w0
  char *mOutputBuffer; // x23
  size_t OutputLength; // x24
  char *v22; // x0
  CCCryptorStatus v23; // w0
  NSErrorDomain v24; // x2
  __int64 v25; // x3
  char *v26; // x22
  __int64 v27; // x20
  void *v28; // x21
  NSString *v29; // x21
  NSString *v30; // x3
  NSString *v31; // x2
  __int64 v32; // x4
  __int64 v33; // x20
  void *v34; // x21
  NSString *v35; // x21
  size_t dataOutMoved; // [xsp+8h] [xbp-58h] BYREF

  v8 = a8;
  v10 = a6;
  if ( self->mOperation )
  {
    v15 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE5F8);
    v16 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10017268C(v15, v16);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUCryptor cryptDataFromBuffer:length:toStream:finished:crc32:error:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUCryptor.m"),
      118LL,
      0LL,
      "Decryption to stream not supported");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    v8 = a8;
  }
  if ( a4 )
  {
    while ( 1 )
    {
      mCryptor = self->mCryptor;
      v18 = a4 >= 0x20000 - self->mBlockSize ? 0x20000 - self->mBlockSize : a4;
      dataOutMoved = 0LL;
      v19 = CCCryptorUpdate(mCryptor, a3, v18, self->mOutputBuffer, 0x20000uLL, &dataOutMoved);
      if ( v19 )
        break;
      if ( dataOutMoved )
      {
        objc_msgSend(a5, "writeBuffer:size:", self->mOutputBuffer);
        if ( a7 )
        {
          if ( HIDWORD(dataOutMoved) )
          {
            v33 = +[TSUAssertionHandler _atomicIncrementAssertCount](
                    &OBJC_CLASS___TSUAssertionHandler,
                    "_atomicIncrementAssertCount");
            if ( TSUAssertCat_init_token != -1 )
              dispatch_once(&TSUAssertCat_init_token, &stru_1001DE618);
            v34 = TSUAssertCat_log_t;
            if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
              sub_100172604(v33, v34);
            v35 = +[NSString stringWithUTF8String:](
                    &OBJC_CLASS___NSString,
                    "stringWithUTF8String:",
                    "-[SFUCryptor cryptDataFromBuffer:length:toStream:finished:crc32:error:]");
            v30 = +[NSString stringWithUTF8String:](
                    &OBJC_CLASS___NSString,
                    "stringWithUTF8String:",
                    "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/"
                    "Sources/iWorkXPC/shared/utility/sf/SFUCryptor.m");
            v31 = v35;
            v32 = 140LL;
            goto LABEL_40;
          }
          *a7 = crc32(*a7, self->mOutputBuffer, dataOutMoved);
        }
      }
      a3 += v18;
      a4 -= v18;
      if ( !a4 )
        goto LABEL_17;
    }
    if ( !v8 )
      return 0;
    v24 = NSOSStatusErrorDomain;
    v25 = v19;
    goto LABEL_44;
  }
LABEL_17:
  if ( v10 )
  {
    dataOutMoved = 0LL;
    mOutputBuffer = self->mOutputBuffer;
    if ( CCCryptorFinal(self->mCryptor, mOutputBuffer, 0x20000uLL, &dataOutMoved) == -4301 )
    {
      OutputLength = CCCryptorGetOutputLength(self->mCryptor, 0LL, 1);
      v22 = (char *)malloc_type_malloc(OutputLength, 0x6CDC3A68uLL);
      if ( !v22 )
      {
        if ( !v8 )
          return 0;
        v24 = NSOSStatusErrorDomain;
        v25 = -4301LL;
LABEL_44:
        *v8 = +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                v24,
                v25,
                0LL);
        return 0;
      }
      mOutputBuffer = v22;
      v23 = CCCryptorFinal(self->mCryptor, v22, OutputLength, &dataOutMoved);
      if ( v23 )
      {
        if ( v8 )
          *v8 = +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  NSOSStatusErrorDomain,
                  v23,
                  0LL);
        free(mOutputBuffer);
        return 0;
      }
      v26 = mOutputBuffer;
    }
    else
    {
      v26 = 0LL;
    }
    if ( dataOutMoved )
    {
      objc_msgSend(a5, "writeBuffer:size:", mOutputBuffer);
      if ( a7 )
      {
        if ( HIDWORD(dataOutMoved) )
        {
          v27 = +[TSUAssertionHandler _atomicIncrementAssertCount](
                  &OBJC_CLASS___TSUAssertionHandler,
                  "_atomicIncrementAssertCount");
          if ( TSUAssertCat_init_token != -1 )
            dispatch_once(&TSUAssertCat_init_token, &stru_1001DE638);
          v28 = TSUAssertCat_log_t;
          if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
            sub_10017257C(v27, v28);
          v29 = +[NSString stringWithUTF8String:](
                  &OBJC_CLASS___NSString,
                  "stringWithUTF8String:",
                  "-[SFUCryptor cryptDataFromBuffer:length:toStream:finished:crc32:error:]");
          v30 = +[NSString stringWithUTF8String:](
                  &OBJC_CLASS___NSString,
                  "stringWithUTF8String:",
                  "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/So"
                  "urces/iWorkXPC/shared/utility/sf/SFUCryptor.m");
          v31 = v29;
          v32 = 180LL;
LABEL_40:
          +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
            &OBJC_CLASS___TSUAssertionHandler,
            "handleFailureInFunction:file:lineNumber:isFatal:description:",
            v31,
            v30,
            v32,
            0LL,
            "overflow in cryptDataFromBuffer:length:toStream:finished:crc32:error:");
          +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
          if ( !v8 )
            return 0;
          v24 = NSOSStatusErrorDomain;
          v25 = -4302LL;
          goto LABEL_44;
        }
        *a7 = crc32(*a7, mOutputBuffer, dataOutMoved);
      }
    }
    if ( v26 )
      free(v26);
  }
  return 1;
}