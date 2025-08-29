-[SFUZipInflateInputStream readToBuffer:size:]
unsigned __int64 __cdecl -[SFUZipInflateInputStream readToBuffer:size:](
        SFUZipInflateInputStream *self,
        SEL a2,
        char *a3,
        unsigned __int64 a4)
{
  uInt v4; // w22
  __int64 v7; // x23
  void *v8; // x21
  char *next_out; // x24
  __int64 v10; // x26
  unsigned __int64 v11; // x0
  uInt v12; // w26
  unsigned int v13; // w21
  os_log_s *v14; // x22
  __int64 v15; // x23
  void *v16; // x21
  uint8_t buf[4]; // [xsp+20h] [xbp-80h] BYREF
  unsigned int v19; // [xsp+24h] [xbp-7Ch]
  __int16 v20; // [xsp+28h] [xbp-78h]
  const char *v21; // [xsp+2Ah] [xbp-76h]
  __int16 v22; // [xsp+32h] [xbp-6Eh]
  const char *v23; // [xsp+34h] [xbp-6Ch]
  __int16 v24; // [xsp+3Ch] [xbp-64h]
  int v25; // [xsp+3Eh] [xbp-62h]

  v4 = a4;
  if ( a4 >= 0xFFFFFFFF )
  {
    v7 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE678);
    v8 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100172824(v7, v8);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUZipInflateInputStream readToBuffer:size:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUZipInflateInputStream.m"),
      117LL,
      0LL,
      "overflow in readToBuffer:");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  self->mStream.avail_out = v4;
  self->mStream.next_out = (Bytef *)a3;
  next_out = a3;
  if ( v4 )
  {
    LODWORD(v10) = 0;
    do
    {
      if ( self->mStream.avail_in )
      {
        if ( (_DWORD)v10 )
          break;
      }
      else
      {
        if ( (_DWORD)v10 || self->mReachedEnd )
          break;
        v11 = -[SFUBufferedInputStream readToOwnBuffer:size:](
                self->mInput,
                "readToOwnBuffer:size:",
                &self->mStream,
                0xFFFFFFFFLL);
        v12 = v11;
        if ( v11 >= 0xFFFFFFFF )
        {
          v13 = +[TSUAssertionHandler _atomicIncrementAssertCount](
                  &OBJC_CLASS___TSUAssertionHandler,
                  "_atomicIncrementAssertCount");
          if ( TSUAssertCat_init_token != -1 )
            dispatch_once(&TSUAssertCat_init_token, &stru_1001DE698);
          v14 = (os_log_s *)TSUAssertCat_log_t;
          if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
          {
            *(_DWORD *)buf = 67109890;
            v19 = v13;
            v20 = 2082;
            v21 = "-[SFUZipInflateInputStream readToBuffer:size:]";
            v22 = 2082;
            v23 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/So"
                  "urces/iWorkXPC/shared/utility/sf/SFUZipInflateInputStream.m";
            v24 = 1024;
            v25 = 129;
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              v14,
              OS_LOG_TYPE_ERROR,
              "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d overflow in readToBuffer:size:",
              buf,
              0x22u);
          }
          +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
            &OBJC_CLASS___TSUAssertionHandler,
            "handleFailureInFunction:file:lineNumber:isFatal:description:",
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[SFUZipInflateInputStream readToBuffer:size:]"),
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/sf/SFUZipInflateInputStream.m"),
            129LL,
            0LL,
            "overflow in readToBuffer:size:");
          +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
        }
        self->mStream.avail_in = v12;
        self->mOffset += v12;
      }
      v10 = inflate(&self->mStream, 0);
      if ( (unsigned int)(v10 + 5) > 6 || ((1 << (v10 + 5)) & 0x61) == 0 )
        +[SFUZipException raise:format:](
          &OBJC_CLASS___SFUZipException,
          "raise:format:",
          CFSTR("SFUZipInflateError"),
          CFSTR("inflate() failed: %d"),
          v10);
    }
    while ( self->mStream.avail_out );
    next_out = (char *)self->mStream.next_out;
  }
  if ( (unsigned __int64)(next_out - a3) >= 0xFFFFFFFF )
  {
    v15 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE6B8);
    v16 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10017279C(v15, v16);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUZipInflateInputStream readToBuffer:size:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUZipInflateInputStream.m"),
      141LL,
      0LL,
      "overflow in readToBuffer:");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  if ( next_out == a3 )
    self->mReachedEnd = 1;
  return next_out - a3;
}