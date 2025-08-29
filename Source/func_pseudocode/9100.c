-[TSPSnappyReadChannel readWithHandler:]
void __cdecl -[TSPSnappyReadChannel readWithHandler:](TSPSnappyReadChannel *self, SEL a2, id a3)
{
  id v4; // x19
  TSUStreamReadChannel *readChannel; // x21
  __int64 v6; // x21
  void *v7; // x22
  NSString *v8; // x21
  NSString *v9; // x23
  id v10; // x22
  _QWORD v11[5]; // [xsp+0h] [xbp-C0h] BYREF
  id v12; // [xsp+28h] [xbp-98h]
  _QWORD *v13; // [xsp+30h] [xbp-90h]
  _QWORD *v14; // [xsp+38h] [xbp-88h]
  _QWORD v15[3]; // [xsp+40h] [xbp-80h] BYREF
  char v16; // [xsp+58h] [xbp-68h]
  _QWORD v17[5]; // [xsp+60h] [xbp-60h] BYREF
  id v18; // [xsp+88h] [xbp-38h]

  v4 = objc_retain(a3);
  readChannel = self->_readChannel;
  if ( !readChannel )
  {
    v6 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001D1508);
    v7 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100169674(v6, v7);
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "-[TSPSnappyReadChannel readWithHandler:]"));
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithUTF8String:](
             &OBJC_CLASS___NSString,
             "stringWithUTF8String:",
             "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/persistence/src/TSPSnappyReadChannel.mm"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v8,
      v9,
      36LL,
      0LL,
      "Already closed");
    objc_release(v9);
    objc_release(v8);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    readChannel = self->_readChannel;
  }
  v17[0] = 0LL;
  v17[1] = v17;
  v17[2] = 0x3032000000LL;
  v17[3] = sub_10000BBC0;
  v17[4] = sub_10000BBD0;
  v18 = 0LL;
  v15[0] = 0LL;
  v15[1] = v15;
  v15[2] = 0x2020000000LL;
  v16 = 0;
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_10000BBD8;
  v11[3] = &unk_1001D1528;
  v13 = v15;
  v10 = objc_retain(v4);
  v14 = v17;
  v11[4] = self;
  v12 = v10;
  -[TSUStreamReadChannel readWithHandler:](readChannel, "readWithHandler:", v11);
  objc_release(v12);
  _Block_object_dispose(v15, 8);
  _Block_object_dispose(v17, 8);
  objc_release(v18);
  objc_release(v10);
}