-[AMRemoteActionRunner _state]
unsigned __int64 __cdecl -[AMRemoteActionRunner _state](AMRemoteActionRunner *self, SEL a2)
{
  os_unfair_lock_assert_owner(&self->__stateLock);
  return self->__state;
}