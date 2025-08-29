-[NSString tsu_stringByUniquingPathInsideDirectory:withFormat:]
id __cdecl -[NSString tsu_stringByUniquingPathInsideDirectory:withFormat:](NSString *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  __int64 v8; // x22
  void *v9; // x23
  NSString *v10; // x23
  NSString *v11; // x24
  NSString *v12; // x21
  NSFileManager *v13; // x22
  void *v14; // x23
  unsigned int v15; // w24
  void *v16; // x23
  __CFString *v17; // x0
  __CFString *v18; // x24
  __CFString *v19; // x25
  NSString *v20; // x25
  __int64 v21; // x8
  NSString *v22; // x26
  __int64 v23; // x23
  void *v24; // x26
  unsigned __int8 v25; // w27
  void *context; // [xsp+18h] [xbp-58h]
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  if ( !v6 )
  {
    v8 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DF338);
    v9 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_1001745D4(v8, v9);
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[NSString(TSUAdditions) tsu_stringByUniquingPathInsideDirectory:withFormat:]"));
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/NSString_TSUAdditions.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v10,
      v11,
      217LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "directoryPath");
    objc_release(v11);
    objc_release(v10);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v12 = objc_retain(self);
  v13 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "stringByAppendingPathComponent:", v12));
  v15 = -[NSFileManager fileExistsAtPath:](v13, "fileExistsAtPath:", v14);
  objc_release(v14);
  if ( v15 )
  {
    v16 = objc_autoreleasePoolPush();
    v17 = objc_retainAutoreleasedReturnValue(-[NSString pathExtension](v12, "pathExtension"));
    context = v16;
    if ( v17 )
    {
      v18 = v17;
      if ( -[__CFString length](v17, "length") )
      {
        v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("."), "stringByAppendingString:", v18));
        objc_release(v18);
        v18 = v19;
      }
    }
    else
    {
      v18 = &stru_1001DFAA0;
    }
    v20 = objc_retainAutoreleasedReturnValue(-[NSString stringByDeletingPathExtension](v12, "stringByDeletingPathExtension"));
    v21 = 2LL;
    do
    {
      v22 = v12;
      v23 = (unsigned int)(v21 + 1);
      v12 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v7, v20, v21, v18));
      objc_release(v22);
      v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "stringByAppendingPathComponent:", v12));
      v25 = -[NSFileManager fileExistsAtPath:](v13, "fileExistsAtPath:", v24);
      objc_release(v24);
      v21 = v23;
    }
    while ( (v25 & 1) != 0 );
    objc_release(v20);
    objc_release(v18);
    objc_autoreleasePoolPop(context);
  }
  objc_release(v13);
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}