-[TSPDirectoryPackageDataWriter flushPendingWritesReturningError:]
bool __cdecl __noreturn -[TSPDirectoryPackageDataWriter flushPendingWritesReturningError:](
        TSPDirectoryPackageDataWriter *self,
        SEL a2,
        id *a3)
{
  unsigned int v3; // w20
  os_log_s *v4; // x19
  NSString *v5; // x19
  NSString *v6; // x23
  NSString *v7; // x19
  NSException *v8; // x20
  uint8_t buf[4]; // [xsp+10h] [xbp-70h] BYREF
  unsigned int v10; // [xsp+14h] [xbp-6Ch]
  __int16 v11; // [xsp+18h] [xbp-68h]
  const char *v12; // [xsp+1Ah] [xbp-66h]
  __int16 v13; // [xsp+22h] [xbp-5Eh]
  const char *v14; // [xsp+24h] [xbp-5Ch]
  __int16 v15; // [xsp+2Ch] [xbp-54h]
  int v16; // [xsp+2Eh] [xbp-52h]

  v3 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount",
         a3);
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001D1D50);
  v4 = (os_log_s *)TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 67109890;
    v10 = v3;
    v11 = 2082;
    v12 = "-[TSPDirectoryPackageDataWriter flushPendingWritesReturningError:]";
    v13 = 2082;
    v14 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/src/TSPDirectoryPackageDataWriter.mm";
    v15 = 1024;
    v16 = 66;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      v4,
      OS_LOG_TYPE_ERROR,
      "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Do not call method",
      buf,
      0x22u);
  }
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "-[TSPDirectoryPackageDataWriter flushPendingWritesReturningError:]"));
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/i"
           "WorkXPC/shared/persistence/src/TSPDirectoryPackageDataWriter.mm"));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v5,
    v6,
    66LL,
    0LL,
    "Do not call method");
  objc_release(v6);
  objc_release(v5);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%s: %s"),
           "Do not call method",
           "-[TSPDirectoryPackageDataWriter flushPendingWritesReturningError:]"));
  v8 = objc_autorelease(
         objc_retainAutoreleasedReturnValue(
           +[NSException exceptionWithName:reason:userInfo:](
             &OBJC_CLASS___NSException,
             "exceptionWithName:reason:userInfo:",
             NSInternalInconsistencyException,
             v7,
             0LL)));
  objc_release(v7);
  objc_exception_throw(v8);
}