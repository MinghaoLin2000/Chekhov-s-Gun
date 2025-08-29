-[TSPDirectoryPackageWriterComponentFileWriteChannel writeData:]
void __cdecl -[TSPDirectoryPackageWriterComponentFileWriteChannel writeData:](
        TSPDirectoryPackageWriterComponentFileWriteChannel *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  unsigned __int8 v5; // w8
  TSUFileIOChannel *writeChannel; // x0
  __int64 v7; // x20
  void *v8; // x21
  NSString *v9; // x20
  NSString *v10; // x22
  _QWORD v11[5]; // [xsp+18h] [xbp-48h] BYREF

  v4 = objc_retain(a3);
  v5 = atomic_load((unsigned __int8 *)&self->_isClosed);
  if ( (v5 & 1) != 0 )
  {
    v7 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D2B88);
    v8 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016B9F4(v7, v8);
    TSUSetCrashReporterInfo(
      "Fatal Assertion failure: %{public}s %{public}s:%d Already closed",
      "-[TSPDirectoryPackageWriterComponentFileWriteChannel writeData:]",
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/src/TSPDirectoryPackageWriter.mm",
      278LL);
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSPDirectoryPackageWriterComponentFileWriteChannel writeData:]"));
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPDirectoryPackageWriter.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v9,
      v10,
      278LL,
      1LL,
      "Already closed");
    objc_release(v10);
    objc_release(v9);
    TSUCrashBreakpoint();
    abort();
  }
  writeChannel = self->_writeChannel;
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_1000277E4;
  v11[3] = &unk_1001D2BA8;
  v11[4] = self;
  -[TSUFileIOChannel writeData:handler:](writeChannel, "writeData:handler:", v4, v11);
  objc_release(v4);
}