_TSUCheckedDynamicCast
__int64 __fastcall TSUCheckedDynamicCast(objc_class *a1, __int64 a2)
{
  __int64 v2; // x19
  unsigned int v4; // w22
  os_log_s *v5; // x21
  NSString *v6; // x22
  NSString *v7; // x23
  objc_class *v8; // x0
  NSString *v9; // x19
  objc_class *v11; // x0
  uint8_t buf[4]; // [xsp+10h] [xbp-80h] BYREF
  unsigned int v13; // [xsp+14h] [xbp-7Ch]
  __int16 v14; // [xsp+18h] [xbp-78h]
  const char *v15; // [xsp+1Ah] [xbp-76h]
  __int16 v16; // [xsp+22h] [xbp-6Eh]
  const char *v17; // [xsp+24h] [xbp-6Ch]
  __int16 v18; // [xsp+2Ch] [xbp-64h]
  int v19; // [xsp+2Eh] [xbp-62h]
  __int16 v20; // [xsp+32h] [xbp-5Eh]
  NSString *v21; // [xsp+34h] [xbp-5Ch]
  __int16 v22; // [xsp+3Ch] [xbp-54h]
  NSString *v23; // [xsp+3Eh] [xbp-52h]

  v2 = a2;
  if ( a2 && (objc_opt_isKindOfClass(a2, a1) & 1) == 0 )
  {
    v4 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DEFE8);
    v5 = (os_log_s *)TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    {
      v11 = (objc_class *)objc_opt_class(v2);
      *(_DWORD *)buf = 67110402;
      v13 = v4;
      v14 = 2082;
      v15 = "id TSUCheckedDynamicCast(Class, id<NSObject>)";
      v16 = 2082;
      v17 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/utility/TSUCast.m";
      v18 = 1024;
      v19 = 160;
      v20 = 2114;
      v21 = NSStringFromClass(v11);
      v22 = 2114;
      v23 = NSStringFromClass(a1);
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v5,
        OS_LOG_TYPE_ERROR,
        "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Unexpected object type %{public}@ in checked dynamic"
        " cast to %{public}@",
        buf,
        0x36u);
    }
    v6 = +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "id TSUCheckedDynamicCast(Class, id<NSObject>)");
    v7 = +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/i"
           "WorkXPC/shared/utility/TSUCast.m");
    v8 = (objc_class *)objc_opt_class(v2);
    v9 = NSStringFromClass(v8);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v6,
      v7,
      160LL,
      0LL,
      "Unexpected object type %{public}@ in checked dynamic cast to %{public}@",
      v9,
      NSStringFromClass(a1));
    +[TSUAssertionHandler logFullBacktrace](&OBJC_CLASS___TSUAssertionHandler, "logFullBacktrace");
    return 0LL;
  }
  return v2;
}