+[NSProgress tsu_progressWithTSUProgress:totalUnitCount:]
id __cdecl +[NSProgress tsu_progressWithTSUProgress:totalUnitCount:](id a1, SEL a2, id a3, signed __int64 a4)
{
  id v5; // x19
  void *v6; // x20
  double v7; // d0
  double v8; // d8
  double v9; // d0
  signed __int64 v10; // x8
  double v11; // d8
  dispatch_queue_s *v12; // x0
  void *v13; // x23
  __int64 v14; // x24
  void *v15; // x25
  NSString *v16; // x24
  NSString *v17; // x26
  TSUProgressUserInfoObject *v18; // x24
  void **v20; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v21; // [xsp+10h] [xbp-A0h]
  __int64 (__fastcall *v22)(); // [xsp+18h] [xbp-98h]
  void *v23; // [xsp+20h] [xbp-90h]
  id v24; // [xsp+28h] [xbp-88h] BYREF
  id v25[2]; // [xsp+30h] [xbp-80h] BYREF
  id from; // [xsp+40h] [xbp-70h] BYREF
  id location; // [xsp+48h] [xbp-68h] BYREF
  __int64 vars8; // [xsp+B8h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSProgress), "initWithParent:userInfo:", 0LL, 0LL);
  objc_msgSend(v6, "setTotalUnitCount:", a4);
  objc_msgSend(v5, "maxValue");
  v8 = v7;
  if ( ((unsigned int)objc_msgSend(v5, "isIndeterminate") & 1) == 0 && v8 > 0.0 )
  {
    objc_msgSend(v5, "value");
    objc_msgSend(v6, "setCompletedUnitCount:", (__int64)(v9 / v8 * (double)(__int64)objc_msgSend(v6, "totalUnitCount")));
  }
  v10 = 10LL;
  if ( a4 > 10 )
    v10 = a4;
  if ( v8 > 0.0 )
    v11 = v8 / (double)v10;
  else
    v11 = (double)v10;
  objc_initWeak(&location, v5);
  objc_initWeak(&from, v6);
  v12 = objc_retain(&_dispatch_main_q);
  v20 = _NSConcreteStackBlock;
  v21 = 3254779904LL;
  v22 = sub_100126F94;
  v23 = &unk_1001DC7C8;
  objc_copyWeak(&v24, &location);
  objc_copyWeak(v25, &from);
  v25[1] = (id)a4;
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "addProgressObserverWithValueInterval:queue:handler:", &_dispatch_main_q, &v20, v11));
  objc_release(&_dispatch_main_q);
  if ( !v13 )
  {
    v14 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DC7F8);
    v15 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016E7A4(v14, v15);
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "+[NSProgress(NSProgress_TSUAdditions) tsu_progressWithTSUProgress:totalUnitCount:]"));
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/NSProgress_TSUAdditions.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v16,
      v17,
      66LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "progressObserver",
      v20,
      v21,
      v22,
      v23);
    objc_release(v17);
    objc_release(v16);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v18 = objc_alloc_init(&OBJC_CLASS___TSUProgressUserInfoObject);
  -[TSUProgressUserInfoObject setProgress:](v18, "setProgress:", v5);
  -[TSUProgressUserInfoObject setProgressObserver:](v18, "setProgressObserver:", v13);
  objc_msgSend(v6, "setUserInfoObject:forKey:", v18, CFSTR("TSUProgressUserInfoKey"));
  objc_release(v18);
  objc_release(v13);
  objc_destroyWeak(v25);
  objc_destroyWeak(&v24);
  objc_destroyWeak(&from);
  objc_destroyWeak(&location);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}