-[AMActionLoaderServiceInstance remoteActionServiceSetDisplayName:]
void __cdecl -[AMActionLoaderServiceInstance remoteActionServiceSetDisplayName:](
        AMActionLoaderServiceInstance *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  NSAssertionHandler *v6; // x22
  _QWORD block[4]; // [xsp+8h] [xbp-48h] BYREF
  id v8; // [xsp+28h] [xbp-28h]

  v5 = objc_retain(a3);
  if ( !v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v6,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMActionLoaderServiceInstance.m"),
      140LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("name"));
    objc_release(v6);
  }
  if ( objc_msgSend(v5, "length") )
  {
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100005218;
    block[3] = &unk_10001C338;
    v8 = objc_retain(v5);
    dispatch_async(&_dispatch_main_q, block);
    objc_release(v8);
  }
  objc_release(v5);
}