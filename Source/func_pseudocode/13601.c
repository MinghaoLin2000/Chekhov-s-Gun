+[SFUCryptoUtils sha256HashFromStrings:]
id __cdecl +[SFUCryptoUtils sha256HashFromStrings:](id a1, SEL a2, id a3)
{
  _BOOL4 v4; // w21
  void *v5; // x0
  __int128 v6; // q0
  void *v7; // x20
  __int64 v8; // x25
  void *v9; // x23
  void *v10; // x28
  unsigned int v11; // w27
  os_log_s *v12; // x24
  __int128 v14; // [xsp+0h] [xbp-1D0h]
  __int128 v15; // [xsp+10h] [xbp-1C0h] BYREF
  __int128 v16; // [xsp+20h] [xbp-1B0h]
  __int128 v17; // [xsp+30h] [xbp-1A0h]
  __int128 v18; // [xsp+40h] [xbp-190h]
  CC_SHA256_CTX c; // [xsp+58h] [xbp-178h] BYREF
  uint8_t buf[4]; // [xsp+C0h] [xbp-110h] BYREF
  unsigned int v21; // [xsp+C4h] [xbp-10Ch]
  __int16 v22; // [xsp+C8h] [xbp-108h]
  const char *v23; // [xsp+CAh] [xbp-106h]
  __int16 v24; // [xsp+D2h] [xbp-FEh]
  const char *v25; // [xsp+D4h] [xbp-FCh]
  __int16 v26; // [xsp+DCh] [xbp-F4h]
  int v27; // [xsp+DEh] [xbp-F2h]
  _BYTE v28[128]; // [xsp+E8h] [xbp-E8h] BYREF

  v15 = 0u;
  v16 = 0u;
  v4 = CC_SHA256_Init(&c) != 0;
  v17 = 0u;
  v18 = 0u;
  v5 = objc_msgSend(a3, "countByEnumeratingWithState:objects:count:", &v15, v28, 16LL);
  if ( v5 )
  {
    v7 = v5;
    v8 = *(_QWORD *)v16;
    *(_QWORD *)&v6 = 67109890LL;
    v14 = v6;
    do
    {
      v9 = 0LL;
      do
      {
        if ( *(_QWORD *)v16 != v8 )
          objc_enumerationMutation(a3);
        v10 = objc_msgSend(
                *(id *)(*((_QWORD *)&v15 + 1) + 8LL * (_QWORD)v9),
                "dataUsingEncoding:",
                4LL,
                v14,
                (_QWORD)v15);
        if ( (unsigned __int64)objc_msgSend(v10, "length") >> 32 )
        {
          v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
                  &OBJC_CLASS___TSUAssertionHandler,
                  "_atomicIncrementAssertCount");
          if ( TSUAssertCat_init_token != -1 )
            dispatch_once(&TSUAssertCat_init_token, &stru_1001DF648);
          v12 = (os_log_s *)TSUAssertCat_log_t;
          if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
          {
            *(_DWORD *)buf = v14;
            v21 = v11;
            v22 = 2082;
            v23 = "+[SFUCryptoUtils sha256HashFromStrings:]";
            v24 = 2082;
            v25 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/So"
                  "urces/iWorkXPC/shared/utility/sf/SFUCryptoUtils.mm";
            v26 = 1024;
            v27 = 521;
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              v12,
              OS_LOG_TYPE_ERROR,
              "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d overflow in sha256HashFromData",
              buf,
              0x22u);
          }
          +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
            &OBJC_CLASS___TSUAssertionHandler,
            "handleFailureInFunction:file:lineNumber:isFatal:description:",
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "+[SFUCryptoUtils sha256HashFromStrings:]"),
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/sf/SFUCryptoUtils.mm"),
            521LL,
            0LL,
            "overflow in sha256HashFromData");
          +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
        }
        v4 = v4 && CC_SHA256_Update(&c, objc_msgSend(v10, "bytes"), (CC_LONG)objc_msgSend(v10, "length")) != 0;
        v9 = (char *)v9 + 1;
      }
      while ( v7 != v9 );
      v7 = objc_msgSend(a3, "countByEnumeratingWithState:objects:count:", &v15, v28, 16LL);
    }
    while ( v7 );
  }
  if ( v4 && CC_SHA256_Final(buf, &c) )
    return +[NSData dataWithBytes:length:](&OBJC_CLASS___NSData, "dataWithBytes:length:", buf, 32LL);
  else
    return 0LL;
}