-[TSUBufferedReadChannelHelper readWithHandlerAndWait:]
void __cdecl __noreturn -[TSUBufferedReadChannelHelper readWithHandlerAndWait:](
        TSUBufferedReadChannelHelper *self,
        SEL a2,
        id a3)
{
  id v3; // x0
  unsigned int v4; // w22
  os_log_s *v5; // x21
  NSString *v6; // x20
  NSString *v7; // x19
  __int64 v8; // x0
  uint8_t buf[4]; // [xsp+20h] [xbp-60h] BYREF
  unsigned int v10; // [xsp+24h] [xbp-5Ch]
  __int16 v11; // [xsp+28h] [xbp-58h]
  const char *v12; // [xsp+2Ah] [xbp-56h]
  __int16 v13; // [xsp+32h] [xbp-4Eh]
  const char *v14; // [xsp+34h] [xbp-4Ch]
  __int16 v15; // [xsp+3Ch] [xbp-44h]
  int v16; // [xsp+3Eh] [xbp-42h]

  v3 = objc_retain(a3);
  v4 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001DDC30);
  v5 = (os_log_s *)TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 67109890;
    v10 = v4;
    v11 = 2082;
    v12 = "-[TSUBufferedReadChannelHelper readWithHandlerAndWait:]";
    v13 = 2082;
    v14 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/utility/TSUBufferedReadChannel.m";
    v15 = 1024;
    v16 = 397;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      v5,
      OS_LOG_TYPE_ERROR,
      "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d TSUBufferedReadChannel should not call readWithHandler"
      "AndWait on TSUBufferedReadChannelHelper",
      buf,
      0x22u);
  }
  TSUSetCrashReporterInfo(
    "Fatal Assertion failure: %{public}s %{public}s:%d TSUBufferedReadChannel should not call readWithHandlerAndWait on T"
    "SUBufferedReadChannelHelper",
    "-[TSUBufferedReadChannelHelper readWithHandlerAndWait:]",
    "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkXPC"
    "/shared/utility/TSUBufferedReadChannel.m",
    397LL);
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "-[TSUBufferedReadChannelHelper readWithHandlerAndWait:]"));
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/i"
           "WorkXPC/shared/utility/TSUBufferedReadChannel.m"));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v6,
    v7,
    397LL,
    1LL,
    "TSUBufferedReadChannel should not call readWithHandlerAndWait on TSUBufferedReadChannelHelper");
  objc_release(v7);
  objc_release(v6);
  TSUCrashBreakpoint(v8);
  abort();
}