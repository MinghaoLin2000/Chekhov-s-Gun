-[TSPCryptoComponentWriteChannel initWithWriteChannel:encryptionInfo:bufferSize:]
TSPCryptoComponentWriteChannel *__cdecl -[TSPCryptoComponentWriteChannel initWithWriteChannel:encryptionInfo:bufferSize:](
        TSPCryptoComponentWriteChannel *self,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5)
{
  id v9; // x19
  id v10; // x20
  TSPCryptoComponentWriteChannel *v11; // x24
  TSPCryptoComponentWriteChannel *v12; // x21
  __int64 v13; // x26
  void *v14; // x27
  NSString *v15; // x26
  NSString *v16; // x28
  __int64 v17; // x25
  void *v18; // x26
  NSString *v19; // x25
  NSString *v20; // x27
  id *p_encryptionInfo; // x24
  unsigned __int64 v22; // x8
  NSProcessInfo *v23; // x23
  unsigned __int64 v24; // x22
  intptr_t v25; // x0
  dispatch_semaphore_t v26; // x0
  OS_dispatch_semaphore *bufferSemaphore; // x8
  void *v28; // x23
  unsigned __int8 v29; // w22
  TSPComponentWriteChannel *writeChannel; // x0
  objc_super v32; // [xsp+10h] [xbp-60h] BYREF

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v32.receiver = self;
  v32.super_class = (Class)&OBJC_CLASS___TSPCryptoComponentWriteChannel;
  v11 = -[TSPCryptoComponentWriteChannel init](&v32, "init");
  v12 = v11;
  if ( v11 )
  {
    if ( !v9 )
    {
      v13 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D2000);
      v14 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016A74C(v13, v14);
      v15 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSPCryptoComponentWriteChannel initWithWriteChannel:encryptionInfo:bufferSize:]"));
      v16 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPCryptoComponentWriteChannel.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v15,
        v16,
        50LL,
        0LL,
        "invalid nil value for '%{public}s'",
        "writeChannel");
      objc_release(v16);
      objc_release(v15);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    objc_storeStrong((id *)&v11->_writeChannel, a3);
    if ( !v10 )
    {
      v17 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D2020);
      v18 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016A6A0(v17, v18);
      v19 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSPCryptoComponentWriteChannel initWithWriteChannel:encryptionInfo:bufferSize:]"));
      v20 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPCryptoComponentWriteChannel.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v19,
        v20,
        53LL,
        0LL,
        "invalid nil value for '%{public}s'",
        "encryptionInfo");
      objc_release(v20);
      objc_release(v19);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    p_encryptionInfo = (id *)&v11->_encryptionInfo;
    objc_storeStrong(p_encryptionInfo, a4);
    -[TSPMutableCryptoInfo reset](v12->_encryptionInfo, "reset");
    v22 = 144LL;
    if ( a5 > 0x90 )
      v22 = a5;
    v12->_bufferSize = v22;
    v23 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
    v24 = -[NSProcessInfo physicalMemory](v23, "physicalMemory");
    objc_release(v23);
    if ( v24 / 0x64 / v12->_bufferSize <= 0x20 )
      v25 = 32LL;
    else
      v25 = v24 / 0x64 / v12->_bufferSize;
    v26 = dispatch_semaphore_create(v25);
    bufferSemaphore = v12->_bufferSemaphore;
    v12->_bufferSemaphore = (OS_dispatch_semaphore *)v26;
    objc_release(bufferSemaphore);
    if ( v12->_writeChannel )
    {
      v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(*p_encryptionInfo, "cryptoKey"));
      if ( v28 && -[TSPCryptoComponentWriteChannel _resetBuffer](v12, "_resetBuffer") )
      {
        v29 = -[TSPCryptoComponentWriteChannel _initializeBlock](v12, "_initializeBlock");
        objc_release(v28);
        if ( (v29 & 1) != 0 )
          goto LABEL_26;
      }
      else
      {
        objc_release(v28);
      }
    }
    writeChannel = v12->_writeChannel;
    v12->_writeChannel = 0LL;
    objc_release(writeChannel);
    objc_release(v12);
    v12 = 0LL;
  }
LABEL_26:
  objc_release(v10);
  objc_release(v9);
  return v12;
}