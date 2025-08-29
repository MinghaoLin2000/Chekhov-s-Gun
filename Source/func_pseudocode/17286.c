-[AMParametersObserver check]
void __cdecl -[AMParametersObserver check](AMParametersObserver *self, SEL a2)
{
  os_unfair_lock_s *p_lock; // x19
  NSAssertionHandler *v5; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  p_lock = &self->__lock;
  os_unfair_lock_lock(&self->__lock);
  if ( !+[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    v5 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v5,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMParametersObserver.m"),
      137LL,
      CFSTR("Should be on main thread!"));
    objc_release(v5);
  }
  -[AMParametersObserver _parametersChangeObserved](self, "_parametersChangeObserved");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  os_unfair_lock_unlock(p_lock);
}