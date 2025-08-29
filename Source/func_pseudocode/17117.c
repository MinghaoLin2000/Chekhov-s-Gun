-[AMActionLoaderServiceInstance didRunLoaderServiceAction:]
void __cdecl -[AMActionLoaderServiceInstance didRunLoaderServiceAction:](
        AMActionLoaderServiceInstance *self,
        SEL a2,
        id a3)
{
  NSAssertionHandler *v5; // x21
  _QWORD block[5]; // [xsp+8h] [xbp-48h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  if ( a3 )
  {
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_1000059F0;
    block[3] = &unk_10001C338;
    block[4] = self;
    dispatch_async(&_dispatch_main_q, block);
  }
  else
  {
    v5 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v5,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMActionLoaderServiceInstance.m"),
      201LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("loaderServiceAction"));
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v5);
  }
}