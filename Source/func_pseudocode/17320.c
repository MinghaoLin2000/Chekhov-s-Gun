-[AMRemoteActionRunner _setState:]
void __cdecl -[AMRemoteActionRunner _setState:](AMRemoteActionRunner *self, SEL a2, unsigned __int64 a3)
{
  os_unfair_lock_assert_owner(&self->__stateLock);
  if ( self->__state != a3 )
    self->__state = a3;
}