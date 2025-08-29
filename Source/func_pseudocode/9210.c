-[TSPDirectoryPackageDataWriter newCGDataConsumerAtRelativePath:]
CGDataConsumer *__cdecl -[TSPDirectoryPackageDataWriter newCGDataConsumerAtRelativePath:](
        TSPDirectoryPackageDataWriter *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  const __CFURL *v5; // x20
  CGDataConsumer *v6; // x21
  __int64 v7; // x20
  void *v8; // x21
  NSString *v9; // x20
  NSString *v10; // x22

  v4 = objc_retain(a3);
  if ( v4 )
  {
    v5 = (const __CFURL *)objc_retainAutoreleasedReturnValue(-[TSPDirectoryPackageDataWriter targetDataURLForPath:](self, "targetDataURLForPath:", v4));
    v6 = CGDataConsumerCreateWithURL(v5);
    objc_release(v5);
  }
  else
  {
    v7 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D1D30);
    v8 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100169FAC(v7, v8);
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSPDirectoryPackageDataWriter newCGDataConsumerAtRelativePath:]"));
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPDirectoryPackageDataWriter.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v9,
      v10,
      57LL,
      0LL,
      "Path should be defined.");
    objc_release(v10);
    objc_release(v9);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    v6 = 0LL;
  }
  objc_release(v4);
  return v6;
}