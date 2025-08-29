-[TSUBufferedReadChannel _currentDataIntersectionWithOffset:length:isReadDone:]
id __cdecl -[TSUBufferedReadChannel _currentDataIntersectionWithOffset:length:isReadDone:](
        TSUBufferedReadChannel *self,
        SEL a2,
        signed __int64 a3,
        unsigned __int64 a4,
        bool *a5)
{
  unsigned __int64 v8; // x25
  signed __int64 streamOutputOffset; // x8
  unsigned __int64 streamOutputLength; // x9
  unsigned int v11; // w23
  os_log_s *v12; // x22
  NSString *v13; // x23
  NSString *v14; // x24
  unsigned __int64 v15; // x10
  unsigned __int64 v16; // x21
  unsigned __int64 v17; // x9
  dispatch_data_t subrange; // x0
  bool v20; // w8
  signed __int64 v22; // x8
  unsigned __int64 v23; // x10
  uint8_t buf[4]; // [xsp+10h] [xbp-80h] BYREF
  unsigned int v25; // [xsp+14h] [xbp-7Ch]
  __int16 v26; // [xsp+18h] [xbp-78h]
  const char *v27; // [xsp+1Ah] [xbp-76h]
  __int16 v28; // [xsp+22h] [xbp-6Eh]
  const char *v29; // [xsp+24h] [xbp-6Ch]
  __int16 v30; // [xsp+2Ch] [xbp-64h]
  int v31; // [xsp+2Eh] [xbp-62h]
  __int16 v32; // [xsp+32h] [xbp-5Eh]
  signed __int64 v33; // [xsp+34h] [xbp-5Ch]
  __int16 v34; // [xsp+3Ch] [xbp-54h]
  unsigned __int64 v35; // [xsp+3Eh] [xbp-52h]
  __int64 vars8; // [xsp+98h] [xbp+8h]

  if ( __CFADD__(a3, a4) )
    v8 = -1LL;
  else
    v8 = a3 + a4;
  streamOutputOffset = self->_streamOutputOffset;
  streamOutputLength = self->_streamOutputLength;
  if ( streamOutputLength >= ~streamOutputOffset )
  {
    v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DDBD0);
    v12 = (os_log_s *)TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    {
      v22 = self->_streamOutputOffset;
      v23 = self->_streamOutputLength;
      *(_DWORD *)buf = 67110402;
      v25 = v11;
      v26 = 2082;
      v27 = "-[TSUBufferedReadChannel _currentDataIntersectionWithOffset:length:isReadDone:]";
      v28 = 2082;
      v29 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/utility/TSUBufferedReadChannel.m";
      v30 = 1024;
      v31 = 343;
      v32 = 2048;
      v33 = v22;
      v34 = 2048;
      v35 = v23;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v12,
        OS_LOG_TYPE_ERROR,
        "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Overflow in the output stream: data offset %lli data length %zu",
        buf,
        0x36u);
    }
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSUBufferedReadChannel _currentDataIntersectionWithOffset:length:isReadDone:]"));
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUBufferedReadChannel.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v13,
      v14,
      343LL,
      0LL,
      "Overflow in the output stream: data offset %lli data length %zu",
      self->_streamOutputOffset,
      self->_streamOutputLength);
    objc_release(v14);
    objc_release(v13);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    streamOutputOffset = self->_streamOutputOffset;
    streamOutputLength = self->_streamOutputLength;
  }
  if ( streamOutputOffset <= a3 )
    v15 = a3;
  else
    v15 = streamOutputOffset;
  v16 = streamOutputLength + streamOutputOffset;
  if ( v8 >= streamOutputLength + streamOutputOffset )
    v17 = streamOutputLength + streamOutputOffset;
  else
    v17 = v8;
  if ( v17 <= v15 )
  {
    subrange = 0LL;
    if ( !a5 )
      goto LABEL_27;
LABEL_20:
    v20 = self->_isStreamOutputDone || v8 <= v16;
    *a5 = v20;
    goto LABEL_27;
  }
  subrange = dispatch_data_create_subrange(
               (dispatch_data_t)self->_currentStreamOutputData,
               v15 - streamOutputOffset,
               v17 - v15);
  if ( a5 )
    goto LABEL_20;
LABEL_27:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(subrange);
}