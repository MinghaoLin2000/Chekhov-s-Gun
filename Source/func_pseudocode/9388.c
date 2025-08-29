-[TSPZipFileWriteChannel writeData:handler:]
void __cdecl -[TSPZipFileWriteChannel writeData:handler:](TSPZipFileWriteChannel *self, SEL a2, id a3, id a4)
{
  dispatch_data_s *v6; // x19
  id v7; // x20
  unsigned __int8 v8; // w8
  size_t size; // x22
  TSUZipFileWriter *archiveWriter; // x23
  OS_dispatch_queue *writerQueue; // x24
  id v12; // x21
  __int64 v13; // x21
  void *v14; // x22
  NSString *v15; // x21
  NSString *v16; // x23
  _QWORD v17[4]; // [xsp+20h] [xbp-60h] BYREF
  id v18; // [xsp+40h] [xbp-40h]
  size_t v19; // [xsp+48h] [xbp-38h]

  v6 = (dispatch_data_s *)objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = atomic_load((unsigned __int8 *)&self->_isClosed);
  if ( (v8 & 1) != 0 )
  {
    v13 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D2DB0);
    v14 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016C070(v13, v14);
    TSUSetCrashReporterInfo(
      "Fatal Assertion failure: %{public}s %{public}s:%d Channel is closed",
      "-[TSPZipFileWriteChannel writeData:handler:]",
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/src/TSPZipFileWriteChannel.mm",
      40LL);
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPZipFileWriteChannel writeData:handler:]"));
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPZipFileWriteChannel.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v15,
      v16,
      40LL,
      1LL,
      "Channel is closed");
    objc_release(v16);
    objc_release(v15);
    TSUCrashBreakpoint();
    abort();
  }
  if ( v6 )
    size = dispatch_data_get_size(v6);
  else
    size = 0LL;
  archiveWriter = self->_archiveWriter;
  writerQueue = self->_writerQueue;
  v17[0] = _NSConcreteStackBlock;
  v17[1] = 3254779904LL;
  v17[2] = sub_10002B304;
  v17[3] = &unk_1001D2D80;
  v12 = objc_retain(v7);
  v18 = v12;
  v19 = size;
  -[TSUZipWriter addData:queue:completion:](archiveWriter, "addData:queue:completion:", v6, writerQueue, v17);
  objc_release(v18);
  objc_release(v12);
  objc_release(v6);
}