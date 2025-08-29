+[TSUIOUtils readAllFromChannel:completion:]
void __cdecl +[TSUIOUtils readAllFromChannel:completion:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x0
  void *v7; // x20
  __int64 v8; // x21
  void *v9; // x22
  NSString *v10; // x22
  NSString *v11; // x23
  __int64 v12; // x21
  void *v13; // x22
  NSString *v14; // x22
  NSString *v15; // x23
  dispatch_data_s *v16; // x0
  id v17; // x20
  _QWORD v18[4]; // [xsp+10h] [xbp-90h] BYREF
  id v19; // [xsp+30h] [xbp-70h]
  _QWORD *v20; // [xsp+38h] [xbp-68h]
  _QWORD v21[5]; // [xsp+40h] [xbp-60h] BYREF
  id v22; // [xsp+68h] [xbp-38h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = v6;
  if ( v5 )
  {
    if ( v6 )
      goto LABEL_14;
    goto LABEL_9;
  }
  v8 = +[TSUAssertionHandler _atomicIncrementAssertCount](
         &OBJC_CLASS___TSUAssertionHandler,
         "_atomicIncrementAssertCount");
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001DDCC0);
  v9 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_10017135C(v8, v9);
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "+[TSUIOUtils readAllFromChannel:completion:]"));
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/utility/TSUIOUtils.m"));
  +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
    &OBJC_CLASS___TSUAssertionHandler,
    "handleFailureInFunction:file:lineNumber:isFatal:description:",
    v10,
    v11,
    103LL,
    0LL,
    "invalid nil value for '%{public}s'",
    "readChannel");
  objc_release(v11);
  objc_release(v10);
  +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  if ( !v7 )
  {
LABEL_9:
    v12 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DDCE0);
    v13 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_1001712C8(v12, v13);
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "+[TSUIOUtils readAllFromChannel:completion:]"));
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUIOUtils.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v14,
      v15,
      104LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "completion");
    objc_release(v15);
    objc_release(v14);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
LABEL_14:
  v21[0] = 0LL;
  v21[1] = v21;
  v21[2] = 0x3032000000LL;
  v21[3] = sub_10013EE28;
  v21[4] = sub_10013EE38;
  v16 = objc_retain(&_dispatch_data_empty);
  v22 = &_dispatch_data_empty;
  v18[0] = _NSConcreteStackBlock;
  v18[1] = 3254779904LL;
  v18[2] = sub_10013F2F0;
  v18[3] = &unk_1001DDC90;
  v20 = v21;
  v17 = objc_retain(v7);
  v19 = v17;
  objc_msgSend(v5, "readWithHandler:", v18);
  objc_release(v19);
  _Block_object_dispose(v21, 8);
  objc_release(v22);
  objc_release(v17);
  objc_release(v5);
}