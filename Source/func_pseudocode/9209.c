-[TSPDirectoryPackageDataWriter writeData:toRelativePath:allowEncryption:error:]
bool __cdecl -[TSPDirectoryPackageDataWriter writeData:toRelativePath:allowEncryption:error:](
        TSPDirectoryPackageDataWriter *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        id *a6)
{
  id v9; // x19
  id v10; // x20
  id v11; // x21
  NSFileManager *v12; // x24
  void *v13; // x25
  unsigned __int8 v14; // w26
  id v15; // x22
  unsigned __int8 v16; // w24
  __int64 v17; // x21
  void *v18; // x22
  NSString *v19; // x21
  NSString *v20; // x24
  void *v21; // x24
  objc_class *v23; // x0
  NSString *v24; // x25
  void *v25; // x26
  void *v26; // x0
  id v27; // [xsp+8h] [xbp-88h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-80h] BYREF
  id v29; // [xsp+14h] [xbp-7Ch]
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
  if ( v10 )
  {
    if ( v9 )
    {
      v11 = objc_retainAutoreleasedReturnValue(-[TSPDirectoryPackageDataWriter targetDataURLForPath:](self, "targetDataURLForPath:", v10));
      v12 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
      v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "URLByDeletingLastPathComponent"));
      v27 = 0LL;
      v14 = -[NSFileManager createDirectoryAtURL:withIntermediateDirectories:attributes:error:](
              v12,
              "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
              v13,
              1LL,
              0LL,
              &v27);
      v15 = objc_retain(v27);
      objc_release(v13);
      objc_release(v12);
      if ( (v14 & 1) != 0 )
      {
        v16 = (unsigned __int8)objc_msgSend(v9, "writeToURL:options:error:", v11, 0LL, a6);
      }
      else
      {
        if ( TSUDefaultCat_init_token != -1 )
          dispatch_once(&TSUDefaultCat_init_token, &stru_1001D1D10);
        v21 = objc_retain(TSUDefaultCat_log_t);
        if ( os_log_type_enabled((os_log_t)v21, OS_LOG_TYPE_ERROR) )
        {
          v23 = (objc_class *)objc_opt_class(v15);
          v24 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v23)));
          v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "domain"));
          v26 = objc_msgSend(v15, "code");
          *(_DWORD *)buf = 138413314;
          v29 = v11;
          v30 = 2114;
          v31 = v24;
          v32 = 2114;
          v33 = v25;
          v34 = 2048;
          v35 = v26;
          v36 = 2112;
          v37 = v15;
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
        v16 = 0;
        if ( a6 )
          *a6 = objc_retainAutorelease(v15);
      }
      objc_release(v15);
      objc_release(v11);
    }
    else
    {
      v16 = 1;
    }
  }
  else
  {
    v17 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D1CF0);
    v18 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100169F18(v17, v18);
    v19 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPDirectoryPackageDataWriter writeData:toRelativePath:allowEncryption:error:]"));
    v20 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPDirectoryPackageDataWriter.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v19,
      v20,
      31LL,
      0LL,
      "Path should be defined.");
    objc_release(v20);
    objc_release(v19);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    v16 = 0;
  }
  objc_release(v10);
  objc_release(v9);
  return v16;
}