-[TSPSnappyReadChannel processData:isDone:handler:]
bool __cdecl -[TSPSnappyReadChannel processData:isDone:handler:](
        TSPSnappyReadChannel *self,
        SEL a2,
        id *a3,
        bool a4,
        id a5)
{
  _BOOL4 v5; // w21
  void (__fastcall **v8)(id, _BOOL8, id, _QWORD); // x19
  id v9; // x23
  size_t size; // x22
  unsigned __int64 v11; // x23
  unsigned __int64 i; // x20
  const void *v13; // x1
  size_t v14; // x26
  unsigned __int64 v15; // x20
  id v16; // x26
  _BOOL8 v17; // x1
  void *v18; // x20
  os_log_s *v19; // x20
  id v20; // x21
  bool v21; // w24
  __int64 v23; // x20
  void *v24; // x21
  NSString *v25; // x21
  NSString *v26; // x22
  dispatch_data_t *v27; // [xsp+28h] [xbp-A8h]
  uint8_t buf[8]; // [xsp+30h] [xbp-A0h] BYREF
  char v29; // [xsp+3Ch] [xbp-94h] BYREF
  unsigned __int16 v30; // [xsp+3Dh] [xbp-93h]
  unsigned __int8 v31; // [xsp+3Fh] [xbp-91h]
  _BYTE v32[64]; // [xsp+40h] [xbp-90h] BYREF

  v5 = a4;
  v8 = (void (__fastcall **)(id, _BOOL8, id, _QWORD))objc_retain(a5);
  v9 = *a3;
  if ( !*a3 )
  {
    v23 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D1558);
    v24 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100169708(v23, v24);
    TSUSetCrashReporterInfo(
      "Fatal Assertion failure: %{public}s %{public}s:%d Should have data by now",
      "-[TSPSnappyReadChannel processData:isDone:handler:]",
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/src/TSPSnappyReadChannel.mm",
      67LL);
    v25 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPSnappyReadChannel processData:isDone:handler:]"));
    v26 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPSnappyReadChannel.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v25,
      v26,
      67LL,
      1LL,
      "Should have data by now");
    objc_release(v26);
    objc_release(v25);
    TSUCrashBreakpoint();
    abort();
  }
  size = dispatch_data_get_size((dispatch_data_t)*a3);
  TSP::SnappySource::SnappySource((int)v32, v9);
  v27 = (dispatch_data_t *)a3;
  v11 = 0LL;
  if ( size )
  {
    while ( (unsigned __int64)TSP::SnappySource::Available((TSP::SnappySource *)v32) > 3 )
    {
      for ( i = 0LL; i < 4; i += v14 )
      {
        *(_QWORD *)buf = 0LL;
        v13 = (const void *)TSP::SnappySource::Peek((TSP::SnappySource *)v32, (unsigned __int64 *)buf);
        if ( 4 - i >= *(_QWORD *)buf )
          v14 = *(_QWORD *)buf;
        else
          v14 = 4 - i;
        memcpy(&v29 + i, v13, v14);
        TSP::SnappySource::Skip((TSP::SnappySource *)v32, v14);
      }
      if ( v29 )
      {
        if ( TSUDefaultCat_init_token != -1 )
          dispatch_once(&TSUDefaultCat_init_token, &stru_1001D15B8);
        v19 = (os_log_s *)TSUDefaultCat_log_t;
        if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
          sub_1001697D0(buf, (int)&buf[1], v19);
        goto LABEL_36;
      }
      v15 = (v30 | (v31 << 16)) & 0xFFFFFFLL;
      if ( TSP::SnappySource::Available((TSP::SnappySource *)v32) < v15 )
      {
        if ( !v5 )
          goto LABEL_37;
        if ( TSUDefaultCat_init_token != -1 )
          dispatch_once(&TSUDefaultCat_init_token, &stru_1001D1598);
        v18 = TSUDefaultCat_log_t;
        if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
          goto LABEL_35;
        goto LABEL_36;
      }
      v11 = TSP::SnappySource::Offset((TSP::SnappySource *)v32) + v15;
      TSP::SnappySource::SetMaxOffset((TSP::SnappySource *)v32, v11);
      v16 = objc_retainAutoreleasedReturnValue(-[TSPSnappyReadChannel uncompressDataFromSource:](self, "uncompressDataFromSource:", v32));
      if ( v16 )
      {
        v17 = v11 == size && v5;
        v8[2](v8, v17, v16, 0LL);
      }
      TSP::SnappySource::SetMaxOffset((TSP::SnappySource *)v32, size);
      TSP::SnappySource::SetOffset((TSP::SnappySource *)v32, v11);
      objc_release(v16);
      if ( !v16 || v11 >= size )
      {
        if ( v16 )
          goto LABEL_19;
        goto LABEL_36;
      }
    }
    if ( !v5 )
      goto LABEL_37;
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001D1578);
    v18 = TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
LABEL_35:
      sub_10016979C(v18);
LABEL_36:
    v20 = objc_retainAutoreleasedReturnValue(
            +[NSError tsp_readCorruptedDocumentErrorWithUserInfo:](
              &OBJC_CLASS___NSError,
              "tsp_readCorruptedDocumentErrorWithUserInfo:",
              0LL));
    ((void (__fastcall **)(id, _BOOL8, id, id))v8)[2](v8, 1LL, 0LL, v20);
    objc_release(v20);
    v21 = 0;
  }
  else
  {
LABEL_19:
    if ( !size && v5 )
      v8[2](v8, 1LL, 0LL, 0LL);
LABEL_37:
    v21 = 1;
    if ( v11 && !v5 )
      *v27 = objc_autorelease(dispatch_data_create_subrange(*v27, v11, size - v11));
  }
  TSP::SnappySource::~SnappySource((TSP::SnappySource *)v32);
  objc_release(v8);
  return v21;
}