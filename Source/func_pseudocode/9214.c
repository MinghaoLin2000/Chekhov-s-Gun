-[TSPCryptoReadChannel initWithReadChannel:decryptionKey:blockInfos:]
TSPCryptoReadChannel *__cdecl -[TSPCryptoReadChannel initWithReadChannel:decryptionKey:blockInfos:](
        TSPCryptoReadChannel *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v9; // x19
  id v10; // x20
  id v11; // x22
  TSPCryptoReadChannel *v12; // x24
  TSPCryptoReadChannel *v13; // x21
  __int64 v14; // x26
  void *v15; // x27
  NSString *v16; // x26
  NSString *v17; // x28
  __int64 v18; // x25
  void *v19; // x26
  NSString *v20; // x25
  NSString *v21; // x27
  id *p_decryptionKey; // x24
  NSArray *v23; // x0
  NSArray *blockInfos; // x8
  char *v25; // x0
  id v26; // x24
  __int64 v27; // x23
  void *v28; // x24
  NSString *v29; // x24
  NSString *v30; // x25
  objc_super v32; // [xsp+10h] [xbp-60h] BYREF

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v11 = objc_retain(a5);
  v32.receiver = self;
  v32.super_class = (Class)&OBJC_CLASS___TSPCryptoReadChannel;
  v12 = -[TSPCryptoReadChannel init](&v32, "init");
  v13 = v12;
  if ( !v12 )
    goto LABEL_27;
  if ( !v9 )
  {
    v14 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D1D90);
    v15 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016A164(v14, v15);
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPCryptoReadChannel initWithReadChannel:decryptionKey:blockInfos:]"));
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPCryptoReadChannel.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v16,
      v17,
      43LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "readChannel");
    objc_release(v17);
    objc_release(v16);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  objc_storeStrong((id *)&v12->_readChannel, a3);
  if ( !v10 )
  {
    v18 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D1DB0);
    v19 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016A0C8(v18, v19);
    v20 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPCryptoReadChannel initWithReadChannel:decryptionKey:blockInfos:]"));
    v21 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPCryptoReadChannel.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v20,
      v21,
      46LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "decryptionKey");
    objc_release(v21);
    objc_release(v20);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  p_decryptionKey = (id *)&v12->_decryptionKey;
  objc_storeStrong(p_decryptionKey, a4);
  v23 = (NSArray *)objc_msgSend(v11, "copy");
  blockInfos = v13->_blockInfos;
  v13->_blockInfos = v23;
  objc_release(blockInfos);
  if ( !v13->_readChannel || !*p_decryptionKey )
  {
LABEL_24:
    objc_release(v13);
    v13 = 0LL;
    goto LABEL_27;
  }
  v25 = (char *)malloc_type_malloc(0x10uLL, 0xFDD4414DuLL);
  v13->_iv = v25;
  if ( !v25 )
  {
    v27 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D1DD0);
    v28 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016A040(v27, v28);
    v29 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSPCryptoReadChannel initWithReadChannel:decryptionKey:blockInfos:]"));
    v30 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPCryptoReadChannel.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v29,
      v30,
      62LL,
      0LL,
      "Failed to allocate space for IV");
    objc_release(v30);
    objc_release(v29);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    goto LABEL_24;
  }
  if ( -[NSArray count](v13->_blockInfos, "count") )
  {
    v26 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v13->_blockInfos, "objectAtIndexedSubscript:", 0LL));
    v13->_remainingBlockSize = (unsigned __int64)objc_msgSend(v26, "encodedLength");
    objc_release(v26);
  }
  else
  {
    v13->_remainingBlockSize = -1LL;
  }
  v13->_nextBlockIndex = 0LL;
LABEL_27:
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  return v13;
}