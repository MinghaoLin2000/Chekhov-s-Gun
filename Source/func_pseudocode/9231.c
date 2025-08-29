-[TSPCryptoComponentWriteChannel _finalizeBlockForClosing:]
// local variable allocation has failed, the output may be wrong!
bool __cdecl -[TSPCryptoComponentWriteChannel _finalizeBlockForClosing:](
        TSPCryptoComponentWriteChannel *self,
        SEL a2,
        bool a3)
{
  size_t OutputLength; // x22
  void *v6; // x0
  void *v7; // x23
  dispatch_data_t subrange; // x19
  __int64 v9; // x22
  __int64 v10; // x23
  void *v11; // x24
  NSString *v12; // x23
  NSString *v13; // x25
  size_t v14; // x8
  unsigned __int64 bufferSize; // x10
  unsigned __int64 v16; // x9
  unsigned __int64 remainingBufferSize; // x9
  bool v18; // cf
  unsigned __int64 v19; // x8
  bool v20; // w22
  __int64 v21; // x19
  void *v22; // x22
  NSString *v23; // x22
  NSString *v24; // x19
  void *v25; // x23
  TSPComponentWriteChannel *writeChannel; // x24
  dispatch_data_t v27; // x23
  TSPMutableCryptoInfo *encryptionInfo; // x23
  id v29; // x21
  _CCCryptor *cryptor; // x0
  __int64 v32; // x19
  void *v33; // x20
  NSString *v34; // x19
  NSString *v35; // x21
  __int64 v36; // x20
  void *v37; // x21
  NSString *v38; // x21
  NSString *v39; // x22
  __int64 v40; // x20
  void *v41; // x21
  size_t dataOutMoved; // [xsp+18h] [xbp-58h] BYREF

  if ( !self->_writeChannel )
  {
    v32 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount",
            a3);
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D2160);
    v33 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016AB44(v32, v33);
    TSUSetCrashReporterInfo(
      "Fatal Assertion failure: %{public}s %{public}s:%d Tried to write data when already closed.",
      "-[TSPCryptoComponentWriteChannel _finalizeBlockForClosing:]",
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/src/TSPCryptoComponentWriteChannel.mm",
      265LL);
    v34 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPCryptoComponentWriteChannel _finalizeBlockForClosing:]"));
    v35 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPCryptoComponentWriteChannel.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v34,
      v35,
      265LL,
      1LL,
      "Tried to write data when already closed.");
    objc_release(v35);
    objc_release(v34);
    TSUCrashBreakpoint();
    abort();
  }
  dataOutMoved = 0LL;
  if ( CCCryptorFinal(self->_cryptor, &self->_buffer[self->_bufferPosition], self->_remainingBufferSize, &dataOutMoved) != -4301 )
  {
    if ( !dataOutMoved )
    {
      subrange = 0LL;
      v20 = 1;
      goto LABEL_25;
    }
    subrange = dispatch_data_create_subrange(
                 (dispatch_data_t)self->_bufferDispatchData,
                 self->_bufferPosition,
                 dataOutMoved);
    v14 = dataOutMoved;
    bufferSize = self->_bufferSize;
    v16 = self->_bufferPosition + dataOutMoved;
    self->_bufferPosition = v16;
    if ( v16 > bufferSize )
    {
      v36 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D21C0);
      v37 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016ACF8(v36, v37);
      TSUSetCrashReporterInfo(
        "Fatal Assertion failure: %{public}s %{public}s:%d Buffer overflow",
        "-[TSPCryptoComponentWriteChannel _finalizeBlockForClosing:]",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/src/TSPCryptoComponentWriteChannel.mm",
        296LL);
      v38 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSPCryptoComponentWriteChannel _finalizeBlockForClosing:]"));
      v39 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPCryptoComponentWriteChannel.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v38,
        v39,
        296LL,
        1LL,
        "Buffer overflow");
    }
    else
    {
      remainingBufferSize = self->_remainingBufferSize;
      v18 = remainingBufferSize >= v14;
      v19 = remainingBufferSize - v14;
      if ( v18 )
      {
        self->_remainingBufferSize = v19;
        goto LABEL_15;
      }
      v40 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D21E0);
      v41 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016AD80(v40, v41);
      TSUSetCrashReporterInfo(
        "Fatal Assertion failure: %{public}s %{public}s:%d Buffer overflow",
        "-[TSPCryptoComponentWriteChannel _finalizeBlockForClosing:]",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/src/TSPCryptoComponentWriteChannel.mm",
        297LL);
      v38 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSPCryptoComponentWriteChannel _finalizeBlockForClosing:]"));
      v39 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPCryptoComponentWriteChannel.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v38,
        v39,
        297LL,
        1LL,
        "Buffer overflow");
    }
    objc_release(v39);
    objc_release(v38);
    TSUCrashBreakpoint();
    abort();
  }
  OutputLength = CCCryptorGetOutputLength(self->_cryptor, 0LL, 1);
  v6 = malloc_type_malloc(OutputLength, 0x853ABA00uLL);
  v7 = v6;
  if ( !v6 )
  {
    v21 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D2180);
    v22 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016ABCC(v21, v22);
    v23 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPCryptoComponentWriteChannel _finalizeBlockForClosing:]"));
    v24 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPCryptoComponentWriteChannel.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v23,
      v24,
      280LL,
      0LL,
      "Failed to allocate buffer for finalizing encryption");
    objc_release(v24);
    objc_release(v23);
    subrange = 0LL;
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    goto LABEL_22;
  }
  subrange = dispatch_data_create(v6, OutputLength, 0LL, _dispatch_data_destructor_free);
  dataOutMoved = 0LL;
  v9 = CCCryptorFinal(self->_cryptor, v7, OutputLength, &dataOutMoved);
  if ( !(_DWORD)v9 )
  {
LABEL_15:
    v20 = 1;
    goto LABEL_23;
  }
  v10 = +[TSUAssertionHandler _atomicIncrementAssertCount](
          &OBJC_CLASS___TSUAssertionHandler,
          "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001D21A0);
  v11 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_10016AC54(v10, v9, v11);
  v12 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "-[TSPCryptoComponentWriteChannel _finalizeBlockForClosing:]"));
  v13 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/persistence/src/TSPCryptoComponentWriteChannel.mm"));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v12,
    v13,
    290LL,
    0LL,
    "Finalizing encryption failed: CCCryptorFinal status %i",
    v9);
  objc_release(v13);
  objc_release(v12);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
LABEL_22:
  v20 = 0;
LABEL_23:
  if ( dataOutMoved )
  {
    -[TSPComponentWriteChannel writeData:](self->_writeChannel, "writeData:", subrange);
    self->_encodedBlockLength += dataOutMoved;
  }
LABEL_25:
  v25 = malloc_type_calloc(0x14uLL, 1uLL, 0x100004077774924uLL);
  CCHmacFinal((CCHmacContext *)&self->_ccHmacContext, v25);
  writeChannel = self->_writeChannel;
  v27 = dispatch_data_create(v25, 0x14uLL, 0LL, _dispatch_data_destructor_free);
  -[TSPComponentWriteChannel writeData:](writeChannel, "writeData:", v27);
  objc_release(v27);
  self->_encodedBlockLength += 20LL;
  if ( -[TSPMutableCryptoInfo preferredBlockSize](self->_encryptionInfo, "preferredBlockSize") != (void *)-1LL )
    -[TSPMutableCryptoInfo incrementDecodedLengthBy:](
      self->_encryptionInfo,
      "incrementDecodedLengthBy:",
      self->_decryptedBlockLength);
  if ( !a3 )
  {
    encryptionInfo = self->_encryptionInfo;
    v29 = objc_retainAutoreleasedReturnValue((id)TSUEncodedBlockInfoCreate(
                                                   self->_encodedBlockLength,
                                                   self->_decryptedBlockLength));
    -[TSPMutableCryptoInfo addBlockInfo:](encryptionInfo, "addBlockInfo:", v29);
    objc_release(v29);
    self->_encodedBlockLength = 0LL;
    self->_decryptedBlockLength = 0LL;
    cryptor = self->_cryptor;
    if ( cryptor )
    {
      CCCryptorRelease(cryptor);
      self->_cryptor = 0LL;
    }
  }
  objc_release(subrange);
  return v20;
}