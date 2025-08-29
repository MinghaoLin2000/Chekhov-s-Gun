-[AMLoaderServiceAction set_executionLock:]
void __cdecl -[AMLoaderServiceAction set_executionLock:](AMLoaderServiceAction *self, SEL a2, os_unfair_lock_s a3)
{
  self->__executionLock = a3;
}