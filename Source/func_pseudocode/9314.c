-[TSPPackageConverter newWriteChannelAtPath:lastModificationDate:size:CRC:packageWriter:error:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[TSPPackageConverter newWriteChannelAtPath:lastModificationDate:size:CRC:packageWriter:error:](
        TSPPackageConverter *self,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5,
        unsigned int a6,
        id a7,
        id *a8)
{
  __int64 v9; // x22
  id v12; // x19
  id v13; // x20
  id v14; // x21
  __int64 v15; // x24
  void *v16; // x25
  NSString *v17; // x24
  NSString *v18; // x26
  void *v19; // x24
  TSPZipFileWriteChannel *v20; // x22

  v9 = *(_QWORD *)&a6;
  v12 = objc_retain(a3);
  v13 = objc_retain(a4);
  v14 = objc_retain(a7);
  if ( !v12 )
  {
    v15 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D25C0);
    v16 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016B390(v15, v16);
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPPackageConverter newWriteChannelAtPath:lastModificationDate:size:CRC:packageWriter:error:]"));
    v18 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPPackageConverter.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v17,
      v18,
      433LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "path");
    objc_release(v18);
    objc_release(v17);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "zipArchiveWriter"));
  objc_msgSend(
    v19,
    "beginEntryWithName:force32BitSize:lastModificationDate:size:CRC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:",
    v12,
    0LL,
    v13,
    a5,
    v9,
    0LL);
  v20 = -[TSPZipFileWriteChannel initWithArchiveWriter:](
          objc_alloc(&OBJC_CLASS___TSPZipFileWriteChannel),
          "initWithArchiveWriter:",
          v19);
  objc_release(v19);
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  return v20;
}