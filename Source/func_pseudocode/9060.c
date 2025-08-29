-[TSPPackageWriter newRawComponentWriteChannelWithPackageLocator:storeOutsideObjectArchive:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[TSPPackageWriter newRawComponentWriteChannelWithPackageLocator:storeOutsideObjectArchive:](
        TSPPackageWriter *self,
        SEL a2,
        id a3,
        bool a4)
{
  _BOOL8 v4; // x21
  id v6; // x19
  __int64 v7; // x22
  void *v8; // x23
  NSString *v9; // x23
  NSString *v10; // x24
  __int64 v11; // x22
  void *v12; // x23
  NSString *v13; // x23
  NSString *v14; // x24
  TSPPackage *v15; // x23
  id v16; // x21
  id v17; // x20
  id v18; // x23
  void *v19; // x22
  TSPPackageWriterComponentWriteChannel *v20; // x22

  v4 = a4;
  v6 = objc_retain(a3);
  if ( !v6 )
  {
    v7 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D1298);
    v8 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100169178(v7, v8);
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSPPackageWriter newRawComponentWriteChannelWithPackageLocator:storeOutsideObjectArchive:]"));
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPPackageWriter.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v9,
      v10,
      330LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "packageLocator");
    objc_release(v10);
    objc_release(v9);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  if ( v4 )
  {
    v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D12B8);
    v12 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_1001690F0(v11, v12);
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPPackageWriter newRawComponentWriteChannelWithPackageLocator:storeOutsideObjectArchive:]"));
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPPackageWriter.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v13,
      v14,
      331LL,
      0LL,
      "Components outside the object archive are not supported");
    objc_release(v14);
    objc_release(v13);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v15 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter originalPackage](self, "originalPackage"));
  v16 = objc_retainAutoreleasedReturnValue(
          -[TSPPackage packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:](
            v15,
            "packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:",
            v6,
            v4));
  objc_release(v15);
  v17 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter componentZipArchiveWriter](self, "componentZipArchiveWriter"));
  v18 = objc_retainAutoreleasedReturnValue(
          +[TSPPackage objectArchiveEntryPathForPackageLocator:](
            &OBJC_CLASS___TSPPackage,
            "objectArchiveEntryPathForPackageLocator:",
            v6));
  v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "lastModificationDate"));
  objc_msgSend(
    v17,
    "beginEntryWithName:force32BitSize:lastModificationDate:size:CRC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:",
    v18,
    1LL,
    v19,
    objc_msgSend(v16, "encodedLength"),
    objc_msgSend(v16, "CRC"),
    1LL);
  objc_release(v19);
  objc_release(v18);
  v20 = -[TSPPackageWriterComponentWriteChannel initWithArchiveWriter:](
          objc_alloc(&OBJC_CLASS___TSPPackageWriterComponentWriteChannel),
          "initWithArchiveWriter:",
          v17);
  objc_release(v17);
  objc_release(v16);
  objc_release(v6);
  return v20;
}