__ZNK3TSP21ObjectStateIdentifier9dataStateEv
__int64 __fastcall TSP::ObjectStateIdentifier::dataState(TSP::ObjectStateIdentifier *this)
{
  __int64 v2; // x20
  void *v3; // x21
  NSString *v4; // x20
  NSString *v5; // x22

  if ( !*(_BYTE *)this )
  {
    v2 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D53F8);
    v3 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016D77C(v2, v3);
    v4 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "int64_t TSP::ObjectStateIdentifier::dataState() const"));
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/persistence/src/TSPObjectStateIdentifier.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v4,
      v5,
      30LL,
      0LL,
      "Asked for data state when we have none");
    objc_release(v5);
    objc_release(v4);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  return *((_QWORD *)this + 1);
}