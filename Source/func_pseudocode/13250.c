-[SFUZipRecordInputStream dataAtOffset:size:end:]
const char *__cdecl -[SFUZipRecordInputStream dataAtOffset:size:end:](
        SFUZipRecordInputStream *self,
        SEL a2,
        signed __int64 a3,
        unsigned __int64 a4,
        signed __int64 a5)
{
  signed __int64 v9; // x25
  __int64 v10; // x23
  void *v11; // x24
  signed __int64 mBufferStart; // x8
  unsigned __int64 v13; // x22

  if ( a3 < 0 || (a4 ^ 0x7FFFFFFFFFFFFFFFLL) < a3 )
    +[NSException raise:format:](
      &OBJC_CLASS___NSException,
      "raise:format:",
      CFSTR("SFUZipArchiveError"),
      CFSTR("Size overflow."));
  v9 = a4 + a3;
  if ( a5 )
  {
    if ( v9 > a5 )
    {
      v10 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001DE7D8);
      v11 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_100172C68(v10, v11);
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "-[SFUZipRecordInputStream dataAtOffset:size:end:]"),
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/utility/sf/SFUZipArchive.m"),
        692LL,
        0LL,
        "End offset is too small.");
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
  }
  else
  {
    a5 = a4 + a3;
  }
  mBufferStart = self->mBufferStart;
  if ( mBufferStart > a3 || v9 > self->mBufferEnd )
  {
    -[SFUBufferedInputStream seekToOffset:](self->mInput, "seekToOffset:", a3);
    v13 = -[SFUBufferedInputStream readToOwnBuffer:size:](
            self->mInput,
            "readToOwnBuffer:size:",
            &self->mBuffer,
            a5 - a3);
    if ( v13 < a4 )
      +[NSException raise:format:](
        &OBJC_CLASS___NSException,
        "raise:format:",
        CFSTR("SFUZipArchiveError"),
        CFSTR("Could not read Zip record."));
    self->mBufferStart = a3;
    self->mBufferEnd = v13 + a3;
    mBufferStart = a3;
  }
  return &self->mBuffer[a3 - mBufferStart];
}