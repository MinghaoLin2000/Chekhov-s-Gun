+[NSUUID tsu_UUIDWithNamespaceUUID:bytes:size:]
id __cdecl +[NSUUID tsu_UUIDWithNamespaceUUID:bytes:size:](id a1, SEL a2, id a3, const void *a4, unsigned __int64 a5)
{
  CC_LONG v5; // w19
  id v7; // x21
  __int64 v8; // x21
  void *v9; // x22
  NSString *v10; // x22
  NSString *v11; // x23
  void *v12; // x19
  CC_SHA1_CTX c; // [xsp+10h] [xbp-E0h] BYREF
  unsigned __int8 md[20]; // [xsp+7Ch] [xbp-74h] BYREF
  __int128 data; // [xsp+90h] [xbp-60h] BYREF
  __int64 vars8; // [xsp+F8h] [xbp+8h]

  v5 = a5;
  v7 = objc_retain(a3);
  memset(&c, 0, sizeof(c));
  CC_SHA1_Init(&c);
  data = 0uLL;
  if ( !v7 )
  {
    v8 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD730);
    v9 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100170328(v8, v9);
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "+[NSUUID(NSUUID_TSUAdditions) tsu_UUIDWithNamespaceUUID:bytes:size:]"));
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/NSUUID_TSUAdditions.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v10,
      v11,
      47LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "namespaceUUID");
    objc_release(v11);
    objc_release(v10);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    v7 = objc_alloc_init((Class)&OBJC_CLASS___NSUUID);
  }
  objc_msgSend(v7, "getUUIDBytes:", &data);
  CC_SHA1_Update(&c, &data, 0x10u);
  CC_SHA1_Update(&c, a4, v5);
  CC_SHA1_Final(md, &c);
  data = *(_OWORD *)md;
  BYTE6(data) = md[6] & 0xF | 0x50;
  BYTE8(data) = md[8] & 0x3F | 0x80;
  v12 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSUUID), "initWithUUIDBytes:", &data);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}