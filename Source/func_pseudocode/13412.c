-[TSUTemporaryDirectory path]
id __cdecl -[TSUTemporaryDirectory path](TSUTemporaryDirectory *self, SEL a2)
{
  NSString *path; // x0
  __int64 v4; // x20
  void *v5; // x21
  NSString *v6; // x21
  NSString *v7; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  path = self->_path;
  if ( !path )
  {
    v4 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DF068);
    v5 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100173FB4(v4, v5);
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSUTemporaryDirectory path]"));
    v7 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/utility/TSUTemporaryDirectory.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v6,
      v7,
      69LL,
      0LL,
      "Directory has already been removed");
    objc_release(v7);
    objc_release(v6);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    path = self->_path;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(path);
}