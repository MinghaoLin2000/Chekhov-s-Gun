-[TSUUUIDPath initWithArray:]
TSUUUIDPath *__cdecl -[TSUUUIDPath initWithArray:](TSUUUIDPath *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 v5; // x21
  id v6; // x19
  void *v7; // x0
  void *v8; // x23
  __int64 v9; // x24
  void *i; // x25
  __int64 v11; // x22
  TSUUUIDPath *v12; // x0
  TSUUUIDPath *v13; // x20
  NSArray *v14; // x8
  NSArray *uuids; // x0
  __int64 v16; // x21
  void *v17; // x23
  NSString *v18; // x23
  NSString *v19; // x24
  TSUUUIDPath *v20; // x21
  objc_super v22; // [xsp+10h] [xbp-120h] BYREF
  __int128 v23; // [xsp+20h] [xbp-110h] BYREF
  __int128 v24; // [xsp+30h] [xbp-100h]
  __int128 v25; // [xsp+40h] [xbp-F0h]
  __int128 v26; // [xsp+50h] [xbp-E0h]
  _BYTE v27[128]; // [xsp+68h] [xbp-C8h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_opt_class(&OBJC_CLASS___NSUUID);
  v23 = 0u;
  v24 = 0u;
  v25 = 0u;
  v26 = 0u;
  v6 = objc_retain(v4);
  v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v23, v27, 16LL);
  if ( v7 )
  {
    v8 = v7;
    v9 = *(_QWORD *)v24;
    while ( 2 )
    {
      for ( i = 0LL; i != v8; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v24 != v9 )
          objc_enumerationMutation(v6);
        v11 = *(_QWORD *)(*((_QWORD *)&v23 + 1) + 8LL * (_QWORD)i);
        if ( (objc_opt_isKindOfClass(v11, v5) & 1) == 0 )
        {
          v16 = +[TSUAssertionHandler _atomicIncrementAssertCount](
                  &OBJC_CLASS___TSUAssertionHandler,
                  "_atomicIncrementAssertCount");
          if ( TSUAssertCat_init_token != -1 )
            dispatch_once(&TSUAssertCat_init_token, &stru_1001DC748);
          v17 = TSUAssertCat_log_t;
          if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
            sub_10016E554(v11, v16, v17);
          v18 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithUTF8String:](
                    &OBJC_CLASS___NSString,
                    "stringWithUTF8String:",
                    "-[TSUUUIDPath initWithArray:]"));
          v19 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithUTF8String:](
                    &OBJC_CLASS___NSString,
                    "stringWithUTF8String:",
                    "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/"
                    "Sources/iWorkXPC/shared/utility/TSUUUIDPath.m"));
          +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
            &OBJC_CLASS___TSUAssertionHandler,
            "handleFailureInFunction:file:lineNumber:isFatal:description:",
            v18,
            v19,
            26LL,
            0LL,
            "Invalid entry for TSUUUIDPath array: %{public}@",
            v11);
          objc_release(v19);
          objc_release(v18);
          +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
          objc_release(v6);
          v20 = 0LL;
          goto LABEL_20;
        }
      }
      v8 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v23, v27, 16LL);
      if ( v8 )
        continue;
      break;
    }
  }
  objc_release(v6);
  v22.receiver = self;
  v22.super_class = (Class)&OBJC_CLASS___TSUUUIDPath;
  v12 = -[TSUUUIDPath init](&v22, "init");
  v13 = v12;
  if ( v12 )
  {
    if ( v6 )
    {
      v14 = (NSArray *)objc_msgSend(v6, "copy");
      uuids = v13->_uuids;
    }
    else
    {
      uuids = v12->_uuids;
      v14 = (NSArray *)&__NSArray0__struct;
    }
    v13->_uuids = v14;
    objc_release(uuids);
  }
  self = objc_retain(v13);
  v20 = self;
LABEL_20:
  objc_release(v6);
  objc_release(self);
  return v20;
}