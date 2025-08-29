-[AMLoaderServiceAction _setServiceViewController:]
void __cdecl -[AMLoaderServiceAction _setServiceViewController:](AMLoaderServiceAction *self, SEL a2, id a3)
{
  id v5; // x19
  AMRemoteActionServiceViewController **p_serviceViewController; // x20
  id WeakRetained; // x21
  NSAssertionHandler *v8; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( !+[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    v8 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v8,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceAction.m"),
      621LL,
      CFSTR("Should be on main thread!"));
    objc_release(v8);
  }
  p_serviceViewController = &self->__serviceViewController;
  WeakRetained = objc_loadWeakRetained((id *)p_serviceViewController);
  objc_release(WeakRetained);
  if ( WeakRetained != v5 )
    objc_storeWeak((id *)p_serviceViewController, v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}