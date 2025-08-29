-[TSPDirectoryPackageWriter packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:packageURL:]
id __cdecl -[TSPDirectoryPackageWriter packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:packageURL:](
        TSPDirectoryPackageWriter *self,
        SEL a2,
        id a3,
        bool a4,
        id a5)
{
  _BOOL4 v6; // w22
  id v8; // x19
  id v9; // x20
  __int64 v10; // x21
  void *v11; // x22
  NSString *v12; // x21
  NSString *v13; // x23
  __int64 v14; // x21
  void *v15; // x22
  NSString *v16; // x21
  NSString *v17; // x23
  id v18; // x21
  unsigned int v19; // w25
  id v20; // x22
  id v21; // x24
  unsigned int v22; // w25
  id v23; // x23
  id v24; // x26
  TSPPackageEntryInfo *v25; // x25
  void *v26; // x26
  void *v28; // x27
  objc_class *v29; // x0
  NSString *v30; // x28
  void *v31; // x25
  void *v32; // x0
  objc_super v33; // [xsp+10h] [xbp-C0h] BYREF
  id v34; // [xsp+20h] [xbp-B0h] BYREF
  id v35; // [xsp+28h] [xbp-A8h] BYREF
  id v36; // [xsp+30h] [xbp-A0h] BYREF
  id v37; // [xsp+38h] [xbp-98h] BYREF
  uint8_t buf[4]; // [xsp+40h] [xbp-90h] BYREF
  void *v39; // [xsp+44h] [xbp-8Ch]
  __int16 v40; // [xsp+4Ch] [xbp-84h]
  NSString *v41; // [xsp+4Eh] [xbp-82h]
  __int16 v42; // [xsp+56h] [xbp-7Ah]
  void *v43; // [xsp+58h] [xbp-78h]
  __int16 v44; // [xsp+60h] [xbp-70h]
  void *v45; // [xsp+62h] [xbp-6Eh]
  __int16 v46; // [xsp+6Ah] [xbp-66h]
  id v47; // [xsp+6Ch] [xbp-64h]
  __int64 vars8; // [xsp+D8h] [xbp+8h]

  v6 = a4;
  v8 = objc_retain(a3);
  v9 = objc_retain(a5);
  if ( !v6 )
  {
    v33.receiver = self;
    v33.super_class = (Class)&OBJC_CLASS___TSPDirectoryPackageWriter;
    v25 = (TSPPackageEntryInfo *)objc_retainAutoreleasedReturnValue(
                                   -[TSPPackageWriter packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:packageURL:](
                                     &v33,
                                     "packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:packageURL:",
                                     v8,
                                     0LL,
                                     v9));
    goto LABEL_26;
  }
  if ( !v8 )
  {
    v10 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D2A38);
    v11 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016B838(v10, v11);
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPDirectoryPackageWriter packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:packageURL:]"));
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPDirectoryPackageWriter.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v12,
      v13,
      117LL,
      0LL,
      "Invalid parameter not satisfying: %{public}s",
      "locator");
    objc_release(v13);
    objc_release(v12);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  if ( !v9 )
  {
    v14 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D2A58);
    v15 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016B7A4(v14, v15);
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPDirectoryPackageWriter packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:packageURL:]"));
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPDirectoryPackageWriter.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v16,
      v17,
      118LL,
      0LL,
      "Invalid parameter not satisfying: %{public}s",
      "packageURL");
    objc_release(v17);
    objc_release(v16);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v18 = objc_retainAutoreleasedReturnValue(
          +[TSPDirectoryPackage componentFileURLForPackageURL:packageLocator:](
            &OBJC_CLASS___TSPDirectoryPackage,
            "componentFileURLForPackageURL:packageLocator:",
            v9,
            v8));
  v37 = 0LL;
  v36 = 0LL;
  v19 = (unsigned int)objc_msgSend(v18, "getResourceValue:forKey:error:", &v37, NSURLFileSizeKey, &v36);
  v20 = objc_retain(v37);
  v21 = objc_retain(v36);
  if ( !v19 )
  {
    v23 = 0LL;
LABEL_20:
    if ( UnsafePointer != -1 )
      dispatch_once(&UnsafePointer, &stru_1001D2A78);
    v26 = objc_retain(UnsafePointer);
    if ( os_log_type_enabled((os_log_t)v26, OS_LOG_TYPE_ERROR) )
    {
      v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "path"));
      v29 = (objc_class *)objc_opt_class(v21);
      v30 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v29)));
      v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "domain"));
      v32 = objc_msgSend(v21, "code");
      *(_DWORD *)buf = 138413314;
      v39 = v28;
      v40 = 2114;
      v41 = v30;
      v42 = 2114;
      v43 = v31;
      v44 = 2048;
      v45 = v32;
      v46 = 2112;
      v47 = v21;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)v26,
        OS_LOG_TYPE_ERROR,
        "Failed to retrieve encoded length and last modification date for path: %@. errorClass=%{public}@, domain=%{publi"
        "c}@, code=%zd (%@) ",
        buf,
        0x34u);
      objc_release(v30);
      objc_release(v28);
      objc_release(v31);
      objc_release(v30);
    }
    objc_release(v26);
    v25 = 0LL;
    v24 = v21;
    goto LABEL_25;
  }
  v35 = 0LL;
  v34 = 0LL;
  v22 = (unsigned int)objc_msgSend(v18, "getResourceValue:forKey:error:", &v35, NSURLContentModificationDateKey, &v34);
  v23 = objc_retain(v35);
  v24 = objc_retain(v34);
  objc_release(v21);
  if ( !v22 )
  {
    v21 = v24;
    goto LABEL_20;
  }
  v25 = -[TSPPackageEntryInfo initWithEncodedLength:lastModificationDate:CRC:](
          objc_alloc(&OBJC_CLASS___TSPPackageEntryInfo),
          "initWithEncodedLength:lastModificationDate:CRC:",
          objc_msgSend(v20, "unsignedLongLongValue"),
          v23,
          0LL);
LABEL_25:
  objc_release(v24);
  objc_release(v23);
  objc_release(v20);
  objc_release(v18);
LABEL_26:
  objc_release(v9);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v25);
}