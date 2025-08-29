-[TSPPackage copyComponent:toPackageURL:packageLocator:zipFileWriter:encryptionKey:canLink:completion:]
void __cdecl -[TSPPackage copyComponent:toPackageURL:packageLocator:zipFileWriter:encryptionKey:canLink:completion:](
        TSPPackage *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7,
        bool a8,
        id a9)
{
  id v14; // x19
  id v15; // x27
  __int64 v16; // x20
  void *v17; // x21
  NSString *v18; // x20
  NSString *v19; // x22
  void *v20; // x21
  __int64 v21; // x20
  void *v22; // x22
  NSString *v23; // x20
  NSString *v24; // x23
  void *v25; // x25
  __int64 v26; // x20
  void *v27; // x22
  NSString *v28; // x20
  NSString *v29; // x23
  TSUZipFileArchive *v30; // x27
  id v31; // x28
  id v32; // x0
  void *v33; // x20
  void *v34; // x21
  void *v35; // x20
  TSPCryptoTranscodeReadChannel *v36; // x22
  id v37; // x21
  TSPCryptoTranscodeReadChannel *v38; // x23
  id v39; // x26
  void *v40; // x23
  void *v41; // x22
  id v42; // [xsp+10h] [xbp-80h]
  id v43; // [xsp+18h] [xbp-78h]
  id v44; // [xsp+20h] [xbp-70h]
  id v45; // [xsp+28h] [xbp-68h]
  void (__fastcall **v46)(id, _QWORD, id); // [xsp+30h] [xbp-60h]
  id v47; // [xsp+38h] [xbp-58h] BYREF

  v14 = objc_retain(a3);
  v15 = objc_retain(a4);
  v44 = objc_retain(a5);
  v43 = objc_retain(a6);
  v45 = objc_retain(a7);
  v46 = (void (__fastcall **)(id, _QWORD, id))objc_retain(a9);
  v42 = v15;
  if ( !v14 )
  {
    v16 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D3250);
    v17 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016C940(v16, v17);
    v18 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPPackage copyComponent:toPackageURL:packageLocator:zipFileWriter:encryptionKey:canLink:completion:]"));
    v19 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPPackage.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v18,
      v19,
      598LL,
      0LL,
      "Invalid parameter not satisfying: %{public}s",
      "component");
    objc_release(v19);
    objc_release(v18);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v20 = objc_msgSend(v14, "isStoredOutsideObjectArchive");
  if ( (_DWORD)v20 )
  {
    v21 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D3270);
    v22 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016C8B8(v21, v22);
    v23 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPPackage copyComponent:toPackageURL:packageLocator:zipFileWriter:encryptionKey:canLink:completion:]"));
    v24 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPPackage.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v23,
      v24,
      601LL,
      0LL,
      "Components outside the object archive are not supported");
    objc_release(v24);
    objc_release(v23);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "locator"));
  if ( !v25 )
  {
    v26 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D3290);
    v27 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016C824(v26, v27);
    v28 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPPackage copyComponent:toPackageURL:packageLocator:zipFileWriter:encryptionKey:canLink:completion:]"));
    v29 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPPackage.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v28,
      v29,
      604LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "packageLocator");
    objc_release(v29);
    objc_release(v28);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v30 = objc_retainAutoreleasedReturnValue(-[TSPPackage componentZipArchive](self, "componentZipArchive"));
  v31 = objc_retainAutoreleasedReturnValue(
          +[TSPPackage objectArchiveEntryPathForPackageLocator:](
            &OBJC_CLASS___TSPPackage,
            "objectArchiveEntryPathForPackageLocator:",
            v25));
  v32 = objc_retainAutoreleasedReturnValue(-[TSUZipArchive entryForName:](v30, "entryForName:", v31));
  v33 = v32;
  if ( !v30 || v32 )
  {
    if ( v30 )
    {
      v36 = (TSPCryptoTranscodeReadChannel *)objc_retainAutoreleasedReturnValue(
                                               -[TSUZipArchive streamReadChannelForEntry:](
                                                 v30,
                                                 "streamReadChannelForEntry:",
                                                 v32));
      v37 = 0LL;
      if ( !v36 )
        goto LABEL_33;
    }
    else
    {
      v47 = 0LL;
      v36 = -[TSPPackage newRawReadChannelForComponentLocator:isStoredOutsideObjectArchive:error:](
              self,
              "newRawReadChannelForComponentLocator:isStoredOutsideObjectArchive:error:",
              v25,
              v20,
              &v47);
      v37 = objc_retain(v47);
      if ( !v36 )
        goto LABEL_33;
    }
    if ( (SFUEqualCryptoKeys(v45, self->_decryptionKey) & 1) != 0
      || (v38 = -[TSPCryptoTranscodeReadChannel initWithReadChannel:decryptionInfo:encryptionInfo:](
                  objc_alloc(&OBJC_CLASS___TSPCryptoTranscodeReadChannel),
                  "initWithReadChannel:decryptionInfo:encryptionInfo:",
                  v36,
                  self->_decryptionKey,
                  v45),
          objc_release(v36),
          objc_release(v33),
          v33 = 0LL,
          (v36 = v38) != 0LL) )
    {
      v39 = objc_retainAutoreleasedReturnValue(
              +[TSPPackage objectArchiveEntryPathForPackageLocator:](
                &OBJC_CLASS___TSPPackage,
                "objectArchiveEntryPathForPackageLocator:",
                v44));
      v40 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "lastModificationDate"));
      objc_msgSend(
        v43,
        "writeEntryWithName:force32BitSize:lastModificationDate:size:CRC:fromReadChannel:completion:",
        v39,
        1LL,
        v40,
        objc_msgSend(v33, "size"),
        objc_msgSend(v33, "CRC"),
        v36,
        v46);
      objc_release(v40);
      objc_release(v39);
      objc_release(v36);
      goto LABEL_38;
    }
LABEL_33:
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001D32B0);
    v41 = TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
    {
      sub_10016C7BC(v31, v41);
      if ( !v46 )
        goto LABEL_38;
      goto LABEL_37;
    }
    if ( v46 )
LABEL_37:
      v46[2](v46, 0LL, v37);
LABEL_38:
    objc_release(v37);
    objc_release(v33);
    v34 = v46;
    goto LABEL_39;
  }
  if ( TSUDefaultCat_init_token != -1 )
    dispatch_once(&TSUDefaultCat_init_token, &stru_1001D32D0);
  v34 = v46;
  v35 = TSUDefaultCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
  {
    sub_10016C5D0(v31, v35);
    if ( !v46 )
      goto LABEL_39;
    goto LABEL_25;
  }
  if ( v46 )
LABEL_25:
    v46[2](v46, 0LL, 0LL);
LABEL_39:
  objc_release(v31);
  objc_release(v30);
  objc_release(v25);
  objc_release(v34);
  objc_release(v45);
  objc_release(v43);
  objc_release(v44);
  objc_release(v42);
  objc_release(v14);
}