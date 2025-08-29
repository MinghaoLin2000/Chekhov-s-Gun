-[TSUTemporaryDirectory removeDirectory]
void __cdecl -[TSUTemporaryDirectory removeDirectory](TSUTemporaryDirectory *self, SEL a2)
{
  NSString **p_path; // x19
  NSFileManager *v3; // x21
  NSString *v4; // x2
  unsigned __int8 v5; // w22
  id v6; // x0
  void *v7; // x20
  __int64 v8; // x19
  void *v9; // x20
  NSString *v10; // x20
  NSString *v11; // x21
  unsigned __int8 v12; // w22
  os_log_s *v13; // x21
  NSString *v14; // x0
  id v15; // [xsp+8h] [xbp-28h] BYREF

  p_path = &self->_path;
  if ( self->_path )
  {
    v3 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v4 = *p_path;
    v15 = 0LL;
    v5 = -[NSFileManager removeItemAtPath:error:](v3, "removeItemAtPath:error:", v4, &v15);
    v6 = objc_retain(v15);
    v7 = v6;
    if ( (v5 & 1) != 0 )
    {
      objc_release(v3);
    }
    else
    {
      v12 = (unsigned __int8)objc_msgSend(v6, "tsu_isNoSuchFileError");
      objc_release(v3);
      if ( (v12 & 1) == 0 )
      {
        if ( TSUDefaultCat_init_token != -1 )
          dispatch_once(&TSUDefaultCat_init_token, &stru_1001DF088);
        v13 = (os_log_s *)TSUDefaultCat_log_t;
        if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
          sub_1001740DC((int)v7, (int)p_path, v13);
      }
    }
    v14 = *p_path;
    *p_path = 0LL;
    objc_release(v14);
    objc_release(v7);
  }
  else
  {
    v8 = +[TSUAssertionHandler _atomicIncrementAssertCount](
           &OBJC_CLASS___TSUAssertionHandler,
           "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DF0A8);
    v9 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100174048(v8, v9);
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSUTemporaryDirectory removeDirectory]"));
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUTemporaryDirectory.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v10,
      v11,
      90LL,
      0LL,
      "Directory has already been removed");
    objc_release(v11);
    objc_release(v10);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
}