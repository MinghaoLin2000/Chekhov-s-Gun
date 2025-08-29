-[TSPPackage packageEntryInfoAtRelativePath:error:]
id __cdecl __noreturn -[TSPPackage packageEntryInfoAtRelativePath:error:](TSPPackage *self, SEL a2, id a3, id *a4)
{
  id v5; // x0
  unsigned int v6; // w22
  void *v7; // x21
  objc_class *v8; // x0
  NSString *v9; // x23
  NSString *v10; // x22
  NSString *v11; // x23
  objc_class *v12; // x0
  NSString *v13; // x25
  objc_class *v14; // x0
  NSString *v15; // x22
  NSString *v16; // x21
  NSException *v17; // x20
  uint8_t buf[4]; // [xsp+10h] [xbp-90h] BYREF
  unsigned int v19; // [xsp+14h] [xbp-8Ch]
  __int16 v20; // [xsp+18h] [xbp-88h]
  const char *v21; // [xsp+1Ah] [xbp-86h]
  __int16 v22; // [xsp+22h] [xbp-7Eh]
  const char *v23; // [xsp+24h] [xbp-7Ch]
  __int16 v24; // [xsp+2Ch] [xbp-74h]
  int v25; // [xsp+2Eh] [xbp-72h]
  __int16 v26; // [xsp+32h] [xbp-6Eh]
  NSString *v27; // [xsp+34h] [xbp-6Ch]

  v5 = objc_retain(a3);
  v6 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001D32F0);
  v7 = objc_retain(TSUAssertCat_log_t);
  if ( os_log_type_enabled((os_log_t)v7, OS_LOG_TYPE_ERROR) )
  {
    v8 = (objc_class *)objc_opt_class(self);
    v9 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v8));
    *(_DWORD *)buf = 67110146;
    v19 = v6;
    v20 = 2082;
    v21 = "-[TSPPackage packageEntryInfoAtRelativePath:error:]";
    v22 = 2082;
    v23 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/src/TSPPackage.mm";
    v24 = 1024;
    v25 = 662;
    v26 = 2114;
    v27 = v9;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)v7,
      OS_LOG_TYPE_ERROR,
      "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Abstract method not overridden by %{public}@",
      buf,
      0x2Cu);
    objc_release(v9);
  }
  objc_release(v7);
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "-[TSPPackage packageEntryInfoAtRelativePath:error:]"));
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/persistence/src/TSPPackage.mm"));
  v12 = (objc_class *)objc_opt_class(self);
  v13 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v12));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v10,
    v11,
    662LL,
    0LL,
    "Abstract method not overridden by %{public}@",
    v13);
  objc_release(v13);
  objc_release(v11);
  objc_release(v10);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  v14 = (objc_class *)objc_opt_class(self);
  v15 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v14));
  v16 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("Abstract method not overridden by %@: %s"),
            v15,
            "-[TSPPackage packageEntryInfoAtRelativePath:error:]"));
  v17 = objc_autorelease(
          objc_retainAutoreleasedReturnValue(
            +[NSException exceptionWithName:reason:userInfo:](
              &OBJC_CLASS___NSException,
              "exceptionWithName:reason:userInfo:",
              NSInternalInconsistencyException,
              v16,
              0LL)));
  objc_release(v16);
  objc_release(v15);
  objc_exception_throw(v17);
}