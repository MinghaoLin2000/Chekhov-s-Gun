-[AMLoaderServiceVariableController remoteActionVariableAdded:]
void __cdecl -[AMLoaderServiceVariableController remoteActionVariableAdded:](
        AMLoaderServiceVariableController *self,
        SEL a2,
        id a3)
{
  id v5; // x0
  void *v6; // x19
  id v7; // x0
  NSAssertionHandler *v8; // x22
  _QWORD block[5]; // [xsp+10h] [xbp-50h] BYREF
  id v10; // [xsp+38h] [xbp-28h]

  v5 = objc_retain(a3);
  v6 = v5;
  if ( v5 )
  {
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100008F00;
    block[3] = &unk_10001C5C8;
    block[4] = self;
    v10 = objc_retain(v5);
    dispatch_async(&_dispatch_main_q, block);
    v7 = v10;
  }
  else
  {
    v8 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v8,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceVariableController.m"),
      496LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("variable"));
    v7 = v8;
  }
  objc_release(v7);
  objc_release(v6);
}