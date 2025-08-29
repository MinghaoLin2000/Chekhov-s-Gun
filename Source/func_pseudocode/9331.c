-[TSPFilePackageWriter newRawDataWriteChannelForRelativePath:originalLastModificationDate:originalSize:originalCRC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[TSPFilePackageWriter newRawDataWriteChannelForRelativePath:originalLastModificationDate:originalSize:originalCRC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:](
        TSPFilePackageWriter *self,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5,
        unsigned int a6,
        bool a7)
{
  _BOOL8 v7; // x22
  __int64 v8; // x23
  id v12; // x19
  id v13; // x20
  __int64 v14; // x25
  void *v15; // x26
  NSString *v16; // x25
  NSString *v17; // x27
  id v18; // x25
  TSPZipFileWriteChannel *v19; // x23
  id v20; // x22
  TSPZipFileWriteChannel *v21; // x21

  v7 = a7;
  v8 = *(_QWORD *)&a6;
  v12 = objc_retain(a3);
  v13 = objc_retain(a4);
  if ( !v12 )
  {
    v14 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D2748);
    v15 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016B44C(v14, v15);
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPFilePackageWriter newRawDataWriteChannelForRelativePath:originalLastModificationDate:originalSize:ori"
              "ginalCRC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:]"));
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPFilePackageWriter.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v16,
      v17,
      116LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "path");
    objc_release(v17);
    objc_release(v16);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v18 = objc_retainAutoreleasedReturnValue(-[TSPFilePackageWriter zipArchiveWriter](self, "zipArchiveWriter"));
  objc_msgSend(
    v18,
    "beginEntryWithName:force32BitSize:lastModificationDate:size:CRC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:",
    v12,
    0LL,
    v13,
    a5,
    v8,
    v7);
  objc_release(v18);
  v19 = objc_alloc(&OBJC_CLASS___TSPZipFileWriteChannel);
  v20 = objc_retainAutoreleasedReturnValue(-[TSPFilePackageWriter zipArchiveWriter](self, "zipArchiveWriter"));
  v21 = -[TSPZipFileWriteChannel initWithArchiveWriter:](v19, "initWithArchiveWriter:", v20);
  objc_release(v20);
  objc_release(v13);
  objc_release(v12);
  return v21;
}