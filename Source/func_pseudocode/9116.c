-[TSPAVAssetResourceLoaderDelegate _provideNextDataBlockToLoadingRequest:completion:]
void __cdecl -[TSPAVAssetResourceLoaderDelegate _provideNextDataBlockToLoadingRequest:completion:](
        TSPAVAssetResourceLoaderDelegate *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  void (__fastcall **v7)(_QWORD); // x20
  void *v8; // x21
  __int64 v9; // x23
  void *v10; // x24
  NSString *v11; // x23
  NSString *v12; // x25
  _BYTE *v13; // x23
  _BYTE *v14; // x24
  char *v15; // x0
  signed __int64 dataLength; // x8
  char *v17; // x9
  __int64 v18; // x28
  __int64 v19; // x24
  dispatch_data_s *v20; // x0
  TSUReadChannel *readChannel; // x25
  __int64 v22; // x25
  void *v23; // x26
  NSString *v24; // x25
  NSString *v25; // x27
  _QWORD v26[4]; // [xsp+10h] [xbp-D0h] BYREF
  id v27; // [xsp+30h] [xbp-B0h]
  TSPAVAssetResourceLoaderDelegate *v28; // [xsp+38h] [xbp-A8h]
  id v29; // [xsp+40h] [xbp-A0h]
  _QWORD *v30; // [xsp+48h] [xbp-98h]
  __int64 v31; // [xsp+50h] [xbp-90h]
  __int64 v32; // [xsp+58h] [xbp-88h]
  _QWORD v33[5]; // [xsp+60h] [xbp-80h] BYREF
  id v34; // [xsp+88h] [xbp-58h]

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(_QWORD))objc_retain(a4);
  if ( (unsigned int)objc_msgSend(v6, "isCancelled") )
  {
    v7[2](v7);
  }
  else
  {
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "dataRequest"));
    if ( !v8 )
    {
      v9 = +[TSUAssertionHandler _atomicIncrementAssertCount](
             &OBJC_CLASS___TSUAssertionHandler,
             "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D16F8);
      v10 = TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_100169928(v9, v10);
      v11 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSPAVAssetResourceLoaderDelegate _provideNextDataBlockToLoadingRequest:completion:]"));
      v12 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPAVAssetResourceLoaderDelegate.mm"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v11,
        v12,
        142LL,
        0LL,
        "invalid nil value for '%{public}s'",
        "dataRequest");
      objc_release(v12);
      objc_release(v11);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    v13 = objc_msgSend(v8, "currentOffset");
    v14 = objc_msgSend(v8, "requestedLength");
    v15 = (char *)objc_msgSend(v8, "requestedOffset");
    dataLength = self->_dataLength;
    v17 = &v15[v14 - v13];
    if ( dataLength - (__int64)v13 < (__int64)v17 )
      v17 = (char *)(dataLength - (_QWORD)v13);
    if ( dataLength >= (__int64)v13 )
      v18 = (__int64)v17;
    else
      v18 = 0LL;
    if ( v18 >= 0x20000 )
      v19 = 0x20000LL;
    else
      v19 = v18;
    if ( v19 )
    {
      v33[0] = 0LL;
      v33[1] = v33;
      v33[2] = 0x3032000000LL;
      v33[3] = sub_10000D89C;
      v33[4] = sub_10000D8AC;
      v20 = objc_retain(&_dispatch_data_empty);
      v34 = &_dispatch_data_empty;
      readChannel = self->_readChannel;
      if ( !readChannel )
      {
        v22 = +[TSUAssertionHandler _atomicIncrementAssertCount](
                &OBJC_CLASS___TSUAssertionHandler,
                "_atomicIncrementAssertCount");
        if ( TSUAssertCat_init_token != -1 )
          dispatch_once(&TSUAssertCat_init_token, &stru_1001D1718);
        v23 = TSUAssertCat_log_t;
        if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
          sub_100169878(v22, v23);
        v24 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithUTF8String:](
                  &OBJC_CLASS___NSString,
                  "stringWithUTF8String:",
                  "-[TSPAVAssetResourceLoaderDelegate _provideNextDataBlockToLoadingRequest:completion:]"));
        v25 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithUTF8String:](
                  &OBJC_CLASS___NSString,
                  "stringWithUTF8String:",
                  "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/So"
                  "urces/iWorkXPC/shared/persistence/src/TSPAVAssetResourceLoaderDelegate.mm"));
        +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
          &OBJC_CLASS___TSUAssertionHandler,
          "handleFailureInFunction:file:lineNumber:isFatal:description:",
          v24,
          v25,
          162LL,
          0LL,
          "invalid nil value for '%{public}s'",
          "_readChannel");
        objc_release(v25);
        objc_release(v24);
        +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
        readChannel = self->_readChannel;
      }
      v26[0] = _NSConcreteStackBlock;
      v26[1] = 3254779904LL;
      v26[2] = sub_10000D900;
      v26[3] = &unk_1001D1738;
      v30 = v33;
      v27 = objc_retain(v6);
      v28 = self;
      v29 = objc_retain(v7);
      v31 = v18;
      v32 = v19;
      -[TSUReadChannel readFromOffset:length:handler:](readChannel, "readFromOffset:length:handler:", v13, v19, v26);
      objc_release(v29);
      objc_release(v27);
      _Block_object_dispose(v33, 8);
      objc_release(v34);
    }
    else
    {
      objc_msgSend(v6, "finishLoading");
      v7[2](v7);
    }
    objc_release(v8);
  }
  objc_release(v7);
  objc_release(v6);
}