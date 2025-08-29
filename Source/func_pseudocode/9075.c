-[TSPPackageWriter newRawDataWriteChannelForRelativePath:originalLastModificationDate:originalSize:originalCRC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:]
id __cdecl __noreturn -[TSPPackageWriter newRawDataWriteChannelForRelativePath:originalLastModificationDate:originalSize:originalCRC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:](
        TSPPackageWriter *self,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5,
        unsigned int a6,
        bool a7)
{
  id v9; // x0
  id v10; // x0
  unsigned int v11; // w23
  void *v12; // x22
  objc_class *v13; // x0
  NSString *v14; // x24
  NSString *v15; // x23
  NSString *v16; // x24
  objc_class *v17; // x0
  NSString *v18; // x26
  objc_class *v19; // x0
  NSString *v20; // x23
  NSString *v21; // x22
  NSException *v22; // x21
  uint8_t buf[4]; // [xsp+10h] [xbp-90h] BYREF
  unsigned int v24; // [xsp+14h] [xbp-8Ch]
  __int16 v25; // [xsp+18h] [xbp-88h]
  const char *v26; // [xsp+1Ah] [xbp-86h]
  __int16 v27; // [xsp+22h] [xbp-7Eh]
  const char *v28; // [xsp+24h] [xbp-7Ch]
  __int16 v29; // [xsp+2Ch] [xbp-74h]
  int v30; // [xsp+2Eh] [xbp-72h]
  __int16 v31; // [xsp+32h] [xbp-6Eh]
  NSString *v32; // [xsp+34h] [xbp-6Ch]

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
          &OBJC_CLASS___TSUAssertionHandler,
          "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001D1468);
  v12 = objc_retain(TSUAssertCat_log_t);
  if ( os_log_type_enabled((os_log_t)v12, OS_LOG_TYPE_ERROR) )
  {
    v13 = (objc_class *)objc_opt_class(self);
    v14 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v13));
    *(_DWORD *)buf = 67110146;
    v24 = v11;
    v25 = 2082;
    v26 = "-[TSPPackageWriter newRawDataWriteChannelForRelativePath:originalLastModificationDate:originalSize:originalCRC"
          ":forceCalculatingSizeAndCRCForPreservingLastModificationDate:]";
    v27 = 2082;
    v28 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/src/TSPPackageWriter.mm";
    v29 = 1024;
    v30 = 837;
    v31 = 2114;
    v32 = v14;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)v12,
      OS_LOG_TYPE_ERROR,
      "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Abstract method not overridden by %{public}@",
      buf,
      0x2Cu);
    objc_release(v14);
  }
  objc_release(v12);
  v15 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "-[TSPPackageWriter newRawDataWriteChannelForRelativePath:originalLastModificationDate:originalSize:originalC"
            "RC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:]"));
  v16 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/persistence/src/TSPPackageWriter.mm"));
  v17 = (objc_class *)objc_opt_class(self);
  v18 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v17));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v15,
    v16,
    837LL,
    0LL,
    "Abstract method not overridden by %{public}@",
    v18);
  objc_release(v18);
  objc_release(v16);
  objc_release(v15);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  v19 = (objc_class *)objc_opt_class(self);
  v20 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v19));
  v21 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("Abstract method not overridden by %@: %s"),
            v20,
            "-[TSPPackageWriter newRawDataWriteChannelForRelativePath:originalLastModificationDate:originalSize:originalC"
            "RC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:]"));
  v22 = objc_autorelease(
          objc_retainAutoreleasedReturnValue(
            +[NSException exceptionWithName:reason:userInfo:](
              &OBJC_CLASS___NSException,
              "exceptionWithName:reason:userInfo:",
              NSInternalInconsistencyException,
              v21,
              0LL)));
  objc_release(v21);
  objc_release(v20);
  objc_exception_throw(v22);
}