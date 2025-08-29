-[AMLoaderServiceAction amAction]
AMAction *__cdecl -[AMLoaderServiceAction amAction](AMLoaderServiceAction *self, SEL a2)
{
  NSAssertionHandler *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( !+[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    v5 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v5,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceAction.m"),
      933LL,
      CFSTR("Should be on main thread!"));
    objc_release(v5);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[AMLoaderServiceAction _amAction](self, "_amAction");
}