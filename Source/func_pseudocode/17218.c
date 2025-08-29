-[AMLoaderServiceAction _setExecution:]
void __cdecl -[AMLoaderServiceAction _setExecution:](AMLoaderServiceAction *self, SEL a2, id a3)
{
  AMRemoteActionExecution *v5; // x20
  AMRemoteActionExecution **p_execution; // x21
  AMRemoteActionExecution *execution; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = (AMRemoteActionExecution *)objc_retain(a3);
  os_unfair_lock_assert_owner(&self->__executionLock);
  execution = self->__execution;
  p_execution = &self->__execution;
  if ( execution != v5 )
    objc_storeStrong((id *)p_execution, a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}