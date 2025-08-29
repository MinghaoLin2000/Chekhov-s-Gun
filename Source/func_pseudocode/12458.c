-[NSSet tsu_setByMappingObjectsUsingBlock:]
id __cdecl -[NSSet tsu_setByMappingObjectsUsingBlock:](NSSet *self, SEL a2, id a3)
{
  __int64 (__fastcall **v4)(id, _QWORD); // x19
  void **p_cache; // x28
  __int64 v6; // x21
  void *v7; // x20
  NSString *v8; // x21
  NSString *v9; // x23
  void *v10; // x0
  void *v11; // x23
  __int64 v12; // x25
  void *v13; // x22
  id v14; // x26
  unsigned int v15; // w27
  os_log_s *v16; // x20
  void *v17; // x20
  NSString *v18; // x27
  void **v19; // x21
  NSString *v20; // x28
  NSString *v21; // x0
  void *v22; // x20
  NSSet *obj; // [xsp+20h] [xbp-160h]
  NSMutableSet *v25; // [xsp+28h] [xbp-158h]
  __int128 v26; // [xsp+30h] [xbp-150h] BYREF
  __int128 v27; // [xsp+40h] [xbp-140h]
  __int128 v28; // [xsp+50h] [xbp-130h]
  __int128 v29; // [xsp+60h] [xbp-120h]
  uint8_t buf[4]; // [xsp+70h] [xbp-110h] BYREF
  unsigned int v31; // [xsp+74h] [xbp-10Ch]
  __int16 v32; // [xsp+78h] [xbp-108h]
  const char *v33; // [xsp+7Ah] [xbp-106h]
  __int16 v34; // [xsp+82h] [xbp-FEh]
  const char *v35; // [xsp+84h] [xbp-FCh]
  __int16 v36; // [xsp+8Ch] [xbp-F4h]
  int v37; // [xsp+8Eh] [xbp-F2h]
  _BYTE v38[128]; // [xsp+A0h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+188h] [xbp+8h]

  v4 = (__int64 (__fastcall **)(id, _QWORD))objc_retain(a3);
  p_cache = &OBJC_METACLASS___TSUSystemInfo.cache;
  if ( !v4 )
  {
    v6 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DC278);
    v7 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016DAA4(v6, v7);
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[NSSet(TSUAdditions) tsu_setByMappingObjectsUsingBlock:]"));
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/utility/NSSetAdditions.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v8,
      v9,
      99LL,
      0LL,
      "Invalid parameter not satisfying: %{public}s",
      "block != nil");
    objc_release(v9);
    objc_release(v8);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v25 = objc_retainAutoreleasedReturnValue(
          +[NSMutableSet setWithCapacity:](
            &OBJC_CLASS___NSMutableSet,
            "setWithCapacity:",
            -[NSSet count](self, "count")));
  v26 = 0u;
  v27 = 0u;
  v28 = 0u;
  v29 = 0u;
  obj = objc_retain(self);
  v10 = -[NSSet countByEnumeratingWithState:objects:count:](
          obj,
          "countByEnumeratingWithState:objects:count:",
          &v26,
          v38,
          16LL);
  if ( v10 )
  {
    v11 = v10;
    v12 = *(_QWORD *)v27;
    do
    {
      v13 = 0LL;
      do
      {
        if ( *(_QWORD *)v27 != v12 )
          objc_enumerationMutation(obj);
        v14 = objc_retainAutoreleasedReturnValue((id)v4[2](v4, *(_QWORD *)(*((_QWORD *)&v26 + 1) + 8LL * (_QWORD)v13)));
        if ( v14 )
        {
          -[NSMutableSet addObject:](v25, "addObject:", v14);
        }
        else
        {
          v15 = (unsigned int)objc_msgSend(p_cache + 498, "_atomicIncrementAssertCount");
          if ( TSUAssertCat_init_token != -1 )
            dispatch_once(&TSUAssertCat_init_token, &stru_1001DC298);
          v16 = (os_log_s *)TSUAssertCat_log_t;
          if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
          {
            *(_DWORD *)buf = 67109890;
            v31 = v15;
            v32 = 2082;
            v33 = "-[NSSet(TSUAdditions) tsu_setByMappingObjectsUsingBlock:]";
            v34 = 2082;
            v35 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/So"
                  "urces/iWorkXPC/shared/utility/NSSetAdditions.m";
            v36 = 1024;
            v37 = 109;
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              v16,
              OS_LOG_TYPE_ERROR,
              "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Block returned a nil object.",
              buf,
              0x22u);
          }
          v17 = p_cache + 498;
          v18 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithUTF8String:](
                    &OBJC_CLASS___NSString,
                    "stringWithUTF8String:",
                    "-[NSSet(TSUAdditions) tsu_setByMappingObjectsUsingBlock:]"));
          v19 = p_cache;
          v20 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithUTF8String:](
                    &OBJC_CLASS___NSString,
                    "stringWithUTF8String:",
                    "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/"
                    "Sources/iWorkXPC/shared/utility/NSSetAdditions.m"));
          objc_msgSend(
            v17,
            "handleFailureInFunction:file:lineNumber:isFatal:description:",
            v18,
            v20,
            109LL,
            0LL,
            "Block returned a nil object.");
          v21 = v20;
          p_cache = v19;
          objc_release(v21);
          objc_release(v18);
          objc_msgSend(v19 + 498, "logBacktraceThrottled");
        }
        objc_release(v14);
        v13 = (char *)v13 + 1;
      }
      while ( v11 != v13 );
      v11 = -[NSSet countByEnumeratingWithState:objects:count:](
              obj,
              "countByEnumeratingWithState:objects:count:",
              &v26,
              v38,
              16LL);
    }
    while ( v11 );
  }
  objc_release(obj);
  v22 = -[NSMutableSet copy](v25, "copy");
  objc_release(v25);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v22);
}