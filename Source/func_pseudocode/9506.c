-[TSPDocumentProperties setAdditionalProperties:]
void __cdecl -[TSPDocumentProperties setAdditionalProperties:](TSPDocumentProperties *self, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x22
  __int64 v5; // x28
  void *v6; // x20
  __int64 v7; // x21
  id v8; // x0
  bool v9; // w23
  unsigned int v10; // w26
  os_log_s *v11; // x23
  NSString *v12; // x26
  NSString *v13; // x23
  NSDictionary *v14; // x0
  NSDictionary *additionalProperties; // x8
  id obj; // [xsp+28h] [xbp-158h]
  __int128 v18; // [xsp+30h] [xbp-150h] BYREF
  __int128 v19; // [xsp+40h] [xbp-140h]
  __int128 v20; // [xsp+50h] [xbp-130h]
  __int128 v21; // [xsp+60h] [xbp-120h]
  uint8_t buf[4]; // [xsp+70h] [xbp-110h] BYREF
  unsigned int v23; // [xsp+74h] [xbp-10Ch]
  __int16 v24; // [xsp+78h] [xbp-108h]
  const char *v25; // [xsp+7Ah] [xbp-106h]
  __int16 v26; // [xsp+82h] [xbp-FEh]
  const char *v27; // [xsp+84h] [xbp-FCh]
  __int16 v28; // [xsp+8Ch] [xbp-F4h]
  int v29; // [xsp+8Eh] [xbp-F2h]
  __int16 v30; // [xsp+92h] [xbp-EEh]
  __int64 v31; // [xsp+94h] [xbp-ECh]
  _BYTE v32[128]; // [xsp+A0h] [xbp-E0h] BYREF

  v3 = objc_retain(a3);
  v18 = 0u;
  v19 = 0u;
  v20 = 0u;
  v21 = 0u;
  obj = objc_retainAutoreleasedReturnValue((id)sub_100034F88(v3));
  v4 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v18, v32, 16LL);
  if ( v4 )
  {
    v5 = *(_QWORD *)v19;
    do
    {
      v6 = 0LL;
      do
      {
        if ( *(_QWORD *)v19 != v5 )
          objc_enumerationMutation(obj);
        v7 = *(_QWORD *)(*((_QWORD *)&v18 + 1) + 8LL * (_QWORD)v6);
        v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", v7));
        v9 = v8 == 0LL;
        objc_release(v8);
        if ( !v9 )
        {
          v10 = +[TSUAssertionHandler _atomicIncrementAssertCount](
                  &OBJC_CLASS___TSUAssertionHandler,
                  "_atomicIncrementAssertCount");
          if ( TSUAssertCat_init_token != -1 )
            dispatch_once(&TSUAssertCat_init_token, &stru_1001D3628);
          v11 = (os_log_s *)TSUAssertCat_log_t;
          if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
          {
            *(_DWORD *)buf = 67110146;
            v23 = v10;
            v24 = 2082;
            v25 = "-[TSPDocumentProperties setAdditionalProperties:]";
            v26 = 2082;
            v27 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/So"
                  "urces/iWorkXPC/shared/persistence/src/TSPDocumentProperties.mm";
            v28 = 1024;
            v29 = 445;
            v30 = 2114;
            v31 = v7;
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              v11,
              OS_LOG_TYPE_ERROR,
              "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Added property overwrites %{public}@",
              buf,
              0x2Cu);
          }
          v12 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithUTF8String:](
                    &OBJC_CLASS___NSString,
                    "stringWithUTF8String:",
                    "-[TSPDocumentProperties setAdditionalProperties:]"));
          v13 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithUTF8String:](
                    &OBJC_CLASS___NSString,
                    "stringWithUTF8String:",
                    "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/"
                    "Sources/iWorkXPC/shared/persistence/src/TSPDocumentProperties.mm"));
          +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
            &OBJC_CLASS___TSUAssertionHandler,
            "handleFailureInFunction:file:lineNumber:isFatal:description:",
            v12,
            v13,
            445LL,
            0LL,
            "Added property overwrites %{public}@",
            v7);
          objc_release(v13);
          objc_release(v12);
          +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
        }
        v6 = (char *)v6 + 1;
      }
      while ( v4 != v6 );
      v4 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v18, v32, 16LL);
    }
    while ( v4 );
  }
  objc_release(obj);
  v14 = (NSDictionary *)objc_msgSend(v3, "copy");
  additionalProperties = self->_additionalProperties;
  self->_additionalProperties = v14;
  objc_release(additionalProperties);
  objc_release(v3);
}