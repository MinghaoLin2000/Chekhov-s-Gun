-[TSPPackage newReadChannelForComponentLocator:compressionAlgorithm:isStoredOutsideObjectArchive:error:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[TSPPackage newReadChannelForComponentLocator:compressionAlgorithm:isStoredOutsideObjectArchive:error:](
        TSPPackage *self,
        SEL a2,
        id a3,
        signed __int64 a4,
        bool a5,
        id *a6)
{
  _BOOL8 v7; // x21
  id v10; // x19
  __int64 v11; // x22
  void *v12; // x25
  NSString *v13; // x22
  NSString *v14; // x26
  TSPCryptoReadChannel *v15; // x22
  id v16; // x21
  TSPCryptoReadChannel *v17; // x25
  id v18; // x23
  void *v19; // x22
  objc_class *v21; // x0
  NSString *v22; // x23
  void *v23; // x24
  void *v24; // x0
  id v25; // [xsp+8h] [xbp-98h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-90h] BYREF
  NSString *v27; // [xsp+14h] [xbp-8Ch]
  __int16 v28; // [xsp+1Ch] [xbp-84h]
  void *v29; // [xsp+1Eh] [xbp-82h]
  __int16 v30; // [xsp+26h] [xbp-7Ah]
  void *v31; // [xsp+28h] [xbp-78h]
  __int16 v32; // [xsp+30h] [xbp-70h]
  id v33; // [xsp+32h] [xbp-6Eh]

  v7 = a5;
  v10 = objc_retain(a3);
  if ( !v10 )
  {
    v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D3190);
    v12 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016C53C(v11, v12);
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPPackage newReadChannelForComponentLocator:compressionAlgorithm:isStoredOutsideObjectArchive:error:]"));
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
      540LL,
      0LL,
      "Invalid parameter not satisfying: %{public}s",
      "locator");
    objc_release(v14);
    objc_release(v13);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v25 = 0LL;
  v15 = -[TSPPackage newRawReadChannelForComponentLocator:isStoredOutsideObjectArchive:error:](
          self,
          "newRawReadChannelForComponentLocator:isStoredOutsideObjectArchive:error:",
          v10,
          v7,
          &v25);
  v16 = objc_retain(v25);
  if ( !v15
    || self->_decryptionKey
    && (v17 = -[TSPCryptoReadChannel initWithReadChannel:decryptionKey:blockInfos:](
                objc_alloc(&OBJC_CLASS___TSPCryptoReadChannel),
                "initWithReadChannel:decryptionKey:blockInfos:",
                v15,
                self->_decryptionKey,
                0LL),
        objc_release(v15),
        (v15 = v17) == 0LL)
    || (v18 = -[TSPPackage newCompressionReadChannelWithReadChannel:compressionAlgorithm:](
                self,
                "newCompressionReadChannelWithReadChannel:compressionAlgorithm:",
                v15,
                a4),
        objc_release(v15),
        !v18) )
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001D31B0);
    v19 = objc_retain(TSUDefaultCat_log_t);
    if ( os_log_type_enabled((os_log_t)v19, OS_LOG_TYPE_ERROR) )
    {
      v21 = (objc_class *)objc_opt_class(v16);
      v22 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v21)));
      v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "domain"));
      v24 = objc_msgSend(v16, "code");
      *(_DWORD *)buf = 138544130;
      v27 = v22;
      v28 = 2114;
      v29 = v23;
      v30 = 2048;
      v31 = v24;
      v32 = 2112;
      v33 = v16;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)v19,
        OS_LOG_TYPE_ERROR,
        "Error getting raw read channel errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
        buf,
        0x2Au);
      objc_release(v22);
      objc_release(v23);
      objc_release(v22);
    }
    objc_release(v19);
    v18 = 0LL;
    if ( a6 )
      *a6 = objc_retainAutorelease(v16);
  }
  objc_release(v16);
  objc_release(v10);
  return v18;
}