-[NSObject tsu_removeObserverForToken:]
void __cdecl -[NSObject tsu_removeObserverForToken:](NSObject *self, SEL a2, id a3)
{
  __int64 v5; // x0
  void *v6; // x0
  void *v7; // x19
  int v8; // w21
  os_log_s *v9; // x22
  id AssociatedObject; // x20

  v5 = objc_opt_class(&OBJC_CLASS___TSUKVOToken);
  v6 = (void *)TSUDynamicCast(v5, a3);
  if ( v6 )
  {
    v7 = v6;
    if ( objc_msgSend(v6, "target") != self )
    {
      v8 = +[TSUAssertionHandler _atomicIncrementAssertCount](
             &OBJC_CLASS___TSUAssertionHandler,
             "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001DC378);
      v9 = (os_log_s *)TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016DE2C((int)self, v8, v9);
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "-[NSObject(TSUAdditions) tsu_removeObserverForToken:]"),
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/utility/NSObject_TSUAdditions.m"),
        211LL,
        0LL,
        "Attempted to stop key-value observing on %@ using a token that it was not associated with",
        self);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    AssociatedObject = objc_getAssociatedObject(self, off_1001F6FB8);
    if ( (unsigned int)objc_msgSend(AssociatedObject, "containsObject:", v7) )
    {
      objc_msgSend(
        objc_msgSend(v7, "target"),
        "removeObserver:forKeyPath:context:",
        objc_msgSend(v7, "observer"),
        objc_msgSend(v7, "keyPath"),
        objc_msgSend(v7, "context"));
      objc_msgSend(AssociatedObject, "removeObject:", v7);
    }
  }
}