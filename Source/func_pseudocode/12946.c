-[TSUBufferedReadChannel initWithReadChannel:sourceReadBufferSize:blockInfos:streamReadChannelBlock:]
TSUBufferedReadChannel *__cdecl -[TSUBufferedReadChannel initWithReadChannel:sourceReadBufferSize:blockInfos:streamReadChannelBlock:](
        TSUBufferedReadChannel *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id a5,
        id a6)
{
  id v11; // x19
  id v12; // x20
  id v13; // x21
  id v14; // x22
  dispatch_queue_attr_s *v15; // x25
  dispatch_queue_t v16; // x0
  void *v17; // x8
  void *v18; // x0
  void *v19; // x8
  id v20; // x0
  void *v21; // x8
  __int64 v22; // x25
  void *v23; // x26
  NSString *v24; // x26
  NSString *v25; // x27
  __int64 v26; // x25
  void *v27; // x26
  NSString *v28; // x26
  NSString *v29; // x27
  __int64 v30; // x23
  void *v31; // x24
  NSString *v32; // x24
  NSString *v33; // x25
  objc_super v35; // [xsp+10h] [xbp-60h] BYREF

  v11 = objc_retain(a3);
  v12 = objc_retain(a5);
  v13 = objc_retain(a6);
  v35.receiver = self;
  v35.super_class = (Class)&OBJC_CLASS___TSUBufferedReadChannel;
  v14 = -[TSUBufferedReadChannel init](&v35, "init");
  if ( v14 )
  {
    if ( v11 )
    {
      if ( v13 )
        goto LABEL_4;
    }
    else
    {
      v22 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001DDA50);
      v23 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_100170D4C(v22, v23);
      v24 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSUBufferedReadChannel initWithReadChannel:sourceReadBufferSize:blockInfos:streamReadChannelBlock:]"));
      v25 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/utility/TSUBufferedReadChannel.m"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v24,
        v25,
        70LL,
        0LL,
        "invalid nil value for '%{public}s'",
        "sourceReadChannel");
      objc_release(v25);
      objc_release(v24);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
      if ( v13 )
      {
LABEL_4:
        if ( a4 )
          goto LABEL_5;
        goto LABEL_18;
      }
    }
    v26 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DDA70);
    v27 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100170CB8(v26, v27);
    v28 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSUBufferedReadChannel initWithReadChannel:sourceReadBufferSize:blockInfos:streamReadChannelBlock:]"));
    v29 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUBufferedReadChannel.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v28,
      v29,
      71LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "streamReadChannelBlock");
    objc_release(v29);
    objc_release(v28);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    if ( a4 )
    {
LABEL_5:
      if ( v11 && v13 )
      {
        v15 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
        v16 = dispatch_queue_create("TSUBufferedReadChannel.Read", v15);
        v17 = (void *)*((_QWORD *)v14 + 1);
        *((_QWORD *)v14 + 1) = v16;
        objc_release(v17);
        objc_release(v15);
        dispatch_queue_set_specific(*((dispatch_queue_t *)v14 + 1), off_1001F7208, off_1001F7208, 0LL);
        objc_storeStrong((id *)v14 + 2, a3);
        *((_QWORD *)v14 + 3) = a4;
        *((_QWORD *)v14 + 4) = 0x7FFFFFFFFFFFFFFFLL;
        v18 = objc_msgSend(v12, "copy");
        v19 = (void *)*((_QWORD *)v14 + 7);
        *((_QWORD *)v14 + 7) = v18;
        objc_release(v19);
        v20 = objc_retainBlock(v13);
        v21 = (void *)*((_QWORD *)v14 + 8);
        *((_QWORD *)v14 + 8) = v20;
        objc_release(v21);
        *((_QWORD *)v14 + 12) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_24;
      }
LABEL_23:
      objc_release(v14);
      v14 = 0LL;
      goto LABEL_24;
    }
LABEL_18:
    v30 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DDA90);
    v31 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100170C24(v30, v31);
    v32 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSUBufferedReadChannel initWithReadChannel:sourceReadBufferSize:blockInfos:streamReadChannelBlock:]"));
    v33 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUBufferedReadChannel.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v32,
      v33,
      72LL,
      0LL,
      "Buffer size too small: %zu",
      0LL);
    objc_release(v33);
    objc_release(v32);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    goto LABEL_23;
  }
LABEL_24:
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  return (TSUBufferedReadChannel *)v14;
}