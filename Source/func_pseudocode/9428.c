-[TSPPackage packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:]
id __cdecl -[TSPPackage packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:](
        TSPPackage *self,
        SEL a2,
        id a3,
        bool a4)
{
  _BOOL4 v4; // w21
  id v6; // x19
  __int64 v7; // x22
  void *v8; // x23
  NSString *v9; // x23
  NSString *v10; // x24
  __int64 v11; // x21
  void *v12; // x22
  NSString *v13; // x21
  NSString *v14; // x23
  TSUZipFileArchive *v15; // x20
  id v16; // x21
  id v17; // x23
  TSPPackageEntryInfo *v18; // x22
  void *v19; // x25
  void *v20; // x24
  TSPPackageEntryInfo *v21; // x22
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = a4;
  v6 = objc_retain(a3);
  if ( !v6 )
  {
    v7 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D3150);
    v8 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016C4A8(v7, v8);
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSPPackage packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:]"));
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPPackage.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v9,
      v10,
      504LL,
      0LL,
      "Invalid parameter not satisfying: %{public}s",
      "locator");
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
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D3170);
    v12 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016C420(v11, v12);
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPPackage packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:]"));
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPPackage.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v13,
      v14,
      505LL,
      0LL,
      "Components outside the object archive are not supported");
    objc_release(v14);
    objc_release(v13);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v15 = objc_retainAutoreleasedReturnValue(-[TSPPackage componentZipArchive](self, "componentZipArchive"));
  v16 = objc_retainAutoreleasedReturnValue(
          +[TSPPackage objectArchiveEntryPathForPackageLocator:](
            &OBJC_CLASS___TSPPackage,
            "objectArchiveEntryPathForPackageLocator:",
            v6));
  v17 = objc_retainAutoreleasedReturnValue(-[TSUZipArchive entryForName:](v15, "entryForName:", v16));
  if ( v17 )
  {
    v18 = objc_alloc(&OBJC_CLASS___TSPPackageEntryInfo);
    v19 = objc_msgSend(v17, "size");
    v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "lastModificationDate"));
    v21 = -[TSPPackageEntryInfo initWithEncodedLength:lastModificationDate:CRC:](
            v18,
            "initWithEncodedLength:lastModificationDate:CRC:",
            v19,
            v20,
            objc_msgSend(v17, "CRC"));
    objc_release(v20);
  }
  else
  {
    v21 = 0LL;
  }
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v21);
}