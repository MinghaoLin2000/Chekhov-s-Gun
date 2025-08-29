-[TSUUUIDPath initWithUUIDPathString:]
TSUUUIDPath *__cdecl -[TSUUUIDPath initWithUUIDPathString:](TSUUUIDPath *self, SEL a2, id a3)
{
  id v4; // x20
  id v5; // x21
  void *v6; // x22
  id v7; // x23
  void *v8; // x0
  void *v9; // x24
  __int64 v10; // x26
  void *i; // x28
  void *v12; // x0
  void *v13; // x25
  TSUUUIDPath *v14; // x23
  __int64 v15; // x24
  void *v16; // x25
  NSString *v17; // x25
  NSString *v18; // x26
  __int128 v20; // [xsp+10h] [xbp-120h] BYREF
  __int128 v21; // [xsp+20h] [xbp-110h]
  __int128 v22; // [xsp+30h] [xbp-100h]
  __int128 v23; // [xsp+40h] [xbp-F0h]
  _BYTE v24[128]; // [xsp+50h] [xbp-E0h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[TSUUUIDPath tokenizeUUIDPathString:](&OBJC_CLASS___TSUUUIDPath, "tokenizeUUIDPathString:", v4));
  v6 = objc_msgSend(v5, "count");
  if ( v6 )
  {
    v6 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableArray), "initWithCapacity:", v6);
    v20 = 0u;
    v21 = 0u;
    v22 = 0u;
    v23 = 0u;
    v7 = objc_retain(v5);
    v8 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v20, v24, 16LL);
    if ( v8 )
    {
      v9 = v8;
      v10 = *(_QWORD *)v21;
      while ( 2 )
      {
        for ( i = 0LL; i != v9; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v21 != v10 )
            objc_enumerationMutation(v7);
          v12 = objc_msgSend(
                  objc_alloc((Class)&OBJC_CLASS___NSUUID),
                  "initWithUUIDString:",
                  *(_QWORD *)(*((_QWORD *)&v20 + 1) + 8LL * (_QWORD)i));
          if ( !v12 )
          {
            v15 = +[TSUAssertionHandler _atomicIncrementAssertCount](
                    &OBJC_CLASS___TSUAssertionHandler,
                    "_atomicIncrementAssertCount");
            if ( TSUAssertCat_init_token != -1 )
              dispatch_once(&TSUAssertCat_init_token, &stru_1001DC768);
            v16 = TSUAssertCat_log_t;
            if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
              sub_10016E5E0(v4, v15, v16);
            v17 = objc_retainAutoreleasedReturnValue(
                    +[NSString stringWithUTF8String:](
                      &OBJC_CLASS___NSString,
                      "stringWithUTF8String:",
                      "-[TSUUUIDPath initWithUUIDPathString:]"));
            v18 = objc_retainAutoreleasedReturnValue(
                    +[NSString stringWithUTF8String:](
                      &OBJC_CLASS___NSString,
                      "stringWithUTF8String:",
                      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xb"
                      "s/Sources/iWorkXPC/shared/utility/TSUUUIDPath.m"));
            +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
              &OBJC_CLASS___TSUAssertionHandler,
              "handleFailureInFunction:file:lineNumber:isFatal:description:",
              v17,
              v18,
              50LL,
              0LL,
              "Invalid UUID path string: %{public}@",
              v4);
            objc_release(v18);
            objc_release(v17);
            +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
            objc_release(v7);
            v14 = 0LL;
            goto LABEL_17;
          }
          v13 = v12;
          objc_msgSend(v6, "addObject:", v12);
          objc_release(v13);
        }
        v9 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v20, v24, 16LL);
        if ( v9 )
          continue;
        break;
      }
    }
    objc_release(v7);
  }
  self = objc_retain(-[TSUUUIDPath initWithArray:](self, "initWithArray:", v6));
  v14 = self;
LABEL_17:
  objc_release(v5);
  objc_release(v6);
  objc_release(v4);
  objc_release(self);
  return v14;
}