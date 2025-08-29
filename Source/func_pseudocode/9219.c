-[TSPCryptoReadChannel _readBlocksWithHandler:]
void __cdecl -[TSPCryptoReadChannel _readBlocksWithHandler:](TSPCryptoReadChannel *self, SEL a2, id a3)
{
  id v4; // x19
  TSUStreamReadChannel *readChannel; // x21
  __int64 v6; // x21
  void *v7; // x22
  NSString *v8; // x21
  NSString *v9; // x23
  id v10; // x22
  _QWORD v11[5]; // [xsp+8h] [xbp-88h] BYREF
  id v12; // [xsp+30h] [xbp-60h]
  _QWORD *v13; // [xsp+38h] [xbp-58h]
  _QWORD v14[3]; // [xsp+40h] [xbp-50h] BYREF
  char v15; // [xsp+58h] [xbp-38h]

  v4 = objc_retain(a3);
  readChannel = self->_readChannel;
  if ( !readChannel )
  {
    v6 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D1F90);
    v7 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016A618(v6, v7);
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSPCryptoReadChannel _readBlocksWithHandler:]"));
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/persistence/src/TSPCryptoReadChannel.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v8,
      v9,
      277LL,
      0LL,
      "Read channel is already closed");
    objc_release(v9);
    objc_release(v8);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    readChannel = self->_readChannel;
  }
  v14[0] = 0LL;
  v14[1] = v14;
  v14[2] = 0x2020000000LL;
  v15 = 1;
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_100018508;
  v11[3] = &unk_1001D1FB0;
  v13 = v14;
  v10 = objc_retain(v4);
  v11[4] = self;
  v12 = v10;
  -[TSUStreamReadChannel readWithHandler:](readChannel, "readWithHandler:", v11);
  objc_release(v12);
  _Block_object_dispose(v14, 8);
  objc_release(v10);
}