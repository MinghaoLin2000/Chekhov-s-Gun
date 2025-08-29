+[TSPDocumentRevision documentRevisionAtURL:passphrase:error:]
id __cdecl +[TSPDocumentRevision documentRevisionAtURL:passphrase:error:](id a1, SEL a2, id a3, id a4, id *a5)
{
  id v5; // x19
  __int64 v6; // x20
  void *v7; // x21
  NSString *v8; // x20
  NSString *v9; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retainAutoreleasedReturnValue(
         +[TSPDocumentProperties documentRevisionAtURL:](
           &OBJC_CLASS___TSPDocumentProperties,
           "documentRevisionAtURL:",
           a3,
           a4,
           a5));
  if ( !v5 )
  {
    v6 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D23B0);
    v7 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016B268(v6, v7);
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "+[TSPDocumentRevision documentRevisionAtURL:passphrase:error:]"));
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/persistence/src/TSPDocumentRevision.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v8,
      v9,
      92LL,
      0LL,
      "Assumed that we'd never need to ask TSPOC for a document revision in iWorkXPC");
    objc_release(v9);
    objc_release(v8);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}