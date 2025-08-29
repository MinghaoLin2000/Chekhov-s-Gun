-[TSPMutableCryptoInfoInternal addBlockInfo:]
void __cdecl -[TSPMutableCryptoInfoInternal addBlockInfo:](TSPMutableCryptoInfoInternal *self, SEL a2, id a3)
{
  id v4; // x19
  NSArray *v5; // x21
  __int64 v6; // x20
  void *v7; // x21
  NSString *v8; // x20
  NSString *v9; // x22

  v4 = objc_retain(a3);
  if ( -[TSPCryptoInfoInternal preferredBlockSize](self, "preferredBlockSize") == -1LL )
  {
    v6 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D3668);
    v7 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016CD40(v6, v7);
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSPMutableCryptoInfoInternal addBlockInfo:]"));
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/persistence/src/TSPCryptoInfo.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v8,
      v9,
      97LL,
      0LL,
      "We should not be adding a block info when the preferred block size is SIZE_T_MAX.");
    objc_release(v9);
    objc_release(v8);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  else
  {
    v5 = objc_retainAutoreleasedReturnValue(-[TSPCryptoInfoInternal blockInfos](self, "blockInfos"));
    if ( !v5 )
    {
      v5 = (NSArray *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
      -[TSPCryptoInfoInternal setBlockInfos:](self, "setBlockInfos:", v5);
    }
    -[NSArray addObject:](v5, "addObject:", v4);
    objc_release(v5);
  }
  objc_release(v4);
}