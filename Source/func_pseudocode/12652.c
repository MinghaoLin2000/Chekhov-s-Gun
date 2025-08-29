-[TSUZipFileArchive initForReadingFromURL:options:error:]
id __cdecl -[TSUZipFileArchive initForReadingFromURL:options:error:](
        TSUZipFileArchive *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id *a5)
{
  id v8; // x19
  __int64 v9; // x23
  void *v10; // x24
  NSString *v11; // x24
  NSString *v12; // x25
  TSUZipFileArchive *v13; // x21
  dispatch_queue_attr_s *v14; // x22
  dispatch_queue_t v15; // x0
  OS_dispatch_queue *accessQueue; // x8
  objc_super v18; // [xsp+0h] [xbp-50h] BYREF

  v8 = objc_retain(a3);
  if ( ((unsigned int)objc_msgSend(v8, "isFileURL") & 1) == 0 )
  {
    v9 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DC8A8);
    v10 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016E860(v9, v10);
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSUZipFileArchive initForReadingFromURL:options:error:]"));
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUZipFileArchive.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v11,
      v12,
      173LL,
      0LL,
      "Need a file URL");
    objc_release(v12);
    objc_release(v11);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v18.receiver = self;
  v18.super_class = (Class)&OBJC_CLASS___TSUZipFileArchive;
  v13 = -[TSUZipArchive initWithOptions:](&v18, "initWithOptions:", a4);
  if ( v13 )
  {
    v14 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v15 = dispatch_queue_create("TSUZipFileArchive.Access", v14);
    accessQueue = v13->_accessQueue;
    v13->_accessQueue = (OS_dispatch_queue *)v15;
    objc_release(accessQueue);
    objc_release(v14);
    if ( !-[TSUZipFileArchive openWithURL:error:](v13, "openWithURL:error:", v8, a5) )
    {
      objc_release(v13);
      v13 = 0LL;
    }
  }
  objc_release(v8);
  return v13;
}