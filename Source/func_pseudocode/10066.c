-[TSPComponentWriteChannelAdapter initWithChannel:handler:]
TSPComponentWriteChannelAdapter *__cdecl -[TSPComponentWriteChannelAdapter initWithChannel:handler:](
        TSPComponentWriteChannelAdapter *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  id v8; // x22
  dispatch_queue_attr_s *v9; // x21
  dispatch_queue_t v10; // x0
  void *v11; // x8
  id v12; // x0
  void *v13; // x8
  id v14; // x0
  __int64 v15; // x22
  void *v16; // x23
  NSString *v17; // x22
  NSString *v18; // x24
  objc_super v20; // [xsp+10h] [xbp-50h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  if ( !v6 )
  {
    v15 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D5538);
    v16 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016D8E8(v15, v16);
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPComponentWriteChannelAdapter initWithChannel:handler:]"));
    v18 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/NSData_TSPersistence.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v17,
      v18,
      254LL,
      0LL,
      "Invalid parameter not satisfying: %{public}s",
      "channel");
    objc_release(v18);
    objc_release(v17);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    v8 = 0LL;
    goto LABEL_9;
  }
  v20.receiver = self;
  v20.super_class = (Class)&OBJC_CLASS___TSPComponentWriteChannelAdapter;
  v8 = -[TSPComponentWriteChannelAdapter init](&v20, "init");
  if ( v8 )
  {
    v9 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v10 = dispatch_queue_create("TSPComponentWriteChannelAdapter.Write", v9);
    v11 = (void *)*((_QWORD *)v8 + 1);
    *((_QWORD *)v8 + 1) = v10;
    objc_release(v11);
    objc_release(v9);
    dispatch_queue_set_specific(*((dispatch_queue_t *)v8 + 1), off_1001F5D88, off_1001F5D88, 0LL);
    v12 = objc_retainBlock(v7);
    v13 = (void *)*((_QWORD *)v8 + 3);
    *((_QWORD *)v8 + 3) = v12;
    objc_release(v13);
    v14 = objc_retain(v6);
    self = (TSPComponentWriteChannelAdapter *)*((_QWORD *)v8 + 2);
    *((_QWORD *)v8 + 2) = v14;
LABEL_9:
    objc_release(self);
  }
  objc_release(v7);
  objc_release(v6);
  return (TSPComponentWriteChannelAdapter *)v8;
}