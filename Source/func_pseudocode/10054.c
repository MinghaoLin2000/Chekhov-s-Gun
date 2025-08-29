__ZNK3TSP21ObjectStateIdentifier9fileStateEv
id __fastcall TSP::ObjectStateIdentifier::fileState(TSP::ObjectStateIdentifier *this)
{
  __int64 v2; // x20
  void *v3; // x21
  NSString *v4; // x20
  NSString *v5; // x22
  void *v6; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( !*((_BYTE *)this + 16) )
  {
    v2 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D5418);
    v3 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016D810(v2, v3);
    v4 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "NSString *TSP::ObjectStateIdentifier::fileState() const"));
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
      45LL,
      0LL,
      "Asked for file state when we have none");
    objc_release(v5);
    objc_release(v4);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v6 = (void *)*((_QWORD *)this + 3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v6);
}