-[TSPFilePackage packageEntryInfoAtRelativePath:error:]
id __cdecl -[TSPFilePackage packageEntryInfoAtRelativePath:error:](TSPFilePackage *self, SEL a2, id a3, id *a4)
{
  id v6; // x19
  __int64 v7; // x22
  void *v8; // x23
  NSString *v9; // x22
  NSString *v10; // x24
  TSUZipFileArchive *v11; // x21
  id v12; // x22
  TSPPackageEntryInfo *v13; // x20
  void *v14; // x24
  void *v15; // x23
  TSPPackageEntryInfo *v16; // x24
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v6 = objc_retain(a3);
  if ( !v6 )
  {
    v7 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D22D0);
    v8 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016AEF8(v7, v8);
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSPFilePackage packageEntryInfoAtRelativePath:error:]"));
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPFilePackage.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v9,
      v10,
      186LL,
      0LL,
      "Invalid parameter not satisfying: %{public}s",
      "path");
    objc_release(v10);
    objc_release(v9);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v11 = objc_retainAutoreleasedReturnValue(-[TSPPackage zipArchive](self, "zipArchive"));
  v12 = objc_retainAutoreleasedReturnValue(-[TSUZipArchive entryForName:](v11, "entryForName:", v6));
  if ( v12 )
  {
    v13 = objc_alloc(&OBJC_CLASS___TSPPackageEntryInfo);
    v14 = objc_msgSend(v12, "size");
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "lastModificationDate"));
    v16 = -[TSPPackageEntryInfo initWithEncodedLength:lastModificationDate:CRC:](
            v13,
            "initWithEncodedLength:lastModificationDate:CRC:",
            v14,
            v15,
            objc_msgSend(v12, "CRC"));
    objc_release(v15);
  }
  else
  {
    v16 = 0LL;
    if ( a4 )
      *a4 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  NSCocoaErrorDomain,
                  4LL,
                  0LL)));
  }
  objc_release(v12);
  objc_release(v11);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v16);
}