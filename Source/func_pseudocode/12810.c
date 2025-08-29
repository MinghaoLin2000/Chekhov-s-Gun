-[SFUBufferedInputStream readToOwnBuffer:size:]
unsigned __int64 __cdecl -[SFUBufferedInputStream readToOwnBuffer:size:](
        SFUBufferedInputStream *self,
        SEL a2,
        const char **a3,
        unsigned __int64 a4)
{
  __int64 v7; // x22
  void *v8; // x23
  signed __int64 mBufferStart; // x9
  signed __int64 mBufferEnd; // x8
  __int64 v11; // x22
  void *v12; // x23
  unsigned __int64 mBufferSize; // x10
  __int64 v14; // x22
  void *v15; // x23
  unsigned __int64 v16; // x24
  signed __int64 mBufferOffset; // x10
  signed __int64 v18; // x8
  unsigned __int64 v19; // x21
  signed __int64 v20; // x8
  __int64 v21; // x22
  void *v22; // x23
  void *v23; // x0
  signed __int64 v24; // x9
  signed __int64 v25; // x8
  unsigned __int64 result; // x0

  if ( !a3 )
  {
    v7 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD4D0);
    v8 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016FC48(v7, v8);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUBufferedInputStream readToOwnBuffer:size:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUBufferedInputStream.m"),
      81LL,
      0LL,
      "No buffer parameter");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  mBufferStart = self->mBufferStart;
  mBufferEnd = self->mBufferEnd;
  if ( self->mBufferOffset + mBufferStart > mBufferEnd )
  {
    v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD4F0);
    v12 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016FBC0(v11, v12);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUBufferedInputStream readToOwnBuffer:size:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUBufferedInputStream.m"),
      82LL,
      0LL,
      "Bad invariant");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    mBufferStart = self->mBufferStart;
    mBufferEnd = self->mBufferEnd;
  }
  mBufferSize = self->mBufferSize;
  if ( mBufferEnd - mBufferStart > (__int64)mBufferSize )
  {
    v14 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD510);
    v15 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016FB38(v14, v15);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "-[SFUBufferedInputStream readToOwnBuffer:size:]"),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/sf/SFUBufferedInputStream.m"),
      83LL,
      0LL,
      "Bad invariant");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    mBufferSize = self->mBufferSize;
    mBufferStart = self->mBufferStart;
    mBufferEnd = self->mBufferEnd;
  }
  if ( mBufferSize >= a4 )
    v16 = a4;
  else
    v16 = mBufferSize;
  mBufferOffset = self->mBufferOffset;
  v18 = mBufferEnd - mBufferStart;
  v19 = v18 - mBufferOffset;
  if ( v16 > v18 - mBufferOffset )
  {
    memmove(self->mBuffer, &self->mBuffer[mBufferOffset], v18 - mBufferOffset);
    v20 = self->mBufferStart + self->mBufferOffset;
    self->mBufferOffset = 0LL;
    self->mBufferStart = v20;
    if ( -[SFUInputStream offset](self->mStream, "offset") != (void *)self->mBufferEnd )
    {
      if ( (unsigned int)-[SFUInputStream canSeek](self->mStream, "canSeek") )
      {
        -[SFUInputStream seekToOffset:](self->mStream, "seekToOffset:", self->mBufferEnd);
      }
      else
      {
        v21 = +[TSUAssertionHandler _atomicIncrementAssertCount](
                &OBJC_CLASS___TSUAssertionHandler,
                "_atomicIncrementAssertCount");
        if ( TSUAssertCat_init_token != -1 )
          dispatch_once(&TSUAssertCat_init_token, &stru_1001DD530);
        v22 = TSUAssertCat_log_t;
        if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
          sub_10016FAB0(v21, v22);
        +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
          &OBJC_CLASS___TSUAssertionHandler,
          "handleFailureInFunction:file:lineNumber:isFatal:description:",
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "-[SFUBufferedInputStream readToOwnBuffer:size:]"),
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/utility/sf/SFUBufferedInputStream.m"),
          104LL,
          0LL,
          "Detected a read from the stream beneath a buffered stream.");
        +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
      }
    }
    v23 = -[SFUInputStream readToBuffer:size:](
            self->mStream,
            "readToBuffer:size:",
            &self->mBuffer[v19],
            self->mBufferSize - v19);
    v24 = self->mBufferStart;
    v25 = (signed __int64)v23 + self->mBufferEnd;
    self->mBufferEnd = v25;
    mBufferOffset = self->mBufferOffset;
    v19 = v25 - (v24 + mBufferOffset);
  }
  if ( v16 >= v19 )
    result = v19;
  else
    result = v16;
  *a3 = &self->mBuffer[mBufferOffset];
  self->mBufferOffset = result + mBufferOffset;
  return result;
}