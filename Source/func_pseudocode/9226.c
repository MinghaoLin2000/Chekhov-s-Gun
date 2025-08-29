-[TSPCryptoComponentWriteChannel _initializeBlock]
bool __cdecl -[TSPCryptoComponentWriteChannel _initializeBlock](TSPCryptoComponentWriteChannel *self, SEL a2)
{
  void *v3; // x19
  void *v4; // x20
  __int64 v5; // x21
  void *v6; // x22
  NSString *v7; // x21
  NSString *v8; // x23
  __int64 v9; // x23
  __int64 v10; // x21
  void *v11; // x22
  NSString *v12; // x21
  NSString *v13; // x24
  void *v15; // x25
  const char *v16; // x24
  size_t v17; // x0
  TSPComponentWriteChannel *writeChannel; // x25
  dispatch_data_t v19; // x24
  __int64 v20; // x21
  void *v21; // x22
  NSString *v22; // x21
  NSString *v23; // x23
  __int64 v24; // x21
  void *v25; // x22
  NSString *v26; // x21
  NSString *v27; // x23
  dispatch_data_t v28; // x22

  v3 = objc_retainAutoreleasedReturnValue(-[TSPMutableCryptoInfo cryptoKey](self->_encryptionInfo, "cryptoKey"));
  v4 = malloc_type_malloc(0x10uLL, 0x34C747F3uLL);
  if ( !v4 || SecRandomCopyBytes(kSecRandomDefault, 0x10uLL, v4) )
  {
    v5 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D2090);
    v6 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016A880(v5, v6);
    v7 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSPCryptoComponentWriteChannel _initializeBlock]"));
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/persistence/src/TSPCryptoComponentWriteChannel.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v7,
      v8,
      109LL,
      0LL,
      "Failed to generate IV");
    objc_release(v8);
    objc_release(v7);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
LABEL_8:
    if ( !v4 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v9 = CCCryptorCreate(
         0,
         0,
         1u,
         objc_msgSend(v3, "keyData"),
         (size_t)objc_msgSend(v3, "keyLength"),
         v4,
         &self->_cryptor);
  if ( (_DWORD)v9 || !self->_cryptor )
  {
    v10 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D20B0);
    v11 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016A908(v10, v9, v11);
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPCryptoComponentWriteChannel _initializeBlock]"));
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPCryptoComponentWriteChannel.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v12,
      v13,
      115LL,
      0LL,
      "CCCryptorCreate() failed: %d",
      v9);
    objc_release(v13);
    objc_release(v12);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  else
  {
    *(_OWORD *)self->_ccHmacContext.ctx = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[88] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[92] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[80] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[84] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[72] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[76] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[64] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[68] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[56] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[60] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[48] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[52] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[40] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[44] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[32] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[36] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[24] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[28] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[16] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[20] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[8] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[12] = 0u;
    *(_OWORD *)&self->_ccHmacContext.ctx[4] = 0u;
    v15 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "passphrase")));
    v16 = (const char *)objc_msgSend(v15, "cStringUsingEncoding:", 4LL);
    objc_release(v15);
    if ( v16 )
    {
      v17 = strlen(v16);
      CCHmacInit((CCHmacContext *)&self->_ccHmacContext, 0, v16, v17);
      writeChannel = self->_writeChannel;
      v19 = dispatch_data_create(v4, 0x10uLL, 0LL, _dispatch_data_destructor_free);
      -[TSPComponentWriteChannel writeData:](writeChannel, "writeData:", v19);
      objc_release(v19);
      self->_encodedBlockLength += 16LL;
      v4 = malloc_type_malloc(0x10uLL, 0x673E2330uLL);
      if ( v4 && !SecRandomCopyBytes(kSecRandomDefault, 0x10uLL, v4) )
      {
        v28 = dispatch_data_create(v4, 0x10uLL, 0LL, _dispatch_data_destructor_free);
        -[TSPCryptoComponentWriteChannel _writeData:isDecryptedData:](self, "_writeData:isDecryptedData:", v28, 0LL);
        objc_release(v28);
        LOBYTE(v4) = 1;
        goto LABEL_17;
      }
      v20 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D20F0);
      v21 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016AA34(v20, v21);
      v22 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSPCryptoComponentWriteChannel _initializeBlock]"));
      v23 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPCryptoComponentWriteChannel.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v22,
        v23,
        139LL,
        0LL,
        "Failed to generate initial block of random plaintext");
      objc_release(v23);
      objc_release(v22);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
      goto LABEL_8;
    }
    v24 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D20D0);
    v25 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016A9AC(v24, v25);
    v26 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPCryptoComponentWriteChannel _initializeBlock]"));
    v27 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPCryptoComponentWriteChannel.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v26,
      v27,
      124LL,
      0LL,
      "Invalid passphrase");
    objc_release(v27);
    objc_release(v26);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
LABEL_16:
  free(v4);
  LOBYTE(v4) = 0;
LABEL_17:
  objc_release(v3);
  return (char)v4;
}