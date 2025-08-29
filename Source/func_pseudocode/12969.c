+[TSUIOUtils readAllFromChannel:offset:length:completion:]
void __cdecl +[TSUIOUtils readAllFromChannel:offset:length:completion:](
        id a1,
        SEL a2,
        id a3,
        signed __int64 a4,
        unsigned __int64 a5,
        id a6)
{
  id v9; // x19
  id v10; // x0
  void *v11; // x22
  __int64 v12; // x23
  void *v13; // x24
  NSString *v14; // x24
  NSString *v15; // x25
  __int64 v16; // x23
  void *v17; // x24
  NSString *v18; // x24
  NSString *v19; // x25
  dispatch_data_s *v20; // x0
  id v21; // x22
  _QWORD v22[4]; // [xsp+10h] [xbp-A0h] BYREF
  id v23; // [xsp+30h] [xbp-80h]
  _QWORD *v24; // [xsp+38h] [xbp-78h]
  _QWORD v25[5]; // [xsp+40h] [xbp-70h] BYREF
  id v26; // [xsp+68h] [xbp-48h]

  v9 = objc_retain(a3);
  v10 = objc_retain(a6);
  v11 = v10;
  if ( v9 )
  {
    if ( v10 )
      goto LABEL_14;
    goto LABEL_9;
  }
  v12 = +[TSUAssertionHandler _atomicIncrementAssertCount](
          &OBJC_CLASS___TSUAssertionHandler,
          "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001DDC50);
  v13 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_100171234(v12, v13);
  v14 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "+[TSUIOUtils readAllFromChannel:offset:length:completion:]"));
  v15 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/utility/TSUIOUtils.m"));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v14,
    v15,
    78LL,
    0LL,
    "invalid nil value for '%{public}s'",
    "readChannel");
  objc_release(v15);
  objc_release(v14);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  if ( !v11 )
  {
LABEL_9:
    v16 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DDC70);
    v17 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_1001711A0(v16, v17);
    v18 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "+[TSUIOUtils readAllFromChannel:offset:length:completion:]"));
    v19 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUIOUtils.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v18,
      v19,
      79LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "completion");
    objc_release(v19);
    objc_release(v18);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
LABEL_14:
  v25[0] = 0LL;
  v25[1] = v25;
  v25[2] = 0x3032000000LL;
  v25[3] = sub_10013EE28;
  v25[4] = sub_10013EE38;
  v20 = objc_retain(&_dispatch_data_empty);
  v26 = &_dispatch_data_empty;
  v22[0] = _NSConcreteStackBlock;
  v22[1] = 3254779904LL;
  v22[2] = sub_10013EE40;
  v22[3] = &unk_1001DDC90;
  v24 = v25;
  v21 = objc_retain(v11);
  v23 = v21;
  objc_msgSend(v9, "readFromOffset:length:handler:", a4, a5, v22);
  objc_release(v23);
  _Block_object_dispose(v25, 8);
  objc_release(v26);
  objc_release(v21);
  objc_release(v9);
}