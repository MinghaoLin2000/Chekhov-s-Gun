-[AMActionLoaderServiceListener set_xpcServicesLock:]
void __cdecl -[AMActionLoaderServiceListener set_xpcServicesLock:](
        AMActionLoaderServiceListener *self,
        SEL a2,
        os_unfair_lock_s a3)
{
  self->__xpcServicesLock = a3;
}