+[NSKeyedArchiver tsu_securelyArchiveRoot:]
id __cdecl +[NSKeyedArchiver tsu_securelyArchiveRoot:](id a1, SEL a2, id a3)
{
  id v3; // x19
  NSData *v4; // x20
  id v5; // x21
  unsigned int v6; // w23
  void *v7; // x22
  NSString *v8; // x22
  NSString *v9; // x24
  objc_class *v10; // x0
  NSString *v11; // x25
  void *v12; // x26
  os_log_s *v14; // x22
  objc_class *v15; // x0
  NSString *v16; // x24
  void *v17; // x25
  void *v18; // x0
  id v19; // [xsp+28h] [xbp-C8h] BYREF
  uint8_t buf[4]; // [xsp+30h] [xbp-C0h] BYREF
  unsigned int v21; // [xsp+34h] [xbp-BCh]
  __int16 v22; // [xsp+38h] [xbp-B8h]
  const char *v23; // [xsp+3Ah] [xbp-B6h]
  __int16 v24; // [xsp+42h] [xbp-AEh]
  const char *v25; // [xsp+44h] [xbp-ACh]
  __int16 v26; // [xsp+4Ch] [xbp-A4h]
  int v27; // [xsp+4Eh] [xbp-A2h]
  __int16 v28; // [xsp+52h] [xbp-9Eh]
  id v29; // [xsp+54h] [xbp-9Ch]
  __int16 v30; // [xsp+5Ch] [xbp-94h]
  NSString *v31; // [xsp+5Eh] [xbp-92h]
  __int16 v32; // [xsp+66h] [xbp-8Ah]
  void *v33; // [xsp+68h] [xbp-88h]
  __int16 v34; // [xsp+70h] [xbp-80h]
  void *v35; // [xsp+72h] [xbp-7Eh]
  __int16 v36; // [xsp+7Ah] [xbp-76h]
  id v37; // [xsp+7Ch] [xbp-74h]
  __int64 vars8; // [xsp+F8h] [xbp+8h]

  v3 = objc_retain(a3);
  v19 = 0LL;
  v4 = objc_retainAutoreleasedReturnValue(
         +[NSKeyedArchiver archivedDataWithRootObject:requiringSecureCoding:error:](
           &OBJC_CLASS___NSKeyedArchiver,
           "archivedDataWithRootObject:requiringSecureCoding:error:",
           v3,
           1LL,
           &v19));
  v5 = objc_retain(v19);
  if ( !v4 )
  {
    v6 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DC2D8);
    v7 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    {
      v14 = objc_retain(v7);
      v15 = (objc_class *)objc_opt_class(v5);
      v16 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v15));
      v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "domain"));
      v18 = objc_msgSend(v5, "code");
      *(_DWORD *)buf = 67111170;
      v21 = v6;
      v22 = 2082;
      v23 = "+[NSKeyedArchiver(TSUAdditions) tsu_securelyArchiveRoot:]";
      v24 = 2082;
      v25 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/utility/NSKeyedArchiver_TSUAdditions.m";
      v26 = 1024;
      v27 = 21;
      v28 = 2112;
      v29 = v3;
      v30 = 2114;
      v31 = v16;
      v32 = 2114;
      v33 = v17;
      v34 = 2048;
      v35 = v18;
      v36 = 2112;
      v37 = v5;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v14,
        OS_LOG_TYPE_ERROR,
        "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Unable to encode object %@: errorClass=%{public}@, d"
        "omain=%{public}@, code=%zd (%@) ",
        buf,
        0x54u);
      objc_release(v17);
      objc_release(v16);
      objc_release(v14);
    }
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "+[NSKeyedArchiver(TSUAdditions) tsu_securelyArchiveRoot:]"));
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/utility/NSKeyedArchiver_TSUAdditions.m"));
    v10 = (objc_class *)objc_opt_class(v5);
    v11 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v10));
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "domain"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v8,
      v9,
      21LL,
      0LL,
      "Unable to encode object %@: errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
      v3,
      v11,
      v12,
      objc_msgSend(v5, "code"),
      v5);
    objc_release(v12);
    objc_release(v11);
    objc_release(v9);
    objc_release(v8);
    +[TSUAssertionHandler logFullBacktrace](&OBJC_CLASS___TSUAssertionHandler, "logFullBacktrace");
  }
  objc_release(v5);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}