-[TSUReadChannelInputStreamAdapter seekToOffset:]
void __cdecl -[TSUReadChannelInputStreamAdapter seekToOffset:](
        TSUReadChannelInputStreamAdapter *self,
        SEL a2,
        signed __int64 a3)
{
  signed __int64 length; // x8
  unsigned __int64 v4; // x9
  signed __int64 v5; // x8
  OS_dispatch_data **p_leftoverData; // x0
  __int64 v7; // x19
  void *v8; // x20
  NSString *v9; // x20
  NSString *v10; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( self->_readChannel )
  {
    length = self->_length;
    if ( length >= a3 )
      v4 = a3;
    else
      v4 = self->_length;
    if ( length >= 0 )
      v5 = v4;
    else
      v5 = a3;
    self->_offset = v5;
    p_leftoverData = &self->_leftoverData;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_storeStrong((id *)p_leftoverData, &_dispatch_data_empty);
  }
  else
  {
    v7 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount",
           a3);
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DF1D8);
    v8 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100174358(v7, v8);
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSUReadChannelInputStreamAdapter seekToOffset:]"));
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUReadChannelInputStreamAdapter.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v9,
      v10,
      156LL,
      0LL,
      "Not a seekable stream");
    objc_release(v10);
    objc_release(v9);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
}