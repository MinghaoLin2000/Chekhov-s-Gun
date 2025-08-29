_TSPVersionFromNSString
unsigned __int64 __fastcall UnsafePointer(void *a1)
{
  void *v1; // x19
  void *v2; // x21
  __int64 v3; // x20
  void *v4; // x22
  NSString *v5; // x21
  void *v6; // x23
  __int64 v7; // x22
  unsigned __int64 v8; // x20
  __int64 v9; // x20
  void *v10; // x21
  NSString *v11; // x21
  NSString *v12; // x22
  __int64 v14; // x20
  void *v15; // x21
  NSString *v16; // x21
  NSString *v17; // x22
  __int64 v18; // x21
  void *v19; // x22
  NSString *v20; // x23
  __int64 v21; // x22
  void *v22; // x23
  NSString *v23; // x22
  NSString *v24; // x24
  __int64 v25; // x20
  void *v26; // x21
  NSString *v27; // x21
  NSString *v28; // x22
  __int64 v29; // x21
  void *v30; // x22
  NSString *v31; // x23
  __int64 v32; // x22
  void *v33; // x23
  NSString *v34; // x22
  NSString *v35; // x24

  v1 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "componentsSeparatedByString:", CFSTR(".")));
  if ( objc_msgSend(v1, "count") == (void *)3 )
  {
    v2 = objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "objectAtIndexedSubscript:", 0LL));
    v3 = (__int64)objc_msgSend(v2, "integerValue");
    objc_release(v2);
    if ( v3 >= 0x10000 )
    {
      v14 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D3A50);
      v15 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016D288(v14, v15);
      v16 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "TSPVersion TSPVersionFromNSString(NSString *__strong)"));
      v17 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPVersion.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v16,
        v17,
        291LL,
        0LL,
        "Out-of-bounds type assignment was clamped to max");
      objc_release(v17);
      objc_release(v16);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
      v3 = 0xFFFFLL;
    }
    else if ( v3 < 0 )
    {
      v25 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D3A70);
      v26 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016D308(v25, v26);
      v27 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "TSPVersion TSPVersionFromNSString(NSString *__strong)"));
      v28 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPVersion.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v27,
        v28,
        291LL,
        0LL,
        "Out-of-bounds type assignment was clamped to min");
      objc_release(v28);
      objc_release(v27);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
      v3 = 0LL;
    }
    v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "objectAtIndexedSubscript:", 1LL));
    v5 = (NSString *)objc_msgSend(v4, "integerValue");
    objc_release(v4);
    if ( (__int64)v5 >= 0x10000 )
    {
      v18 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D3A90);
      v19 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016D188(v18, v19);
      v5 = objc_retainAutoreleasedReturnValue(
             +[NSString stringWithUTF8String:](
               &OBJC_CLASS___NSString,
               "stringWithUTF8String:",
               "TSPVersion TSPVersionFromNSString(NSString *__strong)"));
      v20 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPVersion.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v5,
        v20,
        292LL,
        0LL,
        "Out-of-bounds type assignment was clamped to max");
      objc_release(v20);
      objc_release(v5);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
      LOWORD(v5) = -1;
    }
    else if ( ((unsigned __int64)v5 & 0x8000000000000000LL) != 0 )
    {
      v29 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D3AB0);
      v30 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016D208(v29, v30);
      v5 = objc_retainAutoreleasedReturnValue(
             +[NSString stringWithUTF8String:](
               &OBJC_CLASS___NSString,
               "stringWithUTF8String:",
               "TSPVersion TSPVersionFromNSString(NSString *__strong)"));
      v31 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPVersion.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v5,
        v31,
        292LL,
        0LL,
        "Out-of-bounds type assignment was clamped to min");
      objc_release(v31);
      objc_release(v5);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
      LOWORD(v5) = 0;
    }
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "objectAtIndexedSubscript:", 2LL));
    v7 = (__int64)objc_msgSend(v6, "integerValue");
    objc_release(v6);
    if ( v7 >= (__int64)&_mh_execute_header )
    {
      v21 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D3AD0);
      v22 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016D088(v21, v22);
      v23 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "TSPVersion TSPVersionFromNSString(NSString *__strong)"));
      v24 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPVersion.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v23,
        v24,
        293LL,
        0LL,
        "Out-of-bounds type assignment was clamped to max");
      objc_release(v24);
      objc_release(v23);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
      v7 = 0xFFFFFFFFLL;
    }
    else if ( v7 < 0 )
    {
      v32 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D3AF0);
      v33 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016D108(v32, v33);
      v34 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "TSPVersion TSPVersionFromNSString(NSString *__strong)"));
      v35 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPVersion.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v34,
        v35,
        293LL,
        0LL,
        "Out-of-bounds type assignment was clamped to min");
      objc_release(v35);
      objc_release(v34);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
      v7 = 0LL;
    }
    v8 = v7 | (v3 << 48) | ((unsigned __int64)(unsigned __int16)v5 << 32);
  }
  else
  {
    v9 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D3A30);
    v10 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016D388(v9, v10);
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "TSPVersion TSPVersionFromNSString(NSString *__strong)"));
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPVersion.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v11,
      v12,
      287LL,
      0LL,
      "Version should consist of 3 numbers separated by '.'");
    objc_release(v12);
    objc_release(v11);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    v8 = 0LL;
  }
  objc_release(v1);
  return v8;
}