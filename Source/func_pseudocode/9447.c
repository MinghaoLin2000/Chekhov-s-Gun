-[TSPPackage newDocumentPropertiesWithURL:zipProvider:error:]
id __cdecl __noreturn -[TSPPackage newDocumentPropertiesWithURL:zipProvider:error:](
        TSPPackage *self,
        SEL a2,
        id a3,
        id a4,
        id *a5)
{
  id v7; // x0
  id v8; // x0
  unsigned int v9; // w23
  void *v10; // x22
  objc_class *v11; // x0
  NSString *v12; // x24
  NSString *v13; // x23
  NSString *v14; // x24
  objc_class *v15; // x0
  NSString *v16; // x26
  objc_class *v17; // x0
  NSString *v18; // x23
  NSString *v19; // x22
  NSException *v20; // x21
  uint8_t buf[4]; // [xsp+10h] [xbp-90h] BYREF
  unsigned int v22; // [xsp+14h] [xbp-8Ch]
  __int16 v23; // [xsp+18h] [xbp-88h]
  const char *v24; // [xsp+1Ah] [xbp-86h]
  __int16 v25; // [xsp+22h] [xbp-7Eh]
  const char *v26; // [xsp+24h] [xbp-7Ch]
  __int16 v27; // [xsp+2Ch] [xbp-74h]
  int v28; // [xsp+2Eh] [xbp-72h]
  __int16 v29; // [xsp+32h] [xbp-6Eh]
  NSString *v30; // [xsp+34h] [xbp-6Ch]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001D3390);
  v10 = objc_retain(TSUAssertCat_log_t);
  if ( os_log_type_enabled((os_log_t)v10, OS_LOG_TYPE_ERROR) )
  {
    v11 = (objc_class *)objc_opt_class(self);
    v12 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v11));
    *(_DWORD *)buf = 67110146;
    v22 = v9;
    v23 = 2082;
    v24 = "-[TSPPackage newDocumentPropertiesWithURL:zipProvider:error:]";
    v25 = 2082;
    v26 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/src/TSPPackage.mm";
    v27 = 1024;
    v28 = 744;
    v29 = 2114;
    v30 = v12;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)v10,
      OS_LOG_TYPE_ERROR,
      "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Abstract method not overridden by %{public}@",
      buf,
      0x2Cu);
    objc_release(v12);
  }
  objc_release(v10);
  v13 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "-[TSPPackage newDocumentPropertiesWithURL:zipProvider:error:]"));
  v14 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/persistence/src/TSPPackage.mm"));
  v15 = (objc_class *)objc_opt_class(self);
  v16 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v15));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v13,
    v14,
    744LL,
    0LL,
    "Abstract method not overridden by %{public}@",
    v16);
  objc_release(v16);
  objc_release(v14);
  objc_release(v13);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  v17 = (objc_class *)objc_opt_class(self);
  v18 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v17));
  v19 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("Abstract method not overridden by %@: %s"),
            v18,
            "-[TSPPackage newDocumentPropertiesWithURL:zipProvider:error:]"));
  v20 = objc_autorelease(
          objc_retainAutoreleasedReturnValue(
            +[NSException exceptionWithName:reason:userInfo:](
              &OBJC_CLASS___NSException,
              "exceptionWithName:reason:userInfo:",
              NSInternalInconsistencyException,
              v19,
              0LL)));
  objc_release(v19);
  objc_release(v18);
  objc_exception_throw(v20);
}