-[NSIndexSet tsu_enumeratePowerSetIncludingEmptySet:usingBlock:]
void __cdecl -[NSIndexSet tsu_enumeratePowerSetIncludingEmptySet:usingBlock:](NSIndexSet *self, SEL a2, bool a3, id a4)
{
  _BOOL4 v4; // w22
  void (__fastcall **v6)(id, id, _BYTE *); // x19
  NSUInteger v7; // x0
  NSUInteger v8; // x21
  unsigned __int64 v9; // x24
  unsigned __int64 v10; // x25
  id v11; // x22
  __int64 i; // x23
  int v13; // w23
  __int64 v15; // x20
  void *v16; // x21
  NSString *v17; // x20
  NSString *v18; // x22
  __int64 v19; // x20
  void *v20; // x21
  unsigned __int8 v21; // [xsp+Fh] [xbp-51h] BYREF

  v4 = a3;
  v6 = (void (__fastcall **)(id, id, _BYTE *))objc_retain(a4);
  v7 = -[NSIndexSet count](self, "count");
  v8 = v7;
  if ( v7 >= 0x40 )
  {
    v15 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE1D8);
    v16 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100171B90(v15, v16);
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[NSIndexSet(TSUAdditions) tsu_enumeratePowerSetIncludingEmptySet:usingBlock:]"));
    v18 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/NSIndexSet_TSUAdditions.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v17,
      v18,
      245LL,
      0LL,
      "too many indexes!");
    goto LABEL_23;
  }
  if ( !v6 )
  {
    v19 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DE1F8);
    v20 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100171AE0(v19, v20);
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[NSIndexSet(TSUAdditions) tsu_enumeratePowerSetIncludingEmptySet:usingBlock:]"));
    v18 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/NSIndexSet_TSUAdditions.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v17,
      v18,
      249LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "block");
LABEL_23:
    objc_release(v18);
    objc_release(v17);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    goto LABEL_24;
  }
  v9 = (unsigned int)~(-1 << v7);
  v10 = !v4;
  if ( v10 <= v9 )
  {
    do
    {
      v11 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableIndexSet);
      if ( v8 )
      {
        for ( i = 0LL; i != v8; ++i )
        {
          if ( (v10 & (1 << i)) != 0 )
            objc_msgSend(v11, "addIndex:", -[NSIndexSet tsu_indexAtPosition:](self, "tsu_indexAtPosition:", i));
        }
      }
      v21 = 0;
      v6[2](v6, v11, &v21);
      v13 = v21;
      objc_release(v11);
      if ( v13 )
        break;
    }
    while ( v10++ != v9 );
  }
LABEL_24:
  objc_release(v6);
}