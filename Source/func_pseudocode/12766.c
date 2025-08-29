-[TSUZipArchive readChannelForEntry:validateCRC:]
id __cdecl -[TSUZipArchive readChannelForEntry:validateCRC:](TSUZipArchive *self, SEL a2, id a3, bool a4)
{
  _BOOL4 v4; // w20
  id v6; // x19
  unsigned int v7; // w22
  TSUZipReadChannel *v8; // x21
  TSUBufferedReadChannel *v9; // x22
  TSUBufferedReadChannel *v10; // x20
  __int64 v11; // x20
  void *v12; // x21
  NSString *v13; // x21
  NSString *v14; // x22
  _QWORD v16[4]; // [xsp+0h] [xbp-60h] BYREF
  id v17; // [xsp+20h] [xbp-40h]
  bool v18; // [xsp+28h] [xbp-38h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

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
           v4 & v7);
    if ( (v7 & 1) == 0 )
    {
      v9 = objc_alloc(&OBJC_CLASS___TSUBufferedReadChannel);
      v16[0] = _NSConcreteStackBlock;
      v16[1] = 3254779904LL;
      v16[2] = sub_1001329EC;
      v16[3] = &unk_1001DD1A8;
      v17 = objc_retain(v6);
      v18 = v4;
      v10 = -[TSUBufferedReadChannel initWithReadChannel:blockInfos:streamReadChannelBlock:](
              v9,
              "initWithReadChannel:blockInfos:streamReadChannelBlock:",
              v8,
              0LL,
              v16);
      objc_release(v8);
      objc_release(v17);
      v8 = (TSUZipReadChannel *)v10;
    }
  }
  else
  {
    v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD1D8);
    v12 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016F884(v11, v12);
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSUZipArchive readChannelForEntry:validateCRC:]"));
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
      779LL,
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