-[SFUCryptor cryptDataFromStream:toBuffer:length:bytesRead:error:]
bool __cdecl -[SFUCryptor cryptDataFromStream:toBuffer:length:bytesRead:error:](
        SFUCryptor *self,
        SEL a2,
        id a3,
        char *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        id *a7)
{
  __int64 v13; // x25
  void *v14; // x26
  unsigned __int64 mOutputBufferAvailable; // x8
  size_t v16; // x26
  unsigned __int64 v17; // x9
  char *v18; // x25
  unsigned __int64 v19; // x8
  void *v21; // x26
  CCCryptorStatus v22; // w0
  size_t v23; // x19
  size_t v24; // x27
  _BOOL4 v25; // w8
  size_t v26; // x19
  unsigned __int64 v27; // x8
  id *v28; // [xsp+0h] [xbp-60h]
  size_t dataOutMoved; // [xsp+8h] [xbp-58h] BYREF

  if ( self->mOperation != 1 )
  {
    v13 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE658);
    v14 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100172714(v13, v14);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUCryptor cryptDataFromStream:toBuffer:length:bytesRead:error:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUCryptor.m"),
      200LL,
      0LL,
      "Encryption from stream not supported");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  mOutputBufferAvailable = self->mOutputBufferAvailable;
  if ( mOutputBufferAvailable )
  {
    if ( mOutputBufferAvailable >= a5 )
      v16 = a5;
    else
      v16 = self->mOutputBufferAvailable;
    memcpy(a4, self->mOutputBufferPos, v16);
    v17 = self->mOutputBufferAvailable - v16;
    self->mOutputBufferPos += v16;
    self->mOutputBufferAvailable = v17;
    v18 = &a4[v16];
    a5 -= v16;
  }
  else
  {
    v18 = a4;
  }
  if ( self->mFinished )
  {
    v19 = v18 - a4;
LABEL_15:
    *a6 = v19;
    return 1;
  }
  if ( a5 )
  {
    v28 = a7;
    while ( 1 )
    {
      v21 = objc_msgSend(a3, "readToBuffer:size:", self->mDecryptionInputBuffer, 0x20000 - self->mBlockSize, v28);
      if ( !v21 )
        break;
      dataOutMoved = 0LL;
      v22 = CCCryptorUpdate(
              self->mCryptor,
              self->mDecryptionInputBuffer,
              (size_t)v21,
              self->mOutputBuffer,
              0x20000uLL,
              &dataOutMoved);
      if ( v22 )
      {
        a7 = v28;
        goto LABEL_40;
      }
      v23 = dataOutMoved;
      if ( a5 >= dataOutMoved )
        v24 = dataOutMoved;
      else
        v24 = a5;
      memcpy(v18, self->mOutputBuffer, v24);
      v18 += v24;
      a5 -= v24;
      self->mOutputBufferPos = &self->mOutputBuffer[v24];
      self->mOutputBufferAvailable = v23 - v24;
      v25 = a5 != 0;
      if ( !a5 )
        goto LABEL_28;
    }
    v25 = 1;
LABEL_28:
    if ( v21 )
      v25 = 0;
    a7 = v28;
  }
  else
  {
    v25 = 0;
  }
  if ( v18 != a4 && !v25 )
  {
    *a6 = v18 - a4;
    return 1;
  }
  self->mFinished = 1;
  dataOutMoved = 0LL;
  v22 = CCCryptorFinal(self->mCryptor, self->mOutputBuffer, 0x20000uLL, &dataOutMoved);
  if ( !v22 )
  {
    if ( a5 >= dataOutMoved )
      v26 = dataOutMoved;
    else
      v26 = a5;
    memcpy(v18, self->mOutputBuffer, v26);
    v27 = dataOutMoved - v26;
    self->mOutputBufferPos = &self->mOutputBuffer[v26];
    self->mOutputBufferAvailable = v27;
    v19 = &v18[v26] - a4;
    goto LABEL_15;
  }
LABEL_40:
  if ( a7 )
    *a7 = +[NSError errorWithDomain:code:userInfo:](
            &OBJC_CLASS___NSError,
            "errorWithDomain:code:userInfo:",
            NSOSStatusErrorDomain,
            v22,
            0LL);
  return 0;
}