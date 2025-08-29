-[AMRemoteActionRunner start]
void __cdecl -[AMRemoteActionRunner start](AMRemoteActionRunner *self, SEL a2)
{
  NSAssertionHandler *v4; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( !+[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    v4 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v4,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMRemoteActionRunner.m"),
      73LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("NSThread.isMainThread"));
    objc_release(v4);
  }
  os_unfair_lock_lock(&self->__stateLock);
  -[AMRemoteActionRunner _setState:](self, "_setState:", 1LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  os_unfair_lock_unlock(&self->__stateLock);
}