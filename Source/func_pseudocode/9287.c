-[TSPDocumentRevision nextRevisionWithIdentifier:]
id __cdecl -[TSPDocumentRevision nextRevisionWithIdentifier:](TSPDocumentRevision *self, SEL a2, id a3)
{
  id v4; // x19
  int v5; // w21
  void *v6; // x22
  NSString *v7; // x0
  NSString *v8; // x21
  NSString *v9; // x22
  NSString *v10; // x24
  void *v11; // x0
  __int64 v12; // x2
  void *v13; // x20
  uint8_t buf[56]; // [xsp+10h] [xbp-80h] BYREF
  __int64 vars8; // [xsp+98h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( self->_sequence == 0x7FFFFFFF )
  {
    v5 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D23D0);
    v6 = objc_retain(TSUAssertCat_log_t);
    if ( os_log_type_enabled((os_log_t)v6, OS_LOG_TYPE_ERROR) )
    {
      v7 = objc_retainAutoreleasedReturnValue(-[TSPDocumentRevision revisionString](self, "revisionString"));
      sub_10016B2F0((int)v7, buf, v5, (os_log_t)v6);
    }
    objc_release(v6);
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSPDocumentRevision nextRevisionWithIdentifier:]"));
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/persistence/src/TSPDocumentRevision.mm"));
    v10 = objc_retainAutoreleasedReturnValue(-[TSPDocumentRevision revisionString](self, "revisionString"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v8,
      v9,
      106LL,
      0LL,
      "Revision will overflow: %{public}@",
      v10);
    objc_release(v10);
    objc_release(v9);
    objc_release(v8);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    v11 = (void *)objc_opt_class(self);
    v12 = 0x80000000LL;
  }
  else
  {
    v11 = (void *)objc_opt_class(self);
    v12 = (unsigned int)(self->_sequence + 1);
  }
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "revisionWithSequence:identifier:", v12, v4));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v13);
}