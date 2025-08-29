-[AMLoaderServiceAction _executeSynchronouslyWithLoadedActionOnMainThread:]
bool __cdecl -[AMLoaderServiceAction _executeSynchronouslyWithLoadedActionOnMainThread:](
        AMLoaderServiceAction *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  dispatch_semaphore_s *v6; // x21
  dispatch_time_t v7; // x0
  intptr_t v8; // x0
  bool v9; // w22
  NSAssertionHandler *v10; // x22
  NSAssertionHandler *v11; // x22
  _QWORD block[5]; // [xsp+8h] [xbp-58h] BYREF
  id v14; // [xsp+30h] [xbp-30h]
  id v15; // [xsp+38h] [xbp-28h]

  v5 = objc_retain(a3);
  if ( !v5 )
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v10,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceAction.m"),
      768LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("work != nil"));
    objc_release(v10);
  }
  if ( !+[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    if ( v5 )
      goto LABEL_5;
LABEL_10:
    v9 = 1;
    goto LABEL_11;
  }
  v11 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
  -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
    v11,
    "handleFailureInMethod:object:file:lineNumber:description:",
    a2,
    self,
    CFSTR("AMLoaderServiceAction.m"),
    769LL,
    CFSTR("Should not be on main thread!"));
  objc_release(v11);
  if ( !v5 )
    goto LABEL_10;
LABEL_5:
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_10000DE9C;
  block[3] = &unk_10001C958;
  block[4] = self;
  v6 = objc_retain(dispatch_semaphore_create(0LL));
  v14 = v6;
  v15 = objc_retain(v5);
  dispatch_sync(&_dispatch_main_q, block);
  v7 = dispatch_time(0LL, 2000000000LL);
  v8 = dispatch_semaphore_wait(v6, v7);
  v9 = v8 == 0;
  if ( v8 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    sub_100012560(self);
  objc_release(v15);
  objc_release(v14);
  objc_release(v6);
LABEL_11:
  objc_release(v5);
  return v9;
}