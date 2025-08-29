+[TSUUUIDPath lastUUIDFromUUIDPathString:]
id __cdecl +[TSUUUIDPath lastUUIDFromUUIDPathString:](id a1, SEL a2, id a3)
{
  id v3; // x19
  char *v4; // x20
  _BYTE *v5; // x0
  char *v6; // x20
  void *v7; // x21
  unsigned int v8; // w22
  id v9; // x21
  void *v10; // x22
  void *v11; // x20
  __int64 v12; // x20
  void *v13; // x21
  NSString *v14; // x21
  NSString *v15; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = (char *)objc_msgSend(v3, "length");
  v5 = objc_msgSend(CFSTR("/"), "length");
  if ( (unsigned __int64)v4 < 0x25 )
  {
    if ( v4 == (char *)36 )
    {
      v11 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSUUID), "initWithUUIDString:", v3);
      if ( v11 )
        goto LABEL_12;
    }
  }
  else
  {
    v6 = v4 - 36;
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "substringWithRange:", v6 - v5, v5));
    v8 = (unsigned int)objc_msgSend(CFSTR("/"), "isEqualToString:", v7);
    objc_release(v7);
    if ( v8 )
    {
      v9 = objc_alloc((Class)&OBJC_CLASS___NSUUID);
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "substringFromIndex:", v6));
      v11 = objc_msgSend(v9, "initWithUUIDString:", v10);
      objc_release(v10);
      if ( v11 )
        goto LABEL_12;
    }
  }
  v12 = +[TSUAssertionHandler _atomicIncrementAssertCount](
          &OBJC_CLASS___TSUAssertionHandler,
          "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001DC788);
  v13 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_10016E66C(v3, v12, v13);
  v14 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "+[TSUUUIDPath lastUUIDFromUUIDPathString:]"));
  v15 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/utility/TSUUUIDPath.m"));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v14,
    v15,
    101LL,
    0LL,
    "Invalid UUID path string: %{public}@",
    v3);
  objc_release(v15);
  objc_release(v14);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  v11 = 0LL;
LABEL_12:
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}