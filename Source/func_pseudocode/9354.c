-[TSPDirectoryPackageWriter newRawDataWriteChannelForRelativePath:originalLastModificationDate:originalSize:originalCRC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:]
id __cdecl -[TSPDirectoryPackageWriter newRawDataWriteChannelForRelativePath:originalLastModificationDate:originalSize:originalCRC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:](
        TSPDirectoryPackageWriter *self,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5,
        unsigned int a6,
        bool a7)
{
  id v9; // x19
  id v10; // x20
  __int64 v11; // x22
  void *v12; // x23
  NSString *v13; // x22
  NSString *v14; // x24
  id v15; // x21
  void *v16; // x22
  NSFileManager *v17; // x24
  unsigned int v18; // w25
  id v19; // x23
  id v20; // x24
  void *v21; // x24
  objc_class *v23; // x0
  NSString *v24; // x26
  void *v25; // x25
  void *v26; // x0
  id v27; // [xsp+8h] [xbp-88h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-80h] BYREF
  void *v29; // [xsp+14h] [xbp-7Ch]
  __int16 v30; // [xsp+1Ch] [xbp-74h]
  NSString *v31; // [xsp+1Eh] [xbp-72h]
  __int16 v32; // [xsp+26h] [xbp-6Ah]
  void *v33; // [xsp+28h] [xbp-68h]
  __int16 v34; // [xsp+30h] [xbp-60h]
  void *v35; // [xsp+32h] [xbp-5Eh]
  __int16 v36; // [xsp+3Ah] [xbp-56h]
  id v37; // [xsp+3Ch] [xbp-54h]

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  if ( !v9 )
  {
    v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D2B48);
    v12 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016B960(v11, v12);
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPDirectoryPackageWriter newRawDataWriteChannelForRelativePath:originalLastModificationDate:originalSiz"
              "e:originalCRC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:]"));
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPDirectoryPackageWriter.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v13,
      v14,
      236LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "path");
    objc_release(v14);
    objc_release(v13);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v15 = objc_retainAutoreleasedReturnValue(-[TSPDirectoryPackageWriter targetDataURLForPath:](self, "targetDataURLForPath:", v9));
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "URLByDeletingLastPathComponent"));
  v17 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v27 = 0LL;
  v18 = -[NSFileManager createDirectoryAtURL:withIntermediateDirectories:attributes:error:](
          v17,
          "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
          v16,
          1LL,
          0LL,
          &v27);
  v19 = objc_retain(v27);
  objc_release(v17);
  if ( v18 )
  {
    v20 = -[TSUFileIOChannel initForStreamWritingURL:error:](
            objc_alloc(&OBJC_CLASS___TSUFileIOChannel),
            "initForStreamWritingURL:error:",
            v15,
            0LL);
  }
  else
  {
    if ( UnsafePointer != -1 )
      dispatch_once(&UnsafePointer, &stru_1001D2B68);
    v21 = objc_retain(UnsafePointer);
    if ( os_log_type_enabled((os_log_t)v21, OS_LOG_TYPE_ERROR) )
    {
      v23 = (objc_class *)objc_opt_class(v19);
      v24 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v23)));
      v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "domain"));
      v26 = objc_msgSend(v19, "code");
      *(_DWORD *)buf = 138413314;
      v29 = v16;
      v30 = 2114;
      v31 = v24;
      v32 = 2114;
      v33 = v25;
      v34 = 2048;
      v35 = v26;
      v36 = 2112;
      v37 = v19;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)v21,
        OS_LOG_TYPE_ERROR,
        "Couldn't create directory at URL %@. errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
        buf,
        0x34u);
      objc_release(v24);
      objc_release(v25);
      objc_release(v24);
    }
    objc_release(v21);
    v20 = 0LL;
  }
  objc_release(v19);
  objc_release(v16);
  objc_release(v15);
  objc_release(v10);
  objc_release(v9);
  return v20;
}