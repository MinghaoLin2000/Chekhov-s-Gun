-[TSPPackageWriter newPackageWithPackageIdentifier:documentProperties:fileFormatVersion:decryptionKey:fileCoordinatorDelegate:]
id __cdecl __noreturn -[TSPPackageWriter newPackageWithPackageIdentifier:documentProperties:fileFormatVersion:decryptionKey:fileCoordinatorDelegate:](
        TSPPackageWriter *self,
        SEL a2,
        unsigned __int8 a3,
        id a4,
        unsigned __int64 a5,
        id a6,
        id a7)
{
  id v10; // x0
  id v11; // x0
  id v12; // x0
  unsigned int v13; // w24
  void *v14; // x23
  objc_class *v15; // x0
  NSString *v16; // x25
  NSString *v17; // x24
  NSString *v18; // x25
  objc_class *v19; // x0
  objc_class *v20; // x0
  NSString *v21; // x24
  NSString *v22; // x23
  NSException *v23; // x22
  NSString *v24; // [xsp+18h] [xbp-98h]
  uint8_t buf[4]; // [xsp+20h] [xbp-90h] BYREF
  unsigned int v26; // [xsp+24h] [xbp-8Ch]
  __int16 v27; // [xsp+28h] [xbp-88h]
  const char *v28; // [xsp+2Ah] [xbp-86h]
  __int16 v29; // [xsp+32h] [xbp-7Eh]
  const char *v30; // [xsp+34h] [xbp-7Ch]
  __int16 v31; // [xsp+3Ch] [xbp-74h]
  int v32; // [xsp+3Eh] [xbp-72h]
  __int16 v33; // [xsp+42h] [xbp-6Eh]
  NSString *v34; // [xsp+44h] [xbp-6Ch]

  v10 = objc_retain(a4);
  v11 = objc_retain(a6);
  v12 = objc_retain(a7);
  v13 = +[TSUAssertionHandler _atomicIncrementAssertCount](
          &OBJC_CLASS___TSUAssertionHandler,
          "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001D1448);
  v14 = objc_retain(TSUAssertCat_log_t);
  if ( os_log_type_enabled((os_log_t)v14, OS_LOG_TYPE_ERROR) )
  {
    v15 = (objc_class *)objc_opt_class(self);
    v16 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v15));
    *(_DWORD *)buf = 67110146;
    v26 = v13;
    v27 = 2082;
    v28 = "-[TSPPackageWriter newPackageWithPackageIdentifier:documentProperties:fileFormatVersion:decryptionKey:fileCoor"
          "dinatorDelegate:]";
    v29 = 2082;
    v30 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/src/TSPPackageWriter.mm";
    v31 = 1024;
    v32 = 833;
    v33 = 2114;
    v34 = v16;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)v14,
      OS_LOG_TYPE_ERROR,
      "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Abstract method not overridden by %{public}@",
      buf,
      0x2Cu);
    objc_release(v16);
  }
  objc_release(v14);
  v17 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "-[TSPPackageWriter newPackageWithPackageIdentifier:documentProperties:fileFormatVersion:decryptionKey:fileCo"
            "ordinatorDelegate:]"));
  v18 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/persistence/src/TSPPackageWriter.mm"));
  v19 = (objc_class *)objc_opt_class(self);
  v24 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v19));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v17,
    v18,
    833LL,
    0LL,
    "Abstract method not overridden by %{public}@",
    v24);
  objc_release(v24);
  objc_release(v18);
  objc_release(v17);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  v20 = (objc_class *)objc_opt_class(self);
  v21 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v20));
  v22 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("Abstract method not overridden by %@: %s"),
            v21,
            "-[TSPPackageWriter newPackageWithPackageIdentifier:documentProperties:fileFormatVersion:decryptionKey:fileCo"
            "ordinatorDelegate:]"));
  v23 = objc_autorelease(
          objc_retainAutoreleasedReturnValue(
            +[NSException exceptionWithName:reason:userInfo:](
              &OBJC_CLASS___NSException,
              "exceptionWithName:reason:userInfo:",
              NSInternalInconsistencyException,
              v22,
              0LL)));
  objc_release(v22);
  objc_release(v21);
  objc_exception_throw(v23);
}