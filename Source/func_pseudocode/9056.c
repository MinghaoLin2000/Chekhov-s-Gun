-[TSPPackageWriter packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:packageURL:]
id __cdecl -[TSPPackageWriter packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:packageURL:](
        TSPPackageWriter *self,
        SEL a2,
        id a3,
        bool a4,
        id a5)
{
  _BOOL4 v6; // w22
  id v8; // x19
  id v9; // x20
  __int64 v10; // x23
  void *v11; // x24
  NSString *v12; // x23
  NSString *v13; // x25
  __int64 v14; // x22
  void *v15; // x23
  NSString *v16; // x23
  NSString *v17; // x24
  id v18; // x23
  id v19; // x24
  void *v20; // x21
  TSPPackageEntryInfo *v21; // x22
  void *v22; // x24
  void *v23; // x23
  TSPPackageEntryInfo *v24; // x22
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v6 = a4;
  v8 = objc_retain(a3);
  v9 = objc_retain(a5);
  if ( !v8 )
  {
    v10 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D1258);
    v11 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100169040(v10, v11);
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPPackageWriter packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:packageURL:]"));
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPPackageWriter.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v12,
      v13,
      269LL,
      0LL,
      "Invalid parameter not satisfying: %{public}s",
      "locator");
    objc_release(v13);
    objc_release(v12);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  if ( v6 )
  {
    v14 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D1278);
    v15 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100168FB8(v14, v15);
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPPackageWriter packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:packageURL:]"));
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPPackageWriter.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v16,
      v17,
      270LL,
      0LL,
      "Components outside the object archive are not supported");
    objc_release(v17);
    objc_release(v16);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v18 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter componentZipArchiveWriter](self, "componentZipArchiveWriter"));
  v19 = objc_retainAutoreleasedReturnValue(
          +[TSPPackage objectArchiveEntryPathForPackageLocator:](
            &OBJC_CLASS___TSPPackage,
            "objectArchiveEntryPathForPackageLocator:",
            v8));
  v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "entryWithName:", v19));
  objc_release(v19);
  objc_release(v18);
  if ( v20 )
  {
    v21 = objc_alloc(&OBJC_CLASS___TSPPackageEntryInfo);
    v22 = objc_msgSend(v20, "size");
    v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "lastModificationDate"));
    v24 = -[TSPPackageEntryInfo initWithEncodedLength:lastModificationDate:CRC:](
            v21,
            "initWithEncodedLength:lastModificationDate:CRC:",
            v22,
            v23,
            objc_msgSend(v20, "CRC"));
    objc_release(v23);
  }
  else
  {
    v24 = 0LL;
  }
  objc_release(v20);
  objc_release(v9);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v24);
}