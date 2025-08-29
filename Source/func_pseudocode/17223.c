-[AMLoaderServiceAction _executeAsynchronouslyWithLoadedActionOnMainThread:]
void __cdecl -[AMLoaderServiceAction _executeAsynchronouslyWithLoadedActionOnMainThread:](
        AMLoaderServiceAction *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  NSAssertionHandler *v6; // x22
  NSAssertionHandler *v7; // x22
  _QWORD block[5]; // [xsp+10h] [xbp-50h] BYREF
  id v9; // [xsp+38h] [xbp-28h]

  v5 = objc_retain(a3);
  if ( !v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v6,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceAction.m"),
      748LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("work != nil"));
    objc_release(v6);
  }
  if ( +[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    v7 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v7,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceAction.m"),
      749LL,
      CFSTR("Should not be on main thread!"));
    objc_release(v7);
    if ( !v5 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( v5 )
  {
LABEL_5:
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_10000DC2C;
    block[3] = &unk_10001C928;
    block[4] = self;
    v9 = objc_retain(v5);
    dispatch_async(&_dispatch_main_q, block);
    objc_release(v9);
  }
LABEL_6:
  objc_release(v5);
}