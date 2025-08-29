-[TSPDocumentRevision initWithSequence:identifier:]
TSPDocumentRevision *__cdecl -[TSPDocumentRevision initWithSequence:identifier:](
        TSPDocumentRevision *self,
        SEL a2,
        int a3,
        id a4)
{
  id v6; // x19
  TSPDocumentRevision *v7; // x0
  TSPDocumentRevision *v8; // x22
  NSUUID *v9; // x0
  NSUUID *identifier; // x8
  TSPDocumentRevision *v11; // x21
  __int64 v12; // x21
  void *v13; // x22
  NSString *v14; // x21
  NSString *v15; // x23
  objc_super v17; // [xsp+0h] [xbp-40h] BYREF

  v6 = objc_retain(a4);
  if ( v6 )
  {
    v17.receiver = self;
    v17.super_class = (Class)&OBJC_CLASS___TSPDocumentRevision;
    v7 = -[TSPDocumentRevision init](&v17, "init");
    v8 = v7;
    if ( v7 )
    {
      v7->_sequence = a3;
      v9 = (NSUUID *)objc_msgSend(v6, "copy");
      identifier = v8->_identifier;
      v8->_identifier = v9;
      objc_release(identifier);
    }
    self = objc_retain(v8);
    v11 = self;
  }
  else
  {
    v12 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D2310);
    v13 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016AFB4(v12, v13);
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPDocumentRevision initWithSequence:identifier:]"));
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPDocumentRevision.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v14,
      v15,
      28LL,
      0LL,
      "Document revision identifier should not be nil.");
    objc_release(v15);
    objc_release(v14);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    v11 = 0LL;
  }
  objc_release(v6);
  objc_release(self);
  return v11;
}