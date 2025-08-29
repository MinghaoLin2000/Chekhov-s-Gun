-[AMLoaderServiceAction _serviceViewController]
AMRemoteActionServiceViewController *__cdecl -[AMLoaderServiceAction _serviceViewController](
        AMLoaderServiceAction *self,
        SEL a2)
{
  id WeakRetained; // x0
  NSAssertionHandler *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( !+[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v6,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceAction.m"),
      630LL,
      CFSTR("Should be on main thread!"));
    objc_release(v6);
  }
  WeakRetained = objc_loadWeakRetained((id *)&self->__serviceViewController);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (AMRemoteActionServiceViewController *)objc_autoreleaseReturnValue(WeakRetained);
}