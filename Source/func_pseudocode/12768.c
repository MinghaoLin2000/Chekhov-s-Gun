-[TSUZipArchive streamReadChannelForEntry:validateCRC:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[TSUZipArchive streamReadChannelForEntry:validateCRC:](TSUZipArchive *self, SEL a2, id a3, bool a4)
{
  _BOOL8 v4; // x20
  id v6; // x19
  unsigned int v7; // w22
  TSUZipReadChannel *v8; // x21
  TSUZipInflateReadChannel *v9; // x22
  TSUZipInflateReadChannel *v10; // x20
  __int64 v11; // x20
  void *v12; // x21
  NSString *v13; // x21
  NSString *v14; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = a4;
  v6 = objc_retain(a3);
  if ( (unsigned int)-[NSMutableOrderedSet containsObject:](self->_entries, "containsObject:", v6) )
  {
    v7 = (unsigned int)objc_msgSend(v6, "isCompressed") ^ 1;
    v8 = -[TSUZipReadChannel initWithEntry:archive:validateCRC:](
           objc_alloc(&OBJC_CLASS___TSUZipReadChannel),
           "initWithEntry:archive:validateCRC:",
           v6,
           self,
           (unsigned int)v4 & v7);
    if ( (v7 & 1) == 0 )
    {
      v9 = objc_alloc(&OBJC_CLASS___TSUZipInflateReadChannel);
      objc_msgSend(v6, "size");
      v10 = -[TSUZipInflateReadChannel initWithReadChannel:uncompressedSize:CRC:validateCRC:](
              v9,
              "initWithReadChannel:uncompressedSize:CRC:validateCRC:",
              v8,
              objc_msgSend(v6, "size"),
              objc_msgSend(v6, "CRC"),
              v4);
      objc_release(v8);
      v8 = (TSUZipReadChannel *)v10;
    }
  }
  else
  {
    v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD1F8);
    v12 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016F90C(v11, v12);
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSUZipArchive streamReadChannelForEntry:validateCRC:]"));
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUZipArchive.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v13,
      v14,
      802LL,
      0LL,
      "Entry isn't part of this archive");
    objc_release(v14);
    objc_release(v13);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    v8 = 0LL;
  }
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}