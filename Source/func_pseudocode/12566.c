-[NSArray tsu_arrayByMappingObjectsUsingBlock:]
id __cdecl -[NSArray tsu_arrayByMappingObjectsUsingBlock:](NSArray *self, SEL a2, id a3)
{
  void *v4; // x0
  void *v5; // x22
  __int64 v6; // x24
  void *v7; // x20
  __int64 v8; // x26
  __int64 v9; // x0
  unsigned int v10; // w27
  os_log_s *v11; // x23
  NSMutableArray *v14; // [xsp+28h] [xbp-158h]
  __int128 v15; // [xsp+30h] [xbp-150h] BYREF
  __int128 v16; // [xsp+40h] [xbp-140h]
  __int128 v17; // [xsp+50h] [xbp-130h]
  __int128 v18; // [xsp+60h] [xbp-120h]
  uint8_t buf[4]; // [xsp+70h] [xbp-110h] BYREF
  unsigned int v20; // [xsp+74h] [xbp-10Ch]
  __int16 v21; // [xsp+78h] [xbp-108h]
  const char *v22; // [xsp+7Ah] [xbp-106h]
  __int16 v23; // [xsp+82h] [xbp-FEh]
  const char *v24; // [xsp+84h] [xbp-FCh]
  __int16 v25; // [xsp+8Ch] [xbp-F4h]
  int v26; // [xsp+8Eh] [xbp-F2h]
  __int16 v27; // [xsp+92h] [xbp-EEh]
  __int64 v28; // [xsp+94h] [xbp-ECh]
  _BYTE v29[128]; // [xsp+A0h] [xbp-E0h] BYREF

  v14 = +[NSMutableArray arrayWithCapacity:](
          &OBJC_CLASS___NSMutableArray,
          "arrayWithCapacity:",
          -[NSArray count](self, "count"));
  v15 = 0u;
  v16 = 0u;
  v17 = 0u;
  v18 = 0u;
  v4 = -[NSArray countByEnumeratingWithState:objects:count:](
         self,
         "countByEnumeratingWithState:objects:count:",
         &v15,
         v29,
         16LL);
  if ( v4 )
  {
    v5 = v4;
    v6 = *(_QWORD *)v16;
    do
    {
      v7 = 0LL;
      do
      {
        if ( *(_QWORD *)v16 != v6 )
          objc_enumerationMutation(self);
        v8 = *(_QWORD *)(*((_QWORD *)&v15 + 1) + 8LL * (_QWORD)v7);
        v9 = (*((__int64 (__fastcall **)(id, __int64))a3 + 2))(a3, v8);
        if ( v9 )
        {
          -[NSMutableArray addObject:](v14, "addObject:", v9);
        }
        else
        {
          v10 = +[TSUAssertionHandler _atomicIncrementAssertCount](
                  &OBJC_CLASS___TSUAssertionHandler,
                  "_atomicIncrementAssertCount");
          if ( TSUAssertCat_init_token != -1 )
            dispatch_once(&TSUAssertCat_init_token, &stru_1001DC678);
          v11 = (os_log_s *)TSUAssertCat_log_t;
          if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
          {
            *(_DWORD *)buf = 67110146;
            v20 = v10;
            v21 = 2082;
            v22 = "-[NSArray(TSUAdditions) tsu_arrayByMappingObjectsUsingBlock:]";
            v23 = 2082;
            v24 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/So"
                  "urces/iWorkXPC/shared/utility/NSArrayAdditions.m";
            v25 = 1024;
            v26 = 362;
            v27 = 2112;
            v28 = v8;
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              v11,
              OS_LOG_TYPE_ERROR,
              "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Block returned a nil object for %@.",
              buf,
              0x2Cu);
          }
          +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
            &OBJC_CLASS___TSUAssertionHandler,
            "handleFailureInFunction:file:lineNumber:isFatal:description:",
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[NSArray(TSUAdditions) tsu_arrayByMappingObjectsUsingBlock:]"),
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/NSArrayAdditions.m"),
            362LL,
            0LL,
            "Block returned a nil object for %@.",
            v8);
          +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
        }
        v7 = (char *)v7 + 1;
      }
      while ( v5 != v7 );
      v5 = -[NSArray countByEnumeratingWithState:objects:count:](
             self,
             "countByEnumeratingWithState:objects:count:",
             &v15,
             v29,
             16LL);
    }
    while ( v5 );
  }
  return objc_autorelease(-[NSMutableArray copy](v14, "copy"));
}