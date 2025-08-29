-[TSUZipInflateReadChannel prepareBuffer]
void __cdecl -[TSUZipInflateReadChannel prepareBuffer](TSUZipInflateReadChannel *self, SEL a2)
{
  __int64 v3; // x20
  void *v4; // x21
  NSString *v5; // x21
  NSString *v6; // x22
  unsigned __int64 remainingUncompressedSize; // x8
  unsigned __int64 v8; // x10
  unsigned __int64 v9; // x0
  char *v10; // x0

  if ( self->_outBuffer )
  {
    v3 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE3D8);
    v4 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100171ED8(v3, v4);
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSUZipInflateReadChannel prepareBuffer]"));
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/utility/TSUZipInflateReadChannel.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v5,
      v6,
      80LL,
      0LL,
      "expected nil value for '%{public}s'",
      "_outBuffer");
    objc_release(v6);
    objc_release(v5);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  remainingUncompressedSize = self->_remainingUncompressedSize;
  if ( remainingUncompressedSize >= 0x40000 )
    v8 = 0x40000LL;
  else
    v8 = self->_remainingUncompressedSize;
  if ( remainingUncompressedSize )
    v9 = v8;
  else
    v9 = 0x40000LL;
  self->_outBufferSize = v9;
  v10 = (char *)malloc_type_malloc(v9, 0x82AA38FFuLL);
  self->_outBuffer = v10;
  self->_stream.avail_out = self->_outBufferSize;
  self->_stream.next_out = (Bytef *)v10;
}