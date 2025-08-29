-[TSPPackageWriter newCGDataConsumerAtRelativePath:]
CGDataConsumer *__cdecl -[TSPPackageWriter newCGDataConsumerAtRelativePath:](TSPPackageWriter *self, SEL a2, id a3)
{
  id v4; // x19
  TSPPackage *v5; // x0
  TSPPackage *v6; // x20
  id v7; // x21
  id v8; // x0
  void *v9; // x23
  void *v10; // x24
  __int64 v11; // x20
  void *v12; // x21
  NSString *v13; // x20
  NSString *v14; // x23
  CGDataConsumer *v15; // x22
  void *v16; // x23
  id v17; // x24
  objc_class *v19; // x0
  void *v20; // x26
  void *v21; // x28
  unsigned int v22; // w25
  void *v23; // x0
  void *v24; // x27
  const __CFString *v25; // x8
  NSString *v26; // [xsp+0h] [xbp-B0h]
  id v27; // [xsp+8h] [xbp-A8h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-A0h] BYREF
  id v29; // [xsp+14h] [xbp-9Ch]
  __int16 v30; // [xsp+1Ch] [xbp-94h]
  NSString *v31; // [xsp+1Eh] [xbp-92h]
  __int16 v32; // [xsp+26h] [xbp-8Ah]
  void *v33; // [xsp+28h] [xbp-88h]
  __int16 v34; // [xsp+30h] [xbp-80h]
  void *v35; // [xsp+32h] [xbp-7Eh]
  __int16 v36; // [xsp+3Ah] [xbp-76h]
  const __CFString *v37; // [xsp+3Ch] [xbp-74h]
  __int16 v38; // [xsp+44h] [xbp-6Ch]
  void *v39; // [xsp+46h] [xbp-6Ah]
  __int16 v40; // [xsp+4Eh] [xbp-62h]
  void *v41; // [xsp+50h] [xbp-60h]

  v4 = objc_retain(a3);
  -[TSPPackageWriter closeCurrentChannel](self, "closeCurrentChannel");
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter originalPackage](self, "originalPackage"));
    v6 = v5;
    if ( v5 )
    {
      v27 = 0LL;
      v7 = objc_retainAutoreleasedReturnValue(-[TSPPackage packageEntryInfoAtRelativePath:error:](v5, "packageEntryInfoAtRelativePath:error:", v4, &v27));
      v8 = objc_retain(v27);
      v9 = v8;
      if ( !v7 && ((unsigned int)objc_msgSend(v8, "tsu_isNoSuchFileError") & 1) == 0 )
      {
        if ( UnsafePointer != -1 )
          dispatch_once(&UnsafePointer, &stru_1001D13A8);
        v10 = objc_retain(UnsafePointer);
        if ( os_log_type_enabled((os_log_t)v10, OS_LOG_TYPE_ERROR) )
        {
          v19 = (objc_class *)objc_opt_class(v9);
          v26 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v19)));
          v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "domain"));
          v21 = objc_msgSend(v9, "code");
          v22 = (unsigned int)objc_msgSend(v9, "tsp_isRecoverable");
          v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "tsp_hintsDescription"));
          v24 = v23;
          v25 = &stru_1001DFAA0;
          *(_DWORD *)buf = 138413826;
          v29 = v4;
          v30 = 2114;
          if ( v22 )
            v25 = CFSTR("recoverable=YES, ");
          v31 = v26;
          v32 = 2114;
          v33 = v20;
          v34 = 2048;
          v35 = v21;
          v36 = 2114;
          v37 = v25;
          v38 = 2114;
          v39 = v23;
          v40 = 2112;
          v41 = v9;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            (os_log_t)v10,
            OS_LOG_TYPE_ERROR,
            "Failed to retrieve encoded length and last modification date, path=%@, errorClass=%{public}@, domain=%{publi"
            "c}@, code=%zd, %{public}@hints=%{public}@ (%@) ",
            buf,
            0x48u);
          objc_release(v24);
          objc_release(v20);
          objc_release(v26);
          objc_release(v26);
        }
        objc_release(v10);
      }
      objc_release(v9);
    }
    else
    {
      v7 = 0LL;
    }
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "lastModificationDate"));
    v17 = -[TSPPackageWriter newRawDataWriteChannelForRelativePath:originalLastModificationDate:originalSize:originalCRC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:](
            self,
            "newRawDataWriteChannelForRelativePath:originalLastModificationDate:originalSize:originalCRC:forceCalculating"
            "SizeAndCRCForPreservingLastModificationDate:",
            v4,
            v16,
            objc_msgSend(v7, "encodedLength"),
            objc_msgSend(v7, "CRC"),
            1LL);
    objc_release(v16);
    v15 = +[TSPCGDataConsumer newCGDataConsumerForWriteChannel:](
            &OBJC_CLASS___TSPCGDataConsumer,
            "newCGDataConsumerForWriteChannel:",
            v17);
    objc_release(v17);
    objc_release(v7);
    objc_release(v6);
  }
  else
  {
    v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D1388);
    v12 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016930C(v11, v12);
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPPackageWriter newCGDataConsumerAtRelativePath:]"));
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
      740LL,
      0LL,
      "Path should be defined.");
    objc_release(v14);
    objc_release(v13);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    v15 = 0LL;
  }
  objc_release(v4);
  return v15;
}