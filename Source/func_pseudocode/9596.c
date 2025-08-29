__ZN3TSP12SnappySource4PeekEPm
__int64 __fastcall TSP::SnappySource::Peek(TSP::SnappySource *this, unsigned __int64 *a2)
{
  size_t v3; // x1
  dispatch_data_t v5; // x0
  void *v6; // x8
  dispatch_data_s *v7; // x0
  __int64 v8; // x21
  void *v9; // x22
  NSString *v10; // x21
  NSString *v11; // x23
  dispatch_data_t map; // x0
  void *v13; // x8
  __int64 v14; // x21
  void *v15; // x22
  NSString *v16; // x21
  NSString *v17; // x23
  __int64 v18; // x10
  __int64 v19; // x8
  unsigned __int64 v20; // x9
  unsigned __int64 v21; // x10
  __int64 result; // x0

  v3 = *((_QWORD *)this + 3);
  if ( v3 >= *((_QWORD *)this + 2) )
  {
    result = 0LL;
    *a2 = 0LL;
  }
  else
  {
    if ( !*((_QWORD *)this + 4) )
    {
      v5 = dispatch_data_copy_region(*((dispatch_data_t *)this + 1), v3, (size_t *)this + 5);
      v6 = (void *)*((_QWORD *)this + 4);
      *((_QWORD *)this + 4) = v5;
      objc_release(v6);
      v7 = (dispatch_data_s *)*((_QWORD *)this + 4);
      if ( !v7 )
      {
        v8 = +[TSUAssertionHandler _atomicIncrementAssertCount](
               &OBJC_CLASS___TSUAssertionHandler,
               "_atomicIncrementAssertCount");
        if ( TSUAssertCat_init_token != -1 )
          dispatch_once(&TSUAssertCat_init_token, &stru_1001D39D8);
        v9 = TSUAssertCat_log_t;
        if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
          sub_10016CFF4(v8, v9);
        v10 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithUTF8String:](
                  &OBJC_CLASS___NSString,
                  "stringWithUTF8String:",
                  "virtual const char *TSP::SnappySource::Peek(size_t *)"));
        v11 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithUTF8String:](
                  &OBJC_CLASS___NSString,
                  "stringWithUTF8String:",
                  "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/So"
                  "urces/iWorkXPC/shared/persistence/src/TSPSnappySource.mm"));
        +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
          &OBJC_CLASS___TSUAssertionHandler,
          "handleFailureInFunction:file:lineNumber:isFatal:description:",
          v10,
          v11,
          33LL,
          0LL,
          "Couldn't get region");
        objc_release(v11);
        objc_release(v10);
        +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
        v7 = (dispatch_data_s *)*((_QWORD *)this + 4);
      }
      map = dispatch_data_create_map(v7, (const void **)this + 7, (size_t *)this + 6);
      v13 = (void *)*((_QWORD *)this + 4);
      *((_QWORD *)this + 4) = map;
      objc_release(v13);
      if ( !*((_QWORD *)this + 4) )
      {
        v14 = +[TSUAssertionHandler _atomicIncrementAssertCount](
                &OBJC_CLASS___TSUAssertionHandler,
                "_atomicIncrementAssertCount");
        if ( TSUAssertCat_init_token != -1 )
          dispatch_once(&TSUAssertCat_init_token, &stru_1001D39F8);
        v15 = TSUAssertCat_log_t;
        if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
          sub_10016CF60(v14, v15);
        v16 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithUTF8String:](
                  &OBJC_CLASS___NSString,
                  "stringWithUTF8String:",
                  "virtual const char *TSP::SnappySource::Peek(size_t *)"));
        v17 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithUTF8String:](
                  &OBJC_CLASS___NSString,
                  "stringWithUTF8String:",
                  "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/So"
                  "urces/iWorkXPC/shared/persistence/src/TSPSnappySource.mm"));
        +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
          &OBJC_CLASS___TSUAssertionHandler,
          "handleFailureInFunction:file:lineNumber:isFatal:description:",
          v16,
          v17,
          36LL,
          0LL,
          "Couldn't map region");
        objc_release(v17);
        objc_release(v16);
        +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
      }
    }
    v18 = *((_QWORD *)this + 3);
    v19 = v18 - *((_QWORD *)this + 5);
    v20 = *((_QWORD *)this + 6) - v19;
    v21 = *((_QWORD *)this + 2) - v18;
    if ( v20 >= v21 )
      v20 = v21;
    *a2 = v20;
    return *((_QWORD *)this + 7) + v19;
  }
  return result;
}