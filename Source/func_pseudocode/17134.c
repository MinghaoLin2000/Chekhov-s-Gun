-[AMActionLoaderServiceListener listener:shouldAcceptNewConnection:]
bool __cdecl -[AMActionLoaderServiceListener listener:shouldAcceptNewConnection:](
        AMActionLoaderServiceListener *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  id v6; // x21
  AMActionLoaderServiceInstance *v7; // x21
  os_unfair_lock_s *p_xpcServicesLock; // x22
  NSMapTable *v9; // x20

  v5 = objc_retain(a4);
  v6 = objc_retainAutoreleasedReturnValue((id)AMActionLoaderServiceXPCInterface());
  objc_msgSend(v5, "setExportedInterface:", v6);
  objc_release(v6);
  v7 = objc_alloc_init(&OBJC_CLASS___AMActionLoaderServiceInstance);
  objc_msgSend(v5, "setDelegate:", v7);
  objc_msgSend(v5, "setExportedObject:", v7);
  p_xpcServicesLock = &self->__xpcServicesLock;
  os_unfair_lock_lock(&self->__xpcServicesLock);
  v9 = objc_retainAutoreleasedReturnValue(-[AMActionLoaderServiceListener _xpcServicesByConnection](self, "_xpcServicesByConnection"));
  -[NSMapTable setObject:forKey:](v9, "setObject:forKey:", v7, v5);
  objc_release(v9);
  os_unfair_lock_unlock(p_xpcServicesLock);
  objc_msgSend(v5, "resume");
  objc_release(v5);
  objc_release(v7);
  return 1;
}