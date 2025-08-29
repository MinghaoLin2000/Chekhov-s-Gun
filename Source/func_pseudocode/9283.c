-[TSPDocumentRevision initWithRevisionString:]
TSPDocumentRevision *__cdecl -[TSPDocumentRevision initWithRevisionString:](TSPDocumentRevision *self, SEL a2, id a3)
{
  id v4; // x20
  void *v5; // x21
  void *v6; // x22
  void *v7; // x23
  __int64 v8; // x22
  void *v9; // x24
  NSString *v10; // x22
  NSString *v11; // x25
  void *v12; // x22
  void *v13; // x26
  __int64 v14; // x24
  void *v15; // x25
  NSString *v16; // x27
  NSString *v17; // x26
  void *v18; // x27
  id v19; // x24
  __int64 v20; // x22
  void *v21; // x23
  NSString *v22; // x22
  NSString *v23; // x24
  TSPDocumentRevision *v24; // x22
  __int64 v26; // x23
  void *v27; // x26
  NSString *v28; // x27
  NSString *v29; // x25
  _QWORD v30[2]; // [xsp+18h] [xbp-68h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "componentsSeparatedByString:", CFSTR("::")));
  if ( objc_msgSend(v5, "count") == (void *)2 )
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectAtIndexedSubscript:", 0LL));
    v7 = objc_msgSend(v6, "longLongValue");
    objc_release(v6);
    if ( v7 != (void *)(int)v7 )
    {
      v8 = +[TSUAssertionHandler _atomicIncrementAssertCount](
             &OBJC_CLASS___TSUAssertionHandler,
             "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D2330);
      v9 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016B150(v4, v8, v9);
      v10 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSPDocumentRevision initWithRevisionString:]"));
      v11 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPDocumentRevision.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v10,
        v11,
        50LL,
        0LL,
        "Revision string has invalid sequence: %{public}@",
        v4);
      objc_release(v11);
      objc_release(v10);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectAtIndexedSubscript:", 1LL));
    if ( objc_msgSend(v12, "length") )
    {
      v13 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSUUID), "initWithUUIDString:", v12);
      if ( !v13 )
      {
        v14 = +[TSUAssertionHandler _atomicIncrementAssertCount](
                &OBJC_CLASS___TSUAssertionHandler,
                "_atomicIncrementAssertCount");
        if ( TSUAssertCat_init_token != -1 )
          dispatch_once(&TSUAssertCat_init_token, &stru_1001D2350);
        v15 = TSUAssertCat_log_t;
        if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
          sub_10016B0C4(v4, v14, v15);
        v16 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithUTF8String:](
                  &OBJC_CLASS___NSString,
                  "stringWithUTF8String:",
                  "-[TSPDocumentRevision initWithRevisionString:]"));
        v17 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithUTF8String:](
                  &OBJC_CLASS___NSString,
                  "stringWithUTF8String:",
                  "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/So"
                  "urces/iWorkXPC/shared/persistence/src/TSPDocumentRevision.mm"));
        +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
          &OBJC_CLASS___TSUAssertionHandler,
          "handleFailureInFunction:file:lineNumber:isFatal:description:",
          v16,
          v17,
          63LL,
          0LL,
          "Revision string has invalid identifier: %{public}@",
          v4);
        objc_release(v17);
        objc_release(v16);
        +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
        v18 = objc_msgSend(
                objc_alloc((Class)&OBJC_CLASS___NSUUID),
                "initWithUUIDString:",
                CFSTR("0d4664c7-0c82-4301-8c01-e2d4a551216e"));
        if ( !v18 )
        {
          v26 = +[TSUAssertionHandler _atomicIncrementAssertCount](
                  &OBJC_CLASS___TSUAssertionHandler,
                  "_atomicIncrementAssertCount");
          if ( TSUAssertCat_init_token != -1 )
            dispatch_once(&TSUAssertCat_init_token, &stru_1001D2370);
          v27 = TSUAssertCat_log_t;
          if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
            sub_10016B03C(v26, v27);
          TSUSetCrashReporterInfo(
            "Fatal Assertion failure: %{public}s %{public}s:%d Should be able to create UUID from base UUID string.",
            "-[TSPDocumentRevision initWithRevisionString:]",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/persistence/src/TSPDocumentRevision.mm",
            66LL);
          v28 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithUTF8String:](
                    &OBJC_CLASS___NSString,
                    "stringWithUTF8String:",
                    "-[TSPDocumentRevision initWithRevisionString:]"));
          v29 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithUTF8String:](
                    &OBJC_CLASS___NSString,
                    "stringWithUTF8String:",
                    "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/"
                    "Sources/iWorkXPC/shared/persistence/src/TSPDocumentRevision.mm"));
          +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
            &OBJC_CLASS___TSUAssertionHandler,
            "handleFailureInFunction:file:lineNumber:isFatal:description:",
            v28,
            v29,
            66LL,
            1LL,
            "Should be able to create UUID from base UUID string.");
          objc_release(v29);
          objc_release(v28);
          TSUCrashBreakpoint();
          abort();
        }
        v19 = objc_retainAutoreleasedReturnValue(
                +[NSUUID tsu_UUIDWithNamespaceUUID:name:](
                  &OBJC_CLASS___NSUUID,
                  "tsu_UUIDWithNamespaceUUID:name:",
                  v18,
                  v12));
        objc_release(v18);
        v13 = v19;
      }
    }
    else
    {
      v30[0] = 0LL;
      v30[1] = 0LL;
      v13 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSUUID), "initWithUUIDBytes:", v30);
    }
    self = objc_retain(-[TSPDocumentRevision initWithSequence:identifier:](self, "initWithSequence:identifier:", v7, v13));
    objc_release(v13);
    objc_release(v12);
    v24 = self;
  }
  else
  {
    if ( objc_msgSend(v4, "length") )
    {
      v20 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D2390);
      v21 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016B1DC(v4, v20, v21);
      v22 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSPDocumentRevision initWithRevisionString:]"));
      v23 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPDocumentRevision.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v22,
        v23,
        74LL,
        0LL,
        "Revision string is in invalid format: %{public}@",
        v4);
      objc_release(v23);
      objc_release(v22);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    v24 = 0LL;
  }
  objc_release(v5);
  objc_release(v4);
  objc_release(self);
  return v24;
}