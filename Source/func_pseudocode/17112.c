-[AMActionLoaderServiceInstance _resetActivation]
void __cdecl -[AMActionLoaderServiceInstance _resetActivation](AMActionLoaderServiceInstance *self, SEL a2)
{
  AMActivatingWindowHandler *v4; // x19
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
      CFSTR("AMActionLoaderServiceInstance.m"),
      123LL,
      CFSTR("Should be on main thread!"));
    objc_release(v5);
  }
  -[AMActionLoaderServiceInstance set_previouslyActiveApplicationProcessIdentifier:](
    self,
    "set_previouslyActiveApplicationProcessIdentifier:",
    0LL);
  v4 = objc_retainAutoreleasedReturnValue(-[AMActionLoaderServiceInstance _activatingWindowHandler](self, "_activatingWindowHandler"));
  -[AMActivatingWindowHandler reset](v4, "reset");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}