-[AMLoaderServiceVariableController remoteActionVariableRemoved:]
void __cdecl -[AMLoaderServiceVariableController remoteActionVariableRemoved:](
        AMLoaderServiceVariableController *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  NSAssertionHandler *v6; // x22
  _QWORD block[5]; // [xsp+10h] [xbp-50h] BYREF
  id v8; // [xsp+38h] [xbp-28h]

  v5 = objc_retain(a3);
  if ( !v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v6,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceVariableController.m"),
      534LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("variableUUID"));
    objc_release(v6);
  }
  if ( objc_msgSend(v5, "length") )
  {
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_1000091F4;
    block[3] = &unk_10001C5C8;
    block[4] = self;
    v8 = objc_retain(v5);
    dispatch_async(&_dispatch_main_q, block);
    objc_release(v8);
  }
  objc_release(v5);
}