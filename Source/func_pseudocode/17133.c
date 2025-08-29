-[AMActionLoaderServiceListener init]
AMActionLoaderServiceListener *__cdecl -[AMActionLoaderServiceListener init](
        AMActionLoaderServiceListener *self,
        SEL a2)
{
  AMActionLoaderServiceListener *v2; // x19
  NSMapTable *v3; // x0
  NSMapTable *xpcServicesByConnection; // x8
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___AMActionLoaderServiceListener;
  v2 = -[AMActionLoaderServiceListener init](&v6, "init");
  if ( v2 )
  {
    v3 = objc_retainAutoreleasedReturnValue(+[NSMapTable weakToWeakObjectsMapTable](&OBJC_CLASS___NSMapTable, "weakToWeakObjectsMapTable"));
    xpcServicesByConnection = v2->__xpcServicesByConnection;
    v2->__xpcServicesByConnection = v3;
    objc_release(xpcServicesByConnection);
    v2->__xpcServicesLock._os_unfair_lock_opaque = 0;
  }
  return v2;
}