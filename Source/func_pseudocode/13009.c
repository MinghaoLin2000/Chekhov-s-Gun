-[TSUZipReadChannel initWithEntry:archive:validateCRC:]
TSUZipReadChannel *__cdecl -[TSUZipReadChannel initWithEntry:archive:validateCRC:](
        TSUZipReadChannel *self,
        SEL a2,
        id a3,
        id a4,
        bool a5)
{
  id v9; // x19
  id v10; // x20
  TSUZipReadChannel *v11; // x0
  TSUZipReadChannel *v12; // x21
  TSUReadChannel *v13; // x0
  TSUReadChannel *archiveReadChannel; // x8
  __int64 v15; // x22
  void *v16; // x23
  NSString *v17; // x23
  NSString *v18; // x24
  objc_super v20; // [xsp+0h] [xbp-50h] BYREF

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v20.receiver = self;
  v20.super_class = (Class)&OBJC_CLASS___TSUZipReadChannel;
  v11 = -[TSUZipReadChannel init](&v20, "init");
  v12 = v11;
  if ( v11 )
  {
    objc_storeStrong((id *)&v11->_entry, a3);
    objc_storeStrong((id *)&v12->_archive, a4);
    v12->_validateCRC = a5;
    v13 = (TSUReadChannel *)objc_msgSend(v10, "newArchiveReadChannel");
    archiveReadChannel = v12->_archiveReadChannel;
    v12->_archiveReadChannel = v13;
    objc_release(archiveReadChannel);
    if ( !v12->_archiveReadChannel )
    {
      v15 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001DDE78);
      v16 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10017153C(v15, v16);
      v17 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSUZipReadChannel initWithEntry:archive:validateCRC:]"));
      v18 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/utility/TSUZipReadChannel.m"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v17,
        v18,
        38LL,
        0LL,
        "Archive is closed");
      objc_release(v18);
      objc_release(v17);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
      objc_release(v12);
      v12 = 0LL;
    }
  }
  objc_release(v10);
  objc_release(v9);
  return v12;
}