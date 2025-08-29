-[NSArray tsu_arrayByRemovingFirstObject]
id __cdecl -[NSArray tsu_arrayByRemovingFirstObject](NSArray *self, SEL a2)
{
  NSMutableArray *v3; // x20
  void *v4; // x0
  __int64 v6; // x19
  void *v7; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  if ( !-[NSArray count](self, "count") )
  {
    v6 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DC5F8);
    v7 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016E294(v6, v7);
    TSUSetCrashReporterInfo(
      "Fatal Assertion failure: %{public}s %{public}s:%d Can't remove the first object of an empty array!",
      "-[NSArray(TSUAdditions) tsu_arrayByRemovingFirstObject]",
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/utility/NSArrayAdditions.m",
      231LL);
    TSUCrashBreakpoint(
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "-[NSArray(TSUAdditions) tsu_arrayByRemovingFirstObject]"),
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/utility/NSArrayAdditions.m"),
        231LL,
        1LL,
        "Can't remove the first object of an empty array!"));
    abort();
  }
  v3 = +[NSMutableArray arrayWithArray:](&OBJC_CLASS___NSMutableArray, "arrayWithArray:", self);
  -[NSMutableArray removeObjectAtIndex:](v3, "removeObjectAtIndex:", 0LL);
  v4 = (void *)objc_opt_class(self);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_msgSend(v4, "arrayWithArray:", v3);
}