-[AMRemoteActionRunner isIdle]
bool __cdecl -[AMRemoteActionRunner isIdle](AMRemoteActionRunner *self, SEL a2)
{
  AMRemoteActionRunner *v2; // x19
  os_unfair_lock_s *p_stateLock; // x20

  v2 = self;
  p_stateLock = &self->__stateLock;
  os_unfair_lock_lock(&self->__stateLock);
  LOBYTE(v2) = -[AMRemoteActionRunner _state](v2, "_state") == 0;
  os_unfair_lock_unlock(p_stateLock);
  return (char)v2;
}