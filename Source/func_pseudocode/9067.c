-[TSPPackageWriter writeData:toRelativePath:allowEncryption:error:]
bool __cdecl -[TSPPackageWriter writeData:toRelativePath:allowEncryption:error:](
        TSPPackageWriter *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        id *a6)
{
  _BOOL4 v7; // w24
  id v10; // x19
  id v11; // x20
  TSPPackage *v12; // x0
  TSPPackage *v13; // x21
  SFUCryptoKey *v14; // x22
  char v15; // w26
  __int64 v16; // x21
  void *v17; // x22
  NSString *v18; // x21
  NSString *v19; // x24
  bool v20; // w23
  void *v21; // x22
  id v22; // x26
  id v23; // x0
  void *v24; // x22
  void *v25; // x27
  TSPMemoryReadChannel *v26; // x26
  void *v27; // x28
  id v28; // x27
  void *v29; // x4
  SFUCryptoKey *encryptionKey; // x6
  objc_class *v32; // x0
  unsigned int v33; // w28
  void *v34; // x0
  const __CFString *v35; // x8
  id v36; // [xsp+10h] [xbp-C0h]
  id v37; // [xsp+10h] [xbp-C0h]
  void *v38; // [xsp+18h] [xbp-B8h]
  NSString *v39; // [xsp+20h] [xbp-B0h]
  id v40; // [xsp+28h] [xbp-A8h] BYREF
  uint8_t buf[4]; // [xsp+30h] [xbp-A0h] BYREF
  id v42; // [xsp+34h] [xbp-9Ch]
  __int16 v43; // [xsp+3Ch] [xbp-94h]
  NSString *v44; // [xsp+3Eh] [xbp-92h]
  __int16 v45; // [xsp+46h] [xbp-8Ah]
  void *v46; // [xsp+48h] [xbp-88h]
  __int16 v47; // [xsp+50h] [xbp-80h]
  id v48; // [xsp+52h] [xbp-7Eh]
  __int16 v49; // [xsp+5Ah] [xbp-76h]
  const __CFString *v50; // [xsp+5Ch] [xbp-74h]
  __int16 v51; // [xsp+64h] [xbp-6Ch]
  void *v52; // [xsp+66h] [xbp-6Ah]
  __int16 v53; // [xsp+6Eh] [xbp-62h]
  void *v54; // [xsp+70h] [xbp-60h]

  v7 = a5;
  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  -[TSPPackageWriter closeCurrentChannel](self, "closeCurrentChannel");
  if ( v11 )
  {
    if ( v10 )
    {
      v12 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter originalPackage](self, "originalPackage"));
      v13 = v12;
      if ( v7 )
      {
        v14 = objc_retainAutoreleasedReturnValue(-[TSPPackage decryptionKey](v12, "decryptionKey"));
        v15 = UnsafePointer(v14, self->_encryptionKey, 0x100000LL);
        objc_release(v14);
      }
      else
      {
        v15 = 0;
      }
      v21 = 0LL;
      if ( (v15 & 1) == 0 && v13 )
      {
        v40 = 0LL;
        v22 = objc_retainAutoreleasedReturnValue(
                -[TSPPackage packageEntryInfoAtRelativePath:error:](
                  v13,
                  "packageEntryInfoAtRelativePath:error:",
                  v11,
                  &v40));
        v23 = objc_retain(v40);
        v24 = v23;
        if ( !v22 && ((unsigned int)objc_msgSend(v23, "tsu_isNoSuchFileError") & 1) == 0 )
        {
          if ( UnsafePointer != -1 )
            dispatch_once(&UnsafePointer, &stru_1001D1368);
          v25 = objc_retain(UnsafePointer);
          if ( os_log_type_enabled((os_log_t)v25, OS_LOG_TYPE_ERROR) )
          {
            v32 = (objc_class *)objc_opt_class(v24);
            v39 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v32)));
            v38 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "domain"));
            v36 = objc_msgSend(v24, "code");
            v33 = (unsigned int)objc_msgSend(v24, "tsp_isRecoverable");
            v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "tsp_hintsDescription"));
            v35 = &stru_1001DFAA0;
            *(_DWORD *)buf = 138413826;
            v42 = v11;
            v43 = 2114;
            if ( v33 )
              v35 = CFSTR("recoverable=YES, ");
            v44 = v39;
            v45 = 2114;
            v46 = v38;
            v47 = 2048;
            v48 = v36;
            v49 = 2114;
            v50 = v35;
            v51 = 2114;
            v52 = v34;
            v53 = 2112;
            v54 = v24;
            v37 = v34;
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              (os_log_t)v25,
              OS_LOG_TYPE_ERROR,
              "Failed to retrieve encoded length and last modification date, path=%@, errorClass=%{public}@, domain=%{pub"
              "lic}@, code=%zd, %{public}@hints=%{public}@ (%@) ",
              buf,
              0x48u);
            objc_release(v37);
            objc_release(v38);
            objc_release(v39);
            objc_release(v39);
          }
          objc_release(v25);
        }
        objc_release(v24);
        v21 = v22;
      }
      v26 = -[TSPMemoryReadChannel initWithNSData:](
              objc_alloc(&OBJC_CLASS___TSPMemoryReadChannel),
              "initWithNSData:",
              v10);
      v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "lastModificationDate"));
      v28 = -[TSPPackageWriter newRawDataWriteChannelForRelativePath:originalLastModificationDate:originalSize:originalCRC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:](
              self,
              "newRawDataWriteChannelForRelativePath:originalLastModificationDate:originalSize:originalCRC:forceCalculati"
              "ngSizeAndCRCForPreservingLastModificationDate:",
              v11,
              v27,
              objc_msgSend(v21, "encodedLength"),
              objc_msgSend(v21, "CRC"),
              1LL);
      objc_release(v27);
      v29 = objc_msgSend(v10, "length");
      if ( v7 )
        encryptionKey = self->_encryptionKey;
      else
        encryptionKey = 0LL;
      v20 = +[TSPFileManager copyDataFromReadChannel:decryptionInfo:size:toWriteChannel:encryptionInfo:encodedLength:error:](
              &OBJC_CLASS___TSPFileManager,
              "copyDataFromReadChannel:decryptionInfo:size:toWriteChannel:encryptionInfo:encodedLength:error:",
              v26,
              0LL,
              v29,
              v28,
              encryptionKey,
              0LL,
              a6);
      objc_msgSend(v28, "close");
      -[TSPMemoryReadChannel close](v26, "close");
      objc_release(v28);
      objc_release(v26);
      objc_release(v21);
      objc_release(v13);
    }
    else
    {
      v20 = 1;
    }
  }
  else
  {
    v16 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D1348);
    v17 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100169284(v16, v17);
    v18 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPPackageWriter writeData:toRelativePath:allowEncryption:error:]"));
    v19 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPPackageWriter.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v18,
      v19,
      704LL,
      0LL,
      "Path should be defined.");
    objc_release(v19);
    objc_release(v18);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    v20 = 0;
  }
  objc_release(v11);
  objc_release(v10);
  return v20;
}