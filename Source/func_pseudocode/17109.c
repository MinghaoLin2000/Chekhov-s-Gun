-[AMActionLoaderServiceInstance init]
AMActionLoaderServiceInstance *__cdecl -[AMActionLoaderServiceInstance init](
        AMActionLoaderServiceInstance *self,
        SEL a2)
{
  AMActionLoaderServiceInstance *v2; // x19
  NSOperationQueue *v3; // x0
  NSOperationQueue *operationQueue; // x8
  AMActivatingWindowHandler *v5; // x0
  AMActivatingWindowHandler *activatingWindowHandler; // x8
  NSMapTable *v7; // x0
  NSMapTable *loaderServiceActionsByUUID; // x8
  objc_super v10; // [xsp+0h] [xbp-20h] BYREF

  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___AMActionLoaderServiceInstance;
  v2 = -[AMActionLoaderServiceInstance init](&v10, "init");
  if ( v2 )
  {
    v3 = (NSOperationQueue *)objc_alloc_init((Class)&OBJC_CLASS___NSOperationQueue);
    operationQueue = v2->__operationQueue;
    v2->__operationQueue = v3;
    objc_release(operationQueue);
    v5 = (AMActivatingWindowHandler *)objc_alloc_init((Class)&OBJC_CLASS___AMActivatingWindowHandler);
    activatingWindowHandler = v2->__activatingWindowHandler;
    v2->__activatingWindowHandler = v5;
    objc_release(activatingWindowHandler);
    -[AMActivatingWindowHandler setDelegate:](v2->__activatingWindowHandler, "setDelegate:", v2);
    v7 = objc_retainAutoreleasedReturnValue(+[NSMapTable strongToWeakObjectsMapTable](&OBJC_CLASS___NSMapTable, "strongToWeakObjectsMapTable"));
    loaderServiceActionsByUUID = v2->__loaderServiceActionsByUUID;
    v2->__loaderServiceActionsByUUID = v7;
    objc_release(loaderServiceActionsByUUID);
  }
  return v2;
}