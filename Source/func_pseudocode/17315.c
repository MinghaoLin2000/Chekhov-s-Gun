-[AMRemoteActionRunner error]
NSError *__cdecl -[AMRemoteActionRunner error](AMRemoteActionRunner *self, SEL a2)
{
  os_unfair_lock_s *p_stateLock; // x20
  NSError *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  p_stateLock = &self->__stateLock;
  os_unfair_lock_lock(&self->__stateLock);
  v4 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _error](self, "_error"));
  os_unfair_lock_unlock(p_stateLock);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}