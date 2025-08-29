-[AMLoaderServiceAction setServiceViewController:]
void __cdecl -[AMLoaderServiceAction setServiceViewController:](AMLoaderServiceAction *self, SEL a2, id a3)
{
  id v5; // x20
  NSAssertionHandler *v6; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( !+[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v6,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceAction.m"),
      927LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("NSThread.isMainThread"));
    objc_release(v6);
  }
  -[AMLoaderServiceAction _setServiceViewController:](self, "_setServiceViewController:", v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}