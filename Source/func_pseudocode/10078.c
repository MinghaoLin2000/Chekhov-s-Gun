-[TSPDatabaseObject hasFileState]
bool __cdecl __noreturn -[TSPDatabaseObject hasFileState](TSPDatabaseObject *self, SEL a2)
{
  unsigned int v3; // w21
  void *v4; // x20
  objc_class *v5; // x0
  NSString *v6; // x22
  NSString *v7; // x21
  NSString *v8; // x22
  objc_class *v9; // x0
  NSString *v10; // x24
  objc_class *v11; // x0
  NSString *v12; // x21
  NSString *v13; // x20
  NSException *v14; // x19
  uint8_t buf[4]; // [xsp+10h] [xbp-80h] BYREF
  unsigned int v16; // [xsp+14h] [xbp-7Ch]
  __int16 v17; // [xsp+18h] [xbp-78h]
  const char *v18; // [xsp+1Ah] [xbp-76h]
  __int16 v19; // [xsp+22h] [xbp-6Eh]
  const char *v20; // [xsp+24h] [xbp-6Ch]
  __int16 v21; // [xsp+2Ch] [xbp-64h]
  int v22; // [xsp+2Eh] [xbp-62h]
  __int16 v23; // [xsp+32h] [xbp-5Eh]
  NSString *v24; // [xsp+34h] [xbp-5Ch]

  v3 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001D55D8);
  v4 = objc_retain(TSUAssertCat_log_t);
  if ( os_log_type_enabled((os_log_t)v4, OS_LOG_TYPE_ERROR) )
  {
    v5 = (objc_class *)objc_opt_class(self);
    v6 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v5));
    *(_DWORD *)buf = 67110146;
    v16 = v3;
    v17 = 2082;
    v18 = "-[TSPDatabaseObject hasFileState]";
    v19 = 2082;
    v20 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/src/TSPDatabaseObject.mm";
    v21 = 1024;
    v22 = 57;
    v23 = 2114;
    v24 = v6;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)v4,
      OS_LOG_TYPE_ERROR,
      "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Abstract method not overridden by %{public}@",
      buf,
      0x2Cu);
    objc_release(v6);
  }
  objc_release(v4);
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "-[TSPDatabaseObject hasFileState]"));
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/i"
           "WorkXPC/shared/persistence/src/TSPDatabaseObject.mm"));
  v9 = (objc_class *)objc_opt_class(self);
  v10 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v9));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v7,
    v8,
    57LL,
    0LL,
    "Abstract method not overridden by %{public}@",
    v10);
  objc_release(v10);
  objc_release(v8);
  objc_release(v7);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  v11 = (objc_class *)objc_opt_class(self);
  v12 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v11));
  v13 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("Abstract method not overridden by %@: %s"),
            v12,
            "-[TSPDatabaseObject hasFileState]"));
  v14 = objc_autorelease(
          objc_retainAutoreleasedReturnValue(
            +[NSException exceptionWithName:reason:userInfo:](
              &OBJC_CLASS___NSException,
              "exceptionWithName:reason:userInfo:",
              NSInternalInconsistencyException,
              v13,
              0LL)));
  objc_release(v13);
  objc_release(v12);
  objc_exception_throw(v14);
}