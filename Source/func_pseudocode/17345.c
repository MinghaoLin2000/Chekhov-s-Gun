-[AMRemoteActionRunner set_stateLock:]
void __cdecl -[AMRemoteActionRunner set_stateLock:](AMRemoteActionRunner *self, SEL a2, os_unfair_lock_s a3)
{
  self->__stateLock = a3;
}